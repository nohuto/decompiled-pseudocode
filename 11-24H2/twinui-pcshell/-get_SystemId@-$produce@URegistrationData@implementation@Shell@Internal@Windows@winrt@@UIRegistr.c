/*
 * XREFs of ?get_SystemId@?$produce@URegistrationData@implementation@Shell@Internal@Windows@winrt@@UIRegistrationData@3456@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1806614E0
 * Callers:
 *     <none>
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x180053844 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x1800549EC (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::RegistrationData,winrt::Windows::Internal::Shell::IRegistrationData>::get_SystemId(
        __int64 a1,
        volatile signed __int32 **a2)
{
  __int64 v3; // rdx
  volatile signed __int32 *v4; // rax
  volatile signed __int32 *v6; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v3 = a1 + 8;
  if ( !a1 )
    v3 = 24LL;
  winrt::hstring::hstring((winrt::hstring *)&v6, (const struct winrt::hstring *)v3);
  v4 = v6;
  v6 = 0LL;
  *a2 = v4;
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v6);
  return 0LL;
}
