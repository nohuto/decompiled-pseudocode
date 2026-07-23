/*
 * XREFs of TtmiResetInactivityTimer @ 0x14076FCB0
 * Callers:
 *     TtmiResetTerminalTimeouts @ 0x14076FD50 (TtmiResetTerminalTimeouts.c)
 *     TtmpUpdateTerminalState @ 0x140770790 (TtmpUpdateTerminalState.c)
 *     TtmpWnfInactivityTimeoutCallback @ 0x140770950 (TtmpWnfInactivityTimeoutCallback.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     KeCancelTimer @ 0x1402BE1D0 (KeCancelTimer.c)
 *     KiSetTimerEx @ 0x140316810 (KiSetTimerEx.c)
 *     TtmiLogInactivityTimerReset @ 0x14076D32C (TtmiLogInactivityTimerReset.c)
 */

void __fastcall TtmiResetInactivityTimer(int a1)
{
  __int64 v2; // rbx

  ExAcquireResourceExclusiveLite(&TtmpTerminalInactivityLock, 1u);
  if ( TtmpTerminalInactivityTimeout )
    KiSetTimerEx(
      (__int64)&TtmpTerminalInactivityTimer,
      TtmpTerminalInactivityTimeout,
      0,
      0,
      (__int64)&TtmpTerminalInactivityTimerDpc);
  else
    KeCancelTimer(&TtmpTerminalInactivityTimer);
  if ( a1 == 4 )
  {
    v2 = MEMORY[0xFFFFF78000000008];
    if ( (unsigned __int64)(MEMORY[0xFFFFF78000000008] - TtmpLastInputInactivityResetTime) > 0x1312D00 )
      TtmiLogInactivityTimerReset(4);
    TtmpLastInputInactivityResetTime = v2;
  }
  else
  {
    TtmiLogInactivityTimerReset(a1);
  }
  ExReleaseResourceLite(&TtmpTerminalInactivityLock);
}
