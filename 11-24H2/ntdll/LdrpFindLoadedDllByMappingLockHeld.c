/*
 * XREFs of LdrpFindLoadedDllByMappingLockHeld @ 0x180073ED0
 * Callers:
 *     LdrpFindLoadedDllByMapping @ 0x180003ABC (LdrpFindLoadedDllByMapping.c)
 *     LdrpMapDllWithSectionHandle @ 0x180072B70 (LdrpMapDllWithSectionHandle.c)
 *     LdrGetDllHandleByMapping @ 0x1800EF240 (LdrGetDllHandleByMapping.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x1800590F0 (RtlImageNtHeaderEx.c)
 *     ZwAreMappedFilesTheSame @ 0x180162E80 (ZwAreMappedFilesTheSame.c)
 *     memcmp @ 0x1801676D0 (memcmp.c)
 */

__int64 __fastcall LdrpFindLoadedDllByMappingLockHeld(
        __int64 a1,
        const void *a2,
        unsigned int *a3,
        volatile signed __int32 **a4)
{
  unsigned int v4; // esi
  unsigned __int64 v5; // rax
  _QWORD *j; // rdi
  unsigned int v11; // edx
  unsigned __int64 v12; // rcx
  unsigned int v14; // ecx
  volatile signed __int32 *v15; // rbx
  _QWORD **v16; // rcx
  _QWORD *v17; // rax
  __int64 v18; // rax
  _QWORD *i; // rcx
  unsigned int v20; // eax
  void *Buf2; // [rsp+20h] [rbp-28h] BYREF

  v4 = 0;
  v5 = LdrpMappingInfoIndex;
  Buf2 = 0LL;
  if ( (qword_1801D2470 & 1) == 0 )
    goto LABEL_2;
  if ( LdrpMappingInfoIndex )
  {
    v5 = (unsigned __int64)&LdrpMappingInfoIndex ^ LdrpMappingInfoIndex;
LABEL_2:
    j = 0LL;
    if ( !v5 )
      goto LABEL_10;
    v11 = *a3;
    while ( 1 )
    {
      if ( v11 >= *(_DWORD *)(v5 - 96) )
      {
        if ( v11 > *(_DWORD *)(v5 - 96) )
          goto LABEL_6;
        v14 = a3[1];
        if ( v14 >= *(_DWORD *)(v5 - 160) )
          break;
      }
      v12 = *(_QWORD *)v5;
      if ( (qword_1801D2470 & 1) != 0 && v12 )
      {
        v5 ^= v12;
        goto LABEL_9;
      }
LABEL_8:
      v5 = v12;
LABEL_9:
      if ( !v5 )
        goto LABEL_10;
    }
    if ( v14 > *(_DWORD *)(v5 - 160) )
    {
LABEL_6:
      v12 = *(_QWORD *)(v5 + 8);
    }
    else
    {
      v12 = *(_QWORD *)v5;
      j = (_QWORD *)v5;
    }
    if ( (qword_1801D2470 & 1) != 0 && v12 )
    {
      v5 ^= v12;
      goto LABEL_9;
    }
    goto LABEL_8;
  }
  j = 0LL;
LABEL_10:
  while ( j )
  {
    v15 = (volatile signed __int32 *)(j - 28);
    if ( (int)RtlImageNtHeaderEx(3, *(j - 22), 0LL, &Buf2) >= 0
      && !memcmp(a2, Buf2, 0x30uLL)
      && (int)ZwAreMappedFilesTheSame(*((_QWORD *)v15 + 6), a1) >= 0 )
    {
      v18 = *((_QWORD *)v15 + 19);
      if ( *(_DWORD *)(v18 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v18 - 56LL) & 0x20) == 0 )
        _InterlockedIncrement(v15 + 69);
      *a4 = v15;
      break;
    }
    v16 = (_QWORD **)j[1];
    v17 = j;
    if ( v16 )
    {
      j = (_QWORD *)j[1];
      for ( i = *v16; i; i = (_QWORD *)*i )
        j = i;
    }
    else
    {
      for ( j = (_QWORD *)(j[2] & 0xFFFFFFFFFFFFFFFCuLL); j; j = (_QWORD *)(j[2] & 0xFFFFFFFFFFFFFFFCuLL) )
      {
        if ( (_QWORD *)*j == v17 )
          break;
        v17 = j;
      }
    }
    if ( !j )
      break;
    if ( *a3 >= *((_DWORD *)j - 24) && *a3 <= *((_DWORD *)j - 24) )
    {
      v20 = a3[1];
      if ( v20 >= *((_DWORD *)j - 40) && v20 <= *((_DWORD *)j - 40) )
        continue;
    }
    j = 0LL;
  }
  if ( !j )
    return (unsigned int)-1073741515;
  return v4;
}
