/*
 * XREFs of CpcSetTimeWindow @ 0x140008F50
 * Callers:
 *     <none>
 * Callees:
 *     WriteGenAddrMaybeHiddenEx @ 0x140008B8C (WriteGenAddrMaybeHiddenEx.c)
 */

__int64 __fastcall CpcSetTimeWindow(__int64 *a1, unsigned int a2)
{
  return WriteGenAddrMaybeHiddenEx(*a1, (char *)(a1[18] + 224), a2);
}
