/*
 * XREFs of ConvertDMMScalingToGdiScaling @ 0x1402C1574
 * Callers:
 *     ?GetDisplayModeFromPath@DMMVIDPNPRESENTPATH@@QEBAJ_NAEAU_DXGK_DISPLAYMODE_INFO@@@Z @ 0x1402BFFB0 (-GetDisplayModeFromPath@DMMVIDPNPRESENTPATH@@QEBAJ_NAEAU_DXGK_DISPLAYMODE_INFO@@@Z.c)
 *     ?PopulatePublicGdiDisplayModeInfo@VIDPN_MGR@@SAJ_K000W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@QEAU_devicemodeW@@@Z @ 0x1402C2064 (-PopulatePublicGdiDisplayModeInfo@VIDPN_MGR@@SAJ_K000W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W.c)
 *     _BmlGetPathModalityForAdapter @ 0x1402C3BBC (_BmlGetPathModalityForAdapter.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall ConvertDMMScalingToGdiScaling(int a1, _DWORD *a2)
{
  unsigned int v3; // esi

  v3 = 1;
  switch ( a1 )
  {
    case 1:
      goto LABEL_7;
    case 2:
      *a2 = 2;
      return v3;
    case 3:
      *a2 = 1;
      return v3;
    case 4:
    case 5:
    case 255:
LABEL_7:
      *a2 = 0;
      break;
    default:
      WdLogSingleEntry1(3LL, a1);
      WdLogGlobalForLineNumber = 153;
      if ( a1 == 253 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 156;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          0xFFFFFFFFLL,
          L"DmmScaling != D3DKMDT_VPPS_PREFERRED",
          156LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      *a2 = 0;
      return 0;
  }
  return v3;
}
