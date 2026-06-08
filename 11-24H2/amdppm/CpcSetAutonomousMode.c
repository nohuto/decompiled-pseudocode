/*
 * XREFs of CpcSetAutonomousMode @ 0x140001B70
 * Callers:
 *     <none>
 * Callees:
 *     WriteGenAddrMaybeHiddenEx @ 0x140001BA0 (WriteGenAddrMaybeHiddenEx.c)
 */

__int64 __fastcall CpcSetAutonomousMode(_QWORD *a1, int a2)
{
  return WriteGenAddrMaybeHiddenEx(*a1, a1[18] + 368LL, a2 != 0);
}
