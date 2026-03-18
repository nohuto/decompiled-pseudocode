/*
 * XREFs of PopBuildDeviceNotifyList @ 0x140B697C8
 * Callers:
 *     PoInitializeBroadcast @ 0x140A40934 (PoInitializeBroadcast.c)
 *     PopGracefulShutdown @ 0x140B5BA88 (PopGracefulShutdown.c)
 * Callees:
 *     KeCancelTimer @ 0x140333B20 (KeCancelTimer.c)
 *     KiSetTimerEx @ 0x1403347A0 (KiSetTimerEx.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x140409D80 (KeInitializeEvent.c)
 *     KeInitializeTimer @ 0x140455420 (KeInitializeTimer.c)
 *     KeInitializeDpc @ 0x140455470 (KeInitializeDpc.c)
 *     PopDiagTraceEventNoPayload @ 0x14048C7B4 (PopDiagTraceEventNoPayload.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     IoBuildPoDeviceNotifyList @ 0x140B698EC (IoBuildPoDeviceNotifyList.c)
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
