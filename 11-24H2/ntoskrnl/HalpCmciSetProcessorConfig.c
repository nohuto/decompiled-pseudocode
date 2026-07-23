/*
 * XREFs of HalpCmciSetProcessorConfig @ 0x140478794
 * Callers:
 *     HalpCmciInitProcessor @ 0x140478374 (HalpCmciInitProcessor.c)
 *     HalpDisableCmciOnProcessor @ 0x140541020 (HalpDisableCmciOnProcessor.c)
 * Callees:
 *     HalpGetCpuVendor @ 0x140478774 (HalpGetCpuVendor.c)
 *     HalpCmciSetProcessorConfigIntel @ 0x140478870 (HalpCmciSetProcessorConfigIntel.c)
 *     HalpCmciSetProcessorConfigAMD @ 0x140478970 (HalpCmciSetProcessorConfigAMD.c)
 */

unsigned __int8 HalpCmciSetProcessorConfig()
{
  unsigned __int8 result; // al
  __int64 v1; // r9

  result = HalpGetCpuVendor();
  if ( result == 2 )
    return HalpCmciSetProcessorConfigIntel(v1);
  if ( result == 1 )
    return HalpCmciSetProcessorConfigAMD(v1);
  return result;
}
