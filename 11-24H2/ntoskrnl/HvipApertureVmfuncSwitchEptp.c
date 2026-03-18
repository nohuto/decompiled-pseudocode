/*
 * XREFs of HvipApertureVmfuncSwitchEptp @ 0x1406B4EF0
 * Callers:
 *     HviEnterKernelAperture @ 0x14060429C (HviEnterKernelAperture.c)
 *     HviLeaveKernelAperture @ 0x140604370 (HviLeaveKernelAperture.c)
 * Callees:
 *     <none>
 */

__int64 HvipApertureVmfuncSwitchEptp()
{
  __int64 result; // rax

  result = 0LL;
  __asm { vmfunc }
  return result;
}
