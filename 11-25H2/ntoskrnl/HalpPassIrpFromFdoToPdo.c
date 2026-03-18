/*
 * XREFs of HalpPassIrpFromFdoToPdo @ 0x1404D811C
 * Callers:
 *     HalpDispatchWmi @ 0x1406F2DC0 (HalpDispatchWmi.c)
 *     HalpDispatchPnp @ 0x140A77290 (HalpDispatchPnp.c)
 *     HalpDispatchPower @ 0x140B5D5B0 (HalpDispatchPower.c)
 * Callees:
 *     IofCallDriver @ 0x14035D320 (IofCallDriver.c)
 */

NTSTATUS __fastcall HalpPassIrpFromFdoToPdo(__int64 a1, IRP *a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 64);
  ++a2->CurrentLocation;
  ++a2->Tail.Overlay.CurrentStackLocation;
  return IofCallDriver(*(PDEVICE_OBJECT *)(v2 + 32), a2);
}
