/*
 * XREFs of CcGetPrivateVolumeCacheMap @ 0x1402CD530
 * Callers:
 *     CcWriteBehindPostProcess @ 0x1402A883C (CcWriteBehindPostProcess.c)
 *     CcDecrementOpenCount @ 0x1402ABDBC (CcDecrementOpenCount.c)
 *     CcDeleteSharedCacheMap @ 0x1402CCE98 (CcDeleteSharedCacheMap.c)
 *     CcNotifyOfMappedWrite @ 0x14036BCAC (CcNotifyOfMappedWrite.c)
 *     CcInitializeCacheMapInternal @ 0x14045D6F0 (CcInitializeCacheMapInternal.c)
 *     CcDeleteSectionsForPartition @ 0x14057C948 (CcDeleteSectionsForPartition.c)
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
