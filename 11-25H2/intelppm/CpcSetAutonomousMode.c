/*
 * XREFs of CpcSetAutonomousMode @ 0x140008F20
 * Callers:
 *     <none>
 * Callees:
 *     WriteGenAddrMaybeHiddenEx @ 0x140008B8C (WriteGenAddrMaybeHiddenEx.c)
 */

__int64 __fastcall CpcSetAutonomousMode(__int64 *a1, int a2)
{
  return WriteGenAddrMaybeHiddenEx(*a1, (char *)(a1[18] + 368), a2 != 0);
}
