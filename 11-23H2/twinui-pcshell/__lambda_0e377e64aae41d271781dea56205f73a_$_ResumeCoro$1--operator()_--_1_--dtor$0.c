/*
 * XREFs of __lambda_0e377e64aae41d271781dea56205f73a_$_ResumeCoro$1::operator()_::_1_::dtor$0 @ 0x1801FE934
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x180234F54 (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall _lambda_0e377e64aae41d271781dea56205f73a___ResumeCoro_1::operator()_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 40) = *(_QWORD *)(a2 + 64) + 40LL;
  return winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(*(_QWORD *)(a2 + 40));
}
