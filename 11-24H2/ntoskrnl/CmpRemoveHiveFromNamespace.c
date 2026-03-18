/*
 * XREFs of CmpRemoveHiveFromNamespace @ 0x140491454
 * Callers:
 *     CmpLinkHiveToMaster @ 0x14092C240 (CmpLinkHiveToMaster.c)
 *     CmpCompleteUnloadKey @ 0x14097CB58 (CmpCompleteUnloadKey.c)
 * Callees:
 *     CmpLogHiveDestroyEvent @ 0x1407D6208 (CmpLogHiveDestroyEvent.c)
 *     CmpUnlockHashEntryByKcb @ 0x140844460 (CmpUnlockHashEntryByKcb.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x140869324 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpLockHashEntryExclusiveByKcb @ 0x14086A520 (CmpLockHashEntryExclusiveByKcb.c)
 *     HvUnlockHiveFlusherShared @ 0x14086A604 (HvUnlockHiveFlusherShared.c)
 *     CmpLockKcbExclusive @ 0x140870470 (CmpLockKcbExclusive.c)
 *     CmpMarkKeyUnbacked @ 0x14087B8F8 (CmpMarkKeyUnbacked.c)
 *     HvLockHiveFlusherShared @ 0x14087DD28 (HvLockHiveFlusherShared.c)
 *     CmpFreeKeyByCell @ 0x140880420 (CmpFreeKeyByCell.c)
 *     CmpDiscardKcb @ 0x14097C848 (CmpDiscardKcb.c)
 *     CmpRemoveLayerLinkForDiscardedKcb @ 0x14097D248 (CmpRemoveLayerLinkForDiscardedKcb.c)
 *     CmpUnlockKcb @ 0x140BB92C0 (CmpUnlockKcb.c)
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
