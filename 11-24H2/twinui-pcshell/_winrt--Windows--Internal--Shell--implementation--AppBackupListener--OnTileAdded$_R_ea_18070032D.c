/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileAdded$_ResumeCoro$1_::_1_::catch$21 @ 0x18070032D
 * Callers:
 *     <none>
 * Callees:
 *     ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x1802DE0D8 (-to_hresult@winrt@@YA-AUhresult@1@XZ.c)
 *     ??$Callback_Error@AEAY0CI@$$CBGUhresult@winrt@@PEBG@CAppBackupListenerTelemetry@@SAXAEAY0CI@$$CBG$$QEAUhresult@winrt@@$$QEAPEBG@Z @ 0x18060F98C (--$Callback_Error@AEAY0CI@$$CBGUhresult@winrt@@PEBG@CAppBackupListenerTelemetry@@SAXAEAY0CI@$$CB.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileAdded__ResumeCoro_1_::_1_::catch_21(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  const WCHAR *v4; // rax
  __int64 *v5; // rbx
  _DWORD *v6; // rax
  __int64 v7; // rcx

  v2 = *(_QWORD *)(a2 + 224);
  v3 = *(_QWORD *)(v2 + 16);
  *(_QWORD *)(a2 + 40) = v3;
  if ( v3 )
  {
    v4 = *(const WCHAR **)(v2 + 16);
    *(_QWORD *)(a2 + 40) = v4;
  }
  else
  {
    v4 = &pvData;
  }
  *(_QWORD *)(v2 + 152) = v4;
  v5 = (__int64 *)(v2 + 152);
  v6 = winrt::to_hresult((_DWORD *)(v2 + 160));
  CAppBackupListenerTelemetry::Callback_Error<unsigned short const (&)[40],winrt::hresult,unsigned short const *>(
    v7,
    v6,
    v5);
  return 0LL;
}
