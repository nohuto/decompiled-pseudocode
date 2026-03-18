/*
 * XREFs of ?RequiresSessionModeChangeLockShared@DispConfigTypes@@YA_NW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z @ 0x140056264
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1403C5760 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     <none>
 */

bool __fastcall DispConfigTypes::RequiresSessionModeChangeLockShared(int a1)
{
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx

  if ( a1 > 8 )
  {
    v3 = a1 - 9;
    if ( !v3 )
      return 1;
    v4 = v3 - 1;
    if ( !v4 )
      return 1;
    v5 = v4 - 1;
    if ( !v5 )
      return 1;
    v6 = v5 - 4;
    if ( !v6 )
      return 1;
    v7 = v6 - 1;
    if ( !v7 )
      return 1;
    return v7 == 1;
  }
  else
  {
    if ( a1 == 8 || a1 == -40 || a1 == -38 || a1 == -37 || a1 == -27 || a1 == -18 || a1 == -16 )
      return 1;
    return a1 == 7;
  }
}
