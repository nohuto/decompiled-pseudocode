/*
 * XREFs of CmpInvalidateSubtreeWorker @ 0x1409DAAD0
 * Callers:
 *     <none>
 * Callees:
 *     CmpFlushNotifiesOnKeyBodyList @ 0x14086DF70 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpMarkKeyUnbacked @ 0x140885038 (CmpMarkKeyUnbacked.c)
 *     CmpRemoveLayerLinkForDiscardedKcb @ 0x1408850B8 (CmpRemoveLayerLinkForDiscardedKcb.c)
 *     CmpCleanUpSubKeyInfo @ 0x1408860F8 (CmpCleanUpSubKeyInfo.c)
 *     CmpDiscardKcb @ 0x1409DAB50 (CmpDiscardKcb.c)
 */

__int64 __fastcall CmpInvalidateSubtreeWorker(ULONG_PTR a1, unsigned int *a2)
{
  __int64 v3; // rsi

  v3 = *((_QWORD *)a2 + 2);
  if ( (*(_DWORD *)(a1 + 8) & 0x20000) == 0 )
  {
    CmpFlushNotifiesOnKeyBodyList(a1, *a2, v3, 1);
    CmpCleanUpSubKeyInfo(*(_QWORD *)(a1 + 72), 0);
    CmpMarkKeyUnbacked(a1, v3);
    CmpDiscardKcb(a1);
  }
  if ( (a2[2] & 1) != 0 )
    CmpRemoveLayerLinkForDiscardedKcb(a1, v3);
  ++a2[1];
  return 0LL;
}
