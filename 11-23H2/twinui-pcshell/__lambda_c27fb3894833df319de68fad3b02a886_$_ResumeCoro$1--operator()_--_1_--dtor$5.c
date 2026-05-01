/*
 * XREFs of __lambda_c27fb3894833df319de68fad3b02a886_$_ResumeCoro$1::operator()_::_1_::dtor$5 @ 0x1802773B2
 * Callers:
 *     <none>
 * Callees:
 *     ??1awaitable@?1??resume_after@winrt@@YA@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@QEAA@XZ @ 0x180071960 (--1awaitable@-1--resume_after@winrt@@YA@V-$duration@_JU-$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z.c)
 */

__int64 __fastcall _lambda_c27fb3894833df319de68fad3b02a886___ResumeCoro_1::operator()_::_1_::dtor_5(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 104) = *(_QWORD *)(a2 + 176) + 160LL;
  return `winrt::resume_after'::`2'::awaitable::~awaitable(*(volatile __int64 ***)(a2 + 104));
}
