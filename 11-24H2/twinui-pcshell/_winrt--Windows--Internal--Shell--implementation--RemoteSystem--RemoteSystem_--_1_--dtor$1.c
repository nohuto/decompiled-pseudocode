/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::RemoteSystem::RemoteSystem_::_1_::dtor$1 @ 0x180703156
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::RemoteSystem::RemoteSystem_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)(*(_QWORD *)(a2 + 80) + 24LL));
}
