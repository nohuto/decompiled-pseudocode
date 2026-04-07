/*
 * XREFs of ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIExpCompositionProjectedShadow@Composition@UI@Windows@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIExpCompositionProjectedShadow@Composition@UI@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800389E8
 * Callers:
 *     ?CreateBorderSurface@CCachedBorderBrush@CWindowBorder@@SAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@W4ShadowStyle@2@PEAPEAUICompositionSurface@Composition@UI@Windows@@@Z @ 0x180035CDC (-CreateBorderSurface@CCachedBorderBrush@CWindowBorder@@SAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@.c)
 *     ?CreateBorderBrush@CCachedBorderBrush@CWindowBorder@@CAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@W4ShadowStyle@2@PEAV?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@@Z @ 0x180036D38 (-CreateBorderBrush@CCachedBorderBrush@CWindowBorder@@CAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@W4.c)
 *     ?CreateBorderStructure@CWindowBorder@@AEAAJXZ @ 0x180037764 (-CreateBorderStructure@CWindowBorder@@AEAAJXZ.c)
 *     ?Initialize@CSpriteVisual@@UEAAJXZ @ 0x180038AE0 (-Initialize@CSpriteVisual@@UEAAJXZ.c)
 *     ?CreateAndAttachBorderBrush@CWindowBorder@@AEAAJPEAUISpriteVisual@Composition@UI@Windows@@@Z @ 0x180039328 (-CreateAndAttachBorderBrush@CWindowBorder@@AEAAJPEAUISpriteVisual@Composition@UI@Windows@@@Z.c)
 *     ?CreateHostBackdropBrush@UI@WindowsInternal@@YAJPEAUIDCompositionDesktopDevicePartner@@PEAPEAUICompositionBrush@Composition@1Windows@@@Z @ 0x180039D20 (-CreateHostBackdropBrush@UI@WindowsInternal@@YAJPEAUIDCompositionDesktopDevicePartner@@PEAPEAUIC.c)
 *     ?CreateProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJ_K@Z @ 0x180047FD0 (-CreateProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJ_K@Z.c)
 *     ?GetLuminosityOpacityReference@CAccentAcrylicBlurBehind@@AEAAJNPEAPEAU?$IReference@N@Foundation@Windows@@@Z @ 0x18004E694 (-GetLuminosityOpacityReference@CAccentAcrylicBlurBehind@@AEAAJNPEAPEAU-$IReference@N@Foundation@.c)
 *     ?EnsureAcrylicBrushForAccent@CAccentAcrylicBlurBehind@@AEAAJKPEBN@Z @ 0x18004EA18 (-EnsureAcrylicBrushForAccent@CAccentAcrylicBlurBehind@@AEAAJKPEBN@Z.c)
 *     ?InitializeDComp@CAccentAcrylicBlurBehind@@AEAAJXZ @ 0x18004EF14 (-InitializeDComp@CAccentAcrylicBlurBehind@@AEAAJXZ.c)
 *     ?EnsureNoiseSurfaceBrush@CAccentAcrylicBlurBehind@@AEAAJXZ @ 0x18004F728 (-EnsureNoiseSurfaceBrush@CAccentAcrylicBlurBehind@@AEAAJXZ.c)
 *     ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x18008D05C (-CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 *     ?Initialize@CHolographicSlate@@AEAAJQEAUHWND__@@PEAVCVisual@@II@Z @ 0x1800C4798 (-Initialize@CHolographicSlate@@AEAAJQEAUHWND__@@PEAVCVisual@@II@Z.c)
 *     ?ConfigureProjectedShadowScene@UI@WindowsInternal@@YAJPEAUICompositionProjectedShadow@Composition@1Windows@@W4ProjectedShadowSceneType@12@@Z @ 0x1800CAED8 (-ConfigureProjectedShadowScene@UI@WindowsInternal@@YAJPEAUICompositionProjectedShadow@Compositio.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AEC0 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 *__fastcall IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<Windows::UI::Composition::IExpCompositionProjectedShadow>>(
        __int64 *a1)
{
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a1);
  return a1;
}
