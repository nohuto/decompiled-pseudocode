/*
 * XREFs of RtlGetNtProductType @ 0x1800AA990
 * Callers:
 *     SwitchedRtlGetVersion @ 0x1800A9C70 (SwitchedRtlGetVersion.c)
 *     RtlGetVersion @ 0x1800AA620 (RtlGetVersion.c)
 *     RtlpHpInitializePerfPolicies @ 0x18010FF68 (RtlpHpInitializePerfPolicies.c)
 *     RtlpQueryPhysicalMemoryPolicy @ 0x18011AF78 (RtlpQueryPhysicalMemoryPolicy.c)
 *     RtlRestoreBootStatusDefaults @ 0x18013E5F0 (RtlRestoreBootStatusDefaults.c)
 * Callees:
 *     RtlpGetNtProductTypeFromRegistry @ 0x18008B86C (RtlpGetNtProductTypeFromRegistry.c)
 */

bool __fastcall RtlGetNtProductType(_DWORD *a1)
{
  _DWORD *SharedData; // rax
  bool result; // al

  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
  {
    *a1 = *((_DWORD *)NtCurrentPeb()->SharedData + 4);
    return 1;
  }
  else if ( MEMORY[0x7FFE0268] )
  {
    *a1 = MEMORY[0x7FFE0264];
    return 1;
  }
  else
  {
    result = (int)RtlpGetNtProductTypeFromRegistry(a1) >= 0;
    if ( !result )
      *a1 = 1;
  }
  return result;
}
