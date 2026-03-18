/*
 * XREFs of DestroyAggregateSession @ 0x1408149C8
 * Callers:
 *     CreateTlgAggregateSession @ 0x14081488C (CreateTlgAggregateSession.c)
 *     TlgRegisterAggregateProviderEx @ 0x140ABE9A4 (TlgRegisterAggregateProviderEx.c)
 * Callees:
 *     CancelTimerCallbacksAndDeleteTimer @ 0x140814764 (CancelTimerCallbacksAndDeleteTimer.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall DestroyAggregateSession(_QWORD *P)
{
  void *v2; // rcx

  if ( P )
  {
    CancelTimerCallbacksAndDeleteTimer((__int64)P);
    v2 = (void *)P[33];
    if ( v2 )
      ExFreePoolWithTag(v2, 0);
    ExFreePoolWithTag(P, 0);
  }
}
