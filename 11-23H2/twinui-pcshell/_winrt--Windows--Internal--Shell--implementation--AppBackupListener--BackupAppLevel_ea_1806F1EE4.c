/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppLevelTileAsync_::_1_::catch$64 @ 0x1806F1EE4
 * Callers:
 *     <none>
 * Callees:
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800B6CE4 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ??$AppLevelTileBackup_Error@AEAY0CJ@$$CBGHPEAGPEBG@CAppBackupListenerTelemetry@@SAXAEAY0CJ@$$CBG$$QEAH$$QEAPEAG$$QEAPEBG@Z @ 0x1806EE3B0 (--$AppLevelTileBackup_Error@AEAY0CJ@$$CBGHPEAGPEBG@CAppBackupListenerTelemetry@@SAXAEAY0CJ@$$CBG.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppLevelTileAsync_::_1_::catch_64(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rcx

  *(_QWORD *)(a2 + 72) = winrt::hstring::c_str(*(winrt::hstring **)(a2 + 320));
  *(_QWORD *)(a2 + 48) = *(_QWORD *)(a2 + 56);
  v3 = *(unsigned int *)(*(_QWORD *)(a2 + 136) + 12LL);
  *(_DWORD *)(a2 + 304) = v3;
  CAppBackupListenerTelemetry::AppLevelTileBackup_Error<unsigned short const (&)[41],int,unsigned short *,unsigned short const *>(
    v3,
    (_DWORD *)(a2 + 304),
    (__int64 *)(a2 + 48),
    (__int64 *)(a2 + 72));
  return 0LL;
}
