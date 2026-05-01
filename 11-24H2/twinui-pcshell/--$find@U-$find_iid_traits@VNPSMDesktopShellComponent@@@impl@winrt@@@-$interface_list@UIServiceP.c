/*
 * XREFs of ??$find@U?$find_iid_traits@VNPSMDesktopShellComponent@@@impl@winrt@@@?$interface_list@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@UIApplicationViewChangeListener@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@VNPSMDesktopShellComponent@@@12@@Z @ 0x18060EC00
 * Callers:
 *     ??$find@U?$find_iid_traits@VNPSMDesktopShellComponent@@@impl@winrt@@@?$interface_list@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@UIApplicationViewChangeListener@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@VNPSMDesktopShellComponent@@@12@@Z @ 0x18060EBC4 (--$find@U-$find_iid_traits@VNPSMDesktopShellComponent@@@impl@winrt@@@-$interface_list@UIObjectWi.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable,IApplicationViewChangeListener>::find<winrt::impl::find_iid_traits<NPSMDesktopShellComponent>>(
        __int64 *a1)
{
  _QWORD *v1; // rdx
  __int64 v2; // rax
  __int64 v3; // rcx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == winrt::impl::guid_v<IServiceProvider> && v1[1] == 0xFA096000AA003480uLL )
  {
    v2 = *a1;
    v3 = *a1 + 16;
    return v3 & -(__int64)(v2 != 0);
  }
  if ( *v1 == winrt::impl::guid_v<IImmersiveShellComponent> && v1[1] == 0xC45FA8EF5C7AA582uLL )
  {
    v2 = *a1;
    v3 = *a1 + 24;
    return v3 & -(__int64)(v2 != 0);
  }
  return winrt::impl::interface_list<winrt::Windows::Foundation::IInspectable,IApplicationViewChangeListener>::find<winrt::impl::find_iid_traits<NPSMDesktopShellComponent>>(a1);
}
