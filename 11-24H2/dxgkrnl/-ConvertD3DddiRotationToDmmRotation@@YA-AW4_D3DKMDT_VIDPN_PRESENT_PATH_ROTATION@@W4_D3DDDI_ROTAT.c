/*
 * XREFs of ?ConvertD3DddiRotationToDmmRotation@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W4_D3DDDI_ROTATION@@@Z @ 0x1403613A4
 * Callers:
 *     ?PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@I_KPEAU_DXGK_DISPLAYMODE_INFO@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@EEPEAPEAU2@@Z @ 0x140362970 (-PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall ConvertD3DddiRotationToDmmRotation(enum _D3DDDI_ROTATION a1)
{
  __int64 v2; // rbx

  switch ( a1 )
  {
    case D3DDDI_ROTATION_IDENTITY:
      return 1LL;
    case D3DDDI_ROTATION_90:
      return 2LL;
    case D3DDDI_ROTATION_180:
      return 3LL;
    case D3DDDI_ROTATION_270:
      return 4LL;
  }
  v2 = a1;
  WdLogSingleEntry1(2LL, a1);
  WdLogGlobalForLineNumber = 4012;
  DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Unknown orientation %I64d", v2, 0LL, 0LL, 0LL, 0LL);
  return 255LL;
}
