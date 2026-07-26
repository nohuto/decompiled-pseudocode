/*
 * XREFs of DestroyAggregateSession @ 0x140159A48
 * Callers:
 *     CreateTlgAggregateSession @ 0x1401598F0 (CreateTlgAggregateSession.c)
 *     TlgRegisterAggregateProviderEx @ 0x14015A0A8 (TlgRegisterAggregateProviderEx.c)
 * Callees:
 *     CancelTimerCallbacksAndDeleteTimer @ 0x1401597BC (CancelTimerCallbacksAndDeleteTimer.c)
 */

void __fastcall DestroyAggregateSession(_QWORD *P, __int64 a2, __int64 a3)
{
  void *v4; // rcx

  if ( P )
  {
    CancelTimerCallbacksAndDeleteTimer((__int64)P, a2, a3);
    v4 = (void *)P[33];
    if ( v4 )
      ExFreePoolWithTag(v4, 0);
    ExFreePoolWithTag(P, 0);
  }
}
