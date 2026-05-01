/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsyncWithRetry$_InitCoro$2 @ 0x180258FC8
 * Callers:
 *     ?BackupAppAsyncWithRetry@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@Uhstring@6@@Z @ 0x1802595F0 (-BackupAppAsyncWithRetry@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA-AUf.c)
 * Callees:
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsyncWithRetry$_ResumeCoro$1 @ 0x1802590C0 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--BackupAppAsyncWithRetry$_Res.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsyncWithRetry_::_3_::_parameters_::_parameters_ @ 0x1806F0518 (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--BackupAppAsync_ea_1806F0518.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsyncWithRetry__InitCoro_2(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  _DWORD *v6; // r10
  _BYTE *v7; // r11

  winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsyncWithRetry_::_3_::_parameters_::_parameters_(
    a2 + 305,
    a5,
    a4);
  *(_QWORD *)a2 = winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsyncWithRetry__ResumeCoro_1;
  *(_DWORD *)(a2 + 8) = *v6 != 0 ? 2 : 65538;
  *v7 = 0;
  *(_BYTE *)(a2 + 304) = 0;
  return winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsyncWithRetry__ResumeCoro_1(a2);
}
