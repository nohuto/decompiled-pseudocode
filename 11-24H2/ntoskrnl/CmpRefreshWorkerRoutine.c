/*
 * XREFs of CmpRefreshWorkerRoutine @ 0x1407CF470
 * Callers:
 *     <none>
 * Callees:
 *     CmpFlushNotifiesOnKeyBodyList @ 0x14086D654 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpMarkKeyUnbacked @ 0x14087F7A8 (CmpMarkKeyUnbacked.c)
 *     CmpDiscardKcb @ 0x140965058 (CmpDiscardKcb.c)
 */

__int64 __fastcall CmpRefreshWorkerRoutine(ULONG_PTR a1, __int64 a2, __int64 a3)
{
  if ( *(_QWORD *)(a1 + 32) != a2 || (*(_DWORD *)(a1 + 184) & 0x40000) != 0 )
    return 0LL;
  CmpFlushNotifiesOnKeyBodyList(a1, 8LL, a3);
  CmpMarkKeyUnbacked(a1, a3);
  CmpDiscardKcb(a1);
  return 2LL;
}
