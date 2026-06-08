/*
 * XREFs of ReadGenAddrHiddenEx @ 0x140003D40
 * Callers:
 *     ReadGenAddrMaybeHiddenEx @ 0x1400025A4 (ReadGenAddrMaybeHiddenEx.c)
 *     InitCpcStatesInternal @ 0x140033390 (InitCpcStatesInternal.c)
 * Callees:
 *     ReadGenAddrEx @ 0x1400025CC (ReadGenAddrEx.c)
 *     ReadGenAddrHidden @ 0x140003ED8 (ReadGenAddrHidden.c)
 */

__int64 __fastcall ReadGenAddrHiddenEx(__int64 a1, unsigned __int8 *a2)
{
  if ( !a2 )
    return 0LL;
  if ( *a2 == 1 || *a2 == 127 )
    return ReadGenAddrHidden(a1, a2);
  return ReadGenAddrEx(a2);
}
