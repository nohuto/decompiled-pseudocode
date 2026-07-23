/*
 * XREFs of KiVerifyXcptFilter @ 0x140C2CD40
 * Callers:
 *     KiVerifyXcpt0 @ 0x140C2C6D0 (KiVerifyXcpt0.c)
 *     KiVerifyXcpt1 @ 0x140C2C720 (KiVerifyXcpt1.c)
 *     KiVerifyXcpt10 @ 0x140C2C770 (KiVerifyXcpt10.c)
 *     KiVerifyXcpt11 @ 0x140C2C8D0 (KiVerifyXcpt11.c)
 *     KiVerifyXcpt12 @ 0x140C2C940 (KiVerifyXcpt12.c)
 *     KiVerifyXcpt13 @ 0x140C2C9D0 (KiVerifyXcpt13.c)
 *     KiVerifyXcpt14 @ 0x140C2CA20 (KiVerifyXcpt14.c)
 *     KiVerifyXcpt2 @ 0x140C2CA80 (KiVerifyXcpt2.c)
 *     KiVerifyXcpt3 @ 0x140C2CAD0 (KiVerifyXcpt3.c)
 *     KiVerifyXcpt4 @ 0x140C2CB20 (KiVerifyXcpt4.c)
 *     KiVerifyXcpt5 @ 0x140C2CB70 (KiVerifyXcpt5.c)
 *     KiVerifyXcpt6 @ 0x140C2CBC0 (KiVerifyXcpt6.c)
 *     KiVerifyXcpt7 @ 0x140C2CC20 (KiVerifyXcpt7.c)
 *     KiVerifyXcpt8 @ 0x140C2CC80 (KiVerifyXcpt8.c)
 *     KiVerifyXcpt9 @ 0x140C2CCE0 (KiVerifyXcpt9.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiVerifyXcptFilter(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 16) )
  {
    *(_DWORD *)(a1 + 16) = 0;
    *(_DWORD *)(a1 + 12) = -1437226411;
    ++**(_DWORD **)a1;
  }
  else
  {
    *(_DWORD *)(a1 + 16) = 1;
  }
  return 1LL;
}
