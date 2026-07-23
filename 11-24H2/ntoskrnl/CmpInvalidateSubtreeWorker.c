/*
 * XREFs of CmpInvalidateSubtreeWorker @ 0x140963A80
 * Callers:
 *     <none>
 * Callees:
 *     CmpFlushNotifiesOnKeyBodyList @ 0x14086D654 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpMarkKeyUnbacked @ 0x14087F7A8 (CmpMarkKeyUnbacked.c)
 *     CmpCleanUpSubKeyInfo @ 0x140880020 (CmpCleanUpSubKeyInfo.c)
 *     CmpDiscardKcb @ 0x140965058 (CmpDiscardKcb.c)
 *     CmpRemoveLayerLinkForDiscardedKcb @ 0x140965A58 (CmpRemoveLayerLinkForDiscardedKcb.c)
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
