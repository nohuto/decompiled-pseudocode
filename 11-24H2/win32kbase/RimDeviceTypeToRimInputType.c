/*
 * XREFs of RimDeviceTypeToRimInputType @ 0x140069204
 * Callers:
 *     rimFindPausedDeviceAndCompleteRead @ 0x14005DED8 (rimFindPausedDeviceAndCompleteRead.c)
 *     RIMOnPnpNotification @ 0x140061480 (RIMOnPnpNotification.c)
 *     RIMDirectStartStopDeviceRead @ 0x140063CD0 (RIMDirectStartStopDeviceRead.c)
 *     RIMIsWakeCapableDevice @ 0x1400690A8 (RIMIsWakeCapableDevice.c)
 *     rimDoRimDevChangeCallback @ 0x14006919C (rimDoRimDevChangeCallback.c)
 *     RIMDeviceNotifyAsyncWorkItem @ 0x1401120C4 (RIMDeviceNotifyAsyncWorkItem.c)
 *     RIMOpenDevWorker @ 0x14012D31C (RIMOpenDevWorker.c)
 *     RIMRegisterForDeviceChangeNotifications @ 0x14013BC64 (RIMRegisterForDeviceChangeNotifications.c)
 *     rimOnPnpArrived @ 0x14017E1FC (rimOnPnpArrived.c)
 *     rimProcessAnyQueuedCompleteFrames @ 0x14017FDE8 (rimProcessAnyQueuedCompleteFrames.c)
 *     RIMRemoveDevOfInputType @ 0x1401D24A8 (RIMRemoveDevOfInputType.c)
 *     RIMFillDeviceHealthInfo @ 0x1401D7700 (RIMFillDeviceHealthInfo.c)
 *     RIMAllocateHidDesc @ 0x1401DAB28 (RIMAllocateHidDesc.c)
 *     RIMDeviceClassNotifyAsyncWorkItem @ 0x1401EC448 (RIMDeviceClassNotifyAsyncWorkItem.c)
 *     RIMDeviceNotifyUsingAsyncInputWork @ 0x1401ECE9C (RIMDeviceNotifyUsingAsyncInputWork.c)
 *     RIMHandleTTMDeviceArrival @ 0x1401F2BAC (RIMHandleTTMDeviceArrival.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RimDeviceTypeToRimInputType(__int64 a1, int a2)
{
  int v2; // edx
  int v3; // edx
  int v5; // ecx

  if ( !a2 )
    return 1LL;
  v2 = a2 - 1;
  if ( !v2 )
    return 2LL;
  v3 = v2 - 1;
  if ( v3 )
  {
    if ( v3 == 1 )
      return (*(_DWORD *)(a1 + 168) & 0x1000) != 0 ? 8 : 16;
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 184) & 0x80u) == 0 )
      return *(_DWORD *)(a1 + 48) != 3 ? 0x20 : 0;
    v5 = *(_DWORD *)(*(_QWORD *)(a1 + 456) + 24LL);
    if ( v5 == 7 )
      return 8LL;
    if ( (unsigned int)(v5 - 5) <= 1 )
      return 4LL;
    if ( (unsigned int)(v5 - 1) <= 3 )
      return 16LL;
  }
  return 0LL;
}
