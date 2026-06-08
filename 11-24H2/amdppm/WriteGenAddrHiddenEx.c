/*
 * XREFs of WriteGenAddrHiddenEx @ 0x140003D74
 * Callers:
 *     WriteGenAddrMaybeHiddenEx @ 0x140001BA0 (WriteGenAddrMaybeHiddenEx.c)
 *     PerfControlCpcHidden @ 0x1400068F0 (PerfControlCpcHidden.c)
 * Callees:
 *     WriteGenAddrEx @ 0x140001BD0 (WriteGenAddrEx.c)
 *     WriteGenAddrHidden @ 0x140003DA8 (WriteGenAddrHidden.c)
 */

char __fastcall WriteGenAddrHiddenEx(__int64 a1, char *a2, __int64 a3)
{
  char v4; // dl

  v4 = *a2;
  if ( v4 == 1 || v4 == 127 )
    return WriteGenAddrHidden(a1, a2);
  else
    return WriteGenAddrEx(a2, a3, a3);
}
