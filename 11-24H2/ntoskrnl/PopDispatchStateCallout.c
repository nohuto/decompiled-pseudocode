/*
 * XREFs of PopDispatchStateCallout @ 0x1409B9D64
 * Callers:
 *     PoBlockConsoleSwitchEx @ 0x14042F0D4 (PoBlockConsoleSwitchEx.c)
 *     PopPrepareSleep @ 0x1404BC8CC (PopPrepareSleep.c)
 *     PoPowerOffMonitor @ 0x1404CBF90 (PoPowerOffMonitor.c)
 *     PoStartPowerStateTasks @ 0x1406F9164 (PoStartPowerStateTasks.c)
 *     PoEndPowerStateTasks @ 0x1406F9230 (PoEndPowerStateTasks.c)
 *     PopDirectedDripsNotifyAppsAndServices @ 0x14074C6B4 (PopDirectedDripsNotifyAppsAndServices.c)
 *     PoEndPartitionReplace @ 0x140753414 (PoEndPartitionReplace.c)
 *     PoStartPartitionReplace @ 0x140753538 (PoStartPartitionReplace.c)
 *     PopResumeApps @ 0x140753ABC (PopResumeApps.c)
 *     PopSendSuspendResumeApplicationNotification @ 0x140753B34 (PopSendSuspendResumeApplicationNotification.c)
 *     PopSuspendApps @ 0x140753EC8 (PopSuspendApps.c)
 *     PopSuspendServices @ 0x140753F1C (PopSuspendServices.c)
 *     PdcPoBlockSessionSwitchEx @ 0x14075D0B0 (PdcPoBlockSessionSwitchEx.c)
 *     PopPowerAggregatorNotifyCsStateExited @ 0x140902C54 (PopPowerAggregatorNotifyCsStateExited.c)
 *     PopBlockSessionSwitch @ 0x1409B7CC0 (PopBlockSessionSwitch.c)
 *     PopScreenOff @ 0x1409B8008 (PopScreenOff.c)
 *     PoUnblockConsoleSwitch @ 0x1409B8098 (PoUnblockConsoleSwitch.c)
 *     PopResumeServices @ 0x1409B9CE8 (PopResumeServices.c)
 *     PopReleaseAdaptiveLock @ 0x1409BB1EC (PopReleaseAdaptiveLock.c)
 *     PopIssueActionRequest @ 0x140A87C34 (PopIssueActionRequest.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140255180 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     PopInvokeWin32Callout @ 0x1409BE358 (PopInvokeWin32Callout.c)
 */

__int64 __fastcall PopDispatchStateCallout(_DWORD *a1, __int64 a2)
{
  int v4; // eax
  unsigned int v5; // eax
  unsigned int v6; // ebx
  unsigned int v8; // [rsp+30h] [rbp-30h] BYREF
  int *v9; // [rsp+38h] [rbp-28h] BYREF
  int v10; // [rsp+40h] [rbp-20h]
  int v11; // [rsp+44h] [rbp-1Ch]
  _DWORD v12[4]; // [rsp+48h] [rbp-18h] BYREF

  if ( (xmmword_140FC5B10 & 0x8000) != 0 )
  {
    v4 = a1[5];
    v11 = 0;
    v12[0] = v4;
    v12[1] = a1[6];
    v12[2] = a1[7];
    v12[3] = a1[8];
    v9 = v12;
    v10 = 16;
    EtwTraceKernelEvent((int)&v9, 1, 0x80008000, 4648, 5249026);
  }
  v5 = PopInvokeWin32Callout(4LL, a1, 2 - (unsigned int)(a2 != 0));
  v6 = v5;
  if ( (xmmword_140FC5B10 & 0x8000) != 0 )
  {
    v11 = 0;
    v8 = v5;
    v10 = 4;
    v9 = (int *)&v8;
    EtwTraceKernelEvent((int)&v9, 1, 0x80008000, 4649, 5249026);
  }
  return v6;
}
