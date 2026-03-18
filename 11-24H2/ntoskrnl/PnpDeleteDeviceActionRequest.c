/*
 * XREFs of PnpDeleteDeviceActionRequest @ 0x1409EF704
 * Callers:
 *     PnpRemoveDeviceActionRequests @ 0x14046C600 (PnpRemoveDeviceActionRequests.c)
 *     PnpDeviceActionWorker @ 0x14046CD70 (PnpDeviceActionWorker.c)
 *     PnpRemoveDeviceActionRequestFromQueue @ 0x1405A7280 (PnpRemoveDeviceActionRequestFromQueue.c)
 *     PiControlGetSetDeviceStatus @ 0x1408D1350 (PiControlGetSetDeviceStatus.c)
 *     PiCMDeviceAction @ 0x140A85618 (PiCMDeviceAction.c)
 *     PiQueueDeviceRequest @ 0x140AB84B0 (PiQueueDeviceRequest.c)
 * Callees:
 *     PiPdcDeactivate @ 0x1409EF744 (PiPdcDeactivate.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
