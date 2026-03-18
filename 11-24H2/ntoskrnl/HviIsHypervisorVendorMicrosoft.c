/*
 * XREFs of HviIsHypervisorVendorMicrosoft @ 0x140663DA0
 * Callers:
 *     HviIsKernelApertureAvailable @ 0x1406042FC (HviIsKernelApertureAvailable.c)
 *     MicrocodeUpdate @ 0x140664918 (MicrocodeUpdate.c)
 *     SpcIsHyperVCr3RspErrataPresent @ 0x1406A0A64 (SpcIsHyperVCr3RspErrataPresent.c)
 *     EtwpTraceSystemInitialization @ 0x140C3DC1C (EtwpTraceSystemInitialization.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x1404A37D0 (HviIsAnyHypervisorPresent.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
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
