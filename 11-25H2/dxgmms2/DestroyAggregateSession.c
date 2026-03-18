/*
 * XREFs of DestroyAggregateSession @ 0x1400A6AB8
 * Callers:
 *     TlgRegisterAggregateProviderEx @ 0x140091854 (TlgRegisterAggregateProviderEx.c)
 *     CreateTlgAggregateSession @ 0x140091970 (CreateTlgAggregateSession.c)
 *     TlgUnregisterAggregateProvider @ 0x1400A6BBC (TlgUnregisterAggregateProvider.c)
 * Callees:
 *     CancelTimerCallbacksAndDeleteTimer @ 0x1400A6984 (CancelTimerCallbacksAndDeleteTimer.c)
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
