/*
 * XREFs of HviLeaveKernelAperture @ 0x140604370
 * Callers:
 *     HviCopyMemoryNonTemporal @ 0x14040C8E4 (HviCopyMemoryNonTemporal.c)
 *     HviCopyMemory @ 0x14040CADC (HviCopyMemory.c)
 * Callees:
 *     HvipApertureDirectHypercall @ 0x140604488 (HvipApertureDirectHypercall.c)
 *     HvipApertureVmfuncSwitchEptp @ 0x1406B4EF0 (HvipApertureVmfuncSwitchEptp.c)
 */

__int64 HviLeaveKernelAperture()
{
  __int64 result; // rax

  if ( !byte_140E0CC42 )
  {
    if ( byte_140E678E1 )
      result = HvipApertureVmfuncSwitchEptp(0LL);
    else
      result = HvipApertureDirectHypercall(6LL, 0LL);
  }
  _mm_lfence();
  _enable();
  return result;
}
