/*
 * XREFs of PopCurrentPowerState @ 0x140A22CB0
 * Callers:
 *     PopCalculateCsSummary @ 0x140486560 (PopCalculateCsSummary.c)
 *     PopUpdateAcDcState @ 0x1404ADDF4 (PopUpdateAcDcState.c)
 *     PopEsUpdateState @ 0x1404B8AA0 (PopEsUpdateState.c)
 *     NtPowerInformation @ 0x14096E740 (NtPowerInformation.c)
 *     PopCurrentPowerStatePrecise @ 0x140A22BFC (PopCurrentPowerStatePrecise.c)
 *     PopDiagTraceGracefulShutdown @ 0x140B4FAD4 (PopDiagTraceGracefulShutdown.c)
 *     PopTransitionSystemPowerStateEx @ 0x140B569AC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopAcquireRwLockShared @ 0x140204514 (PopAcquireRwLockShared.c)
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 */

__int64 __fastcall PopCurrentPowerState(_OWORD *a1)
{
  PopAcquireRwLockShared((volatile signed __int64 *)&xmmword_140F0ACB0);
  *a1 = xmmword_140F0ACC0;
  a1[1] = xmmword_140F0ACD0;
  return PopReleaseRwLock((signed __int64 *)&xmmword_140F0ACB0);
}
