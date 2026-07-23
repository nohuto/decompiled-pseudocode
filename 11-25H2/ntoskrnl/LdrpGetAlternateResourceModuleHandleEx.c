/*
 * XREFs of LdrpGetAlternateResourceModuleHandleEx @ 0x1402F40C0
 * Callers:
 *     LdrpAccessResourceData @ 0x1409AEEAC (LdrpAccessResourceData.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     KeReleaseMutant @ 0x1402F0930 (KeReleaseMutant.c)
 *     KeReleaseMutantEx @ 0x1402F09B0 (KeReleaseMutantEx.c)
 *     LdrpInitMuiCrits @ 0x1402F28A8 (LdrpInitMuiCrits.c)
 *     LdrpGetMappingFromCacheEntry @ 0x1402F4268 (LdrpGetMappingFromCacheEntry.c)
 *     RtlImageNtHeaderEx @ 0x140420FB0 (RtlImageNtHeaderEx.c)
 */

__int64 __fastcall LdrpGetAlternateResourceModuleHandleEx(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  int v7; // ebx
  int i; // ecx
  __int64 v9; // rdx
  int j; // edi
  unsigned __int16 Magic; // cx
  __int64 SizeOfImage; // [rsp+38h] [rbp-30h] BYREF
  __int64 v14; // [rsp+40h] [rbp-28h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+48h] [rbp-20h] BYREF
  int v16; // [rsp+78h] [rbp+10h] BYREF

  v14 = 0LL;
  SizeOfImage = 0LL;
  LdrpInitMuiCrits();
  KeWaitForSingleObject(&MuiMutex, Executive, 0, 0, 0LL);
  *a4 = 0LL;
  v7 = AlternateResourceModuleCount;
  for ( i = AlternateResourceModuleCount - 1; i >= 0; --i )
  {
    v9 = (__int64)i << 6;
    if ( *(_QWORD *)((char *)AlternateResourceModules + v9 + 8) == a1 )
    {
      if ( v14 )
      {
        for ( j = v7; j >= 0; --j )
        {
          if ( *((_QWORD *)AlternateResourceModules + 8 * (__int64)j + 1) == a1
            && (unsigned __int8)LdrpGetMappingFromCacheEntry((unsigned int)j, a3, &v14, &SizeOfImage) )
          {
            v7 = j;
            goto LABEL_12;
          }
        }
        v7 = AlternateResourceModuleCount;
        break;
      }
      v14 = *(_QWORD *)((char *)AlternateResourceModules + v9 + 32);
      SizeOfImage = *(_QWORD *)((char *)AlternateResourceModules + v9 + 48);
      v7 = i;
    }
  }
LABEL_12:
  if ( v7 == AlternateResourceModuleCount )
  {
    v14 = 0LL;
  }
  else
  {
    if ( !SizeOfImage )
    {
      OutHeaders = 0LL;
      RtlImageNtHeaderEx(1u, (PVOID)(v14 & 0xFFFFFFFFFFFFFFFCuLL), 0LL, &OutHeaders);
      if ( OutHeaders )
      {
        Magic = OutHeaders->OptionalHeader.Magic;
        if ( Magic == 267 || Magic == 523 )
          SizeOfImage = OutHeaders->OptionalHeader.SizeOfImage;
        else
          SizeOfImage = 0LL;
      }
    }
    *a4 = SizeOfImage;
  }
  KeReleaseMutantEx((ULONG_PTR)&MuiMutex, 1u, 4, &v16);
  return v14;
}
