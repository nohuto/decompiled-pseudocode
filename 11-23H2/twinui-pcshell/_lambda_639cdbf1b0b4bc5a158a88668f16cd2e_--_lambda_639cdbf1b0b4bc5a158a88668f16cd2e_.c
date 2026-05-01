/*
 * XREFs of _lambda_639cdbf1b0b4bc5a158a88668f16cd2e_::_lambda_639cdbf1b0b4bc5a158a88668f16cd2e_ @ 0x1806AB2DC
 * Callers:
 *     RequestNotificationPinConsentAsync$_ResumeCoro$1 @ 0x180253800 (RequestNotificationPinConsentAsync$_ResumeCoro$1.c)
 * Callees:
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180176DC4 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 */

__int64 __fastcall lambda_639cdbf1b0b4bc5a158a88668f16cd2e_::_lambda_639cdbf1b0b4bc5a158a88668f16cd2e_(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  *(_QWORD *)a1 = *a2;
  winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)a1);
  *(_QWORD *)(a1 + 8) = *a3;
  winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)(a1 + 8));
  return a1;
}
