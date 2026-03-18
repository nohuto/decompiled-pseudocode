/*
 * XREFs of PopDisarmIdlePhaseWatchdog @ 0x140964068
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x1405D3DC0 (PdcPoCurrentPdcPhase.c)
 *     PopProcessSessionDisplayStateChange @ 0x140963FE0 (PopProcessSessionDisplayStateChange.c)
 * Callees:
 *     ZwPowerInformation @ 0x14069BD20 (ZwPowerInformation.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     PopResetIdlePhaseWatchdogDiagnosticContext @ 0x140964614 (PopResetIdlePhaseWatchdogDiagnosticContext.c)
 */

__int64 PopDisarmIdlePhaseWatchdog()
{
  __int64 v0; // rbx
  __int64 result; // rax
  int InputBuffer; // [rsp+30h] [rbp-68h] BYREF
  __int64 v3; // [rsp+38h] [rbp-60h]

  v0 = PopPdcIdlePhaseWatchdogContext;
  if ( PopPdcIdlePhaseWatchdogContext )
  {
    memset_0(&InputBuffer, 0, 0x60uLL);
    InputBuffer = 21;
    v3 = v0;
    ZwPowerInformation(PowerInformationInternal, &InputBuffer, 0x60u, 0LL, 0);
    return PopResetIdlePhaseWatchdogDiagnosticContext();
  }
  return result;
}
