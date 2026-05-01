/*
 * XREFs of ?QueryInterface@?$produce_base@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@UIDashboardManager@3456@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x18021E7F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce_base<winrt::Windows::Internal::Shell::implementation::DashboardManager,winrt::Windows::Internal::Shell::IDashboardManager,void>::QueryInterface(
        __int64 a1)
{
  __int64 (__fastcall ***v1)(_QWORD); // rcx

  v1 = (__int64 (__fastcall ***)(_QWORD))((a1 - 16) & -(__int64)(a1 != 0));
  return (**v1)(v1);
}
