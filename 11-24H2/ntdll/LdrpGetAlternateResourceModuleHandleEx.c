/*
 * XREFs of LdrpGetAlternateResourceModuleHandleEx @ 0x18010DF10
 * Callers:
 *     LdrpAccessResourceData @ 0x180077950 (LdrpAccessResourceData.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18003CC20 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18003CC80 (RtlReleaseSRWLockShared.c)
 *     RtlImageNtHeaderEx @ 0x18006ECD0 (RtlImageNtHeaderEx.c)
 *     LdrpGetMappingFromCacheEntry @ 0x180134F38 (LdrpGetMappingFromCacheEntry.c)
 */

__int64 __fastcall LdrpGetAlternateResourceModuleHandleEx(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  int v7; // ebx
  int i; // ecx
  __int64 v9; // rdx
  int v10; // edi
  __int64 v12; // [rsp+20h] [rbp-28h]
  __int64 SizeOfImage; // [rsp+28h] [rbp-20h] BYREF
  __int64 v14; // [rsp+30h] [rbp-18h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+38h] [rbp-10h] BYREF

  v14 = 0LL;
  SizeOfImage = 0LL;
  RtlAcquireSRWLockShared(&MuiCacheSWRLock);
  *a4 = 0LL;
  v7 = AlternateResourceModuleCount;
  LODWORD(v12) = AlternateResourceModuleCount;
  for ( i = AlternateResourceModuleCount - 1; i >= 0; --i )
  {
    v9 = (__int64)i << 6;
    if ( *(_QWORD *)((char *)AlternateResourceModules + v9 + 8) == a1 )
    {
      if ( v14 )
      {
        v10 = v7;
        HIDWORD(v12) = v7;
        while ( v10 >= 0 )
        {
          if ( *((_QWORD *)AlternateResourceModules + 8 * (__int64)v10 + 1) == a1
            && (unsigned __int8)LdrpGetMappingFromCacheEntry((unsigned int)v10, a3, &v14, &SizeOfImage, v12) )
          {
            v7 = v10;
            goto LABEL_13;
          }
          HIDWORD(v12) = --v10;
        }
        v7 = AlternateResourceModuleCount;
        break;
      }
      v14 = *(_QWORD *)((char *)AlternateResourceModules + v9 + 32);
      SizeOfImage = *(_QWORD *)((char *)AlternateResourceModules + v9 + 48);
      v7 = i;
      LODWORD(v12) = i;
    }
  }
LABEL_13:
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
        if ( OutHeaders->OptionalHeader.Magic == 267 || OutHeaders->OptionalHeader.Magic == 523 )
          SizeOfImage = OutHeaders->OptionalHeader.SizeOfImage;
        else
          SizeOfImage = 0LL;
      }
    }
    *a4 = SizeOfImage;
  }
  RtlReleaseSRWLockShared(&MuiCacheSWRLock);
  return v14;
}
