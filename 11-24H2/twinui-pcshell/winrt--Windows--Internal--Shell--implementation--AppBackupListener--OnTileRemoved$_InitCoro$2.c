/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileRemoved$_InitCoro$2 @ 0x180614B58
 * Callers:
 *     ?OnTileRemoved@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@UTileCollection@StartScreen@UI@WindowsUdk@6@UTileRemovedEventArgs@9UI@WindowsUdk@6@@Z @ 0x180614DD0 (-OnTileRemoved@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA-AUfire_and_fo.c)
 * Callees:
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileRemoved$_ResumeCoro$1 @ 0x180614BD0 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--OnTileRemoved$_ResumeCoro$1.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileRemoved__InitCoro_2(
        _DWORD *a1,
        char *a2,
        _BYTE *a3,
        __int64 *a4,
        __int64 *a5,
        __int64 a6)
{
  __int64 v7; // rax
  __int64 v8; // rcx

  *(_QWORD *)(a2 + 113) = a6;
  v7 = *a4;
  *a4 = 0LL;
  *(_QWORD *)(a2 + 121) = v7;
  v8 = *a5;
  *a5 = 0LL;
  *(_QWORD *)(a2 + 129) = v8;
  *(_QWORD *)a2 = winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileRemoved__ResumeCoro_1;
  *((_DWORD *)a2 + 2) = *a1 != 0 ? 2 : 65538;
  *a3 = 0;
  a2[112] = 0;
  return winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileRemoved__ResumeCoro_1(a2);
}
