/*
 * XREFs of ?GetGraphicsDeviceNoRef@CDesktopManager@@SAJPEAVCGraphicsDeviceGuard@CGraphicsDeviceManager@@PEAPEAUICompositionGraphicsDevice@Composition@UI@Windows@@@Z @ 0x1800A1270
 * Callers:
 *     ?CreateTextBrush@CDWriteText@@IEAAJPEAPEAUICompositionBrush@Composition@UI@Windows@@@Z @ 0x1800352FC (-CreateTextBrush@CDWriteText@@IEAAJPEAPEAUICompositionBrush@Composition@UI@Windows@@@Z.c)
 *     ?CreateBorderSurface@CCachedBorderBrush@CWindowBorder@@SAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@W4ShadowStyle@2@PEAPEAUICompositionSurface@Composition@UI@Windows@@@Z @ 0x180035CDC (-CreateBorderSurface@CCachedBorderBrush@CWindowBorder@@SAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@.c)
 *     ?EnsureNoiseSurfaceBrush@CAccentAcrylicBlurBehind@@AEAAJXZ @ 0x18004F728 (-EnsureNoiseSurfaceBrush@CAccentAcrylicBlurBehind@@AEAAJXZ.c)
 * Callees:
 *     ?EnsureGraphicsDeviceCreated@CGraphicsDeviceManager@@IEAAJXZ @ 0x18004F61C (-EnsureGraphicsDeviceCreated@CGraphicsDeviceManager@@IEAAJXZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180087E70 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CDesktopManager::GetGraphicsDeviceNoRef(
        struct CGraphicsDeviceManager::CGraphicsDeviceGuard *a1,
        struct Windows::UI::Composition::ICompositionGraphicsDevice **a2)
{
  CGraphicsDeviceManager *v4; // rdi
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (CGraphicsDeviceManager *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 7);
  CIconicAnimatedVisual::OnSizeChanged(a1, (const struct CSecondaryWindowRepresentation *)a2);
  v5 = CGraphicsDeviceManager::EnsureGraphicsDeviceCreated(v4);
  v6 = v5;
  if ( v5 >= 0 )
  {
    *(_QWORD *)a1 = v4;
    v6 = 0;
    *a2 = (struct Windows::UI::Composition::ICompositionGraphicsDevice *)*((_QWORD *)v4 + 6);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5D,
      (__int64)"clientcore\\windows\\dwm\\udwm\\GraphicsDeviceManager.h",
      (const char *)(unsigned int)v5);
  }
  return v6;
}
