/*
 * XREFs of KiVerifyXcptFilter @ 0x140C19B20
 * Callers:
 *     KiVerifyXcpt0 @ 0x140C194B0 (KiVerifyXcpt0.c)
 *     KiVerifyXcpt1 @ 0x140C19500 (KiVerifyXcpt1.c)
 *     KiVerifyXcpt10 @ 0x140C19550 (KiVerifyXcpt10.c)
 *     KiVerifyXcpt11 @ 0x140C196B0 (KiVerifyXcpt11.c)
 *     KiVerifyXcpt12 @ 0x140C19720 (KiVerifyXcpt12.c)
 *     KiVerifyXcpt13 @ 0x140C197B0 (KiVerifyXcpt13.c)
 *     KiVerifyXcpt14 @ 0x140C19800 (KiVerifyXcpt14.c)
 *     KiVerifyXcpt2 @ 0x140C19860 (KiVerifyXcpt2.c)
 *     KiVerifyXcpt3 @ 0x140C198B0 (KiVerifyXcpt3.c)
 *     KiVerifyXcpt4 @ 0x140C19900 (KiVerifyXcpt4.c)
 *     KiVerifyXcpt5 @ 0x140C19950 (KiVerifyXcpt5.c)
 *     KiVerifyXcpt6 @ 0x140C199A0 (KiVerifyXcpt6.c)
 *     KiVerifyXcpt7 @ 0x140C19A00 (KiVerifyXcpt7.c)
 *     KiVerifyXcpt8 @ 0x140C19A60 (KiVerifyXcpt8.c)
 *     KiVerifyXcpt9 @ 0x140C19AC0 (KiVerifyXcpt9.c)
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
