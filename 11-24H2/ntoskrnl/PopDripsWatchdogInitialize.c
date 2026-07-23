/*
 * XREFs of PopDripsWatchdogInitialize @ 0x140C3585C
 * Callers:
 *     PoInitSystem @ 0x140C63AE4 (PoInitSystem.c)
 * Callees:
 *     ExInitializeResourceLite2 @ 0x1403EAA00 (ExInitializeResourceLite2.c)
 *     PopInitializeTimer @ 0x1407476B8 (PopInitializeTimer.c)
 *     PopCapturePlatformRole @ 0x140A68904 (PopCapturePlatformRole.c)
 *     PopIsDirectedDripsEnabled @ 0x140A98944 (PopIsDirectedDripsEnabled.c)
 *     PopDripsWatchdogInitializeCallbackTimer @ 0x140C3593C (PopDripsWatchdogInitializeCallbackTimer.c)
 */

__int64 PopDripsWatchdogInitialize()
{
  int v0; // edx
  int v1; // eax
  __int64 result; // rax

  ExInitializeResourceLite2(&PopDripsWatchdogContext, -1);
  if ( !PopPlatformAoAcCapabilityInitialized || !PopPlatformAoAc )
  {
LABEL_11:
    result = 0LL;
    dword_140F073E8 |= 1u;
    return result;
  }
  if ( PopIsDirectedDripsEnabled() )
  {
    v1 = PopCapturePlatformRole();
    if ( v1 != 2 && v1 != 8 )
      v0 |= 1u;
  }
  dword_140F073EC = v0;
  result = PopDripsWatchdogInitializeCallbackTimer();
  if ( (int)result >= 0 )
  {
    if ( PopDripsWatchdogTimeout )
    {
      dword_140F075A8 = PopDripsWatchdogTimeout;
      PopInitializeTimer(
        (__int64)&unk_140F074F8,
        (__int64)PopDripsWatchdogTimerCallback,
        (__int64)&PopDripsWatchdogContext,
        (__int64)PopDripsWatchdogDiagnosticWorker,
        (__int64)&PopDripsWatchdogContext);
      dword_140F075AC |= 1u;
    }
    dword_140F073E8 |= 2u;
    goto LABEL_11;
  }
  return result;
}
