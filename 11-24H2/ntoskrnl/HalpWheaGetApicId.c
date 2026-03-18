/*
 * XREFs of HalpWheaGetApicId @ 0x1405408B0
 * Callers:
 *     HalpAddMcaToProcessorSpecificSection @ 0x14053E7B8 (HalpAddMcaToProcessorSpecificSection.c)
 *     HalpMcaPopulateErrorData @ 0x14053FB8C (HalpMcaPopulateErrorData.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpWheaGetApicId(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  unsigned int v5; // [rsp+38h] [rbp+10h] BYREF
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  result = 0LL;
  v6 = 0LL;
  v5 = 0;
  if ( HalpHvWheaEnlightenedCpuManager )
  {
    if ( qword_140FC10B8 )
    {
      guard_dispatch_icall_no_overrides(a1, &v6, qword_140FC10B8, a4);
      return v6;
    }
  }
  else
  {
    guard_dispatch_icall_no_overrides(a1, &v5, 0LL, a4);
    return v5;
  }
  return result;
}
