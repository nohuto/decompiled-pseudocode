/*
 * XREFs of DestroyAggregateSession @ 0x14014ED78
 * Callers:
 *     CreateTlgAggregateSession @ 0x14014EC20 (CreateTlgAggregateSession.c)
 *     TlgRegisterAggregateProviderEx @ 0x14014F3D8 (TlgRegisterAggregateProviderEx.c)
 * Callees:
 *     CancelTimerCallbacksAndDeleteTimer @ 0x14014EAEC (CancelTimerCallbacksAndDeleteTimer.c)
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
