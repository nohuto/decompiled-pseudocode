/*
 * XREFs of PnpDeleteDeviceActionRequest @ 0x14096DC14
 * Callers:
 *     PnpRemoveDeviceActionRequests @ 0x14046DDC8 (PnpRemoveDeviceActionRequests.c)
 *     PnpDeviceActionWorker @ 0x14046E540 (PnpDeviceActionWorker.c)
 *     PnpRemoveDeviceActionRequestFromQueue @ 0x1405A3A70 (PnpRemoveDeviceActionRequestFromQueue.c)
 *     PiControlGetSetDeviceStatus @ 0x1408CEC60 (PiControlGetSetDeviceStatus.c)
 *     PiCMDeviceAction @ 0x14095EA0C (PiCMDeviceAction.c)
 *     PiQueueDeviceRequest @ 0x140AB40E8 (PiQueueDeviceRequest.c)
 * Callees:
 *     PiPdcDeactivate @ 0x14096DDBC (PiPdcDeactivate.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PnpDeleteDeviceActionRequest(PVOID P)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 20, 0xFFFFFFFF) == 1 )
  {
    PiPdcDeactivate(*((_QWORD *)P + 4));
    *((_QWORD *)P + 4) = 0LL;
    ExFreePoolWithTag(P, 0x32706E50u);
  }
}
