/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileRemoved$_ResumeCoro$1_::_1_::catch$15 @ 0x18025BB84
 * Callers:
 *     <none>
 * Callees:
 *     ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x180390514 (-to_hresult@winrt@@YA-AUhresult@1@XZ.c)
 *     ??$Callback_Error@AEAY0CK@$$CBGUhresult@winrt@@PEBG@CAppBackupListenerTelemetry@@SAXAEAY0CK@$$CBG$$QEAUhresult@winrt@@$$QEAPEBG@Z @ 0x1806EE704 (--$Callback_Error@AEAY0CK@$$CBGUhresult@winrt@@PEBG@CAppBackupListenerTelemetry@@SAXAEAY0CK@$$CB.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileRemoved__ResumeCoro_1_::_1_::catch_15(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  const WCHAR *v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rax

  v2 = *(_QWORD *)(a2 + 160);
  v3 = *(_QWORD *)(v2 + 16);
  *(_QWORD *)(a2 + 168) = v3;
  if ( v3 )
  {
    v4 = *(const WCHAR **)(v2 + 16);
    *(_QWORD *)(a2 + 168) = v4;
  }
  else
  {
    v4 = &LocaleName;
  }
  *(_QWORD *)(v2 + 104) = v4;
  v5 = v2 + 104;
  v6 = winrt::to_hresult(v2 + 112);
  CAppBackupListenerTelemetry::Callback_Error<unsigned short const (&)[42],winrt::hresult,unsigned short const *>(
    L"OnTileRemoved callback failed with error.",
    v6,
    v5);
  return 0LL;
}
