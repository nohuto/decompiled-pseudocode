/*
 * XREFs of PopDripsWatchdogInitialize @ 0x140C3371C
 * Callers:
 *     PoInitSystem @ 0x140C61990 (PoInitSystem.c)
 * Callees:
 *     ExInitializeResourceLite2 @ 0x140365350 (ExInitializeResourceLite2.c)
 *     PopInitializeTimer @ 0x140749388 (PopInitializeTimer.c)
 *     PopCapturePlatformRole @ 0x140A6F480 (PopCapturePlatformRole.c)
 *     PopIsDirectedDripsEnabled @ 0x140A9D3D4 (PopIsDirectedDripsEnabled.c)
 *     PopDripsWatchdogInitializeCallbackTimer @ 0x140C337FC (PopDripsWatchdogInitializeCallbackTimer.c)
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
    dword_140F070E8 |= 1u;
    return result;
  }
  if ( PopIsDirectedDripsEnabled() )
  {
    v1 = PopCapturePlatformRole();
    if ( v1 != 2 && v1 != 8 )
      v0 |= 1u;
  }
  dword_140F070EC = v0;
  result = PopDripsWatchdogInitializeCallbackTimer();
  if ( (int)result >= 0 )
  {
    if ( PopDripsWatchdogTimeout )
    {
      dword_140F072A8 = PopDripsWatchdogTimeout;
      PopInitializeTimer(
        (__int64)&unk_140F071F8,
        (__int64)PopDripsWatchdogTimerCallback,
        (__int64)&PopDripsWatchdogContext,
        (__int64)PopDripsWatchdogDiagnosticWorker,
        (__int64)&PopDripsWatchdogContext);
      dword_140F072AC |= 1u;
    }
    dword_140F070E8 |= 2u;
    goto LABEL_11;
  }
  return result;
}
