/*
 * XREFs of ?GetSnapRegionAnchorLocations@SnapLayoutHelpers@@YA?AW4SnapRegionAnchorLocations@1@AEBUCRect@Geometry@@0H@Z @ 0x1802B620C
 * Callers:
 *     ?GetRectForRegion@SnapLayoutHelpers@@YAJAEBUCRect@Geometry@@W4SnapLayoutFlags@1@PEAUIImmersiveMonitor@@AEBV?$CCoSimpleArray@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@@@@PEAUtagRECT@@PEAUSMART_FILL_OUTPUT@1@@Z @ 0x18008CA28 (-GetRectForRegion@SnapLayoutHelpers@@YAJAEBUCRect@Geometry@@W4SnapLayoutFlags@1@PEAUIImmersiveMo.c)
 *     ?HandleMigrationRotation@SnapLayoutHelpers@@YA?AU?$pair@UCRect@Geometry@@W4SnapRegion@@@std@@W4SnapRegion@@AEBUCRect@Geometry@@11H@Z @ 0x180214C2C (-HandleMigrationRotation@SnapLayoutHelpers@@YA-AU-$pair@UCRect@Geometry@@W4SnapRegion@@@std@@W4S.c)
 *     ?evaluate@_tip_SnapLauncherTest@@QEAAXXZ @ 0x1805A3CE4 (-evaluate@_tip_SnapLauncherTest@@QEAAXXZ.c)
 *     ??$AdjustRegionsForInitialSnapPosition@V?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@@CSnapAssistControllerBase@@IEAAXPEAUHWND__@@AEAV?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@PEAUIImmersiveMonitor@@@Z @ 0x1805A4468 (--$AdjustRegionsForInitialSnapPosition@V-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@.c)
 *     ?GetOtherQuadrants@SnapLayoutHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveMonitor@@AEAV?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@@Z @ 0x1805AB1F4 (-GetOtherQuadrants@SnapLayoutHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveMonitor@@AEAV-$vect.c)
 *     ?DetermineCurrentSnapState@HotkeyHandler@@AEBA?AW4SnapAction@1@PEAUISnappedWindow@@@Z @ 0x1805AD65C (-DetermineCurrentSnapState@HotkeyHandler@@AEBA-AW4SnapAction@1@PEAUISnappedWindow@@@Z.c)
 *     ?IsWindowVerticallySnapped@HotkeyHandler@@AEBA_NPEAUHWND__@@@Z @ 0x1805AF268 (-IsWindowVerticallySnapped@HotkeyHandler@@AEBA_NPEAUHWND__@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SnapLayoutHelpers::GetSnapRegionAnchorLocations(_DWORD *a1, _DWORD *a2, int a3)
{
  unsigned int v3; // ebx
  BOOL v6; // r9d
  unsigned int v7; // eax
  int v8; // ecx
  unsigned int v9; // eax
  unsigned int v10; // edx
  __int64 result; // rax

  v3 = 2 * a3;
  v6 = a3 + a1[1] - a2[1] <= (unsigned int)(2 * a3);
  v7 = a3 + a1[3] - a2[3];
  v8 = v6 | 4;
  if ( v7 > 2 * a3 )
    v8 = v6;
  v9 = a3 + *a1 - *a2;
  v10 = v8 | 2;
  if ( v9 > v3 )
    v10 = v8;
  result = v10 | 8;
  if ( a3 + a1[2] - a2[2] > v3 )
    return v10;
  return result;
}
