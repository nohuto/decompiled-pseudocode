/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$1_PinManagerTelemetry::PinManagerRequestPinItem__::_1_::dtor$21 @ 0x18024DF1A
 * Callers:
 *     <none>
 * Callees:
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x1800BAF48 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync__ResumeCoro_1_PinManagerTelemetry::PinManagerRequestPinItem__::_1_::dtor_21(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 320) = *(_QWORD *)(a2 + 72) + 864LL;
  wil::ActivityThreadWatcher::~ActivityThreadWatcher(*(wil::ActivityThreadWatcher **)(a2 + 320));
}
