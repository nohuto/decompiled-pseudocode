/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::AppBackupListener::RegistryWatcherCallback_::_1_::catch$51 @ 0x1806F5C25
 * Callers:
 *     <none>
 * Callees:
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800B6CE4 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x180390514 (-to_hresult@winrt@@YA-AUhresult@1@XZ.c)
 *     ??$Callback_Error@AEAY0CL@$$CBGUhresult@winrt@@PEBG@CAppBackupListenerTelemetry@@SAXAEAY0CL@$$CBG$$QEAUhresult@winrt@@$$QEAPEBG@Z @ 0x1806EE7B4 (--$Callback_Error@AEAY0CL@$$CBGUhresult@winrt@@PEBG@CAppBackupListenerTelemetry@@SAXAEAY0CL@$$CB.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::RegistryWatcherCallback_::_1_::catch_51(
        __int64 a1,
        __int64 a2)
{
  _DWORD *v3; // rax
  __int64 v4; // rcx

  *(_QWORD *)(a2 + 80) = winrt::hstring::c_str((winrt::hstring *)(a2 + 48));
  v3 = winrt::to_hresult((_DWORD *)(a2 + 184));
  CAppBackupListenerTelemetry::Callback_Error<unsigned short const (&)[43],winrt::hresult,unsigned short const *>(
    v4,
    v3,
    (__int64 *)(a2 + 80));
  return 0LL;
}
