/*
 * XREFs of CmpRemoveHiveFromNamespace @ 0x14048BF4C
 * Callers:
 *     CmpLinkHiveToMaster @ 0x14092E380 (CmpLinkHiveToMaster.c)
 *     CmpCompleteUnloadKey @ 0x140965368 (CmpCompleteUnloadKey.c)
 * Callees:
 *     CmpLogHiveDestroyEvent @ 0x1407D677C (CmpLogHiveDestroyEvent.c)
 *     CmpUnlockHashEntryByKcb @ 0x140840720 (CmpUnlockHashEntryByKcb.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x14086D654 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpLockHashEntryExclusiveByKcb @ 0x14086E850 (CmpLockHashEntryExclusiveByKcb.c)
 *     HvUnlockHiveFlusherShared @ 0x14086E934 (HvUnlockHiveFlusherShared.c)
 *     CmpLockKcbExclusive @ 0x1408747A0 (CmpLockKcbExclusive.c)
 *     CmpMarkKeyUnbacked @ 0x14087F7A8 (CmpMarkKeyUnbacked.c)
 *     HvLockHiveFlusherShared @ 0x140881BD8 (HvLockHiveFlusherShared.c)
 *     CmpFreeKeyByCell @ 0x1408842D0 (CmpFreeKeyByCell.c)
 *     CmpDiscardKcb @ 0x140965058 (CmpDiscardKcb.c)
 *     CmpRemoveLayerLinkForDiscardedKcb @ 0x140965A58 (CmpRemoveLayerLinkForDiscardedKcb.c)
 *     CmpUnlockKcb @ 0x140BBB2C0 (CmpUnlockKcb.c)
 */

__int64 __fastcall CmpRemoveHiveFromNamespace(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG_PTR v3; // rdi
  ULONG_PTR v6; // rsi

  v3 = *(_QWORD *)(a2 + 72);
  v6 = *(_QWORD *)(v3 + 72);
  CmpLockHashEntryExclusiveByKcb(v3);
  CmpLockKcbExclusive(v6);
  CmpLockKcbExclusive(v3);
  HvLockHiveFlusherShared(*(_QWORD *)(v3 + 32));
  CmpFreeKeyByCell(*(_QWORD *)(v3 + 32), *(unsigned int *)(v3 + 40));
  CmpFlushNotifiesOnKeyBodyList(v3, 1LL, a3);
  CmpMarkKeyUnbacked(v3, a3);
  CmpDiscardKcb(v3);
  CmpRemoveLayerLinkForDiscardedKcb(v3, a3);
  if ( (DWORD2(PerfGlobalGroupMask) & 0x1000000) != 0 )
    CmpLogHiveDestroyEvent(a1);
  HvUnlockHiveFlusherShared(*(_QWORD *)(v3 + 32));
  CmpUnlockKcb(v3);
  CmpUnlockKcb(v6);
  return CmpUnlockHashEntryByKcb(v3);
}
