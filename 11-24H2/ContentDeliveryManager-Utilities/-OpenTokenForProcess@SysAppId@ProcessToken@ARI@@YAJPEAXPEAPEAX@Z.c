/*
 * XREFs of ?OpenTokenForProcess@SysAppId@ProcessToken@ARI@@YAJPEAXPEAPEAX@Z @ 0x180071D9C
 * Callers:
 *     ?GetPackageSidFromProcessHandle@CallerIdentity@@YAJPEAXPEAPEAX@Z @ 0x180071BA8 (-GetPackageSidFromProcessHandle@CallerIdentity@@YAJPEAXPEAPEAX@Z.c)
 *     ?IsProcessAppContainer@CallerIdentity@@YAJPEAXPEA_N@Z @ 0x180071F84 (-IsProcessAppContainer@CallerIdentity@@YAJPEAXPEA_N@Z.c)
 * Callees:
 *     <none>
 */

DWORD __fastcall ARI::ProcessToken::SysAppId::OpenTokenForProcess(HANDLE ProcessHandle, PHANDLE TokenHandle, void **a3)
{
  if ( ProcessHandle == GetCurrentProcess() )
  {
    *TokenHandle = (void *)-4LL;
  }
  else if ( !OpenProcessToken(ProcessHandle, 8u, TokenHandle) )
  {
    return GetLastError();
  }
  return 0;
}
