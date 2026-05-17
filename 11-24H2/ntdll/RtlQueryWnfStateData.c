/*
 * XREFs of RtlQueryWnfStateData @ 0x180098D40
 * Callers:
 *     <none>
 * Callees:
 *     RtlQueryWnfStateDataWithExplicitScope @ 0x180098D70 (RtlQueryWnfStateDataWithExplicitScope.c)
 */

__int64 __fastcall RtlQueryWnfStateData(int a1, int a2, int a3, __int64 a4, __int64 a5)
{
  return RtlQueryWnfStateDataWithExplicitScope(a1, a2, 0, a3, a4, a5);
}
