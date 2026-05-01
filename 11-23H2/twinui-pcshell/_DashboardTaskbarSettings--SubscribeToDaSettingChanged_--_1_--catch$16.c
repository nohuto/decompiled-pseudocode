/*
 * XREFs of _DashboardTaskbarSettings::SubscribeToDaSettingChanged_::_1_::catch$16 @ 0x1802C58D9
 * Callers:
 *     <none>
 * Callees:
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180176DC4 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 */

__int64 __fastcall DashboardTaskbarSettings::SubscribeToDaSettingChanged_::_1_::catch_16(__int64 a1, __int64 a2)
{
  winrt::Windows::Foundation::IUnknown *v2; // rbx

  v2 = *(winrt::Windows::Foundation::IUnknown **)(a2 + 80);
  *(_QWORD *)v2 = 0LL;
  winrt::Windows::Foundation::IUnknown::add_ref(v2);
  *((_QWORD *)v2 + 1) = 0LL;
  return 0LL;
}
