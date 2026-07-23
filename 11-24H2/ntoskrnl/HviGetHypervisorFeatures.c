/*
 * XREFs of HviGetHypervisorFeatures @ 0x1406623A0
 * Callers:
 *     HvlGetSystemPasidCapabilities @ 0x140584560 (HvlGetSystemPasidCapabilities.c)
 *     HvlpTryConfigureInterface @ 0x140588B0C (HvlpTryConfigureInterface.c)
 *     HvlpDetermineEnlightenments @ 0x140588CEC (HvlpDetermineEnlightenments.c)
 *     KiDetectHardwareSpecControlFeatures @ 0x1405BAE44 (KiDetectHardwareSpecControlFeatures.c)
 *     HviIsKernelApertureAvailable @ 0x14060193C (HviIsKernelApertureAvailable.c)
 *     HviGetIptFeatures @ 0x140662518 (HviGetIptFeatures.c)
 *     SpcIsHyperVCr3RspErrataPresent @ 0x1406A1B6C (SpcIsHyperVCr3RspErrataPresent.c)
 *     HvlQueryDetailInfo @ 0x14070C4EC (HvlQueryDetailInfo.c)
 *     RtlpInitFunctionOverrideCapabilities @ 0x14078D5E8 (RtlpInitFunctionOverrideCapabilities.c)
 *     SepSecureBootCorrectBcd @ 0x140793ED4 (SepSecureBootCorrectBcd.c)
 *     NtFilterBootOption @ 0x140AD74D0 (NtFilterBootOption.c)
 *     HalpLbrInitialize @ 0x140B52B78 (HalpLbrInitialize.c)
 *     KiInitializeKernel @ 0x140B5A930 (KiInitializeKernel.c)
 *     KiComputeDispatchInterruptCost @ 0x140C29574 (KiComputeDispatchInterruptCost.c)
 *     EtwpTraceSystemInitialization @ 0x140C3FD6C (EtwpTraceSystemInitialization.c)
 * Callees:
 *     HviIsHypervisorMicrosoftCompatible @ 0x140662638 (HviIsHypervisorMicrosoftCompatible.c)
 */

__int64 __fastcall HviGetHypervisorFeatures(_DWORD *a1)
{
  __int64 result; // rax

  result = HviIsHypervisorMicrosoftCompatible();
  if ( (_BYTE)result )
  {
    _RAX = 1073741827LL;
    __asm { cpuid }
    *a1 = result;
    a1[1] = _RBX;
    a1[2] = _RCX;
    a1[3] = _RDX;
  }
  else
  {
    *(_QWORD *)a1 = 0LL;
    *((_QWORD *)a1 + 1) = 0LL;
  }
  return result;
}
