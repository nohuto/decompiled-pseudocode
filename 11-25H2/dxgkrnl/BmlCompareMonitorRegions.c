/*
 * XREFs of BmlCompareMonitorRegions @ 0x1403BF850
 * Callers:
 *     BmlCompareTargetModes @ 0x1402C7B9C (BmlCompareTargetModes.c)
 * Callees:
 *     ?DivideAndRound@@YA_K_K0@Z @ 0x140063148 (-DivideAndRound@@YA_K_K0@Z.c)
 *     BmlCompareModeRegions @ 0x1403BF8C8 (BmlCompareModeRegions.c)
 *     ??$BmlCompareValues@I@@YA?AW4BML_COMPARISON_RESULT@@II@Z @ 0x1403BF90C (--$BmlCompareValues@I@@YA-AW4BML_COMPARISON_RESULT@@II@Z.c)
 */

__int64 __fastcall BmlCompareMonitorRegions(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v5; // rax

  if ( a1 == a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1266;
  }
  result = BmlCompareModeRegions(a1 + 84, a2 + 84);
  if ( !(_DWORD)result )
  {
    DivideAndRound(*(unsigned int *)(a2 + 92), *(unsigned int *)(a2 + 96));
    v5 = DivideAndRound(*(unsigned int *)(a1 + 92), *(unsigned int *)(a1 + 96));
    return BmlCompareValues<unsigned int>(v5);
  }
  return result;
}
