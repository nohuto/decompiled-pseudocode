/*
 * XREFs of ??0PoWin32CalloutDeadlockTracker@@QEAA@W4_POPWIN32CALLOUT_WATCHDOG_STATE_INDEX@@@Z @ 0x1C00D02EC
 * Callers:
 *     QueuePowerRequest @ 0x1C00108E0 (QueuePowerRequest.c)
 *     RIMCloseDev @ 0x1C007AB28 (RIMCloseDev.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C009E7F8 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 *     SendWinlogonPowerMessageWorker @ 0x1C00D0550 (SendWinlogonPowerMessageWorker.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

int *__fastcall PoWin32CalloutDeadlockTracker::PoWin32CalloutDeadlockTracker(
        signed int *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v6; // rdi
  signed int v7; // r8d

  v4 = a2;
  v6 = SGDGetUserSessionState(a1, a2, a3, a4);
  v7 = v4 < 5 ? v4 : 0;
  *a1 = v7;
  if ( *(_DWORD *)(v6 + 4LL * v7 + 2904) == -1 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 902LL);
  _InterlockedIncrement((volatile signed __int32 *)(v6 + 4LL * *a1 + 2904));
  return a1;
}
