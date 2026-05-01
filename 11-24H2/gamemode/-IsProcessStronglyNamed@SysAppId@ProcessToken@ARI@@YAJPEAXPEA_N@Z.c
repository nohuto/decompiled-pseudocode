/*
 * XREFs of ?IsProcessStronglyNamed@SysAppId@ProcessToken@ARI@@YAJPEAXPEA_N@Z @ 0x1800103A8
 * Callers:
 *     ReleaseExclusiveCpuSets @ 0x18000FF40 (ReleaseExclusiveCpuSets.c)
 * Callees:
 *     ?IsStronglyNamed@SysAppId@ProcessToken@ARI@@YAJPEAXPEA_N@Z @ 0x180010444 (-IsStronglyNamed@SysAppId@ProcessToken@ARI@@YAJPEAXPEA_N@Z.c)
 */

__int64 __fastcall ARI::ProcessToken::SysAppId::IsProcessStronglyNamed(HANDLE ProcessHandle, void *a2, bool *a3)
{
  bool *v5; // r8
  DWORD LastError; // ebx
  void *TokenHandle; // [rsp+30h] [rbp+8h] BYREF

  TokenHandle = 0LL;
  if ( ProcessHandle == GetCurrentProcess() )
  {
    TokenHandle = (void *)-4LL;
  }
  else if ( !OpenProcessToken(ProcessHandle, 8u, &TokenHandle) )
  {
    LastError = GetLastError();
    if ( LastError )
      return LastError;
  }
  LastError = ARI::ProcessToken::SysAppId::IsStronglyNamed(TokenHandle, a2, v5);
  if ( TokenHandle != (void *)-4LL )
    CloseHandle(TokenHandle);
  return LastError;
}
