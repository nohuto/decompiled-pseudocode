/*
 * XREFs of CcGetPrivateVolumeCacheMap @ 0x1403A5480
 * Callers:
 *     CcDeleteSharedCacheMap @ 0x1403A4DE4 (CcDeleteSharedCacheMap.c)
 *     CcWriteBehindPostProcess @ 0x1403ACE8C (CcWriteBehindPostProcess.c)
 *     CcNotifyOfMappedWrite @ 0x14040ECD8 (CcNotifyOfMappedWrite.c)
 *     CcInitializeCacheMapInternal @ 0x14045E3B0 (CcInitializeCacheMapInternal.c)
 *     CcDeleteSectionsForPartition @ 0x140579638 (CcDeleteSectionsForPartition.c)
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
