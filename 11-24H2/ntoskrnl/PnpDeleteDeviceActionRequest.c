/*
 * XREFs of PnpDeleteDeviceActionRequest @ 0x1409ECFD4
 * Callers:
 *     PnpRemoveDeviceActionRequests @ 0x1404671A0 (PnpRemoveDeviceActionRequests.c)
 *     PnpDeviceActionWorker @ 0x140467910 (PnpDeviceActionWorker.c)
 *     PnpRemoveDeviceActionRequestFromQueue @ 0x1405A4270 (PnpRemoveDeviceActionRequestFromQueue.c)
 *     PiControlGetSetDeviceStatus @ 0x1408CED40 (PiControlGetSetDeviceStatus.c)
 *     PiCMDeviceAction @ 0x140A80158 (PiCMDeviceAction.c)
 *     PiQueueDeviceRequest @ 0x140AB2974 (PiQueueDeviceRequest.c)
 * Callees:
 *     PiPdcDeactivate @ 0x1409ED014 (PiPdcDeactivate.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
