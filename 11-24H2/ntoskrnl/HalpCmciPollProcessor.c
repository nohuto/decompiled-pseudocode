/*
 * XREFs of HalpCmciPollProcessor @ 0x140478818
 * Callers:
 *     HalpCmciDeferredRoutine @ 0x140478020 (HalpCmciDeferredRoutine.c)
 *     HalpCmciInitProcessor @ 0x140478374 (HalpCmciInitProcessor.c)
 * Callees:
 *     HalpCmcPollProcessor @ 0x1404784BC (HalpCmcPollProcessor.c)
 *     HalpGetCpuVendor @ 0x140478774 (HalpGetCpuVendor.c)
 *     HalpGetMcaPcrContext @ 0x1404787C8 (HalpGetMcaPcrContext.c)
 *     HalpCmciSetProcessorConfigAMD @ 0x140478970 (HalpCmciSetProcessorConfigAMD.c)
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
