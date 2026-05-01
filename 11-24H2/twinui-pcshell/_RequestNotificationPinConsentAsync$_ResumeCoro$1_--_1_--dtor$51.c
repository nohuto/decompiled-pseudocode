/*
 * XREFs of _RequestNotificationPinConsentAsync$_ResumeCoro$1_::_1_::dtor$51 @ 0x1806FDCF3
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_639cdbf1b0b4bc5a158a88668f16cd2e_::__lambda_639cdbf1b0b4bc5a158a88668f16cd2e_ @ 0x1805EDB20 (_lambda_639cdbf1b0b4bc5a158a88668f16cd2e_--__lambda_639cdbf1b0b4bc5a158a88668f16cd2e_.c)
 */

void __fastcall RequestNotificationPinConsentAsync__ResumeCoro_1_::_1_::dtor_51(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 400) = *(_QWORD *)(a2 + 48) + 544LL;
  *(_QWORD *)(a2 + 408) = **(_QWORD **)(a2 + 400);
  lambda_639cdbf1b0b4bc5a158a88668f16cd2e_::__lambda_639cdbf1b0b4bc5a158a88668f16cd2e_(*(winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension **)(a2 + 408));
}
