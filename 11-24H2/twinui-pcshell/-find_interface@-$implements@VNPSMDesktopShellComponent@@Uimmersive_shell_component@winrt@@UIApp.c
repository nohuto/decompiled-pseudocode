/*
 * XREFs of ?find_interface@?$implements@VNPSMDesktopShellComponent@@Uimmersive_shell_component@winrt@@UIApplicationViewChangeListener@@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1802046B0
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@U?$find_iid_traits@VNPSMDesktopShellComponent@@@impl@winrt@@@?$interface_list@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@UIApplicationViewChangeListener@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@VNPSMDesktopShellComponent@@@12@@Z @ 0x18060EBC4 (--$find@U-$find_iid_traits@VNPSMDesktopShellComponent@@@impl@winrt@@@-$interface_list@UIObjectWi.c)
 */

__int64 __fastcall winrt::implements<NPSMDesktopShellComponent,winrt::immersive_shell_component,IApplicationViewChangeListener>::find_interface(
        __int64 a1,
        __int64 a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[1] = a2;
  v3[0] = a1 - 40;
  return winrt::impl::interface_list<IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable,IApplicationViewChangeListener>::find<winrt::impl::find_iid_traits<NPSMDesktopShellComponent>>(v3);
}
