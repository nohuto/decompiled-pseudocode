/*
 * XREFs of PopDripsWatchdogInitialize @ 0x140C224E0
 * Callers:
 *     PoInitSystem @ 0x140C50674 (PoInitSystem.c)
 * Callees:
 *     ExInitializeResourceLite2 @ 0x1402D6940 (ExInitializeResourceLite2.c)
 *     PopInitializeTimer @ 0x14073D378 (PopInitializeTimer.c)
 *     PopCapturePlatformRole @ 0x140A6D278 (PopCapturePlatformRole.c)
 *     PopIsDirectedDripsEnabled @ 0x140A978A4 (PopIsDirectedDripsEnabled.c)
 *     PopDripsWatchdogInitializeCallbackTimer @ 0x140C225C0 (PopDripsWatchdogInitializeCallbackTimer.c)
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
    dword_140F06A68 |= 1u;
    return result;
  }
  if ( PopIsDirectedDripsEnabled() )
  {
    v1 = PopCapturePlatformRole();
    if ( v1 != 2 && v1 != 8 )
      v0 |= 1u;
  }
  dword_140F06A6C = v0;
  result = PopDripsWatchdogInitializeCallbackTimer();
  if ( (int)result >= 0 )
  {
    if ( PopDripsWatchdogTimeout )
    {
      dword_140F06C28 = PopDripsWatchdogTimeout;
      PopInitializeTimer(
        (__int64)&unk_140F06B78,
        (__int64)PopDripsWatchdogTimerCallback,
        (__int64)&PopDripsWatchdogContext,
        (__int64)PopDripsWatchdogDiagnosticWorker,
        (__int64)&PopDripsWatchdogContext);
      dword_140F06C2C |= 1u;
    }
    dword_140F06A68 |= 2u;
    goto LABEL_11;
  }
  return result;
}
