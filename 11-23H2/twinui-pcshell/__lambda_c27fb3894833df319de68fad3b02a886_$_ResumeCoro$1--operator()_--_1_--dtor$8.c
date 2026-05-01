/*
 * XREFs of __lambda_c27fb3894833df319de68fad3b02a886_$_ResumeCoro$1::operator()_::_1_::dtor$8 @ 0x1802773DB
 * Callers:
 *     <none>
 * Callees:
 *     ??1awaitable@?1??resume_after@winrt@@YA@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@QEAA@XZ @ 0x180071960 (--1awaitable@-1--resume_after@winrt@@YA@V-$duration@_JU-$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z.c)
 */

__int64 __fastcall _lambda_c27fb3894833df319de68fad3b02a886___ResumeCoro_1::operator()_::_1_::dtor_8(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 112) = *(_QWORD *)(a2 + 176) + 256LL;
  return `winrt::resume_after'::`2'::awaitable::~awaitable(*(volatile __int64 ***)(a2 + 112));
}
