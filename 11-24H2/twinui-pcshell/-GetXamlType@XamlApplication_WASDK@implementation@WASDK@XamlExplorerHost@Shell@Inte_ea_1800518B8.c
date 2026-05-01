/*
 * XREFs of ?GetXamlType@XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA?AUIXamlType@Markup@Xaml@UI@Microsoft@8@AEBUTypeName@Interop@Xaml@UI@78@@Z @ 0x1800518B8
 * Callers:
 *     ?GetXamlType@?$produce@UXamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlMetadataProvider@Markup@Xaml@UI@Microsoft@8@@impl@winrt@@UEAAHUstruct_Windows_UI_Xaml_Interop_TypeName@23@PEAPEAX@Z @ 0x180051860 (-GetXamlType@-$produce@UXamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Intern.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180051814 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800C6394 (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?GetXamlType@?$consume_Microsoft_UI_Xaml_Markup_IXamlMetadataProvider@UIXamlMetadataProvider@Markup@Xaml@UI@Microsoft@winrt@@@impl@winrt@@QEBA@AEBUTypeName@Interop@Xaml@UI@Windows@3@@Z @ 0x1801E7E8C (-GetXamlType@-$consume_Microsoft_UI_Xaml_Markup_IXamlMetadataProvider@UIXamlMetadat_ea_1801E7E8C.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::implementation::XamlApplication_WASDK::GetXamlType(
        RTL_SRWLOCK *a1,
        __int64 *a2,
        __int64 a3)
{
  RTL_SRWLOCK *v6; // rsi
  DWORD LastError; // ebx
  __int64 *XamlType; // rax
  _QWORD v10[2]; // [rsp+28h] [rbp-50h] BYREF
  RTL_SRWLOCK *v11; // [rsp+38h] [rbp-40h]

  v10[1] = a2;
  v6 = a1 + 9;
  AcquireSRWLockExclusive(a1 + 9);
  v11 = v6;
  winrt::impl::consume_Microsoft_UI_Xaml_Markup_IXamlMetadataProvider<winrt::Microsoft::UI::Xaml::Markup::IXamlMetadataProvider>::GetXamlType(
    &a1[7],
    a2,
    a3);
  if ( v6 )
  {
    LastError = GetLastError();
    ReleaseSRWLockExclusive(v6);
    SetLastError(LastError);
  }
  v11 = 0LL;
  v10[0] = 0LL;
  if ( (unsigned __int8)winrt::Windows::Foundation::operator==(a2, v10) )
  {
    XamlType = (__int64 *)winrt::impl::consume_Microsoft_UI_Xaml_Markup_IXamlMetadataProvider<winrt::Microsoft::UI::Xaml::Markup::IXamlMetadataProvider>::GetXamlType(
                            &a1[6],
                            v10,
                            a3);
    winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=(a2, XamlType);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v10);
  }
  return a2;
}
