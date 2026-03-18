/*
 * XREFs of ConvertDMMRotationToGdiRotation @ 0x1402C1658
 * Callers:
 *     ?PopulatePublicGdiDisplayModeInfo@VIDPN_MGR@@SAJ_K000W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@QEAU_devicemodeW@@@Z @ 0x1402C2064 (-PopulatePublicGdiDisplayModeInfo@VIDPN_MGR@@SAJ_K000W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x14003B614 (-D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 */

__int64 __fastcall ConvertDMMRotationToGdiRotation(enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION a1)
{
  int v1; // eax
  __int64 v2; // r10
  int v4; // eax
  int v5; // eax
  int v6; // eax
  __int64 v7; // rbx

  v1 = D3DKMDT_VPPR_GET_CONTENT_ROTATION(a1) - 1;
  if ( !v1 )
    return 0LL;
  v4 = v1 - 1;
  if ( !v4 )
    return 1LL;
  v5 = v4 - 1;
  if ( !v5 )
    return 2LL;
  v6 = v5 - 1;
  if ( v6 )
  {
    if ( v6 != 251 )
    {
      v7 = v2;
      WdLogSingleEntry1(2LL, v2);
      WdLogGlobalForLineNumber = 111;
      DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Invalid rotation %I64d", v7, 0LL, 0LL, 0LL, 0LL);
    }
    return 0LL;
  }
  return 3LL;
}
