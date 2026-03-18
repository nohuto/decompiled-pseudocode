/*
 * XREFs of CmpDestroyHive @ 0x1409F4BE0
 * Callers:
 *     CmpLoadKeyCommon @ 0x140465264 (CmpLoadKeyCommon.c)
 *     CmRestoreKey @ 0x1407BD70C (CmRestoreKey.c)
 *     CmSaveKey @ 0x1407BE3E4 (CmSaveKey.c)
 *     CmSaveMergedKeys @ 0x1407BE848 (CmSaveMergedKeys.c)
 *     CmpLoadHiveVolatile @ 0x1407BEDF8 (CmpLoadHiveVolatile.c)
 *     CmpRefreshHive @ 0x1407BF2D8 (CmpRefreshHive.c)
 *     CmpFreeAllMemory @ 0x1407C5AA4 (CmpFreeAllMemory.c)
 *     CmReplaceKey @ 0x1407CAB24 (CmReplaceKey.c)
 *     CmpFlushBackupHive @ 0x1407CCAF8 (CmpFlushBackupHive.c)
 *     CmpCreateEmptyHiveClone @ 0x1407CEC28 (CmpCreateEmptyHiveClone.c)
 *     CmpHiveCacheEntryCleanup @ 0x1407D5668 (CmpHiveCacheEntryCleanup.c)
 *     CmpHiveCachePopulateHiveEntryThread @ 0x1407D5AF0 (CmpHiveCachePopulateHiveEntryThread.c)
 *     CmpCreateHive @ 0x14090EE00 (CmpCreateHive.c)
 *     CmLoadKey @ 0x140910E98 (CmLoadKey.c)
 *     CmpReorganizeHive @ 0x140A4B428 (CmpReorganizeHive.c)
 * Callees:
 *     CmpUnJoinClassOfTrust @ 0x140498D80 (CmpUnJoinClassOfTrust.c)
 *     CmpDereferenceHive @ 0x1408484B4 (CmpDereferenceHive.c)
 *     HvHiveCleanup @ 0x14087E098 (HvHiveCleanup.c)
 *     CmpDestroySecurityCache @ 0x140885554 (CmpDestroySecurityCache.c)
 *     CmpCmdHiveClose @ 0x140885694 (CmpCmdHiveClose.c)
 *     CmpVERemoveHiveFromSIDMappingTable @ 0x1409F4C34 (CmpVERemoveHiveFromSIDMappingTable.c)
 *     CmpVolumeContextDecrementRefCount @ 0x1409F4CEC (CmpVolumeContextDecrementRefCount.c)
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
