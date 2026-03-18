/*
 * XREFs of HvUnlockHiveFlusherShared @ 0x14086A604
 * Callers:
 *     CmpRemoveHiveFromNamespace @ 0x140491454 (CmpRemoveHiveFromNamespace.c)
 *     CmpCreateTombstone @ 0x140668414 (CmpCreateTombstone.c)
 *     CmpLoadHiveThread @ 0x1407CB060 (CmpLoadHiveThread.c)
 *     CmRestoreKey @ 0x1407CCF24 (CmRestoreKey.c)
 *     CmpRefreshHive @ 0x1407CEAF0 (CmpRefreshHive.c)
 *     CmpAssignKeySecurity @ 0x1407DC9C0 (CmpAssignKeySecurity.c)
 *     CmpRecoverFlushProtocolStateFromFiles @ 0x1407DE6E0 (CmpRecoverFlushProtocolStateFromFiles.c)
 *     CmDeleteKey @ 0x140869BFC (CmDeleteKey.c)
 *     CmSetValueKey @ 0x14086B130 (CmSetValueKey.c)
 *     CmQueryMultipleValueKey @ 0x14086C850 (CmQueryMultipleValueKey.c)
 *     CmDeleteValueKey @ 0x14086D078 (CmDeleteValueKey.c)
 *     CmpDoParseKey @ 0x14086E7B0 (CmpDoParseKey.c)
 *     CmpVEExecuteOpenLogic @ 0x1408745A0 (CmpVEExecuteOpenLogic.c)
 *     CmpCreateChild @ 0x14091788C (CmpCreateChild.c)
 *     CmpCreateHive @ 0x14092F538 (CmpCreateHive.c)
 *     CmpReorganizeHive @ 0x1409310B0 (CmpReorganizeHive.c)
 *     CmSetLastWriteTimeKey @ 0x14097A430 (CmSetLastWriteTimeKey.c)
 *     CmSetKeyFlags @ 0x14097AE70 (CmSetKeyFlags.c)
 *     CmpDoLocalizeNextHive @ 0x140984290 (CmpDoLocalizeNextHive.c)
 *     CmpPromoteKey @ 0x1409880D8 (CmpPromoteKey.c)
 *     CmpSetKeySecurity @ 0x14099FAEC (CmpSetKeySecurity.c)
 *     CmpUndoDeleteKeyForTrans @ 0x140A2E074 (CmpUndoDeleteKeyForTrans.c)
 *     CmpTrimHive @ 0x140A422BC (CmpTrimHive.c)
 *     CmpUpdateHiveRootCellFlags @ 0x140A530D4 (CmpUpdateHiveRootCellFlags.c)
 *     CmpCreateHiveRootCell @ 0x140AA6F78 (CmpCreateHiveRootCell.c)
 *     CmpInitCmRM @ 0x140AE4D94 (CmpInitCmRM.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 */

__int64 __fastcall HvUnlockHiveFlusherShared(__int64 a1)
{
  signed __int64 *v1; // rbx

  v1 = (signed __int64 *)(a1 + 72);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 72), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v1);
  return KeAbPostRelease((ULONG_PTR)v1);
}
