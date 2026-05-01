/*
 * XREFs of ??0SharedDesktopBackgroundVisualHost@@QEAA@PEAUHWND__@@@Z @ 0x1806088E4
 * Callers:
 *     ?GetBackgroundHostForType@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAA_KW4BackgroundIdentifier@34567@_N@Z @ 0x180605334 (-GetBackgroundHostForType@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAA.c)
 * Callees:
 *     ?SHRegGetBOOLWithREGSAM@@YAJPEAUHKEY__@@PEBG1KPEAH@Z @ 0x180112FA4 (-SHRegGetBOOLWithREGSAM@@YAJPEAUHKEY__@@PEBG1KPEAH@Z.c)
 *     ?create@?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@QEAAXW4EventOptions@2@PEBGPEAU_SECURITY_ATTRIBUTES@@PEA_N@Z @ 0x1802BFE34 (-create@-$event_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandl_ea_1802BFE34.c)
 *     ??0?$producers_base@USharedDesktopBackgroundVisualHost@@V?$tuple@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@UISharedDesktopBackgroundVisualWindowProvider@23456@@std@@@impl@winrt@@QEAA@XZ @ 0x1806088A8 (--0-$producers_base@USharedDesktopBackgroundVisualHost@@V-$tuple@UISharedDesktopBackgroundVisual.c)
 */

// Hidden C++ exception states: #wind=17
SharedDesktopBackgroundVisualHost *__fastcall SharedDesktopBackgroundVisualHost::SharedDesktopBackgroundVisualHost(
        SharedDesktopBackgroundVisualHost *this,
        HWND a2)
{
  unsigned int v3; // r9d
  HWND v5; // [rsp+48h] [rbp+10h] BYREF

  v5 = a2;
  winrt::impl::producers_base<SharedDesktopBackgroundVisualHost,std::tuple<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisual,winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisualWindowProvider>>::producers_base<SharedDesktopBackgroundVisualHost,std::tuple<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisual,winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisualWindowProvider>>((_QWORD *)this + 2);
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *((_QWORD *)this + 1) = 1LL;
  *(_QWORD *)this = &SharedDesktopBackgroundVisualHost::`vftable';
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_DWORD *)this + 46) = 0;
  *((_QWORD *)this + 24) = 0LL;
  *((_BYTE *)this + 200) = 0;
  *((_DWORD *)this + 51) = 0;
  *((_WORD *)this + 104) = 0;
  *((_BYTE *)this + 210) = 0;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *((_DWORD *)this + 78) = -1082130432;
  *((_DWORD *)this + 79) = -1082130432;
  *((_WORD *)this + 160) = 256;
  *(_OWORD *)((char *)this + 328) = 0LL;
  *((_QWORD *)this + 41) = 0LL;
  *((_QWORD *)this + 42) = 0LL;
  *(_OWORD *)((char *)this + 344) = 0LL;
  *((_QWORD *)this + 43) = 0LL;
  *((_QWORD *)this + 44) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_BYTE *)this + 320) = 0;
  _create___event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_exception_policy_3__wil__QEAAXW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z(
    (wil::details **)this + 29,
    1,
    0LL);
  LODWORD(v5) = 0;
  SHRegGetBOOLWithREGSAM(
    HKEY_LOCAL_MACHINE,
    L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer",
    L"NoVisualContent",
    v3,
    (int *)&v5);
  *((_BYTE *)this + 321) = (_DWORD)v5 == 0;
  return this;
}
