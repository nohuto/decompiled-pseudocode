/*
 * XREFs of ?XamlContent@XamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA?AUIInspectable@Foundation@67@XZ @ 0x18045558C
 * Callers:
 *     ?get_XamlContent@?$produce@UXamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostWindow_WASDK@34567@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1804558A0 (-get_XamlContent@-$produce@UXamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@I.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetMicrosoftResourceManager@?$consume_Windows_ApplicationModel_Resources_Core_Internal_ISystemResourceManagerStatics@UISystemResourceManagerStatics@Internal@Core@Resources@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800C5F68 (-GetMicrosoftResourceManager@-$consume_Windows_ApplicationModel_Resources_Core_Internal_ISystemR.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800C6394 (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?FailFastIfNotOnCreationThread@XamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1804551CC (-FailFastIfNotOnCreationThread@XamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shel.c)
 */

struct IInspectable __fastcall winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow_WASDK::XamlContent(
        winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow_WASDK *this,
        _QWORD *a2)
{
  __int64 *MicrosoftResourceManager; // rax
  __int64 v5; // rcx
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow_WASDK::FailFastIfNotOnCreationThread(this);
  v9 = 0LL;
  if ( winrt::Windows::Foundation::operator==((void (__fastcall ****)(_QWORD, __int64 *, __int64 *))this + 6, &v9) )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xD2,
      (int)"pcshell\\twinui\\xamlexplorerhost\\lib\\XamlExplorerHostIslandWindow_WASDK.cpp",
      (const char *)0x8007139FLL,
      v7);
  MicrosoftResourceManager = winrt::impl::consume_Windows_ApplicationModel_Resources_Core_Internal_ISystemResourceManagerStatics<winrt::Windows::ApplicationModel::Resources::Core::Internal::ISystemResourceManagerStatics>::GetMicrosoftResourceManager(
                               (__int64 *)this + 6,
                               &v9);
  v5 = *MicrosoftResourceManager;
  *MicrosoftResourceManager = 0LL;
  *a2 = v5;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v9);
  return (struct IInspectable)a2;
}
