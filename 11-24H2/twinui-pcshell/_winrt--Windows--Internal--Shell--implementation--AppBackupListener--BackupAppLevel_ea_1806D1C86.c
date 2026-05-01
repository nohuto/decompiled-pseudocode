/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppLevelTileAsync_::_1_::dtor$6 @ 0x1806D1C86
 * Callers:
 *     <none>
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppLevelTileAsync_::_1_::dtor_6(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 304) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 304) &= ~2u;
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a2 + 56));
  }
}
