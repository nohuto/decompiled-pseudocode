/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::CensorTileId @ 0x180104F6C
 * Callers:
 *     ?BackupAppLevelTileAsync@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXUTileId@StartScreen@UI@WindowsUdk@6@Uhstring@6@@Z @ 0x180104AA8 (-BackupAppLevelTileAsync@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXUTi.c)
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileAdded$_ResumeCoro$1 @ 0x1806144F0 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--OnTileAdded$_ResumeCoro$1.c)
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileChanged$_ResumeCoro$1 @ 0x1806148E0 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--OnTileChanged$_ResumeCoro$1.c)
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileRemoved$_ResumeCoro$1 @ 0x180614BD0 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--OnTileRemoved$_ResumeCoro$1.c)
 * Callees:
 *     <none>
 */

LPWSTR __fastcall winrt::Windows::Internal::Shell::implementation::CensorTileId(LPCWSTR pszPath)
{
  __int64 v1; // rbx

  v1 = 0LL;
  if ( pszPath )
  {
    if ( PathIsFileSpecW(pszPath) )
      return (LPWSTR)pszPath;
    else
      return PathFindFileNameW(pszPath);
  }
  return (LPWSTR)v1;
}
