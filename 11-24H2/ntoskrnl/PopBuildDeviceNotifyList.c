/*
 * XREFs of PopBuildDeviceNotifyList @ 0x140B6AED8
 * Callers:
 *     PoInitializeBroadcast @ 0x140A36214 (PoInitializeBroadcast.c)
 *     PopGracefulShutdown @ 0x140B5DAF8 (PopGracefulShutdown.c)
 * Callees:
 *     KeCancelTimer @ 0x1402BE1D0 (KeCancelTimer.c)
 *     KiSetTimerEx @ 0x140316810 (KiSetTimerEx.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x140402260 (KeInitializeEvent.c)
 *     KeInitializeTimer @ 0x14044A0E0 (KeInitializeTimer.c)
 *     KeInitializeDpc @ 0x14044A220 (KeInitializeDpc.c)
 *     PopDiagTraceEventNoPayload @ 0x1404874D4 (PopDiagTraceEventNoPayload.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     IoBuildPoDeviceNotifyList @ 0x140B6AFFC (IoBuildPoDeviceNotifyList.c)
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
