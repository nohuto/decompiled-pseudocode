/*
 * XREFs of CmpDestroyHive @ 0x14096495C
 * Callers:
 *     CmpLoadKeyCommon @ 0x14045ABA8 (CmpLoadKeyCommon.c)
 *     CmRestoreKey @ 0x1407CD414 (CmRestoreKey.c)
 *     CmSaveKey @ 0x1407CE0EC (CmSaveKey.c)
 *     CmSaveMergedKeys @ 0x1407CE550 (CmSaveMergedKeys.c)
 *     CmpLoadHiveVolatile @ 0x1407CEB00 (CmpLoadHiveVolatile.c)
 *     CmpRefreshHive @ 0x1407CEFE0 (CmpRefreshHive.c)
 *     CmpFreeAllMemory @ 0x1407D56E0 (CmpFreeAllMemory.c)
 *     CmReplaceKey @ 0x1407DA838 (CmReplaceKey.c)
 *     CmpFlushBackupHive @ 0x1407DC808 (CmpFlushBackupHive.c)
 *     CmpCreateEmptyHiveClone @ 0x1407DEA60 (CmpCreateEmptyHiveClone.c)
 *     CmpHiveCacheEntryCleanup @ 0x1407E5AA8 (CmpHiveCacheEntryCleanup.c)
 *     CmpHiveCachePopulateHiveEntryThread @ 0x1407E5F40 (CmpHiveCachePopulateHiveEntryThread.c)
 *     CmLoadKey @ 0x14092D8C8 (CmLoadKey.c)
 *     CmpCreateHive @ 0x140931678 (CmpCreateHive.c)
 *     CmpReorganizeHive @ 0x1409331F0 (CmpReorganizeHive.c)
 * Callees:
 *     CmpUnJoinClassOfTrust @ 0x14049267C (CmpUnJoinClassOfTrust.c)
 *     CmpDereferenceHive @ 0x140840680 (CmpDereferenceHive.c)
 *     HvHiveCleanup @ 0x140882B48 (HvHiveCleanup.c)
 *     CmpVolumeContextDecrementRefCount @ 0x140964FB0 (CmpVolumeContextDecrementRefCount.c)
 *     CmpDestroySecurityCache @ 0x140965680 (CmpDestroySecurityCache.c)
 *     CmpCmdHiveClose @ 0x1409657C0 (CmpCmdHiveClose.c)
 *     CmpVERemoveHiveFromSIDMappingTable @ 0x14096749C (CmpVERemoveHiveFromSIDMappingTable.c)
 */

__int64 __fastcall CmpDestroyHive(__int64 a1)
{
  struct _PRIVILEGE_SET *v2; // rcx

  CmpDestroySecurityCache(a1);
  CmpUnJoinClassOfTrust(a1);
  CmpVERemoveHiveFromSIDMappingTable(a1);
  HvHiveCleanup(a1);
  CmpCmdHiveClose(a1);
  v2 = *(struct _PRIVILEGE_SET **)(a1 + 4792);
  if ( v2 )
    CmpVolumeContextDecrementRefCount(v2);
  return CmpDereferenceHive((volatile signed __int32 *)a1);
}
