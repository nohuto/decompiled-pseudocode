/*
 * XREFs of HviIsHypervisorVendorMicrosoft @ 0x140662690
 * Callers:
 *     HviIsKernelApertureAvailable @ 0x14060193C (HviIsKernelApertureAvailable.c)
 *     MicrocodeUpdate @ 0x140663208 (MicrocodeUpdate.c)
 *     SpcIsHyperVCr3RspErrataPresent @ 0x1406A1B6C (SpcIsHyperVCr3RspErrataPresent.c)
 *     EtwpTraceSystemInitialization @ 0x140C3FD6C (EtwpTraceSystemInitialization.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x14049E730 (HviIsAnyHypervisorPresent.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
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
