/*
 * XREFs of HalpCmciPollProcessor @ 0x14047C788
 * Callers:
 *     HalpCmciDeferredRoutine @ 0x14047BF90 (HalpCmciDeferredRoutine.c)
 *     HalpCmciInitProcessor @ 0x14047C2E4 (HalpCmciInitProcessor.c)
 * Callees:
 *     HalpCmcPollProcessor @ 0x14047C42C (HalpCmcPollProcessor.c)
 *     HalpGetCpuVendor @ 0x14047C6E4 (HalpGetCpuVendor.c)
 *     HalpGetMcaPcrContext @ 0x14047C738 (HalpGetMcaPcrContext.c)
 *     HalpCmciSetProcessorConfigAMD @ 0x14047C8E0 (HalpCmciSetProcessorConfigAMD.c)
 */

__int64 __fastcall HalpCmciPollProcessor(__int64 a1)
{
  unsigned __int8 CpuVendor; // di
  __int64 v3; // rdx
  __int64 McaPcrContext; // rax
  __int64 v5; // rdx
  __int64 result; // rax

  CpuVendor = HalpGetCpuVendor();
  McaPcrContext = HalpGetMcaPcrContext(a1, v3);
  LOBYTE(v5) = 1;
  result = HalpCmcPollProcessor(*(_QWORD *)(McaPcrContext + 16), v5, a1, McaPcrContext);
  if ( CpuVendor == 1 )
    return HalpCmciSetProcessorConfigAMD(HalpCmcErrorSource);
  return result;
}
