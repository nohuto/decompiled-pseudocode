/*
 * XREFs of RtlGetNtProductType @ 0x18000BB20
 * Callers:
 *     SwitchedRtlGetVersion @ 0x18000AE00 (SwitchedRtlGetVersion.c)
 *     RtlGetVersion @ 0x18000B7B0 (RtlGetVersion.c)
 *     RtlpHpInitializePerfPolicies @ 0x18010AF48 (RtlpHpInitializePerfPolicies.c)
 *     RtlpQueryPhysicalMemoryPolicy @ 0x1801191A8 (RtlpQueryPhysicalMemoryPolicy.c)
 *     RtlRestoreBootStatusDefaults @ 0x18013C7E0 (RtlRestoreBootStatusDefaults.c)
 * Callees:
 *     RtlpGetNtProductTypeFromRegistry @ 0x1800A732C (RtlpGetNtProductTypeFromRegistry.c)
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
