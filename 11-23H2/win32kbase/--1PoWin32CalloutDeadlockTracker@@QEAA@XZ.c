/*
 * XREFs of ??1PoWin32CalloutDeadlockTracker@@QEAA@XZ @ 0x1C00D0390
 * Callers:
 *     QueuePowerRequest @ 0x1C00108E0 (QueuePowerRequest.c)
 *     RIMCloseDev @ 0x1C007AB28 (RIMCloseDev.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C009E7F8 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 *     SendWinlogonPowerMessageWorker @ 0x1C00D0550 (SendWinlogonPowerMessageWorker.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall PoWin32CalloutDeadlockTracker::~PoWin32CalloutDeadlockTracker(
        PoWin32CalloutDeadlockTracker *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rbx

  v5 = SGDGetUserSessionState(this, a2, a3, a4);
  if ( !*(_DWORD *)(v5 + 4LL * *(int *)this + 2904) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 907LL);
  _InterlockedDecrement((volatile signed __int32 *)(v5 + 4LL * *(int *)this + 2904));
}
