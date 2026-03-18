/*
 * XREFs of HviGetHypervisorFeatures @ 0x1406577F0
 * Callers:
 *     HvlGetSystemPasidCapabilities @ 0x140583A60 (HvlGetSystemPasidCapabilities.c)
 *     HvlpTryConfigureInterface @ 0x1405881AC (HvlpTryConfigureInterface.c)
 *     HvlpDetermineEnlightenments @ 0x14058838C (HvlpDetermineEnlightenments.c)
 *     KiDetectHardwareSpecControlFeatures @ 0x1405B99C8 (KiDetectHardwareSpecControlFeatures.c)
 *     HviIsKernelApertureAvailable @ 0x1405F7FBC (HviIsKernelApertureAvailable.c)
 *     HviGetIptFeatures @ 0x140657968 (HviGetIptFeatures.c)
 *     SpcIsHyperVCr3RspErrataPresent @ 0x1406956C4 (SpcIsHyperVCr3RspErrataPresent.c)
 *     HvlQueryDetailInfo @ 0x140702A7C (HvlQueryDetailInfo.c)
 *     RtlpInitFunctionOverrideCapabilities @ 0x14077E404 (RtlpInitFunctionOverrideCapabilities.c)
 *     HalpLbrInitialize @ 0x140B40B28 (HalpLbrInitialize.c)
 *     KiInitializeKernel @ 0x140B48920 (KiInitializeKernel.c)
 *     KiComputeDispatchInterruptCost @ 0x140C16508 (KiComputeDispatchInterruptCost.c)
 *     EtwpTraceSystemInitialization @ 0x140C2C93C (EtwpTraceSystemInitialization.c)
 * Callees:
 *     HviIsHypervisorMicrosoftCompatible @ 0x140657A88 (HviIsHypervisorMicrosoftCompatible.c)
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
