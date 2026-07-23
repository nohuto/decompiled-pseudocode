/*
 * XREFs of HalpWheaGetApicId @ 0x14053E1B0
 * Callers:
 *     HalpAddMcaToProcessorSpecificSection @ 0x14053C0B8 (HalpAddMcaToProcessorSpecificSection.c)
 *     HalpMcaPopulateErrorData @ 0x14053D48C (HalpMcaPopulateErrorData.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpWheaGetApicId(__int64 a1)
{
  __int64 result; // rax
  unsigned int v2; // [rsp+38h] [rbp+10h] BYREF
  __int64 v3; // [rsp+40h] [rbp+18h] BYREF

  result = 0LL;
  v3 = 0LL;
  v2 = 0;
  if ( HalpHvWheaEnlightenedCpuManager )
  {
    if ( qword_140FC1318 )
    {
      guard_dispatch_icall_no_overrides(a1, &v3);
      return v3;
    }
  }
  else
  {
    guard_dispatch_icall_no_overrides(a1, &v2);
    return v2;
  }
  return result;
}
