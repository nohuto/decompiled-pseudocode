/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileRemoved$_InitCoro$2 @ 0x18025B7B0
 * Callers:
 *     ?OnTileRemoved@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@UTileCollection@StartScreen@UI@WindowsUdk@6@UTileRemovedEventArgs@9UI@WindowsUdk@6@@Z @ 0x18025BC20 (-OnTileRemoved@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA-AUfire_and_fo.c)
 * Callees:
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileRemoved$_ResumeCoro$1 @ 0x18025B8B0 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--OnTileRemoved$_ResumeCoro$1.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileRemoved_::_5_::_parameters_::_parameters_ @ 0x1806F0534 (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--OnTileRemoved_--_5_--_param.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileRemoved__InitCoro_2(
        __int64 a1,
        _DWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  _DWORD *v7; // r10
  _BYTE *v8; // r11

  winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileRemoved_::_5_::_parameters_::_parameters_(
    (char *)a2 + 118,
    a6,
    a4,
    a5);
  *(_QWORD *)a2 = winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileRemoved__ResumeCoro_1;
  a2[2] = *v7 != 0 ? 2 : 65538;
  *v8 = 0;
  *((_BYTE *)a2 + 117) = 0;
  return winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileRemoved__ResumeCoro_1(a2);
}
