/*
 * XREFs of ??$DIFF@I@@YAIII@Z @ 0x140059144
 * Callers:
 *     BmlCompareTargetModeWithVirtualRefreshRate @ 0x1402DC0F0 (BmlCompareTargetModeWithVirtualRefreshRate.c)
 *     BmlCompareTargetModesWithConstraint @ 0x1402DD6F4 (BmlCompareTargetModesWithConstraint.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DIFF<unsigned int>(unsigned int a1, unsigned int a2)
{
  __int64 result; // rax

  result = a1 - a2;
  if ( a1 <= a2 )
    return a2 - a1;
  return result;
}
