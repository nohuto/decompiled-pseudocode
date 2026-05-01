/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$1_PinManagerTelemetry::PinManagerRequestPinItem__::_1_::dtor$7 @ 0x1806FC752
 * Callers:
 *     <none>
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002AEA8 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync__ResumeCoro_1_PinManagerTelemetry::PinManagerRequestPinItem__::_1_::dtor_7(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 224) = *(_QWORD *)(a2 + 64) + 600LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(*(_QWORD *)(a2 + 224));
}
