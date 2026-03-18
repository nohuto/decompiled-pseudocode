/*
 * XREFs of PopBuildDeviceNotifyList @ 0x140B59988
 * Callers:
 *     PoInitializeBroadcast @ 0x140A3C114 (PoInitializeBroadcast.c)
 *     PopGracefulShutdown @ 0x140B4BB18 (PopGracefulShutdown.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     KeCancelTimer @ 0x1402ECAA0 (KeCancelTimer.c)
 *     KiSetTimerEx @ 0x1402ED730 (KiSetTimerEx.c)
 *     KeInitializeEvent @ 0x140401B80 (KeInitializeEvent.c)
 *     KeInitializeTimer @ 0x140454D20 (KeInitializeTimer.c)
 *     KeInitializeDpc @ 0x140454E30 (KeInitializeDpc.c)
 *     PopDiagTraceEventNoPayload @ 0x140488BD4 (PopDiagTraceEventNoPayload.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     IoBuildPoDeviceNotifyList @ 0x140B59AAC (IoBuildPoDeviceNotifyList.c)
 */

void __fastcall PopBuildDeviceNotifyList(void *a1, char a2)
{
  struct _KEVENT Event; // [rsp+38h] [rbp-49h] BYREF
  struct _KDPC Dpc; // [rsp+58h] [rbp-29h] BYREF
  struct _KTIMER Timer; // [rsp+98h] [rbp+17h] BYREF

  memset(&Dpc, 0, 60);
  memset(&Event, 0, sizeof(Event));
  memset_0(&Timer, 0, sizeof(Timer));
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  KeInitializeTimer(&Timer);
  KeInitializeDpc(&Dpc, (PKDEFERRED_ROUTINE)PopBuildDeviceNotifyListWatchdog, &Event);
  if ( (a2 & 4) == 0 && (_DWORD)PopWatchdogSleepTimeout )
    KiSetTimerEx((__int64)&Timer, -10000000LL * (int)PopWatchdogSleepTimeout, 0, 0, (__int64)&Dpc);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_BUILDNOTIFYLIST);
  IoBuildPoDeviceNotifyList(a1);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_BUILDNOTIFYLIST_END);
  if ( (a2 & 4) == 0 && (_DWORD)PopWatchdogSleepTimeout && !KeCancelTimer(&Timer) )
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
}
