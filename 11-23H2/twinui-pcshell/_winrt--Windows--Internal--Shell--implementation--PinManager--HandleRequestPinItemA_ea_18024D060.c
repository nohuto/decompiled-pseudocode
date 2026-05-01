/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$1_PinManagerTelemetry::PinManagerPinItemToTaskbarShim__::_1_::dtor$11 @ 0x18024D060
 * Callers:
 *     <none>
 * Callees:
 *     ??1hstring@winrt@@QEAA@XZ @ 0x1800B498C (--1hstring@winrt@@QEAA@XZ.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync__ResumeCoro_1_PinManagerTelemetry::PinManagerPinItemToTaskbarShim__::_1_::dtor_11(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 224) = *(_QWORD *)(a2 + 72) + 1040LL;
  *(_DWORD *)(a2 + 64) = **(_DWORD **)(a2 + 224);
  if ( (*(_DWORD *)(a2 + 64) & 1) != 0 )
  {
    *(_QWORD *)(a2 + 232) = *(_QWORD *)(a2 + 72) + 1040LL;
    *(_QWORD *)(a2 + 240) = *(_QWORD *)(a2 + 72) + 1040LL;
    *(_DWORD *)(a2 + 64) = **(_DWORD **)(a2 + 240);
    *(_DWORD *)(a2 + 248) = *(_DWORD *)(a2 + 64) & 0xFFFFFFFE;
    **(_DWORD **)(a2 + 232) = *(_DWORD *)(a2 + 248);
    *(_QWORD *)(a2 + 256) = *(_QWORD *)(a2 + 72) + 680LL;
    winrt::hstring::~hstring(*(void ***)(a2 + 256));
  }
}
