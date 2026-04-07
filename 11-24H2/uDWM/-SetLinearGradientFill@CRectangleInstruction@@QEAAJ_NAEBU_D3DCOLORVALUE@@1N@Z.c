/*
 * XREFs of ?SetLinearGradientFill@CRectangleInstruction@@QEAAJ_NAEBU_D3DCOLORVALUE@@1N@Z @ 0x180063874
 * Callers:
 *     ?UpdateClientArea@CWindowIconic@@AEAAJXZ @ 0x18000560C (-UpdateClientArea@CWindowIconic@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@VCSolidRectangleInstruction@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18004BB08 (-reset@-$com_ptr_t@VCSolidRectangleInstruction@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Update@CLinearGradientLegacyMilBrushProxy@@QEAAJNAEBUD2D_POINT_2F@@0W4Enum@MilColorInterpolationMode@@W43MilBrushMappingMode@@W43MilGradientSpreadMethod@@PEBUMilGradientStop@@I@Z @ 0x1800639CC (-Update@CLinearGradientLegacyMilBrushProxy@@QEAAJNAEBUD2D_POINT_2F@@0W4Enum@MilColorInterpolatio.c)
 *     ?CreateLinearGradientLegacyMilBrushProxy@CCompositor@@QEAAJPEAPEAVCLinearGradientLegacyMilBrushProxy@@@Z @ 0x1800977D4 (-CreateLinearGradientLegacyMilBrushProxy@CCompositor@@QEAAJPEAPEAVCLinearGradientLegacyMilBrushP.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 */

__int64 __fastcall CRectangleInstruction::SetLinearGradientFill(
        CBaseObject **this,
        __int64 a2,
        const struct _D3DCOLORVALUE *a3,
        const struct _D3DCOLORVALUE *a4)
{
  struct CLinearGradientLegacyMilBrushProxy **v4; // rdi
  __int64 v5; // rdx
  int LinearGradientLegacyMilBrushProxy; // eax
  unsigned int v7; // ebx
  struct CLinearGradientLegacyMilBrushProxy *v9; // rcx
  int v10; // eax
  _DWORD v11[2]; // [rsp+50h] [rbp-58h] BYREF
  _QWORD v12[2]; // [rsp+58h] [rbp-50h] BYREF
  __int128 v13; // [rsp+68h] [rbp-40h]
  double v14; // [rsp+78h] [rbp-30h]
  __int128 v15; // [rsp+80h] [rbp-28h]

  v4 = this + 3;
  wil::com_ptr_t<CSolidRectangleInstruction,wil::err_returncode_policy>::reset(this + 2);
  if ( *v4
    || (LinearGradientLegacyMilBrushProxy = CCompositor::CreateLinearGradientLegacyMilBrushProxy(
                                              *((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6),
                                              v4),
        v7 = LinearGradientLegacyMilBrushProxy,
        LinearGradientLegacyMilBrushProxy >= 0) )
  {
    v9 = *v4;
    v11[0] = 0;
    v13 = xmmword_180106B90;
    v11[1] = 1065353216;
    v12[0] = 0LL;
    v12[1] = 0LL;
    v15 = xmmword_180106BA0;
    v14 = DOUBLE_1_0;
    v10 = CLinearGradientLegacyMilBrushProxy::Update(v9, v5, v12, v11);
    v7 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x87u, 0LL);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, LinearGradientLegacyMilBrushProxy, 0x69u, 0LL);
  }
  return v7;
}
