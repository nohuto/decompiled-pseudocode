/*
 * XREFs of HviGetHypervisorFeatures @ 0x140663AB0
 * Callers:
 *     HvlGetSystemPasidCapabilities @ 0x1405871E0 (HvlGetSystemPasidCapabilities.c)
 *     HvlpTryConfigureInterface @ 0x14058B81C (HvlpTryConfigureInterface.c)
 *     HvlpDetermineEnlightenments @ 0x14058B9FC (HvlpDetermineEnlightenments.c)
 *     KiDetectHardwareSpecControlFeatures @ 0x1405BD814 (KiDetectHardwareSpecControlFeatures.c)
 *     HviIsKernelApertureAvailable @ 0x1406042FC (HviIsKernelApertureAvailable.c)
 *     HviGetIptFeatures @ 0x140663C28 (HviGetIptFeatures.c)
 *     SpcIsHyperVCr3RspErrataPresent @ 0x1406A0A64 (SpcIsHyperVCr3RspErrataPresent.c)
 *     HvlQueryDetailInfo @ 0x14070E95C (HvlQueryDetailInfo.c)
 *     RtlpInitFunctionOverrideCapabilities @ 0x14078D6B8 (RtlpInitFunctionOverrideCapabilities.c)
 *     HalpLbrInitialize @ 0x140B50B28 (HalpLbrInitialize.c)
 *     KiInitializeKernel @ 0x140B588B0 (KiInitializeKernel.c)
 *     KiComputeDispatchInterruptCost @ 0x140C27598 (KiComputeDispatchInterruptCost.c)
 *     EtwpTraceSystemInitialization @ 0x140C3DC1C (EtwpTraceSystemInitialization.c)
 * Callees:
 *     HviIsHypervisorMicrosoftCompatible @ 0x140663D48 (HviIsHypervisorMicrosoftCompatible.c)
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
