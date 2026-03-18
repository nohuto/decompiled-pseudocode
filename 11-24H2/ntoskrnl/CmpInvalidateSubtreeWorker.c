/*
 * XREFs of CmpInvalidateSubtreeWorker @ 0x14097B270
 * Callers:
 *     <none>
 * Callees:
 *     CmpFlushNotifiesOnKeyBodyList @ 0x140869324 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpMarkKeyUnbacked @ 0x14087B8F8 (CmpMarkKeyUnbacked.c)
 *     CmpCleanUpSubKeyInfo @ 0x14087C170 (CmpCleanUpSubKeyInfo.c)
 *     CmpDiscardKcb @ 0x14097C848 (CmpDiscardKcb.c)
 *     CmpRemoveLayerLinkForDiscardedKcb @ 0x14097D248 (CmpRemoveLayerLinkForDiscardedKcb.c)
 */

__int64 __fastcall CmpInvalidateSubtreeWorker(ULONG_PTR a1, __int64 a2)
{
  __int64 v3; // rsi

  v3 = *(_QWORD *)(a2 + 16);
  if ( (*(_DWORD *)(a1 + 8) & 0x20000) == 0 )
  {
    CmpFlushNotifiesOnKeyBodyList(a1, *(_DWORD *)a2, v3, 1);
    CmpCleanUpSubKeyInfo(*(_QWORD *)(a1 + 72), 0);
    CmpMarkKeyUnbacked(a1, v3);
    CmpDiscardKcb(a1);
  }
  if ( (*(_DWORD *)(a2 + 8) & 1) != 0 )
    CmpRemoveLayerLinkForDiscardedKcb(a1, v3);
  ++*(_DWORD *)(a2 + 4);
  return 0LL;
}
