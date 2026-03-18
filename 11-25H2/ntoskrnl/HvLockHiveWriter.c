/*
 * XREFs of HvLockHiveWriter @ 0x140880B44
 * Callers:
 *     CmpLoadHiveThread @ 0x1407BB850 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x1407BC620 (CmpMountPreloadedHives.c)
 *     CmpRefreshHive @ 0x1407BF2D8 (CmpRefreshHive.c)
 *     CmFreezeRegistry @ 0x1407C8C7C (CmFreezeRegistry.c)
 *     CmThawRegistry @ 0x1407C8E40 (CmThawRegistry.c)
 *     CmpRecoverFlushProtocolStateFromFiles @ 0x1407CEE08 (CmpRecoverFlushProtocolStateFromFiles.c)
 *     HvIsRangeDirty @ 0x1407D3D6C (HvIsRangeDirty.c)
 *     CmpTransMgrSyncHive @ 0x140865CE8 (CmpTransMgrSyncHive.c)
 *     CmpTransMgrPrepare @ 0x14086632C (CmpTransMgrPrepare.c)
 *     HvFreeCell @ 0x14087FCBC (HvFreeCell.c)
 *     HvpDoAllocateCell @ 0x140880110 (HvpDoAllocateCell.c)
 *     HvAllocateCell @ 0x1408803CC (HvAllocateCell.c)
 *     HvMarkCellDirty @ 0x140880A08 (HvMarkCellDirty.c)
 *     CmpFlushHive @ 0x140883A5C (CmpFlushHive.c)
 *     CmpCreateHive @ 0x14090EE00 (CmpCreateHive.c)
 *     HvFoldBackDirtyData @ 0x140A2F230 (HvFoldBackDirtyData.c)
 *     CmpTrimHive @ 0x140A3D624 (CmpTrimHive.c)
 *     CmpDoLocalizeNextHive @ 0x140A402A0 (CmpDoLocalizeNextHive.c)
 *     CmpReorganizeHive @ 0x140A4B428 (CmpReorganizeHive.c)
 *     CmpMarkEntireIndexDirty @ 0x140A85950 (CmpMarkEntireIndexDirty.c)
 *     CmpCreateHiveRootCell @ 0x140AA21DC (CmpCreateHiveRootCell.c)
 *     CmpInitCmRM @ 0x140AD3ED8 (CmpInitCmRM.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 */

__int64 *__fastcall HvLockHiveWriter(__int64 a1)
{
  unsigned __int64 *v1; // rdi
  __int64 *result; // rax
  __int64 *v3; // rbx

  v1 = (unsigned __int64 *)(a1 + 80);
  result = KeAbPreAcquire(a1 + 80, 0LL);
  v3 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v1, 0LL) )
    result = (__int64 *)ExfAcquirePushLockExclusiveEx(v1, result, (__int64)v1);
  if ( v3 )
    *((_BYTE *)v3 + 10) = 1;
  return result;
}
