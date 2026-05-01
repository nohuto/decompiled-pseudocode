/*
 * XREFs of ??1?$unique_storage@U?$resource_policy@PEAUHWND__@@P6AHPEAU1@@Z$1?DestroyWindow@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1800C6F08
 * Callers:
 *     ??1XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x1800C6D34 (--1XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 *     ??1CortanaStoreAppExperienceManager@@EEAA@XZ @ 0x1800C702C (--1CortanaStoreAppExperienceManager@@EEAA@XZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHWND__@@P6AHPEAU1@@Z$1?DestroyWindow@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18023B0DC (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHWND__@@P6AHPEAU1@@Z$1-DestroyWindow@.c)
 *     ?CreateDesktopWallpaperHWND@DesktopWallpaperHelpers@@YAJAEBUCRect@Geometry@@PEAPEAUHWND__@@@Z @ 0x18038F44C (-CreateDesktopWallpaperHWND@DesktopWallpaperHelpers@@YAJAEBUCRect@Geometry@@PEAPEAUHWND__@@@Z.c)
 *     ??1CInsightsExperienceManager@@EEAA@XZ @ 0x1803A6DB0 (--1CInsightsExperienceManager@@EEAA@XZ.c)
 *     ??1SearchAppDesktopExperienceView@@UEAA@XZ @ 0x1803CD9C4 (--1SearchAppDesktopExperienceView@@UEAA@XZ.c)
 *     ??1CortanaDesktopExperienceView@@UEAA@XZ @ 0x1803D70D8 (--1CortanaDesktopExperienceView@@UEAA@XZ.c)
 *     ??1XamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x180454F9C (--1XamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UE.c)
 *     ??1CAppThumbnailWindow@@QEAA@XZ @ 0x18049C430 (--1CAppThumbnailWindow@@QEAA@XZ.c)
 *     ??1AltEscHotkeyHandler@@MEAA@XZ @ 0x1804B8F64 (--1AltEscHotkeyHandler@@MEAA@XZ.c)
 *     ??1WindowDragInputProvider@@UEAA@XZ @ 0x1805BE8AC (--1WindowDragInputProvider@@UEAA@XZ.c)
 *     ??1SharedDesktopBackgroundVisualHost@@UEAA@XZ @ 0x180604BDC (--1SharedDesktopBackgroundVisualHost@@UEAA@XZ.c)
 *     ??$?0V_lambda_3dc309b72a8cc7bcc36dbf196f52b656_@@@?$AsyncOperationCompletedHandler@ULaunchUriResult@System@Windows@winrt@@@Foundation@Windows@winrt@@QEAA@V_lambda_3dc309b72a8cc7bcc36dbf196f52b656_@@@Z @ 0x18061C62C (--$-0V_lambda_3dc309b72a8cc7bcc36dbf196f52b656_@@@-$AsyncOperationCompletedHandler@ULaunchUriRes.c)
 *     ??1_lambda_6b9403a3ca1a595497445348084892d2_@@QEAA@XZ @ 0x180621DAC (--1_lambda_6b9403a3ca1a595497445348084892d2_@@QEAA@XZ.c)
 *     ??1?$implements_delegate@U?$AsyncOperationCompletedHandler@ULaunchUriResult@System@Windows@winrt@@@Foundation@Windows@winrt@@V_lambda_3dc309b72a8cc7bcc36dbf196f52b656_@@@impl@winrt@@QEAA@XZ @ 0x180621E44 (--1-$implements_delegate@U-$AsyncOperationCompletedHandler@ULaunchUriResult@System@Windows@winrt.c)
 *     ?InvokeCopilotOrCustomOption@CopilotHotkeyManager@@QEAA_NW4IMMERSIVE_HOT_KEY_ID@@AEAV?$tip_test@V?$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@@tip2@@@Z @ 0x180625E74 (-InvokeCopilotOrCustomOption@CopilotHotkeyManager@@QEAA_NW4IMMERSIVE_HOT_KEY_ID@@AEAV-$tip_test@.c)
 *     CopilotHotkeyManager::LaunchCustomUriForResultsAsync$_ResumeCoro$1 @ 0x180632B20 (CopilotHotkeyManager--LaunchCustomUriForResultsAsync$_ResumeCoro$1.c)
 *     ?TakeFocusAndHandleInputStream@CopilotHotkeyManager@@AEAAXXZ @ 0x1806350E8 (-TakeFocusAndHandleInputStream@CopilotHotkeyManager@@AEAAXXZ.c)
 *     CopilotHotkeyManager::TrySendingCopilotHardwareKeyLongPressSignal$_ResumeCoro$1 @ 0x1806359B0 (CopilotHotkeyManager--TrySendingCopilotHardwareKeyLongPressSignal$_ResumeCoro$1.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall wil::details::unique_storage<wil::details::resource_policy<HWND__ *,int (*)(HWND__ *),&int DestroyWindow(HWND__ *),wistd::integral_constant<unsigned __int64,0>,HWND__ *,HWND__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HWND__ *,int (*)(HWND__ *),&int DestroyWindow(HWND__ *),wistd::integral_constant<unsigned __int64,0>,HWND__ *,HWND__ *,0,std::nullptr_t>>(
        HWND *a1)
{
  HWND v1; // rcx
  BOOL result; // eax

  v1 = *a1;
  if ( v1 )
    return DestroyWindow(v1);
  return result;
}
