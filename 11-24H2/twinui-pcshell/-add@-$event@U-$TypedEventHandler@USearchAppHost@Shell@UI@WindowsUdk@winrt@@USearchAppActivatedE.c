/*
 * XREFs of ?add@?$event@U?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@USearchAppActivatedEventArgs@2345@@Foundation@Windows@winrt@@@winrt@@QEAA?AUevent_token@2@AEBU?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@USearchAppActivatedEventArgs@2345@@Foundation@Windows@2@@Z @ 0x180247E68
 * Callers:
 *     ?add_Reactivated@?$produce@USearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@UISearchAppHost@3456@@impl@winrt@@UEAAHPEAXPEAUevent_token@3@@Z @ 0x1803C20C0 (-add_Reactivated@-$produce@USearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@UISearchAppH.c)
 * Callees:
 *     ??$make_agile_delegate@U?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@USearchAppActivatedEventArgs@2345@@Foundation@Windows@winrt@@@impl@winrt@@YA?AU?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@USearchAppActivatedEventArgs@2345@@Foundation@Windows@1@AEBU2341@@Z @ 0x1802096E0 (--$make_agile_delegate@U-$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@USearchApp.c)
 *     ?add_agile@?$event@U?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@USearchAppActivatedEventArgs@2345@@Foundation@Windows@winrt@@@winrt@@AEAA?AUevent_token@2@U?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@USearchAppActivatedEventArgs@2345@@Foundation@Windows@2@@Z @ 0x1803D5008 (-add_agile@-$event@U-$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@USearchAppActi.c)
 */

__int64 __fastcall winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::WindowsUdk::UI::Shell::SearchAppActivatedEventArgs>>::add(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 *v5; // rax
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v5 = winrt::impl::make_agile_delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::WindowsUdk::UI::Shell::SearchAppActivatedEventArgs>>(
         &v7,
         a3);
  winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::WindowsUdk::UI::Shell::SearchAppActivatedEventArgs>>::add_agile(
    a1,
    a2,
    v5);
  return a2;
}
