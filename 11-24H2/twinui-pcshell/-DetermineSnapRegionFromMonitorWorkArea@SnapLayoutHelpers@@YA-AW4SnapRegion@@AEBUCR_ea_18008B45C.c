/*
 * XREFs of ?DetermineSnapRegionFromMonitorWorkArea@SnapLayoutHelpers@@YA?AW4SnapRegion@@AEBUCRect@Geometry@@0H@Z @ 0x18008B45C
 * Callers:
 *     ?RuntimeClassInitialize@CSnappedWindow@@QEAAJPEAUIImmersiveMonitor@@PEAUIApplicationView@@@Z @ 0x18008B048 (-RuntimeClassInitialize@CSnappedWindow@@QEAAJPEAUIImmersiveMonitor@@PEAUIApplicationView@@@Z.c)
 *     ?DetermineSnapRegionFromMonitorWorkArea@SnapLayoutHelpers@@YA?AW4SnapRegion@@AEBUCRect@Geometry@@PEAUIImmersiveMonitor@@@Z @ 0x18008B368 (-DetermineSnapRegionFromMonitorWorkArea@SnapLayoutHelpers@@YA-AW4SnapRegion@@AEBUCRect@Geometry@.c)
 *     ?ComputeMigrationInfo@SnapLayoutHelpers@@YA?AU?$pair@UCRect@Geometry@@W4_SHELLSETWINDOWPOS_STATE@@@std@@AEBUCRect@Geometry@@00H@Z @ 0x1805AA114 (-ComputeMigrationInfo@SnapLayoutHelpers@@YA-AU-$pair@UCRect@Geometry@@W4_SHELLSETWINDOWPOS_STATE.c)
 * Callees:
 *     ?AreQuadrantsEnabled@SnapLayoutHelpers@@YA_NXZ @ 0x18008B63C (-AreQuadrantsEnabled@SnapLayoutHelpers@@YA_NXZ.c)
 */

__int64 __fastcall SnapLayoutHelpers::DetermineSnapRegionFromMonitorWorkArea(_DWORD *a1, int *a2, int a3)
{
  int v3; // r15d
  unsigned int v4; // ebx
  int v7; // edi
  _DWORD *v8; // r11
  int v9; // r12d
  SnapLayoutHelpers *v10; // rcx
  int v11; // ebp
  unsigned int v12; // r10d
  unsigned int v13; // edx
  unsigned int v14; // r8d
  int v16; // [rsp+50h] [rbp+8h]

  v3 = a1[2];
  v4 = 0;
  if ( *a1 < v3 && a1[1] < a1[3] )
  {
    v7 = a2[1];
    v8 = a2 + 2;
    v9 = *a2;
    v10 = (SnapLayoutHelpers *)(unsigned int)(2 * a3);
    v11 = a2[3];
    v12 = a3 + *a1 - *a2;
    v16 = a2[2];
    v13 = v3 - v16 + a3;
    v14 = a1[3] - v11 + a3;
    if ( a3 + a1[1] - v7 <= (unsigned int)v10 )
    {
      if ( v12 <= (unsigned int)v10 )
      {
        if ( v13 <= (unsigned int)v10 )
        {
          if ( a1[3] < v11 )
            return 2;
          v8 = a2 + 2;
        }
        if ( v3 < v16 && a1[3] < v11 && v14 > (unsigned int)v10 )
        {
          v4 = 1;
LABEL_15:
          v4 &= -SnapLayoutHelpers::AreQuadrantsEnabled(v10);
          return v4;
        }
      }
      if ( *a1 > v9 && v13 <= (unsigned int)v10 && a1[3] < v11 && v14 > (unsigned int)v10 )
      {
        v4 = 3;
        goto LABEL_15;
      }
      if ( v12 <= (unsigned int)v10 && v3 < *v8 && v14 <= (unsigned int)v10 )
        return 8;
      if ( *a1 <= v9 || v13 > (unsigned int)v10 )
      {
        if ( v14 <= (unsigned int)v10 && v13 > (unsigned int)v10 && v12 > (unsigned int)v10 )
          v4 = 9;
      }
      else if ( v14 <= (unsigned int)v10 )
      {
        return 4;
      }
LABEL_49:
      if ( v4 != 7 )
        return v4;
      goto LABEL_15;
    }
    if ( v14 <= (unsigned int)v10 )
    {
      if ( v12 <= (unsigned int)v10 && v13 <= (unsigned int)v10 && a1[1] > v7 )
        return 6;
      if ( *a1 >= v9 && v13 <= (unsigned int)v10 && a1[1] > v7 )
      {
        v4 = 5;
        goto LABEL_15;
      }
      if ( v12 <= (unsigned int)v10 && v3 < v16 && a1[1] > v7 )
        v4 = 7;
      goto LABEL_49;
    }
    if ( v12 <= (unsigned int)v10 && v13 <= (unsigned int)v10 )
      return 10;
  }
  return v4;
}
