/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsync$_InitCoro$2 @ 0x180611C18
 * Callers:
 *     ?BackupAppAsync@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@QEAA?AUfire_and_forget@6@Uhstring@6@00I@Z @ 0x180294FD4 (-BackupAppAsync@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@QEAA-AUfire_and_f.c)
 * Callees:
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsync$_ResumeCoro$1 @ 0x180611CB0 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--BackupAppAsync$_ResumeCoro$1.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsync__InitCoro_2(
        _DWORD *a1,
        char *a2,
        _BYTE *a3,
        __int64 *a4,
        __int64 *a5,
        __int64 *a6,
        int *a7,
        __int64 a8)
{
  int v9; // r10d
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx

  v9 = *a7;
  *(_QWORD *)(a2 + 305) = a8;
  v10 = *a4;
  *a4 = 0LL;
  *(_QWORD *)(a2 + 313) = v10;
  v11 = *a5;
  *a5 = 0LL;
  *(_QWORD *)(a2 + 321) = v11;
  v12 = *a6;
  *a6 = 0LL;
  *(_QWORD *)(a2 + 329) = v12;
  *(_DWORD *)(a2 + 337) = v9;
  *(_QWORD *)a2 = winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsync__ResumeCoro_1;
  *((_DWORD *)a2 + 2) = *a1 != 0 ? 2 : 65538;
  *a3 = 0;
  a2[304] = 0;
  return winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsync__ResumeCoro_1(a2);
}
