/*
 * XREFs of LdrpFindLoadedDllByMappingLockHeld @ 0x1800907B0
 * Callers:
 *     LdrpMapDllWithSectionHandle @ 0x18008F450 (LdrpMapDllWithSectionHandle.c)
 *     LdrpFindLoadedDllByMapping @ 0x1800C77DC (LdrpFindLoadedDllByMapping.c)
 *     LdrGetDllHandleByMapping @ 0x1800EA420 (LdrGetDllHandleByMapping.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x18006ECD0 (RtlImageNtHeaderEx.c)
 *     ZwAreMappedFilesTheSame @ 0x180161240 (ZwAreMappedFilesTheSame.c)
 *     memcmp @ 0x180165A90 (memcmp.c)
 */

__int64 __fastcall LdrpFindLoadedDllByMappingLockHeld(
        PVOID File2MappedAsFile,
        void *Buf1,
        unsigned int *a3,
        volatile signed __int32 **a4)
{
  unsigned int v4; // esi
  unsigned __int64 Root; // rax
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
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+20h] [rbp-28h] BYREF

  v4 = 0;
  Root = (unsigned __int64)LdrpMappingInfoIndex.Root;
  OutHeaders = 0LL;
  if ( (*(_BYTE *)&LdrpMappingInfoIndex.0 & 1) == 0 )
    goto LABEL_2;
  if ( LdrpMappingInfoIndex.Root )
  {
    Root = (unsigned __int64)&LdrpMappingInfoIndex ^ (unsigned __int64)LdrpMappingInfoIndex.Root;
LABEL_2:
    j = 0LL;
    if ( !Root )
      goto LABEL_10;
    v11 = *a3;
    while ( 1 )
    {
      if ( v11 >= *(_DWORD *)(Root - 96) )
      {
        if ( v11 > *(_DWORD *)(Root - 96) )
          goto LABEL_6;
        v14 = a3[1];
        if ( v14 >= *(_DWORD *)(Root - 160) )
          break;
      }
      v12 = *(_QWORD *)Root;
      if ( (*(_BYTE *)&LdrpMappingInfoIndex.0 & 1) != 0 && v12 )
      {
        Root ^= v12;
        goto LABEL_9;
      }
LABEL_8:
      Root = v12;
LABEL_9:
      if ( !Root )
        goto LABEL_10;
    }
    if ( v14 > *(_DWORD *)(Root - 160) )
    {
LABEL_6:
      v12 = *(_QWORD *)(Root + 8);
    }
    else
    {
      v12 = *(_QWORD *)Root;
      j = (_QWORD *)Root;
    }
    if ( (*(_BYTE *)&LdrpMappingInfoIndex.0 & 1) != 0 && v12 )
    {
      Root ^= v12;
      goto LABEL_9;
    }
    goto LABEL_8;
  }
  j = 0LL;
LABEL_10:
  while ( j )
  {
    v15 = (volatile signed __int32 *)(j - 28);
    if ( RtlImageNtHeaderEx(3u, (PVOID)*(j - 22), 0LL, &OutHeaders) >= 0
      && !memcmp(Buf1, OutHeaders, 0x30uLL)
      && ZwAreMappedFilesTheSame(*((PVOID *)v15 + 6), File2MappedAsFile) >= 0 )
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
