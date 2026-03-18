/*
 * XREFs of ??$DIFF@H@@YAHHH@Z @ 0x14004F75C
 * Callers:
 *     BmlCompareRegionsWithPivot @ 0x1402DDCA8 (BmlCompareRegionsWithPivot.c)
 *     BmlCompareSourceModesWithMonitors @ 0x1402DE6EC (BmlCompareSourceModesWithMonitors.c)
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
