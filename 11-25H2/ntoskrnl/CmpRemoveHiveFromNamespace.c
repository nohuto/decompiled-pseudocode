/*
 * XREFs of CmpRemoveHiveFromNamespace @ 0x140492108
 * Callers:
 *     CmpCompleteUnloadKey @ 0x14088523C (CmpCompleteUnloadKey.c)
 *     CmpLinkHiveToMaster @ 0x140911D30 (CmpLinkHiveToMaster.c)
 * Callees:
 *     CmpLogHiveDestroyEvent @ 0x1407C6AA8 (CmpLogHiveDestroyEvent.c)
 *     CmpUnlockHashEntryByKcb @ 0x140848730 (CmpUnlockHashEntryByKcb.c)
 *     HvUnlockHiveFlusherShared @ 0x14086CDC0 (HvUnlockHiveFlusherShared.c)
 *     CmpLockHashEntryExclusiveByKcb @ 0x14086DE10 (CmpLockHashEntryExclusiveByKcb.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x14086DF70 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpLockKcbExclusive @ 0x140874380 (CmpLockKcbExclusive.c)
 *     HvLockHiveFlusherShared @ 0x14087DA14 (HvLockHiveFlusherShared.c)
 *     CmpMarkKeyUnbacked @ 0x140885038 (CmpMarkKeyUnbacked.c)
 *     CmpRemoveLayerLinkForDiscardedKcb @ 0x1408850B8 (CmpRemoveLayerLinkForDiscardedKcb.c)
 *     CmpFreeKeyByCell @ 0x140886C64 (CmpFreeKeyByCell.c)
 *     CmpDiscardKcb @ 0x1409DAB50 (CmpDiscardKcb.c)
 *     CmpUnlockKcb @ 0x140BA92B0 (CmpUnlockKcb.c)
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
