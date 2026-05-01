/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::WindowTabHost::DelayedUpdateActivationTimestamp$_ResumeCoro$1_::_1_::dtor$1 @ 0x1806F4275
 * Callers:
 *     <none>
 * Callees:
 *     ??1timespan_awaiter@impl@winrt@@QEAA@XZ @ 0x18032D458 (--1timespan_awaiter@impl@winrt@@QEAA@XZ.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::DelayedUpdateActivationTimestamp__ResumeCoro_1_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 72) = *(_QWORD *)(a2 + 40) + 64LL;
  winrt::impl::timespan_awaiter::~timespan_awaiter(*(winrt::cancellable_promise ***)(a2 + 72));
}
