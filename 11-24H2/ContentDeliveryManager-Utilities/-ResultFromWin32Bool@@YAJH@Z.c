/*
 * XREFs of ?ResultFromWin32Bool@@YAJH@Z @ 0x180072038
 * Callers:
 *     ?GetImpersonationTokenFromProcess@CallerIdentity@@YAJPEAXKPEAPEAX@Z @ 0x180071EE4 (-GetImpersonationTokenFromProcess@CallerIdentity@@YAJPEAXKPEAPEAX@Z.c)
 *     ?IsProcessAppContainer@CallerIdentity@@YAJPEAXPEA_N@Z @ 0x180071F84 (-IsProcessAppContainer@CallerIdentity@@YAJPEAXPEA_N@Z.c)
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x180063558 (-ResultFromKnownLastError@@YAJXZ.c)
 */

signed int __fastcall ResultFromWin32Bool(int a1)
{
  signed int result; // eax

  result = 0;
  if ( !a1 )
    return ResultFromKnownLastError();
  return result;
}
