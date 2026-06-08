/*
 * XREFs of WriteGenAddrHiddenEx @ 0x140008B58
 * Callers:
 *     WriteGenAddrMaybeHiddenEx @ 0x140008B8C (WriteGenAddrMaybeHiddenEx.c)
 *     PerfControlCpcHidden @ 0x1400090C0 (PerfControlCpcHidden.c)
 * Callees:
 *     WriteGenAddrEx @ 0x14000170C (WriteGenAddrEx.c)
 *     WriteGenAddrHidden @ 0x140008AB8 (WriteGenAddrHidden.c)
 */

__int64 __fastcall WriteGenAddrHiddenEx(unsigned int a1, char *a2, __int64 a3)
{
  char v4; // dl

  v4 = *a2;
  if ( v4 == 1 || v4 == 127 )
    return WriteGenAddrHidden(a1, a2, a3);
  else
    return WriteGenAddrEx(a2, a3);
}
