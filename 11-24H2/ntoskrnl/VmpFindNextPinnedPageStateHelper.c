/*
 * XREFs of VmpFindNextPinnedPageStateHelper @ 0x140648D94
 * Callers:
 *     VmpSplitMemoryRange @ 0x140399CE8 (VmpSplitMemoryRange.c)
 *     VmpConvertPortionVpnRangeToGpnRange @ 0x14039ECB4 (VmpConvertPortionVpnRangeToGpnRange.c)
 *     VmpRemoveMemoryRange @ 0x140479B50 (VmpRemoveMemoryRange.c)
 *     VmpInvalidateSlatBatched @ 0x140479E38 (VmpInvalidateSlatBatched.c)
 *     VmpCheckPinAndReference @ 0x1406489FC (VmpCheckPinAndReference.c)
 *     VmpCheckUnpinAndDereference @ 0x140648AF0 (VmpCheckUnpinAndDereference.c)
 *     VmpUnpinMemoryRangeHelper @ 0x140649920 (VmpUnpinMemoryRangeHelper.c)
 *     VmpUpdateCommitStateMemoryRange @ 0x140649B80 (VmpUpdateCommitStateMemoryRange.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VmpFindNextPinnedPageStateHelper(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, int a4)
{
  unsigned __int64 i; // rdx
  __int64 v9; // rcx
  int v10; // r8d
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  _QWORD *v14; // r9
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // r11
  __int64 v18; // rcx
  unsigned __int64 v19; // rbx
  int v20; // r9d
  unsigned int v21; // r9d
  unsigned __int8 v22; // r8
  bool v23; // zf
  _QWORD **v24; // rax
  unsigned __int64 v25; // rcx
  _QWORD *v26; // rcx

  i = *(_QWORD *)(a1 + 56);
  if ( i && a2 >= *(_QWORD *)(i + 24) && a2 <= *(_QWORD *)(i + 32) )
    goto LABEL_33;
  v9 = a1 + 40;
  i = *(_QWORD *)v9;
  if ( (*(_BYTE *)(v9 + 8) & 1) != 0 && i )
    i ^= v9;
  v10 = *(_BYTE *)(v9 + 8) & 1;
  v11 = 0LL;
  while ( 1 )
  {
    if ( !i )
    {
      i = v11;
      if ( !v11 )
      {
        if ( a4 )
          return -1LL;
        return a2;
      }
      goto LABEL_33;
    }
    if ( a2 < *(_QWORD *)(i + 24) )
    {
      v12 = *(_QWORD *)i;
      v11 = i;
      goto LABEL_13;
    }
    if ( a2 <= *(_QWORD *)(i + 32) )
      break;
    v12 = *(_QWORD *)(i + 8);
LABEL_13:
    if ( v10 && v12 )
      i ^= v12;
    else
      i = v12;
  }
  v13 = *(_QWORD *)i;
  if ( v10 && v13 )
    v13 ^= i;
  v14 = 0LL;
  if ( v13 )
  {
    while ( 1 )
    {
      if ( a2 >= *(_QWORD *)(v13 + 24) )
      {
        if ( a2 > *(_QWORD *)(v13 + 32) )
        {
          v15 = *(_QWORD *)(v13 + 8);
          goto LABEL_26;
        }
        v14 = (_QWORD *)v13;
      }
      v15 = *(_QWORD *)v13;
LABEL_26:
      if ( v10 && v15 )
        v13 ^= v15;
      else
        v13 = v15;
      if ( !v13 )
      {
        if ( v14 )
          i = (unsigned __int64)v14;
        break;
      }
    }
  }
LABEL_33:
  v16 = a2;
  while ( 1 )
  {
    if ( !i )
    {
      if ( !a4 )
        return v16;
      return -1LL;
    }
    v17 = *(_QWORD *)(i + 24);
    if ( v17 > v16 )
    {
      if ( !a4 )
        return v16;
      if ( v17 > a3 )
        return -1LL;
    }
    if ( a2 <= v17 )
      v18 = 0LL;
    else
      v18 = (unsigned int)(a2 - *(_DWORD *)(i + 24));
    v19 = *(_QWORD *)(i + 32);
    v20 = a3;
    if ( a3 >= v19 )
      v20 = *(_QWORD *)(i + 32);
    v21 = v20 - *(_DWORD *)(i + 24);
    if ( (unsigned int)v18 <= v21 )
      break;
LABEL_61:
    if ( a3 <= v19 )
      return -1LL;
    v24 = *(_QWORD ***)(i + 8);
    v16 = v19 + 1;
    v25 = i;
    if ( v24 )
    {
      v26 = *v24;
      for ( i = *(_QWORD *)(i + 8); v26; v26 = (_QWORD *)*v26 )
        i = (unsigned __int64)v26;
    }
    else
    {
      while ( 1 )
      {
        i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !i || *(_QWORD *)i == v25 )
          break;
        v25 = i;
      }
    }
  }
  do
  {
    v22 = *(_BYTE *)(v18 + i + 40);
    if ( a4 )
    {
      if ( !v22 )
        goto LABEL_59;
      switch ( a4 )
      {
        case 1:
          goto LABEL_60;
        case 2:
          v23 = v22 == 1;
          break;
        case 3:
          if ( v22 > 1u )
            goto LABEL_60;
          goto LABEL_59;
        default:
          v23 = v22 == 0xFF;
          break;
      }
    }
    else
    {
      v23 = v22 == 0;
    }
    if ( v23 )
      break;
LABEL_59:
    v18 = (unsigned int)(v18 + 1);
  }
  while ( (unsigned int)v18 <= v21 );
LABEL_60:
  if ( (unsigned int)v18 > v21 )
    goto LABEL_61;
  a2 = v17 + (unsigned int)v18;
  *(_QWORD *)(a1 + 56) = i;
  return a2;
}
