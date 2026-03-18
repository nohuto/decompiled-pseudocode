/*
 * XREFs of PiSwDeviceDereference @ 0x1409FB4F8
 * Callers:
 *     PiSwDispatch @ 0x140730760 (PiSwDispatch.c)
 *     PiSwIrpStartCreateWorker @ 0x1409F8A64 (PiSwIrpStartCreateWorker.c)
 *     PiSwBusRelationRemove @ 0x1409FA96C (PiSwBusRelationRemove.c)
 *     PiSwProcessRemove @ 0x1409FB008 (PiSwProcessRemove.c)
 *     PiSwUnassociateDeviceObject @ 0x1409FB4B8 (PiSwUnassociateDeviceObject.c)
 *     PiSwCloseDevice @ 0x140A93D94 (PiSwCloseDevice.c)
 * Callees:
 *     PiSwDeviceFree @ 0x1409F819C (PiSwDeviceFree.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PiSwDeviceDereference(PVOID P)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P, 0xFFFFFFFF) == 1 )
  {
    PiSwDeviceFree((__int64)P);
    ExFreePoolWithTag(P, 0x57706E50u);
  }
}
