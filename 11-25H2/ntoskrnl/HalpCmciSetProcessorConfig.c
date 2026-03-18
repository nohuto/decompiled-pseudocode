/*
 * XREFs of HalpCmciSetProcessorConfig @ 0x14047C704
 * Callers:
 *     HalpCmciInitProcessor @ 0x14047C2E4 (HalpCmciInitProcessor.c)
 *     HalpDisableCmciOnProcessor @ 0x140540EA0 (HalpDisableCmciOnProcessor.c)
 * Callees:
 *     HalpGetCpuVendor @ 0x14047C6E4 (HalpGetCpuVendor.c)
 *     HalpCmciSetProcessorConfigIntel @ 0x14047C7E0 (HalpCmciSetProcessorConfigIntel.c)
 *     HalpCmciSetProcessorConfigAMD @ 0x14047C8E0 (HalpCmciSetProcessorConfigAMD.c)
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
