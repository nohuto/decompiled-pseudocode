/*
 * XREFs of ?IsRemoteDesktopProviderApp@RemoteDesktopProviderPackageUninstallHandler@implementation@Shell@Internal@Windows@winrt@@AEAA_NAEBUhstring@6@@Z @ 0x1806615F0
 * Callers:
 *     _lambda_b77cff33db7c166167279fbdb5843ce7_::operator() @ 0x180285054 (_lambda_b77cff33db7c166167279fbdb5843ce7_--operator().c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x180053844 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x180056268 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAUHKEY__@@XZ @ 0x1800F2248 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1801CF810 (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     ??Hwinrt@@YA?AUhstring@0@AEBU10@0@Z @ 0x1802A350C (--Hwinrt@@YA-AUhstring@0@AEBU10@0@Z.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall winrt::Windows::Internal::Shell::implementation::RemoteDesktopProviderPackageUninstallHandler::IsRemoteDesktopProviderApp(
        winrt::Windows::Internal::Shell::implementation::RemoteDesktopProviderPackageUninstallHandler *this,
        const struct winrt::hstring *a2)
{
  HKEY *v3; // rbx
  winrt::hstring *v4; // rax
  const WCHAR *v5; // rax
  HKEY v7; // [rsp+30h] [rbp+8h] BYREF
  volatile signed __int32 *v8; // [rsp+40h] [rbp+18h] BYREF

  v7 = 0LL;
  v3 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::put(&v7);
  v4 = (winrt::hstring *)winrt::operator+(
                           (volatile signed __int32 *)&v8,
                           &c_remoteSystemAvailabilityRegPath,
                           (__int64 *)a2);
  v5 = winrt::hstring::c_str(v4);
  LODWORD(v3) = RegOpenKeyW(HKEY_CURRENT_USER, v5, v3);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v8);
  wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&v7);
  return (_DWORD)v3 == 0;
}
