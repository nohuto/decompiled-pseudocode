/*
 * XREFs of MiInitializeMdlSinglePage @ 0x140393930
 * Callers:
 *     MiAllocateKernelStackPages @ 0x14021639C (MiAllocateKernelStackPages.c)
 *     MiInitializeMdlLeafPfns @ 0x140393570 (MiInitializeMdlLeafPfns.c)
 *     MiInitializeMdlBatchPages @ 0x140393678 (MiInitializeMdlBatchPages.c)
 * Callees:
 *     MiConvertLargePfnToSmall @ 0x1402EE180 (MiConvertLargePfnToSmall.c)
 *     MiSetPfnContainingFrame @ 0x140347E40 (MiSetPfnContainingFrame.c)
 *     MiInitializeMdlPfn @ 0x1403954E8 (MiInitializeMdlPfn.c)
 */

__int64 __fastcall MiInitializeMdlSinglePage(
        __int64 a1,
        unsigned __int64 *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        int a5)
{
  if ( (a2[5] & 0x10000000000LL) != 0 && ((a5 & 0x3001000) == 0 || a5 >= 0) )
    MiConvertLargePfnToSmall(a1, (__int64)a2, 1LL);
  a2[1] = 0xFFFFF68000000000uLL;
  a2[5] &= ~0x8000000000000000uLL;
  MiSetPfnContainingFrame((__int64)a2, 0x3FFFFFFFFELL);
  a2[2] = a4;
  *a2 = 0LL;
  *a2 = (a3 >> 3) ^ (*a2 ^ (a3 >> 3)) & 0xFFFFF00000000001uLL;
  return MiInitializeMdlPfn(a2, (unsigned int)a5);
}
