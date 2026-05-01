/*
 * XREFs of ?DetermineSnapRegionFromPoint@CustomDragout@SnapLayoutHelpers@@YA?AW4SnapRegion@@AEBUCPoint@Geometry@@AEBUCRect@5@HHHHW4SnapRegionFlags@2@@Z @ 0x1805AA750
 * Callers:
 *     ?GetSnapRegionAndSafetyRectForPoint@CShellSnapComponent@@AEAA?AU?$pair@W4SnapRegion@@UCRect@Geometry@@@std@@AEBUCRect@Geometry@@0AEBUtagPOINT@@_NW4SnapRegionFlags@SnapLayoutHelpers@@@Z @ 0x18059EE24 (-GetSnapRegionAndSafetyRectForPoint@CShellSnapComponent@@AEAA-AU-$pair@W4SnapRegion@@UCRect@Geom.c)
 * Callees:
 *     ?AreQuadrantsEnabled@SnapLayoutHelpers@@YA_NXZ @ 0x18008B63C (-AreQuadrantsEnabled@SnapLayoutHelpers@@YA_NXZ.c)
 */

__int64 __fastcall SnapLayoutHelpers::CustomDragout::DetermineSnapRegionFromPoint(
        SnapLayoutHelpers *a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        int a6)
{
  unsigned int v10; // ebx
  bool v11; // al

  v10 = 0;
  v11 = SnapLayoutHelpers::AreQuadrantsEnabled(a1, (enum _TABLETMODESTATE *)a2);
  if ( *(_DWORD *)a1 > a5 + *(_DWORD *)a2 )
  {
    if ( *(_DWORD *)a1 < *(_DWORD *)(a2 + 8) - a4 )
    {
      if ( *((_DWORD *)a1 + 1) > a6 + *(_DWORD *)(a2 + 4) )
      {
        if ( *((_DWORD *)a1 + 1) >= *(_DWORD *)(a2 + 12) - a3 )
          return 6;
      }
      else
      {
        return 2;
      }
    }
    else if ( v11 )
    {
      if ( *((_DWORD *)a1 + 1) > a6 + *(_DWORD *)(a2 + 4) )
      {
        LOBYTE(v10) = *((_DWORD *)a1 + 1) >= *(_DWORD *)(a2 + 12) - a3;
        v10 += 4;
      }
      else
      {
        return 3;
      }
    }
    else
    {
      return 4;
    }
  }
  else if ( v11 )
  {
    if ( *((_DWORD *)a1 + 1) > a6 + *(_DWORD *)(a2 + 4) )
    {
      LOBYTE(v10) = *((_DWORD *)a1 + 1) < *(_DWORD *)(a2 + 12) - a3;
      v10 += 7;
    }
    else
    {
      return 1;
    }
  }
  else
  {
    return 8;
  }
  return v10;
}
