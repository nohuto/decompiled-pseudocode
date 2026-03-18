/*
 * XREFs of PopDispatchStateCallout @ 0x140A2C7C0
 * Callers:
 *     PoBlockConsoleSwitchEx @ 0x140311910 (PoBlockConsoleSwitchEx.c)
 *     PopPrepareSleep @ 0x1404BD9CC (PopPrepareSleep.c)
 *     PoPowerOffMonitor @ 0x1404CC3C0 (PoPowerOffMonitor.c)
 *     PoStartPowerStateTasks @ 0x1406ED524 (PoStartPowerStateTasks.c)
 *     PoEndPowerStateTasks @ 0x1406ED5F0 (PoEndPowerStateTasks.c)
 *     PopDirectedDripsNotifyAppsAndServices @ 0x1407405E4 (PopDirectedDripsNotifyAppsAndServices.c)
 *     PoEndPartitionReplace @ 0x140747324 (PoEndPartitionReplace.c)
 *     PoStartPartitionReplace @ 0x140747448 (PoStartPartitionReplace.c)
 *     PopResumeApps @ 0x1407479CC (PopResumeApps.c)
 *     PopSendSuspendResumeApplicationNotification @ 0x140747A44 (PopSendSuspendResumeApplicationNotification.c)
 *     PopSuspendApps @ 0x140747DD8 (PopSuspendApps.c)
 *     PopSuspendServices @ 0x140747E2C (PopSuspendServices.c)
 *     PdcPoBlockSessionSwitchEx @ 0x140750730 (PdcPoBlockSessionSwitchEx.c)
 *     PopReleaseAdaptiveLock @ 0x1409635F4 (PopReleaseAdaptiveLock.c)
 *     PopBlockSessionSwitch @ 0x140A2BB70 (PopBlockSessionSwitch.c)
 *     PopPowerAggregatorNotifyCsStateExited @ 0x140A2C294 (PopPowerAggregatorNotifyCsStateExited.c)
 *     PopScreenOff @ 0x140A2C5B8 (PopScreenOff.c)
 *     PoUnblockConsoleSwitch @ 0x140A2C648 (PoUnblockConsoleSwitch.c)
 *     PopResumeServices @ 0x140A2C744 (PopResumeServices.c)
 *     PopIssueActionRequest @ 0x140A83104 (PopIssueActionRequest.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140254220 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     PopInvokeWin32Callout @ 0x140A2C928 (PopInvokeWin32Callout.c)
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
