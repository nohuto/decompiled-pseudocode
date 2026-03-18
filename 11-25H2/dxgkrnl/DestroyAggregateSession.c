/*
 * XREFs of DestroyAggregateSession @ 0x140282358
 * Callers:
 *     CreateTlgAggregateSession @ 0x140282200 (CreateTlgAggregateSession.c)
 *     TlgRegisterAggregateProviderEx @ 0x140282598 (TlgRegisterAggregateProviderEx.c)
 *     TlgUnregisterAggregateProvider @ 0x1402826EC (TlgUnregisterAggregateProvider.c)
 * Callees:
 *     CancelTimerCallbacksAndDeleteTimer @ 0x140282170 (CancelTimerCallbacksAndDeleteTimer.c)
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
