/*
 * XREFs of ?AddDrawSolidBackgroundInstructions@CDesktopWindowReplacement@@QEAAJK@Z @ 0x180050F20
 * Callers:
 *     ?CreateDesktopWindowForLogonDesktop@CDesktopManager@@CAH_K@Z @ 0x180050E14 (-CreateDesktopWindowForLogonDesktop@CDesktopManager@@CAH_K@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x180008E50 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180045B50 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Create@CRectangleInstruction@@SAJPEAPEAV1@@Z @ 0x1800510D8 (-Create@CRectangleInstruction@@SAJPEAPEAV1@@Z.c)
 *     ?SetSolidFill@CRectangleInstruction@@QEAAJAEBU_D3DCOLORVALUE@@N@Z @ 0x18005115C (-SetSolidFill@CRectangleInstruction@@QEAAJAEBU_D3DCOLORVALUE@@N@Z.c)
 *     ?IsPPIEdition@@YA_NXZ @ 0x180051268 (-IsPPIEdition@@YA_NXZ.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18009D234 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_AddPPIRectangleInstruction@CDesktopWindowReplacement@@AEAAJKH@Z @ 0x1800B584C (-_AddPPIRectangleInstruction@CDesktopWindowReplacement@@AEAAJKH@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDesktopWindowReplacement::AddDrawSolidBackgroundInstructions(
        CDesktopWindowReplacement *this,
        int a2)
{
  float SystemMetrics; // xmm6_4
  float v4; // xmm7_4
  int v5; // eax
  const char *v6; // r9
  int v7; // eax
  int v8; // eax
  unsigned int LastError; // ebx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // edx
  int v13; // r8d
  __int64 v15; // rdx
  __int64 v16; // rdx
  struct CRenderDataInstruction *v17; // [rsp+20h] [rbp-50h] BYREF
  __int128 v18; // [rsp+28h] [rbp-48h]
  struct _D3DCOLORVALUE v19; // [rsp+38h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  v19.a = FLOAT_1_0;
  v19.r = GammaLUT_sRGB_to_scRGB[(unsigned __int8)a2] / 255.0;
  v19.g = GammaLUT_sRGB_to_scRGB[(unsigned __int64)(unsigned __int16)a2 >> 8] / 255.0;
  v19.b = GammaLUT_sRGB_to_scRGB[BYTE2(a2)] / 255.0;
  v17 = 0LL;
  SystemMetrics = (float)GetSystemMetrics(76);
  *(float *)&v18 = SystemMetrics;
  v4 = (float)GetSystemMetrics(77);
  *((float *)&v18 + 1) = v4;
  v5 = GetSystemMetrics(78);
  if ( !v5 )
  {
    v15 = 77LL;
LABEL_12:
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)v15,
                  (unsigned int)"clientcore\\windows\\dwm\\udwm\\desktopmanager.cpp",
                  v6);
    goto LABEL_9;
  }
  *((float *)&v18 + 2) = (float)v5 + SystemMetrics;
  v7 = GetSystemMetrics(79);
  if ( !v7 )
  {
    v15 = 80LL;
    goto LABEL_12;
  }
  *((float *)&v18 + 3) = (float)v7 + v4;
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v17);
  v8 = CRectangleInstruction::Create(&v17);
  LastError = v8;
  if ( v8 < 0 )
  {
    v16 = 83LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\desktopmanager.cpp",
      (const char *)(unsigned int)v8,
      (int)v17);
    goto LABEL_9;
  }
  *((_OWORD *)v17 + 2) = v18;
  v8 = CRectangleInstruction::SetSolidFill(v17, &v19, 1.0);
  LastError = v8;
  if ( v8 < 0 )
  {
    v16 = 86LL;
    goto LABEL_15;
  }
  v8 = CRenderDataVisual::AddInstruction(this, v17, v10, v11);
  LastError = v8;
  if ( v8 < 0 )
  {
    v16 = 88LL;
    goto LABEL_15;
  }
  if ( IsPPIEdition() )
    CDesktopWindowReplacement::_AddPPIRectangleInstruction(this, v12, v13);
  LastError = 0;
LABEL_9:
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v17);
  return LastError;
}
