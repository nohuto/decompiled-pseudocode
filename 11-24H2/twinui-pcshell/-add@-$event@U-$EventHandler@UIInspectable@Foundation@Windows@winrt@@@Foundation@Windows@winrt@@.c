/*
 * XREFs of ?add@?$event@U?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@winrt@@QEAA?AUevent_token@2@AEBU?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@2@@Z @ 0x180226AD0
 * Callers:
 *     ?ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NW4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@AEBUhstring@winrt@@W4SearchAppActivationMode@4UI@WindowsUdk@8@PEBG@Z @ 0x1802430DC (-ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NW4ShellExperienceViewFocusOptions@E.c)
 *     ?ConfigurationChanged@GamingPostureConfiguration@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@SA?AUevent_token@7@AEBU?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@67@@Z @ 0x18033A720 (-ConfigurationChanged@GamingPostureConfiguration@implementation@Posture@GamingExperiences@Intern.c)
 *     ?add_NetworkStateChanged@?$produce@UNetworkConnectionUtils@implementation@Shell@Internal@Windows@winrt@@UINetworkConnectionUtils@3456@@impl@winrt@@UEAAHPEAXPEAUevent_token@3@@Z @ 0x1806708C0 (-add_NetworkStateChanged@-$produce@UNetworkConnectionUtils@implementation@Shell@Internal@Windows.c)
 * Callees:
 *     ??$make_agile_delegate@U?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YA?AU?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@1@AEBU2341@@Z @ 0x1802AD9C0 (--$make_agile_delegate@U-$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windo.c)
 *     ?add_agile@?$event@U?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@winrt@@AEAA?AUevent_token@2@U?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@2@@Z @ 0x18033BED4 (-add_agile@-$event@U-$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@w.c)
 */

__int64 __fastcall winrt::event<winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable>>::add(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // rax
  char v7; // [rsp+38h] [rbp+10h] BYREF

  v5 = winrt::impl::make_agile_delegate<winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable>>(
         &v7,
         a3);
  winrt::event<winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable>>::add_agile(
    a1,
    a2,
    v5);
  return a2;
}
