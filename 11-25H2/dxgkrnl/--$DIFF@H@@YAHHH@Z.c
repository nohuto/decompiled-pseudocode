/*
 * XREFs of ??$DIFF@H@@YAHHH@Z @ 0x14004FCDC
 * Callers:
 *     BmlCompareRegionsWithPivot @ 0x1402C7500 (BmlCompareRegionsWithPivot.c)
 *     BmlCompareSourceModesWithMonitors @ 0x1402C7808 (BmlCompareSourceModesWithMonitors.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DIFF<int>(int a1, int a2)
{
  __int64 result; // rax

  result = (unsigned int)(a1 - a2);
  if ( a1 <= a2 )
    return (unsigned int)(a2 - a1);
  return result;
}
