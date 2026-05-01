/*
 * XREFs of ?Release@?$implements@USearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@U13456@UISearchAppHost2@3456@UISearchAppHost3@3456@UISearchAppHost4@3456@UISearchAppHost5@3456@@winrt@@QEAAKXZ @ 0x1803BE230
 * Callers:
 *     ?Release@?$produce_base@USearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@UISearchAppHost@3456@X@impl@winrt@@UEAAIXZ @ 0x1801E9610 (-Release@-$produce_base@USearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@UISearchAppHost.c)
 *     ?Release@?$produce_base@USearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@UISearchAppHost2@3456@X@impl@winrt@@UEAAIXZ @ 0x18021DB10 (-Release@-$produce_base@USearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@UI_ea_18021DB10.c)
 *     ?Release@?$produce_base@USearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@UISearchAppHost3@3456@X@impl@winrt@@UEAAIXZ @ 0x1802CF8C0 (-Release@-$produce_base@USearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@UI_ea_1802CF8C0.c)
 *     ?Release@?$produce_base@USearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@UISearchAppHost4@3456@X@impl@winrt@@UEAAIXZ @ 0x1803BE3A0 (-Release@-$produce_base@USearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@UI_ea_1803BE3A0.c)
 * Callees:
 *     ?subtract_final_reference@?$root_implements@URemoteSystemWindowAddedEventArgs@implementation@Shell@Internal@Windows@winrt@@U13456@@impl@winrt@@IEAAIXZ @ 0x1801BCB24 (-subtract_final_reference@-$root_implements@URemoteSystemWindowAddedEventArgs@implementation@She.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::implements<winrt::WindowsUdk::UI::Shell::implementation::SearchAppHost,winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::WindowsUdk::UI::Shell::ISearchAppHost2,winrt::WindowsUdk::UI::Shell::ISearchAppHost3,winrt::WindowsUdk::UI::Shell::ISearchAppHost4,winrt::WindowsUdk::UI::Shell::ISearchAppHost5>::Release(
        _QWORD *a1)
{
  unsigned int v2; // edi

  v2 = winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::RemoteSystemWindowAddedEventArgs,winrt::Windows::Internal::Shell::RemoteSystemWindowAddedEventArgs>::subtract_final_reference((__int64)a1);
  if ( !v2 )
  {
    a1[1] = 1LL;
    if ( a1 )
      (*(void (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
  }
  return v2;
}
