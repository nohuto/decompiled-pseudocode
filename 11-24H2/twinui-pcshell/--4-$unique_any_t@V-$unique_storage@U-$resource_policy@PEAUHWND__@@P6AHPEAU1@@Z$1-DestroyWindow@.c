/*
 * XREFs of ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHWND__@@P6AHPEAU1@@Z$1?DestroyWindow@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$T@Z @ 0x1803A6E70
 * Callers:
 *     ?DestroyExperience@CInsightsExperienceManager@@AEAAJXZ @ 0x1803A70B4 (-DestroyExperience@CInsightsExperienceManager@@AEAAJXZ.c)
 *     ?OnEventQueued@CInsightsExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1803A74B0 (-OnEventQueued@CInsightsExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@P.c)
 *     ?SetAltTabWindowVisibility@CortanaStoreAppExperienceManager@@AEAAX_N@Z @ 0x1803A9F44 (-SetAltTabWindowVisibility@CortanaStoreAppExperienceManager@@AEAAX_N@Z.c)
 *     ?Dispose@SearchAppDesktopExperienceView@@UEAAJXZ @ 0x1803CF0F0 (-Dispose@SearchAppDesktopExperienceView@@UEAAJXZ.c)
 *     ?SetExplicitDismissEnabled@SearchAppDesktopExperienceView@@AEAAXE@Z @ 0x1803D2DE4 (-SetExplicitDismissEnabled@SearchAppDesktopExperienceView@@AEAAXE@Z.c)
 *     ?Dispose@CortanaDesktopExperienceView@@UEAAJXZ @ 0x1803D8A40 (-Dispose@CortanaDesktopExperienceView@@UEAAJXZ.c)
 *     ?SetExplicitDimissEnabled@CortanaDesktopExperienceView@@AEAAXE@Z @ 0x1803DD4CC (-SetExplicitDimissEnabled@CortanaDesktopExperienceView@@AEAAXE@Z.c)
 *     ?Uninitialize@CAppThumbnailWindow@@IEAAXXZ @ 0x1804AC278 (-Uninitialize@CAppThumbnailWindow@@IEAAXXZ.c)
 *     ?s_WndProc@CAppThumbnailWindow@@SA_JPEAUHWND__@@I_K_J@Z @ 0x1804AC460 (-s_WndProc@CAppThumbnailWindow@@SA_JPEAUHWND__@@I_K_J@Z.c)
 *     ?XamlHostThreadProc@SharedDesktopBackgroundVisualHost@@AEAAKXZ @ 0x18060DD58 (-XamlHostThreadProc@SharedDesktopBackgroundVisualHost@@AEAAKXZ.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHWND__@@P6AHPEAU1@@Z$1?DestroyWindow@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHWND__@@@Z @ 0x1800C6CD8 (-reset@-$unique_storage@U-$resource_policy@PEAUHWND__@@P6AHPEAU1@@Z$1-DestroyWindow@@YAH0@ZU-$in.c)
 */

HWND *__fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HWND__ *,int (*)(HWND__ *),&int DestroyWindow(HWND__ *),wistd::integral_constant<unsigned __int64,0>,HWND__ *,HWND__ *,0,std::nullptr_t>>>::operator=(
        HWND *a1)
{
  wil::details::unique_storage<wil::details::resource_policy<HWND__ *,int (*)(HWND__ *),&int DestroyWindow(HWND__ *),wistd::integral_constant<unsigned __int64,0>,HWND__ *,HWND__ *,0,std::nullptr_t>>::reset(
    a1,
    0LL);
  return a1;
}
