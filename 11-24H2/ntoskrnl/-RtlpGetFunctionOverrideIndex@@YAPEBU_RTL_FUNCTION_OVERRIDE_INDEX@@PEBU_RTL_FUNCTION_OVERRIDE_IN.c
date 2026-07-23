/*
 * XREFs of ?RtlpGetFunctionOverrideIndex@@YAPEBU_RTL_FUNCTION_OVERRIDE_INDEX@@PEBU_RTL_FUNCTION_OVERRIDE_INFORMATION@@K@Z @ 0x14093C208
 * Callers:
 *     RtlApplyFunctionOverrideFixups @ 0x14093BF84 (RtlApplyFunctionOverrideFixups.c)
 * Callees:
 *     ?terminate@details@gsl@@YAXXZ @ 0x1404F6240 (-terminate@details@gsl@@YAXXZ.c)
 */

const struct _RTL_FUNCTION_OVERRIDE_INDEX *__fastcall RtlpGetFunctionOverrideIndex(
        const struct _RTL_FUNCTION_OVERRIDE_INFORMATION *a1,
        __int64 a2)
{
  unsigned int v2; // r8d
  unsigned int v3; // eax
  __int64 v4; // r10
  unsigned int v5; // eax

  v2 = *((_DWORD *)a1 + 8);
  if ( (unsigned int)a2 < v2 )
    return 0LL;
  v3 = *((_DWORD *)a1 + 9);
  if ( (unsigned int)a2 > v3 )
    return 0LL;
  v4 = *((_QWORD *)a1 + 3);
  v5 = v3 - v2 + 1;
  if ( !v4 && v5 || (a2 = (unsigned int)a2 - v2, (unsigned int)a2 >= (unsigned __int64)v5) )
  {
    gsl::details::terminate(a1, a2);
    __debugbreak();
  }
  return *(const struct _RTL_FUNCTION_OVERRIDE_INDEX **)(v4 + 8 * a2);
}
