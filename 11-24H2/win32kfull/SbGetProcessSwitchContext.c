/*
 * XREFs of SbGetProcessSwitchContext @ 0x140184530
 * Callers:
 *     SetManifestWinVer @ 0x1401843F0 (SetManifestWinVer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SbGetProcessSwitchContext(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1 )
  {
    if ( (a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    result = a1 + 2016;
    if ( a1 == -2016 || !*(_DWORD *)(a1 + 2064) )
      return 0LL;
  }
  return result;
}
