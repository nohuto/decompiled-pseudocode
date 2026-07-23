/*
 * XREFs of PopDispatchStateCallout @ 0x1409A03B4
 * Callers:
 *     PoBlockConsoleSwitchEx @ 0x140420E04 (PoBlockConsoleSwitchEx.c)
 *     PopPrepareSleep @ 0x1404B7A3C (PopPrepareSleep.c)
 *     PoPowerOffMonitor @ 0x1404C5400 (PoPowerOffMonitor.c)
 *     PoStartPowerStateTasks @ 0x1406F6DA4 (PoStartPowerStateTasks.c)
 *     PoEndPowerStateTasks @ 0x1406F6E70 (PoEndPowerStateTasks.c)
 *     PopDirectedDripsNotifyAppsAndServices @ 0x14074A9E4 (PopDirectedDripsNotifyAppsAndServices.c)
 *     PoEndPartitionReplace @ 0x140751734 (PoEndPartitionReplace.c)
 *     PoStartPartitionReplace @ 0x140751858 (PoStartPartitionReplace.c)
 *     PopResumeApps @ 0x140751DDC (PopResumeApps.c)
 *     PopSendSuspendResumeApplicationNotification @ 0x140751E54 (PopSendSuspendResumeApplicationNotification.c)
 *     PopSuspendApps @ 0x1407521E8 (PopSuspendApps.c)
 *     PopSuspendServices @ 0x14075223C (PopSuspendServices.c)
 *     PdcPoBlockSessionSwitchEx @ 0x14075C050 (PdcPoBlockSessionSwitchEx.c)
 *     PopBlockSessionSwitch @ 0x14099E318 (PopBlockSessionSwitch.c)
 *     PopScreenOff @ 0x14099E658 (PopScreenOff.c)
 *     PoUnblockConsoleSwitch @ 0x14099E6E8 (PoUnblockConsoleSwitch.c)
 *     PopResumeServices @ 0x1409A0338 (PopResumeServices.c)
 *     PopReleaseAdaptiveLock @ 0x1409A183C (PopReleaseAdaptiveLock.c)
 *     PopPowerAggregatorNotifyCsStateExited @ 0x140A6E534 (PopPowerAggregatorNotifyCsStateExited.c)
 *     PopIssueActionRequest @ 0x140A84124 (PopIssueActionRequest.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140285790 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PopInvokeWin32Callout @ 0x1409A49A8 (PopInvokeWin32Callout.c)
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

  if ( (xmmword_140FC6B50 & 0x8000) != 0 )
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
  if ( (xmmword_140FC6B50 & 0x8000) != 0 )
  {
    v11 = 0;
    v8 = v5;
    v10 = 4;
    v9 = (int *)&v8;
    EtwTraceKernelEvent((int)&v9, 1, 0x80008000, 4649, 5249026);
  }
  return v6;
}
