/*
 * XREFs of ?OnTileChanged@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@UTile@StartScreen@UI@WindowsUdk@6@UTileChangedEventArgs@9UI@WindowsUdk@6@@Z @ 0x180614AD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileChanged$_InitCoro$2 @ 0x180614868 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--OnTileChanged$_InitCoro$2.c)
 */

// Hidden C++ exception states: #wind=2
_BYTE *__fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileChanged(
        __int64 a1,
        _BYTE *a2,
        __int64 *a3,
        __int64 *a4)
{
  char *v8; // rax
  int v10; // [rsp+F8h] [rbp+10h] BYREF
  __int64 *v11; // [rsp+100h] [rbp+18h]
  __int64 *v12; // [rsp+108h] [rbp+20h]

  v12 = a4;
  v11 = a3;
  v8 = (char *)operator new(0x90uLL);
  v10 = 0;
  winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileChanged__InitCoro_2(
    &v10,
    v8,
    a2,
    a3,
    a4,
    a1);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)a3);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)a4);
  return a2;
}
