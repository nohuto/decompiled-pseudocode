/*
 * XREFs of ProcgrpQueryGroupAffinity @ 0x1400AC3C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

KAFFINITY __fastcall ProcgrpQueryGroupAffinity(unsigned __int16 GroupNumber)
{
  if ( GroupNumber )
    return 0LL;
  else
    return KeQueryActiveProcessors();
}
