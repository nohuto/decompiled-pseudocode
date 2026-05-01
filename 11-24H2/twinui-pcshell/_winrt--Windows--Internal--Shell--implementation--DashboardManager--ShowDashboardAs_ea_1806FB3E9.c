/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::DashboardManager::ShowDashboardAsync$_ResumeCoro$1_::_1_::dtor$24 @ 0x1806FB3E9
 * Callers:
 *     <none>
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x180053844 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::ShowDashboardAsync__ResumeCoro_1_::_1_::dtor_24(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 592) = *(_QWORD *)(a2 + 136) + 584LL;
  winrt::handle_type<winrt::impl::hstring_traits>::close(*(volatile signed __int32 ***)(a2 + 592));
}
