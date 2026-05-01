/*
 * XREFs of ?Scale@XamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAAXM@Z @ 0x180452CF8
 * Callers:
 *     ?put_Scale@?$produce@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostChildWindow_WASDK2@34567@@impl@winrt@@UEAAHM@Z @ 0x1804537B0 (-put_Scale@-$produce@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@In.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800C6394 (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?OverrideScale@?$consume_Microsoft_UI_Content_IContentSiteBridge@UDesktopChildSiteBridge@Content@UI@Microsoft@winrt@@@impl@winrt@@QEBA@M@Z @ 0x180452744 (-OverrideScale@-$consume_Microsoft_UI_Content_IContentSiteBridge@UDesktopChildSiteBridge@Content.c)
 *     ?SiteBridge@?$consume_Microsoft_UI_Xaml_Hosting_IDesktopWindowXamlSource@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Microsoft@winrt@@@impl@winrt@@QEBA@XZ @ 0x180452F90 (-SiteBridge@-$consume_Microsoft_UI_Xaml_Hosting_IDesktopWindowXamlSource@UIDesktopWindowXamlSour.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow_WASDK::Scale(
        winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow_WASDK *this,
        float a2)
{
  char *v2; // rbx
  int v3; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void (__fastcall ***v5)(_QWORD, __int64 *, __int64 *); // [rsp+40h] [rbp+8h] BYREF
  __int64 v6; // [rsp+50h] [rbp+18h] BYREF

  v5 = 0LL;
  v2 = (char *)this + 56;
  if ( winrt::Windows::Foundation::operator==((void (__fastcall ****)(_QWORD, __int64 *, __int64 *))this + 7, &v5) )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x11A,
      (int)"pcshell\\twinui\\xamlexplorerhost\\lib\\XamlExplorerHostChildWindow_WASDK.cpp",
      (const char *)0x8007139FLL,
      v3);
  winrt::impl::consume_Microsoft_UI_Xaml_Hosting_IDesktopWindowXamlSource<winrt::Microsoft::UI::Xaml::Hosting::IDesktopWindowXamlSource>::SiteBridge(
    v2,
    &v5);
  v6 = 0LL;
  if ( winrt::Windows::Foundation::operator==(&v5, &v6) )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x11D,
      (int)"pcshell\\twinui\\xamlexplorerhost\\lib\\XamlExplorerHostChildWindow_WASDK.cpp",
      (const char *)0x8007139FLL,
      v3);
  winrt::impl::consume_Microsoft_UI_Content_IContentSiteBridge<winrt::Microsoft::UI::Content::DesktopChildSiteBridge>::OverrideScale((__int64 (__fastcall ****)(_QWORD, void *, __int64 *))&v5);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v5);
}
