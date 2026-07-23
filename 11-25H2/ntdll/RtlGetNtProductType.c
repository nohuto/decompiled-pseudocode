/*
 * XREFs of RtlGetNtProductType @ 0x1800397D0
 * Callers:
 *     SwitchedRtlGetVersion @ 0x180038AB0 (SwitchedRtlGetVersion.c)
 *     RtlGetVersion @ 0x180039460 (RtlGetVersion.c)
 *     RtlpHpInitializePerfPolicies @ 0x180112CD8 (RtlpHpInitializePerfPolicies.c)
 *     RtlpQueryPhysicalMemoryPolicy @ 0x18011C95C (RtlpQueryPhysicalMemoryPolicy.c)
 *     RtlRestoreBootStatusDefaults @ 0x18013FD20 (RtlRestoreBootStatusDefaults.c)
 * Callees:
 *     RtlpGetNtProductTypeFromRegistry @ 0x1800B47FC (RtlpGetNtProductTypeFromRegistry.c)
 */

BOOLEAN __cdecl RtlGetNtProductType(PNT_PRODUCT_TYPE NtProductType)
{
  _DWORD *SharedData; // rax
  BOOLEAN result; // al

  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
  {
    *NtProductType = *((PNT_PRODUCT_TYPE)NtCurrentPeb()->SharedData + 4);
    return 1;
  }
  else if ( MEMORY[0x7FFE0268] )
  {
    *NtProductType = MEMORY[0x7FFE0264];
    return 1;
  }
  else
  {
    result = (int)RtlpGetNtProductTypeFromRegistry() >= 0;
    if ( !result )
      *NtProductType = NtProductWinNt;
  }
  return result;
}
