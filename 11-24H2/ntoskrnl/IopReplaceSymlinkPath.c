/*
 * XREFs of IopReplaceSymlinkPath @ 0x1409C707C
 * Callers:
 *     IopSymlinkApplyToOpenedName @ 0x1409C6EF4 (IopSymlinkApplyToOpenedName.c)
 * Callees:
 *     _wcsnicmp @ 0x1404FBDB0 (_wcsnicmp.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     FsRtlRemoveDotsFromPath @ 0x1409C72C0 (FsRtlRemoveDotsFromPath.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall IopReplaceSymlinkPath(
        const wchar_t *a1,
        unsigned int a2,
        __int64 a3,
        unsigned __int16 *a4,
        unsigned int NewLength,
        __int16 a6,
        __int16 a7)
{
  __int64 v7; // rbx
  size_t v8; // r13
  unsigned int v11; // esi
  WCHAR *v12; // r15
  wchar_t *v13; // rdi
  __int16 v14; // r14
  __int64 v15; // rdx
  NTSTATUS result; // eax
  wchar_t *v17; // rcx
  wchar_t *v18; // rcx
  const void *v19; // rdx
  WCHAR *v20; // rdi
  __int16 v21; // ax
  unsigned __int16 v22; // r9
  unsigned __int16 v23; // dx
  __int16 v24; // r15
  __int16 v25; // cx
  _WORD *v26; // rdx
  __int64 v27; // r11
  wchar_t v28; // r14
  __int64 v29; // rcx
  _WORD *Src; // [rsp+60h] [rbp+8h]
  unsigned __int16 v31; // [rsp+68h] [rbp+10h]

  v7 = NewLength;
  v8 = a4[3];
  LOWORD(NewLength) = 0;
  LOWORD(v11) = 0;
  v12 = (WCHAR *)&a1[v7];
  v13 = (wchar_t *)&a1[a2];
  v31 = a4[5];
  if ( a2 < (unsigned int)v7 )
    return -1073741192;
  Src = (unsigned __int16 *)((char *)a4 + a4[4] + 20);
  if ( *Src != 92 )
  {
    v18 = (wchar_t *)&a1[a2];
    v19 = *(const void **)(a3 + 96);
    LOWORD(NewLength) = *(_WORD *)(a3 + 88) - v8;
    v11 = (unsigned __int16)NewLength;
    memmove(v18, v19, (unsigned __int16)NewLength);
    v20 = &v13[(unsigned __int64)v11 >> 1];
    if ( v20 == v12 )
      goto LABEL_17;
    v21 = v11;
    do
    {
      if ( *v20 == 92 )
        break;
      v21 -= 2;
      *v20-- = 0;
      LOWORD(NewLength) = v21;
      LOWORD(v11) = v21;
    }
    while ( v20 != v12 );
    if ( v20 >= v12 )
    {
LABEL_17:
      v13 = v20 + 1;
      goto LABEL_4;
    }
    return -1073741192;
  }
  if ( !wcsnicmp(a1, L"\\Device\\Mup", 0xBuLL) )
  {
    v22 = *(_WORD *)(a3 + 88);
    v23 = 0;
    v24 = **(_WORD **)(a3 + 96);
    v25 = (v24 != 59) + 3;
    if ( (v22 & 0xFFFE) != 0 )
    {
      do
      {
        v27 = *(_QWORD *)(a3 + 96);
        v28 = *(_WORD *)(v27 + 2LL * v23);
        if ( v28 == 92 )
        {
          --v25;
          if ( v24 == 59 || v25 != 2 )
          {
            if ( !v25 )
              goto LABEL_37;
          }
          else if ( (unsigned __int16)(v23 + 1) < (unsigned __int16)(v22 >> 1) && *(_WORD *)(v27 + 2LL * v23 + 2) != 59 )
          {
            goto LABEL_37;
          }
        }
        *v13 = v28;
        ++v23;
        v22 = *(_WORD *)(a3 + 88);
        ++v13;
      }
      while ( v23 < (unsigned __int16)(v22 >> 1) );
    }
    if ( !v25 )
    {
      do
      {
LABEL_37:
        if ( v23 >= (unsigned __int16)(*(_WORD *)(a3 + 88) >> 1) )
          break;
        v29 = v23++;
        *v13++ = *(_WORD *)(*(_QWORD *)(a3 + 96) + 2 * v29);
      }
      while ( *(_WORD *)(*(_QWORD *)(a3 + 96) + 2LL * v23) != 92 );
      v14 = 2 * v23 + a6;
      v12 = (WCHAR *)&a1[(unsigned int)v7 + v23];
      goto LABEL_5;
    }
    return -1073741192;
  }
LABEL_4:
  v14 = a6;
LABEL_5:
  if ( v31 )
  {
    memmove(v13, Src, v31);
    LOWORD(v11) = v31 + v11;
    LOWORD(NewLength) = v11;
    v13 += (unsigned __int64)v31 >> 1;
  }
  if ( (_WORD)v8 )
  {
    v26 = (_WORD *)(*(_QWORD *)(a3 + 96) + *(unsigned __int16 *)(a3 + 88) - v8);
    if ( *(v13 - 1) == 92 && *v26 == 92 )
    {
      *v13-- = 0;
      LOWORD(v11) = v11 - 2;
    }
    memmove(v13, v26, v8);
    LOWORD(NewLength) = v8 + v11;
    v13 += v8 >> 1;
  }
  *v13 = 0;
  v15 = -1LL;
  do
    ++v15;
  while ( v12[v15] );
  result = FsRtlRemoveDotsFromPath(v12, 2 * v15, (USHORT *)&NewLength);
  if ( result >= 0 )
  {
    v17 = *(wchar_t **)(a3 + 96);
    *(_WORD *)(a3 + 88) = v14 + NewLength;
    *(_WORD *)(a3 + 90) = a7;
    if ( a1 != v17 )
    {
      if ( v17 )
        ExFreePoolWithTag(v17, 0);
      *(_QWORD *)(a3 + 96) = a1;
    }
    return 0;
  }
  return result;
}
