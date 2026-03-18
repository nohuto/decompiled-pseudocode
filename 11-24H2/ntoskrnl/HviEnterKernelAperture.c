/*
 * XREFs of HviEnterKernelAperture @ 0x14060429C
 * Callers:
 *     HviCopyMemoryNonTemporal @ 0x14040C8E4 (HviCopyMemoryNonTemporal.c)
 *     HviCopyMemory @ 0x14040CADC (HviCopyMemory.c)
 * Callees:
 *     HvipApertureDetectParameters @ 0x1406043BC (HvipApertureDetectParameters.c)
 *     HvipApertureDirectHypercall @ 0x140604488 (HvipApertureDirectHypercall.c)
 *     HvipApertureVmfuncSwitchEptp @ 0x1406B4EF0 (HvipApertureVmfuncSwitchEptp.c)
 */

char HviEnterKernelAperture()
{
  char result; // al

  result = byte_140E678E2;
  if ( !byte_140E678E2 )
    result = HvipApertureDetectParameters();
  _disable();
  if ( !byte_140E0CC42 )
  {
    if ( byte_140E678E1 )
      return HvipApertureVmfuncSwitchEptp(1LL);
    else
      return HvipApertureDirectHypercall(6LL, 1LL);
  }
  return result;
}
