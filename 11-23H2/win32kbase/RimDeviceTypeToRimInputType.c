/*
 * XREFs of RimDeviceTypeToRimInputType @ 0x1C0005B28
 * Callers:
 *     rimDoRimDevChangeCallback @ 0x1C0003CDC (rimDoRimDevChangeCallback.c)
 *     rimProcessInput @ 0x1C00059E8 (rimProcessInput.c)
 *     RIMOnPnpNotification @ 0x1C0073820 (RIMOnPnpNotification.c)
 *     rimCompleteReads @ 0x1C0074F84 (rimCompleteReads.c)
 *     rimIssueReads @ 0x1C0075024 (rimIssueReads.c)
 *     rimFindPausedDeviceAndCompleteRead @ 0x1C0075170 (rimFindPausedDeviceAndCompleteRead.c)
 *     RIMDeviceClassNotifyAsyncWorkItem @ 0x1C00757A4 (RIMDeviceClassNotifyAsyncWorkItem.c)
 *     rimOnPnpArrived @ 0x1C0076A78 (rimOnPnpArrived.c)
 *     RIMRegisterForDeviceChangeNotifications @ 0x1C0079F44 (RIMRegisterForDeviceChangeNotifications.c)
 *     RIMRemoveDevOfInputType @ 0x1C00B93BC (RIMRemoveDevOfInputType.c)
 *     RIMOpenDevWorker @ 0x1C00BEDB0 (RIMOpenDevWorker.c)
 *     RIMIsWakeCapableDevice @ 0x1C00BF6E4 (RIMIsWakeCapableDevice.c)
 *     RIMDirectStartStopDeviceRead @ 0x1C0176DB0 (RIMDirectStartStopDeviceRead.c)
 *     RIMFillDeviceHealthInfo @ 0x1C0177700 (RIMFillDeviceHealthInfo.c)
 *     RIMAllocateHidDesc @ 0x1C017F534 (RIMAllocateHidDesc.c)
 *     RIMVirtAllocateHidDesc @ 0x1C01837E8 (RIMVirtAllocateHidDesc.c)
 *     RIMDeviceNotifyAsyncWorkItem @ 0x1C01A1CEC (RIMDeviceNotifyAsyncWorkItem.c)
 *     RIMDeviceNotifyUsingAsyncPnpWorkNotification @ 0x1C01A1ED0 (RIMDeviceNotifyUsingAsyncPnpWorkNotification.c)
 *     rimProcessAnyQueuedCompleteFrames @ 0x1C01A4980 (rimProcessAnyQueuedCompleteFrames.c)
 *     RIMHandleTTMDeviceArrival @ 0x1C01B44BC (RIMHandleTTMDeviceArrival.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RimDeviceTypeToRimInputType(__int64 a1, int a2)
{
  int v2; // edx
  int v4; // edx
  int v5; // ecx

  if ( !a2 )
    return 1LL;
  v2 = a2 - 1;
  if ( !v2 )
    return 2LL;
  v4 = v2 - 1;
  if ( v4 )
  {
    if ( v4 == 1 )
      return (*(_DWORD *)(a1 + 184) & 0x1000) != 0 ? 8 : 16;
    return 0LL;
  }
  if ( (*(_DWORD *)(a1 + 200) & 0x80u) != 0 )
  {
    v5 = *(_DWORD *)(*(_QWORD *)(a1 + 472) + 24LL);
    if ( v5 == 7 )
      return 8LL;
    if ( (unsigned int)(v5 - 5) <= 1 )
      return 4LL;
    if ( (unsigned int)(v5 - 1) <= 3 )
      return 16LL;
    return 0LL;
  }
  return *(_BYTE *)(a1 + 48) != 3 ? 0x20 : 0;
}
