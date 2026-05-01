/*
 * XREFs of ?IsValidRegionForAction@HotkeyHandler@@AEAA_NW4SnapAction@1@W4SnapRegion@@@Z @ 0x1805AF1CC
 * Callers:
 *     ?GetWindowStateIdForAction@HotkeyHandler@@AEAAIW4SnapAction@1@UtagRECT@@PEAUIImmersiveMonitor@@_N@Z @ 0x1805ADF54 (-GetWindowStateIdForAction@HotkeyHandler@@AEAAIW4SnapAction@1@UtagRECT@@PEAUIImmersiveMonitor@@_.c)
 * Callees:
 *     <none>
 */

bool __fastcall HotkeyHandler::IsValidRegionForAction(__int64 a1, int a2, int a3)
{
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v11; // edx
  int v12; // edx
  int v13; // edx
  int v14; // edx
  int v15; // edx

  if ( !a3 )
    return 0;
  if ( a2 > 8 )
  {
    v11 = a2 - 9;
    if ( v11 )
    {
      v12 = v11 - 1;
      if ( !v12 )
        return a3 == 9;
      v13 = v12 - 1;
      if ( !v13 )
        return a3 == 4;
      v14 = v13 - 1;
      if ( v14 )
      {
        v15 = v14 - 1;
        if ( !v15 )
          return a3 == 10;
        if ( v15 != 1 )
          return 0;
        return a3 == 6;
      }
      return a3 == 2;
    }
    return a3 == 8;
  }
  if ( a2 == 8 )
    return a3 == 8;
  v3 = a2 - 1;
  if ( !v3 )
    return a3 == 1;
  v4 = v3 - 1;
  if ( !v4 )
    return a3 == 2;
  v5 = v4 - 1;
  if ( !v5 )
    return a3 == 3;
  v6 = v5 - 1;
  if ( !v6 )
    return a3 == 4;
  v7 = v6 - 1;
  if ( !v7 )
    return a3 == 5;
  v8 = v7 - 1;
  if ( !v8 )
    return a3 == 6;
  if ( v8 == 1 )
    return a3 == 7;
  return 0;
}
