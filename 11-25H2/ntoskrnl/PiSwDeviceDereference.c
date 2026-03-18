/*
 * XREFs of PiSwDeviceDereference @ 0x1409A3528
 * Callers:
 *     PiSwBusRelationRemove @ 0x1409A33E8 (PiSwBusRelationRemove.c)
 *     PiSwUnassociateDeviceObject @ 0x1409A34E8 (PiSwUnassociateDeviceObject.c)
 *     PiSwProcessRemove @ 0x1409A35FC (PiSwProcessRemove.c)
 *     PiSwIrpStartCreateWorker @ 0x1409A4180 (PiSwIrpStartCreateWorker.c)
 *     PiSwCloseDevice @ 0x140A8F2A4 (PiSwCloseDevice.c)
 *     PiSwDispatch @ 0x140AC02F0 (PiSwDispatch.c)
 * Callees:
 *     PiSwDeviceFree @ 0x1409A38F4 (PiSwDeviceFree.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PiSwDeviceDereference(PVOID P)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P, 0xFFFFFFFF) == 1 )
  {
    PiSwDeviceFree();
    ExFreePoolWithTag(P, 0x57706E50u);
  }
}
