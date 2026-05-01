/*
 * XREFs of __lambda_da9f5ee43db59325462f58bbda1cfc4c_$_ResumeCoro$1::operator()_::_1_::dtor$0 @ 0x1806E2701
 * Callers:
 *     <none>
 * Callees:
 *     ??1signal_awaiter@impl@winrt@@QEAA@XZ @ 0x18032D430 (--1signal_awaiter@impl@winrt@@QEAA@XZ.c)
 */

void __fastcall _lambda_da9f5ee43db59325462f58bbda1cfc4c___ResumeCoro_1::operator()_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 88) = *(_QWORD *)(a2 + 40) + 16LL;
  winrt::impl::signal_awaiter::~signal_awaiter(*(winrt::cancellable_promise ***)(a2 + 88));
}
