/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::PinManager::PinItemToTaskbarShimAsync$_ResumeCoro$1_::_1_::dtor$2 @ 0x180251170
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$lambda_call@V_lambda_64a0ca36886088acec354edd3b9eaf9e_@@@details@wil@@QEAA@XZ @ 0x18024F750 (--1-$lambda_call@V_lambda_64a0ca36886088acec354edd3b9eaf9e_@@@details@wil@@QEAA@XZ.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::PinManager::PinItemToTaskbarShimAsync__ResumeCoro_1_::_1_::dtor_2(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 168) = *(_QWORD *)(a2 + 112) + 56LL;
  return wil::details::lambda_call<_lambda_64a0ca36886088acec354edd3b9eaf9e_>::~lambda_call<_lambda_64a0ca36886088acec354edd3b9eaf9e_>(*(_QWORD *)(a2 + 168));
}
