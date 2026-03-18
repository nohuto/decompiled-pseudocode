/*
 * XREFs of HalpWheaGetApicId @ 0x14053E080
 * Callers:
 *     HalpAddMcaToProcessorSpecificSection @ 0x14053BF88 (HalpAddMcaToProcessorSpecificSection.c)
 *     HalpMcaPopulateErrorData @ 0x14053D35C (HalpMcaPopulateErrorData.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpWheaGetApicId(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( !HalpHvWheaEnlightenedCpuManager || qword_140FC0918 )
  {
    guard_dispatch_icall_no_overrides(a1);
    return 0LL;
  }
  return result;
}
