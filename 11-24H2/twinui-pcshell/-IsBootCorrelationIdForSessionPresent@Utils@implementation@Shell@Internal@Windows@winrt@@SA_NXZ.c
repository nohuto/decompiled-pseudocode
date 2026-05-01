/*
 * XREFs of ?IsBootCorrelationIdForSessionPresent@Utils@implementation@Shell@Internal@Windows@winrt@@SA_NXZ @ 0x1806412FC
 * Callers:
 *     ?CopyCorrelationIdForBootUserSession@Utils@implementation@Shell@Internal@Windows@winrt@@SAXXZ @ 0x18063FA80 (-CopyCorrelationIdForBootUserSession@Utils@implementation@Shell@Internal@Windows@winrt@@SAXXZ.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x180053844 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x18005480C (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x180056268 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1801CF810 (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     ??Hwinrt@@YA?AUhstring@0@AEBU10@PEBG@Z @ 0x1802AAA38 (--Hwinrt@@YA-AUhstring@0@AEBU10@PEBG@Z.c)
 */

// Hidden C++ exception states: #wind=2
bool winrt::Windows::Internal::Shell::implementation::Utils::IsBootCorrelationIdForSessionPresent(void)
{
  __int64 *v0; // rax
  winrt::hstring *v1; // rax
  const WCHAR *v2; // rax
  LSTATUS ValueW; // ebx
  volatile signed __int32 *v5; // [rsp+50h] [rbp+8h] BYREF
  volatile signed __int32 *v6; // [rsp+58h] [rbp+10h] BYREF
  HKEY v7; // [rsp+60h] [rbp+18h] BYREF

  v7 = 0LL;
  v0 = (__int64 *)winrt::hstring::hstring(
                    (winrt::hstring *)&v6,
                    L"Software\\Microsoft\\Windows\\RemoteSystemIntegration\\");
  v1 = (winrt::hstring *)winrt::operator+((volatile signed __int32 *)&v5, v0, (__int64)L"SystemId_boot");
  v2 = winrt::hstring::c_str(v1);
  ValueW = RegGetValueW(HKEY_CURRENT_USER, v2, L"CorrelationId", 2u, 0LL, 0LL, 0LL);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v5);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v6);
  wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&v7);
  return ValueW == 0;
}
