/*
 * XREFs of ?HasComplementaryHorizontalEdge@SnapLayoutHelpers@@YA_NW4SnapRegionAnchorLocations@1@0PEAW4Edge@1@@Z @ 0x1805AC130
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall SnapLayoutHelpers::HasComplementaryHorizontalEdge(char a1, char a2, int *a3)
{
  int v3; // r9d

  if ( a3 )
    *a3 = 0;
  v3 = 0;
  if ( (a1 & 5) != 5 && (a2 & 5) != 5 )
  {
    if ( (a1 & 1) != 0 && (a2 & 1) == 0 )
    {
      v3 = 1;
    }
    else if ( (a1 & 4) != 0 && (a2 & 4) == 0 )
    {
      v3 = 4;
    }
  }
  if ( a3 )
    *a3 = v3;
  return v3 != 0;
}
