/*
 * XREFs of MiInitializeMdlSinglePage @ 0x1404132BC
 * Callers:
 *     MiAllocateKernelStackPages @ 0x14039F96C (MiAllocateKernelStackPages.c)
 *     MiInitializeMdlLeafPfns @ 0x140412EFC (MiInitializeMdlLeafPfns.c)
 *     MiInitializeMdlBatchPages @ 0x140413004 (MiInitializeMdlBatchPages.c)
 * Callees:
 *     MiSetPfnContainingFrame @ 0x1402E6800 (MiSetPfnContainingFrame.c)
 *     MiInitializeMdlPfn @ 0x140413588 (MiInitializeMdlPfn.c)
 *     MiConvertLargePfnToSmall @ 0x14041F790 (MiConvertLargePfnToSmall.c)
 */

__int64 __fastcall MiInitializeMdlSinglePage(
        __int64 a1,
        unsigned __int64 *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        int a5)
{
  if ( (a2[5] & 0x10000000000LL) != 0 && ((a5 & 0x3001000) == 0 || a5 >= 0) )
    MiConvertLargePfnToSmall(a1, a2, 1LL);
  a2[1] = 0xFFFFF68000000000uLL;
  a2[5] &= ~0x8000000000000000uLL;
  MiSetPfnContainingFrame((__int64)a2, 0x3FFFFFFFFELL);
  a2[2] = a4;
  *a2 = 0LL;
  *a2 = (a3 >> 3) ^ (*a2 ^ (a3 >> 3)) & 0xFFFFF00000000001uLL;
  return MiInitializeMdlPfn(a2, (unsigned int)a5);
}
