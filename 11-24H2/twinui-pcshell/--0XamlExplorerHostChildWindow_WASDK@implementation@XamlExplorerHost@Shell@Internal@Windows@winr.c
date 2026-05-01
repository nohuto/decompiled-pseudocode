/*
 * XREFs of ??0XamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@_K0AEBUhstring@6@@Z @ 0x180451A44
 * Callers:
 *     ?CreateInstance2@?$produce@UXamlExplorerHostChildWindow_WASDK@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostChildWindow_WASDKFactory@34567@@impl@winrt@@UEAAH_K0PEAXPEAPEAX@Z @ 0x180451ED0 (-CreateInstance2@-$produce@UXamlExplorerHostChildWindow_WASDK@factory_implementation@XamlExplore.c)
 * Callees:
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x1800549EC (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 *     ??0?$implements@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@U134567@UIXamlExplorerHostChildWindow_WASDK2@34567@UIXamlExplorerHostChildWindow_WASDK3@34567@UIXamlExplorerHostChildWindow_WASDK4@34567@UIClosable@Foundation@67@Unon_agile@7@@winrt@@QEAA@XZ @ 0x180451824 (--0-$implements@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Interna.c)
 *     ?Initialize@XamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAAXV?$optional@PEAUHWND__@@@std@@@Z @ 0x1804525CC (-Initialize@XamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Win.c)
 */

// Hidden C++ exception states: #wind=6
winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow_WASDK *__fastcall winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow_WASDK::XamlExplorerHostChildWindow_WASDK(
        winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow_WASDK *this,
        __int64 a2,
        __int64 a3,
        const struct winrt::hstring *a4)
{
  _QWORD *v7; // rcx
  const struct winrt::hstring *v8; // r9
  __int64 v10; // [rsp+20h] [rbp-18h] BYREF
  char v11; // [rsp+28h] [rbp-10h]

  winrt::implements<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow_WASDK,winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostChildWindow_WASDK,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindow_WASDK2,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindow_WASDK3,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindow_WASDK4,winrt::Windows::Foundation::IClosable,winrt::non_agile>::implements<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow_WASDK,winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostChildWindow_WASDK,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindow_WASDK2,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindow_WASDK3,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindow_WASDK4,winrt::Windows::Foundation::IClosable,winrt::non_agile>(this);
  *v7 = &winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow_WASDK::`vftable';
  v7[7] = 0LL;
  v7[8] = 0LL;
  v7[9] = 0LL;
  v7[10] = 0LL;
  winrt::hstring::hstring((winrt::hstring *)(v7 + 11), v8);
  *((_QWORD *)this + 12) = a2;
  *((_BYTE *)this + 104) = 0;
  *((_DWORD *)this + 27) = 0;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  v10 = a3;
  v11 = 1;
  winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow_WASDK::Initialize(
    this,
    &v10);
  return this;
}
