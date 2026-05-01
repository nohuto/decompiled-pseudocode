/*
 * XREFs of ?put_ShouldConstrainPopupsToWorkArea@?$produce@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostChildWindow_WASDK3@34567@@impl@winrt@@UEAAH_N@Z @ 0x1804537E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800C6394 (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?ShouldConstrainPopupsToWorkArea@?$consume_Microsoft_UI_Xaml_Hosting_IDesktopWindowXamlSource2@UDesktopWindowXamlSource@Hosting@Xaml@UI@Microsoft@winrt@@@impl@winrt@@QEBA@_N@Z @ 0x180452EC0 (-ShouldConstrainPopupsToWorkArea@-$consume_Microsoft_UI_Xaml_Hosting_IDesktopWindow_ea_180452EC0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow_WASDK,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindow_WASDK3>::put_ShouldConstrainPopupsToWorkArea(
        __int64 a1,
        char a2)
{
  __int64 v3; // rbx
  char v4; // al
  __int64 result; // rax
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0LL;
  v3 = a1 + 24;
  if ( !a1 )
    v3 = 56LL;
  v4 = winrt::Windows::Foundation::operator==((void (__fastcall ****)(_QWORD, __int64 *, __int64 *))v3, &v8);
  try
  {
    if ( v4 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x12C,
        (int)"pcshell\\twinui\\xamlexplorerhost\\lib\\XamlExplorerHostChildWindow_WASDK.cpp",
        (const char *)0x8007139FLL,
        v6);
    winrt::impl::consume_Microsoft_UI_Xaml_Hosting_IDesktopWindowXamlSource2<winrt::Microsoft::UI::Xaml::Hosting::DesktopWindowXamlSource>::ShouldConstrainPopupsToWorkArea(
      (__int64 (__fastcall ****)(_QWORD, void *, __int64 *))v3,
      a2);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v8);
  }
  return result;
}
