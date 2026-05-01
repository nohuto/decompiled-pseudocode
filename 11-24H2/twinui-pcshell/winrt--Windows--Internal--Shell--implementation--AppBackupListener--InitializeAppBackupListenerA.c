/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::AppBackupListener::InitializeAppBackupListenerAsync$_InitCoro$2 @ 0x180613DE8
 * Callers:
 *     ?InitializeAppBackupListenerAsync@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@QEAA?AUfire_and_forget@6@XZ @ 0x1806141EC (-InitializeAppBackupListenerAsync@AppBackupListener@implementation@Shell@Internal@Windows@winrt@.c)
 * Callees:
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::InitializeAppBackupListenerAsync$_ResumeCoro$1 @ 0x180613E40 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--InitializeAppBa_ea_180613E40.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::InitializeAppBackupListenerAsync__InitCoro_2(
        _DWORD *a1,
        char *a2,
        _BYTE *a3,
        __int64 a4)
{
  *(_QWORD *)(a2 + 145) = a4;
  *(_QWORD *)a2 = winrt::Windows::Internal::Shell::implementation::AppBackupListener::InitializeAppBackupListenerAsync__ResumeCoro_1;
  *((_DWORD *)a2 + 2) = *a1 != 0 ? 2 : 65538;
  *a3 = 0;
  a2[144] = 0;
  return winrt::Windows::Internal::Shell::implementation::AppBackupListener::InitializeAppBackupListenerAsync__ResumeCoro_1(a2);
}
