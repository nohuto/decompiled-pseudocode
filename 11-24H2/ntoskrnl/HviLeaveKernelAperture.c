/*
 * XREFs of HviLeaveKernelAperture @ 0x1406019B0
 * Callers:
 *     HviCopyMemoryNonTemporal @ 0x140404F74 (HviCopyMemoryNonTemporal.c)
 *     HviCopyMemory @ 0x14040516C (HviCopyMemory.c)
 * Callees:
 *     HvipApertureDirectHypercall @ 0x140601AC8 (HvipApertureDirectHypercall.c)
 *     HvipApertureVmfuncSwitchEptp @ 0x1406B5E90 (HvipApertureVmfuncSwitchEptp.c)
 */

__int64 HviLeaveKernelAperture()
{
  __int64 result; // rax

  if ( !byte_140E0CD02 )
  {
    if ( byte_140E67A8E )
      result = HvipApertureVmfuncSwitchEptp(0LL);
    else
      result = HvipApertureDirectHypercall(6LL, 0LL);
  }
  _mm_lfence();
  _enable();
  return result;
}
