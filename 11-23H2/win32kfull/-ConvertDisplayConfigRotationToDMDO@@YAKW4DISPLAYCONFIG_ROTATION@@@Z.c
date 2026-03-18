/*
 * XREFs of ?ConvertDisplayConfigRotationToDMDO@@YAKW4DISPLAYCONFIG_ROTATION@@@Z @ 0x1C0090A58
 * Callers:
 *     ?GetCurrentOrientation@@YAJPEAK@Z @ 0x1C0090894 (-GetCurrentOrientation@@YAJPEAK@Z.c)
 *     ?xxxSmoothRotateScreen@CLegacyRotationMgr@@AEAAJPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@HPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01A7394 (-xxxSmoothRotateScreen@CLegacyRotationMgr@@AEAAJPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@HPEAU_DXGK.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ConvertDisplayConfigRotationToDMDO(int a1)
{
  int v1; // ecx
  int v3; // ecx
  int v4; // ecx

  v1 = a1 - 1;
  if ( !v1 )
    return 0LL;
  v3 = v1 - 1;
  if ( !v3 )
    return 1LL;
  v4 = v3 - 1;
  if ( !v4 )
    return 2LL;
  if ( v4 != 1 )
    return 0LL;
  return 3LL;
}
