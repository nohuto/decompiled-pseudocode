/*
 * XREFs of DrvNeedDisplayStateCheck @ 0x14014B4B4
 * Callers:
 *     NtUserFunctionalizeDisplayConfig @ 0x14016C1F0 (NtUserFunctionalizeDisplayConfig.c)
 *     NtUserSetDisplayConfig @ 0x140170CE0 (NtUserSetDisplayConfig.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DrvNeedDisplayStateCheck(_DWORD *a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1 && (*a1 != -1 || a1[1] != -1 || a1[2] != -1) )
    return 1LL;
  return result;
}
