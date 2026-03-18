/*
 * XREFs of HvLockHiveWriter @ 0x140882A38
 * Callers:
 *     CmpLoadHiveThread @ 0x1407CB060 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x1407CBE38 (CmpMountPreloadedHives.c)
 *     CmpRefreshHive @ 0x1407CEAF0 (CmpRefreshHive.c)
 *     CmFreezeRegistry @ 0x1407D841C (CmFreezeRegistry.c)
 *     CmThawRegistry @ 0x1407D85E0 (CmThawRegistry.c)
 *     CmpRecoverFlushProtocolStateFromFiles @ 0x1407DE6E0 (CmpRecoverFlushProtocolStateFromFiles.c)
 *     HvIsRangeDirty @ 0x1407E364C (HvIsRangeDirty.c)
 *     HvFreeCell @ 0x140881C04 (HvFreeCell.c)
 *     HvpDoAllocateCell @ 0x140882054 (HvpDoAllocateCell.c)
 *     HvAllocateCell @ 0x1408822D8 (HvAllocateCell.c)
 *     HvMarkCellDirty @ 0x1408828FC (HvMarkCellDirty.c)
 *     CmpCreateHive @ 0x14092F538 (CmpCreateHive.c)
 *     CmpReorganizeHive @ 0x1409310B0 (CmpReorganizeHive.c)
 *     HvFoldBackDirtyData @ 0x14097AA78 (HvFoldBackDirtyData.c)
 *     CmpFlushHive @ 0x14097D2B4 (CmpFlushHive.c)
 *     CmpDoLocalizeNextHive @ 0x140984290 (CmpDoLocalizeNextHive.c)
 *     CmpTransMgrPrepare @ 0x140A04E88 (CmpTransMgrPrepare.c)
 *     CmpTransMgrSyncHive @ 0x140A06BAC (CmpTransMgrSyncHive.c)
 *     CmpTrimHive @ 0x140A422BC (CmpTrimHive.c)
 *     CmpMarkEntireIndexDirty @ 0x140A8A2D0 (CmpMarkEntireIndexDirty.c)
 *     CmpCreateHiveRootCell @ 0x140AA6F78 (CmpCreateHiveRootCell.c)
 *     CmpInitCmRM @ 0x140AE4D94 (CmpInitCmRM.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 */

__int64 __fastcall HvLockHiveWriter(__int64 a1)
{
  unsigned __int64 *v1; // rdi
  __int64 result; // rax
  __int64 v3; // rbx

  v1 = (unsigned __int64 *)(a1 + 80);
  result = (__int64)KeAbPreAcquire(a1 + 80, 0LL);
  v3 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v1, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(v1, result, (__int64)v1);
  if ( v3 )
    *(_BYTE *)(v3 + 10) = 1;
  return result;
}
