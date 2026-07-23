/*
 * XREFs of HvipApertureVmfuncSwitchEptp @ 0x1406B5E90
 * Callers:
 *     HviEnterKernelAperture @ 0x1406018DC (HviEnterKernelAperture.c)
 *     HviLeaveKernelAperture @ 0x1406019B0 (HviLeaveKernelAperture.c)
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
