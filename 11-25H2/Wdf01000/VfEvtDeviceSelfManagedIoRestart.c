/*
 * XREFs of VfEvtDeviceSelfManagedIoRestart @ 0x1400E2D00
 * Callers:
 *     <none>
 * Callees:
 *     VerifyCriticalRegionEntry @ 0x14008FC40 (VerifyCriticalRegionEntry.c)
 *     VerifyCriticalRegionExit @ 0x14008FC74 (VerifyCriticalRegionExit.c)
 *     VerifyIrqlExit @ 0x14008FCDC (VerifyIrqlExit.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 *     VfWdfObjectGetTypedContext @ 0x1400E22D0 (VfWdfObjectGetTypedContext.c)
 */

__int64 __fastcall VfEvtDeviceSelfManagedIoRestart(WDFDEVICE__ *Device)
{
  unsigned int v2; // edi
  char *TypedContext; // rsi
  __int64 (__fastcall *v4)(WDFDEVICE__ *); // rbp
  KIRQL CurrentIrql; // bl
  unsigned __int8 critRegion; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  TypedContext = VfWdfObjectGetTypedContext((unsigned __int64)Device, &WDF_VF_WDFDEVICECREATE_CONTEXT_TYPE_INFO);
  v4 = (__int64 (__fastcall *)(WDFDEVICE__ *))*((_QWORD *)TypedContext + 12);
  if ( v4 )
  {
    critRegion = 0;
    CurrentIrql = KeGetCurrentIrql();
    VerifyCriticalRegionEntry(&critRegion);
    v2 = v4(Device);
    VerifyIrqlExit(*(_WDF_DRIVER_GLOBALS **)TypedContext, CurrentIrql);
    VerifyCriticalRegionExit(*(_WDF_DRIVER_GLOBALS **)TypedContext, critRegion, (ULONG_PTR)v4);
  }
  return v2;
}
