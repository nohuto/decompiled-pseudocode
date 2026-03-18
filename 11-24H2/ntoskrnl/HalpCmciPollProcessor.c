/*
 * XREFs of HalpCmciPollProcessor @ 0x14047D688
 * Callers:
 *     HalpCmciDeferredRoutine @ 0x14047CE90 (HalpCmciDeferredRoutine.c)
 *     HalpCmciInitProcessor @ 0x14047D1E4 (HalpCmciInitProcessor.c)
 * Callees:
 *     HalpCmcPollProcessor @ 0x14047D32C (HalpCmcPollProcessor.c)
 *     HalpGetCpuVendor @ 0x14047D5E4 (HalpGetCpuVendor.c)
 *     HalpGetMcaPcrContext @ 0x14047D638 (HalpGetMcaPcrContext.c)
 *     HalpCmciSetProcessorConfigAMD @ 0x14047D7E0 (HalpCmciSetProcessorConfigAMD.c)
 */

__int64 __fastcall HalpCmciPollProcessor(__int64 a1)
{
  unsigned __int8 CpuVendor; // di
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 McaPcrContext; // rax
  __int64 v7; // rdx
  __int64 result; // rax

  CpuVendor = HalpGetCpuVendor();
  McaPcrContext = HalpGetMcaPcrContext(a1, v3, v4, v5);
  LOBYTE(v7) = 1;
  result = HalpCmcPollProcessor(*(_QWORD *)(McaPcrContext + 16), v7, a1, McaPcrContext);
  if ( CpuVendor == 1 )
    return HalpCmciSetProcessorConfigAMD(HalpCmcErrorSource);
  return result;
}
