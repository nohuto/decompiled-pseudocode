/*
 * XREFs of VfSettingsMiscellaneousChecksInitPhase1 @ 0x140B9D33C
 * Callers:
 *     VfInitSystemNoRebootNeeded @ 0x140B85980 (VfInitSystemNoRebootNeeded.c)
 *     VerifierInitSystem @ 0x140C3D310 (VerifierInitSystem.c)
 * Callees:
 *     ViSettingsEnableKernelHandleChecking @ 0x140B9D370 (ViSettingsEnableKernelHandleChecking.c)
 */

__int64 VfSettingsMiscellaneousChecksInitPhase1()
{
  __int64 result; // rax

  if ( (MmVerifierData & 0x800) != 0 && (VfRuleClasses & 0x400000) == 0 )
    return ViSettingsEnableKernelHandleChecking(1LL);
  return result;
}
