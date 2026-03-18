/*
 * XREFs of KiVerifyXcptFilter @ 0x140C2AC20
 * Callers:
 *     KiVerifyXcpt0 @ 0x140C2A5B0 (KiVerifyXcpt0.c)
 *     KiVerifyXcpt1 @ 0x140C2A600 (KiVerifyXcpt1.c)
 *     KiVerifyXcpt10 @ 0x140C2A650 (KiVerifyXcpt10.c)
 *     KiVerifyXcpt11 @ 0x140C2A7B0 (KiVerifyXcpt11.c)
 *     KiVerifyXcpt12 @ 0x140C2A820 (KiVerifyXcpt12.c)
 *     KiVerifyXcpt13 @ 0x140C2A8B0 (KiVerifyXcpt13.c)
 *     KiVerifyXcpt14 @ 0x140C2A900 (KiVerifyXcpt14.c)
 *     KiVerifyXcpt2 @ 0x140C2A960 (KiVerifyXcpt2.c)
 *     KiVerifyXcpt3 @ 0x140C2A9B0 (KiVerifyXcpt3.c)
 *     KiVerifyXcpt4 @ 0x140C2AA00 (KiVerifyXcpt4.c)
 *     KiVerifyXcpt5 @ 0x140C2AA50 (KiVerifyXcpt5.c)
 *     KiVerifyXcpt6 @ 0x140C2AAA0 (KiVerifyXcpt6.c)
 *     KiVerifyXcpt7 @ 0x140C2AB00 (KiVerifyXcpt7.c)
 *     KiVerifyXcpt8 @ 0x140C2AB60 (KiVerifyXcpt8.c)
 *     KiVerifyXcpt9 @ 0x140C2ABC0 (KiVerifyXcpt9.c)
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
