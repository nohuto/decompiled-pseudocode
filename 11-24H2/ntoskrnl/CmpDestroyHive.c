/*
 * XREFs of CmpDestroyHive @ 0x14097C14C
 * Callers:
 *     CmpLoadKeyCommon @ 0x140464478 (CmpLoadKeyCommon.c)
 *     CmRestoreKey @ 0x1407CCF24 (CmRestoreKey.c)
 *     CmSaveKey @ 0x1407CDBFC (CmSaveKey.c)
 *     CmSaveMergedKeys @ 0x1407CE060 (CmSaveMergedKeys.c)
 *     CmpLoadHiveVolatile @ 0x1407CE610 (CmpLoadHiveVolatile.c)
 *     CmpRefreshHive @ 0x1407CEAF0 (CmpRefreshHive.c)
 *     CmpFreeAllMemory @ 0x1407D51F0 (CmpFreeAllMemory.c)
 *     CmReplaceKey @ 0x1407DA2E8 (CmReplaceKey.c)
 *     CmpFlushBackupHive @ 0x1407DC2B8 (CmpFlushBackupHive.c)
 *     CmpCreateEmptyHiveClone @ 0x1407DE510 (CmpCreateEmptyHiveClone.c)
 *     CmpHiveCacheEntryCleanup @ 0x1407E54D8 (CmpHiveCacheEntryCleanup.c)
 *     CmpHiveCachePopulateHiveEntryThread @ 0x1407E5970 (CmpHiveCachePopulateHiveEntryThread.c)
 *     CmLoadKey @ 0x14092B788 (CmLoadKey.c)
 *     CmpCreateHive @ 0x14092F538 (CmpCreateHive.c)
 *     CmpReorganizeHive @ 0x1409310B0 (CmpReorganizeHive.c)
 * Callees:
 *     CmpUnJoinClassOfTrust @ 0x140497B6C (CmpUnJoinClassOfTrust.c)
 *     CmpDereferenceHive @ 0x1408443C0 (CmpDereferenceHive.c)
 *     HvHiveCleanup @ 0x14087EC98 (HvHiveCleanup.c)
 *     CmpVolumeContextDecrementRefCount @ 0x14097C7A0 (CmpVolumeContextDecrementRefCount.c)
 *     CmpDestroySecurityCache @ 0x14097CE70 (CmpDestroySecurityCache.c)
 *     CmpCmdHiveClose @ 0x14097CFB0 (CmpCmdHiveClose.c)
 *     CmpVERemoveHiveFromSIDMappingTable @ 0x14097EC8C (CmpVERemoveHiveFromSIDMappingTable.c)
 */

__int64 __fastcall CmpDestroyHive(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  struct _PRIVILEGE_SET *v5; // rcx

  CmpDestroySecurityCache();
  CmpUnJoinClassOfTrust(a1);
  CmpVERemoveHiveFromSIDMappingTable(a1);
  HvHiveCleanup(a1, v2, v3, v4);
  CmpCmdHiveClose(a1);
  v5 = *(struct _PRIVILEGE_SET **)(a1 + 4792);
  if ( v5 )
    CmpVolumeContextDecrementRefCount(v5);
  return CmpDereferenceHive((volatile signed __int32 *)a1);
}
