/*
 * XREFs of HvipApertureVmfuncSwitchEptp @ 0x1406A9C20
 * Callers:
 *     HviEnterKernelAperture @ 0x1405F7F5C (HviEnterKernelAperture.c)
 *     HviLeaveKernelAperture @ 0x1405F8030 (HviLeaveKernelAperture.c)
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
