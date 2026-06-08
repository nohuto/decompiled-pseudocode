/*
 * XREFs of ReadGenAddrHiddenEx @ 0x140006608
 * Callers:
 *     ReadGenAddrMaybeHiddenEx @ 0x140002014 (ReadGenAddrMaybeHiddenEx.c)
 *     InitCpcStatesInternal @ 0x1400358D0 (InitCpcStatesInternal.c)
 * Callees:
 *     ReadGenAddrEx @ 0x140002040 (ReadGenAddrEx.c)
 *     ReadGenAddrHidden @ 0x140006708 (ReadGenAddrHidden.c)
 */

unsigned __int64 __fastcall ReadGenAddrHiddenEx(__int64 a1, unsigned __int8 *a2, __int64 a3)
{
  if ( !a2 )
    return 0LL;
  if ( *a2 == 1 || *a2 == 127 )
    return ReadGenAddrHidden(a1, a2, a3);
  return ReadGenAddrEx(a2);
}
