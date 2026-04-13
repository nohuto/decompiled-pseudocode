/*
 * XREFs of ?IsProcessAppContainer@CallerIdentity@@YAJPEAXPEA_N@Z @ 0x180071F84
 * Callers:
 *     ?IsCallerInAllowedAppList@LockScreenCategoryConfig@CreativeFramework@@YAJPEBQEBGH@Z @ 0x180033EE4 (-IsCallerInAllowedAppList@LockScreenCategoryConfig@CreativeFramework@@YAJPEBQEBGH@Z.c)
 * Callees:
 *     ?OpenTokenForProcess@SysAppId@ProcessToken@ARI@@YAJPEAXPEAPEAX@Z @ 0x180071D9C (-OpenTokenForProcess@SysAppId@ProcessToken@ARI@@YAJPEAXPEAPEAX@Z.c)
 *     ?ResultFromWin32Bool@@YAJH@Z @ 0x180072038 (-ResultFromWin32Bool@@YAJH@Z.c)
 */

__int64 __fastcall CallerIdentity::IsProcessAppContainer(CallerIdentity *this, bool *a2, void **a3)
{
  signed int v4; // eax
  signed int v5; // ebx
  BOOL v6; // eax
  char *v7; // rcx
  int TokenInformation; // [rsp+48h] [rbp+10h] BYREF
  DWORD ReturnLength; // [rsp+50h] [rbp+18h] BYREF
  HANDLE TokenHandle; // [rsp+58h] [rbp+20h] BYREF

  TokenHandle = 0LL;
  *a2 = 0;
  v4 = ARI::ProcessToken::SysAppId::OpenTokenForProcess(this, &TokenHandle, a3);
  v5 = v4;
  if ( v4 > 0 )
    v5 = (unsigned __int16)v4 | 0x80070000;
  if ( v5 >= 0 )
  {
    ReturnLength = 0;
    TokenInformation = 0;
    v6 = GetTokenInformation(TokenHandle, TokenIsAppContainer, &TokenInformation, 4u, &ReturnLength);
    v5 = ResultFromWin32Bool(v6);
    if ( v5 >= 0 )
      *a2 = TokenInformation != 0;
  }
  v7 = (char *)TokenHandle;
  TokenHandle = 0LL;
  if ( (unsigned __int64)(v7 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v7);
  return (unsigned int)v5;
}
