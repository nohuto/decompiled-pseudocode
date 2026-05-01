/*
 * XREFs of __lambda_9d9c0f7c90154d0f8adafe78b5b5a9cf_$_ResumeCoro$1::operator()_::_1_::dtor$0 @ 0x1806E2766
 * Callers:
 *     <none>
 * Callees:
 *     ??1timespan_awaiter@impl@winrt@@QEAA@XZ @ 0x18032D458 (--1timespan_awaiter@impl@winrt@@QEAA@XZ.c)
 */

void __fastcall _lambda_9d9c0f7c90154d0f8adafe78b5b5a9cf___ResumeCoro_1::operator()_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 128) = *(_QWORD *)(a2 + 40) + 16LL;
  winrt::impl::timespan_awaiter::~timespan_awaiter(*(winrt::cancellable_promise ***)(a2 + 128));
}
