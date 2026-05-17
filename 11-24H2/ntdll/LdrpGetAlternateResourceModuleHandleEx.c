/*
 * XREFs of LdrpGetAlternateResourceModuleHandleEx @ 0x180112C50
 * Callers:
 *     LdrpAccessResourceData @ 0x180061D70 (LdrpAccessResourceData.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180010220 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180010280 (RtlReleaseSRWLockShared.c)
 *     RtlImageNtHeaderEx @ 0x1800590F0 (RtlImageNtHeaderEx.c)
 *     LdrpGetMappingFromCacheEntry @ 0x180136D08 (LdrpGetMappingFromCacheEntry.c)
 */

__int64 __fastcall LdrpGetAlternateResourceModuleHandleEx(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  int v7; // ebx
  int i; // ecx
  __int64 v9; // rdx
  int v10; // edi
  __int64 v12; // [rsp+20h] [rbp-28h]
  __int64 v13; // [rsp+28h] [rbp-20h] BYREF
  __int64 v14; // [rsp+30h] [rbp-18h] BYREF
  __int64 v15; // [rsp+38h] [rbp-10h] BYREF

  v14 = 0LL;
  v13 = 0LL;
  RtlAcquireSRWLockShared(&MuiCacheSWRLock);
  *a4 = 0LL;
  v7 = AlternateResourceModuleCount;
  LODWORD(v12) = AlternateResourceModuleCount;
  for ( i = AlternateResourceModuleCount - 1; i >= 0; --i )
  {
    v9 = (__int64)i << 6;
    if ( *(_QWORD *)(v9 + AlternateResourceModules + 8) == a1 )
    {
      if ( v14 )
      {
        v10 = v7;
        HIDWORD(v12) = v7;
        while ( v10 >= 0 )
        {
          if ( *(_QWORD *)(((__int64)v10 << 6) + AlternateResourceModules + 8) == a1
            && (unsigned __int8)LdrpGetMappingFromCacheEntry((unsigned int)v10, a3, &v14, &v13, v12) )
          {
            v7 = v10;
            goto LABEL_13;
          }
          HIDWORD(v12) = --v10;
        }
        v7 = AlternateResourceModuleCount;
        break;
      }
      v14 = *(_QWORD *)(v9 + AlternateResourceModules + 32);
      v13 = *(_QWORD *)(v9 + AlternateResourceModules + 48);
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
    if ( !v13 )
    {
      v15 = 0LL;
      RtlImageNtHeaderEx(1, v14 & 0xFFFFFFFFFFFFFFFCuLL, 0LL, &v15);
      if ( v15 )
      {
        if ( *(_WORD *)(v15 + 24) == 267 || *(_WORD *)(v15 + 24) == 523 )
          v13 = *(unsigned int *)(v15 + 80);
        else
          v13 = 0LL;
      }
    }
    *a4 = v13;
  }
  RtlReleaseSRWLockShared(&MuiCacheSWRLock);
  return v14;
}
