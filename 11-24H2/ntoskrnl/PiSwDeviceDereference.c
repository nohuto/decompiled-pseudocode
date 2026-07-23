/*
 * XREFs of PiSwDeviceDereference @ 0x1409F3E68
 * Callers:
 *     PiSwDispatch @ 0x14072E770 (PiSwDispatch.c)
 *     PiSwIrpStartCreateWorker @ 0x1409F13D4 (PiSwIrpStartCreateWorker.c)
 *     PiSwBusRelationRemove @ 0x1409F32DC (PiSwBusRelationRemove.c)
 *     PiSwProcessRemove @ 0x1409F3978 (PiSwProcessRemove.c)
 *     PiSwUnassociateDeviceObject @ 0x1409F3E28 (PiSwUnassociateDeviceObject.c)
 *     PiSwCloseDevice @ 0x140A90544 (PiSwCloseDevice.c)
 * Callees:
 *     PiSwDeviceFree @ 0x1409F0B0C (PiSwDeviceFree.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall PiSwDeviceDereference(PVOID P)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P, 0xFFFFFFFF) == 1 )
  {
    PiSwDeviceFree((__int64)P);
    ExFreePoolWithTag(P, 0x57706E50u);
  }
}
