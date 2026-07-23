/*
 * XREFs of CcGetPrivateVolumeCacheMap @ 0x1402E6230
 * Callers:
 *     CcDecrementOpenCount @ 0x140279504 (CcDecrementOpenCount.c)
 *     CcWriteBehindPostProcess @ 0x14027A62C (CcWriteBehindPostProcess.c)
 *     CcDeleteSharedCacheMap @ 0x1402E5B98 (CcDeleteSharedCacheMap.c)
 *     CcNotifyOfMappedWrite @ 0x1402EDA4C (CcNotifyOfMappedWrite.c)
 *     CcInitializeCacheMapInternal @ 0x1404527B0 (CcInitializeCacheMapInternal.c)
 *     CcDeleteSectionsForPartition @ 0x140579DD8 (CcDeleteSectionsForPartition.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CcGetPrivateVolumeCacheMap(__int64 a1)
{
  if ( CcEnablePerVolumeLazyWriter )
    return *(_QWORD *)(a1 + 600);
  else
    return 0LL;
}
