/*
 * XREFs of VfEvtIoCanceledOnQueue @ 0x1400E3010
 * Callers:
 *     <none>
 * Callees:
 *     VerifyCriticalRegionEntry @ 0x14008FCA0 (VerifyCriticalRegionEntry.c)
 *     VerifyCriticalRegionExit @ 0x14008FCD4 (VerifyCriticalRegionExit.c)
 *     VerifyIrqlExit @ 0x14008FD3C (VerifyIrqlExit.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 *     VfWdfObjectGetTypedContext @ 0x1400E22D0 (VfWdfObjectGetTypedContext.c)
 */

void __fastcall VfEvtIoCanceledOnQueue(WDFQUEUE__ *Queue, WDFREQUEST__ *Request)
{
  char *TypedContext; // rdi
  void (__fastcall *v5)(WDFQUEUE__ *, WDFREQUEST__ *); // rsi
  KIRQL CurrentIrql; // bl
  unsigned __int8 critRegion; // [rsp+50h] [rbp+18h] BYREF

  TypedContext = VfWdfObjectGetTypedContext((unsigned __int64)Queue, &WDF_VF_WDFIOQUEUECREATE_CONTEXT_TYPE_INFO);
  v5 = (void (__fastcall *)(WDFQUEUE__ *, WDFREQUEST__ *))*((_QWORD *)TypedContext + 10);
  if ( v5 )
  {
    critRegion = 0;
    CurrentIrql = KeGetCurrentIrql();
    VerifyCriticalRegionEntry(&critRegion);
    v5(Queue, Request);
    VerifyIrqlExit(*(_WDF_DRIVER_GLOBALS **)TypedContext, CurrentIrql);
    VerifyCriticalRegionExit(*(_WDF_DRIVER_GLOBALS **)TypedContext, critRegion, (ULONG_PTR)v5);
  }
}
