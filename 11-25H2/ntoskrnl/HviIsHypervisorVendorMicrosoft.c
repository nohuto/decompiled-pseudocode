/*
 * XREFs of HviIsHypervisorVendorMicrosoft @ 0x140657AE0
 * Callers:
 *     HviIsKernelApertureAvailable @ 0x1405F7FBC (HviIsKernelApertureAvailable.c)
 *     MicrocodeUpdate @ 0x140658658 (MicrocodeUpdate.c)
 *     SpcIsHyperVCr3RspErrataPresent @ 0x1406956C4 (SpcIsHyperVCr3RspErrataPresent.c)
 *     EtwpTraceSystemInitialization @ 0x140C2C93C (EtwpTraceSystemInitialization.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x1404A3870 (HviIsAnyHypervisorPresent.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

bool HviIsHypervisorVendorMicrosoft()
{
  if ( !HviIsAnyHypervisorPresent() )
    return 0;
  _RAX = 0x40000000LL;
  __asm { cpuid }
  if ( (_DWORD)_RBX != 1919117645 )
    return 0;
  return (_DWORD)_RCX == 1718580079 && (_DWORD)_RDX == 1984438388;
}
