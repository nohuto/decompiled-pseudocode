/*
 * XREFs of ??0TabTipAdapterPolicy@KeyboardHosting@@QEAA@XZ @ 0x180126B4C
 * Callers:
 *     ??$MakeAndInitialize@VTabTipAdapterPolicy@KeyboardHosting@@V12@AEAUITapInvokeTelemetryDataProvider@TouchKeyboard@Shell@Internal@Windows@winrt@@@Details@WRL@Microsoft@@YAJPEAPEAVTabTipAdapterPolicy@KeyboardHosting@@AEAUITapInvokeTelemetryDataProvider@TouchKeyboard@Shell@Internal@Windows@winrt@@@Z @ 0x18012690C (--$MakeAndInitialize@VTabTipAdapterPolicy@KeyboardHosting@@V12@AEAUITapInvokeTelemetryDataProvid.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800489DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@@2@@Z @ 0x1800C3FB0 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_ea_1800C3FB0.c)
 *     ??0?$map@IUSize@Foundation@Windows@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@@5@@std@@QEAA@XZ @ 0x180126D88 (--0-$map@IUSize@Foundation@Windows@@U-$less@I@std@@V-$allocator@U-$pair@$$CBIUSize@Foundation@Wi.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIShellKeyboardHostingPolicy@Text@Shell@Internal@Windows@@UIDesktopKeyboardHostingPolicy@KeyboardHosting@678@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x180126DC8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@UIShellKeyboardHostingPolicy@Text@Shel.c)
 *     ??0?$map@IURelativePositionOnScreen@KeyboardHosting@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@@4@@std@@QEAA@XZ @ 0x180126E40 (--0-$map@IURelativePositionOnScreen@KeyboardHosting@@U-$less@I@std@@V-$allocator@U-$pair@$$CBIUR.c)
 *     ??0?$map@IV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@@std@@QEAA@XZ @ 0x1802C64C0 (--0-$map@IV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@U-$less@I@2@V-$allocator.c)
 *     ??0MonitorInformation@KeyboardHosting@@QEAA@XZ @ 0x180479ECC (--0MonitorInformation@KeyboardHosting@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=9
KeyboardHosting::TabTipAdapterPolicy *__fastcall KeyboardHosting::TabTipAdapterPolicy::TabTipAdapterPolicy(
        KeyboardHosting::TabTipAdapterPolicy *this)
{
  _QWORD *v2; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Text::IShellKeyboardHostingPolicy,Windows::Internal::Shell::KeyboardHosting::IDesktopKeyboardHostingPolicy,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Text::IShellKeyboardHostingPolicy,Windows::Internal::Shell::KeyboardHosting::IDesktopKeyboardHostingPolicy,Microsoft::WRL::FtmBase>();
  *(_QWORD *)this = &KeyboardHosting::TabTipAdapterPolicy::`vftable'{for `Windows::Internal::Shell::Text::IShellKeyboardHostingPolicy'};
  *((_QWORD *)this + 1) = &KeyboardHosting::TabTipAdapterPolicy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::Internal::Shell::KeyboardHosting::IDesktopKeyboardHostingPolicy,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 2) = &KeyboardHosting::TabTipAdapterPolicy::`vftable'{for `Windows::Internal::Shell::KeyboardHosting::IDesktopKeyboardHostingPolicy'};
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Text::IShellKeyboardHostingPolicy,Windows::Internal::Shell::KeyboardHosting::IDesktopKeyboardHostingPolicy,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  std::map<unsigned int,std::wstring>::map<unsigned int,std::wstring>((char *)this + 72);
  std::map<unsigned int,std::wstring>::map<unsigned int,std::wstring>((char *)this + 88);
  *((_DWORD *)this + 26) = 1000;
  *((_DWORD *)this + 27) = 100000;
  *((_QWORD *)this + 14) = L"LastTipXPositionOnScreen";
  *((_QWORD *)this + 15) = L"LastTipYPositionOnScreen";
  *((_QWORD *)this + 16) = L"LastTipXPositionIsPositive";
  *((_QWORD *)this + 17) = L"LastTipYPositionIsPositive";
  *((_OWORD *)this + 9) = 0LL;
  *((_OWORD *)this + 10) = 0LL;
  *((_OWORD *)this + 11) = 0LL;
  *((_OWORD *)this + 12) = 0LL;
  *((_DWORD *)this + 52) = 0;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  KeyboardHosting::MonitorInformation::MonitorInformation((KeyboardHosting::TabTipAdapterPolicy *)((char *)this + 232));
  KeyboardHosting::MonitorInformation::MonitorInformation((KeyboardHosting::TabTipAdapterPolicy *)((char *)this + 400));
  KeyboardHosting::MonitorInformation::MonitorInformation((KeyboardHosting::TabTipAdapterPolicy *)((char *)this + 568));
  *((_DWORD *)this + 184) = 0;
  *((_QWORD *)this + 93) = 0LL;
  *((_QWORD *)this + 94) = 0LL;
  v2 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x60uLL);
  *v2 = v2;
  v2[1] = v2;
  *((_QWORD *)this + 93) = v2;
  *((_QWORD *)this + 95) = 0LL;
  *((_QWORD *)this + 96) = 0LL;
  *((_QWORD *)this + 97) = 0LL;
  *((_QWORD *)this + 98) = 7LL;
  *((_QWORD *)this + 99) = 8LL;
  *((_DWORD *)this + 184) = 1065353216;
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,winrt::Windows::Internal::Shell::implementation::WindowData>>>>>>::_Assign_grow(
    (__int64)this + 760,
    0x10uLL,
    *((_QWORD *)this + 93));
  *((_QWORD *)this + 100) = 0LL;
  *((_BYTE *)this + 808) = 0;
  *(_QWORD *)((char *)this + 812) = 0LL;
  *((_BYTE *)this + 820) = 0;
  std::map<unsigned int,KeyboardHosting::RelativePositionOnScreen>::map<unsigned int,KeyboardHosting::RelativePositionOnScreen>((char *)this + 824);
  std::map<unsigned int,Windows::Foundation::Size>::map<unsigned int,Windows::Foundation::Size>((char *)this + 840);
  *((_DWORD *)this + 214) = -1;
  *(_QWORD *)((char *)this + 860) = 0LL;
  *((_DWORD *)this + 217) = 0;
  *((_WORD *)this + 436) = 1;
  *((_DWORD *)this + 219) = 1;
  *((_QWORD *)this + 110) = 0LL;
  *((_WORD *)this + 444) = 0;
  *(_QWORD *)((char *)this + 892) = 0LL;
  *((_BYTE *)this + 900) = 0;
  *(_OWORD *)((char *)this + 904) = 0LL;
  *((_DWORD *)this + 230) = 0;
  *((_WORD *)this + 462) = 256;
  *((_OWORD *)this + 58) = 0LL;
  *((_QWORD *)this + 118) = 0LL;
  *((_QWORD *)this + 119) = 7LL;
  *((_WORD *)this + 464) = 0;
  *((_QWORD *)this + 120) = 0LL;
  *((_QWORD *)this + 121) = 0LL;
  *((_QWORD *)this + 122) = 0LL;
  *((_QWORD *)this + 123) = 0LL;
  return this;
}
