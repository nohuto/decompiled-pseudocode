/*
 * XREFs of HalpMmZeroPageWithTemporaryMapping @ 0x1405407B8
 * Callers:
 *     HalpMmAllocateAndInsertPageTablePage @ 0x1405403F4 (HalpMmAllocateAndInsertPageTablePage.c)
 * Callees:
 *     HalpFlushTLB @ 0x1404F281C (HalpFlushTLB.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall HalpMmZeroPageWithTemporaryMapping(__int64 a1)
{
  signed __int32 v2[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( (MEMORY[0xFFFFF6FFFFFFE000] & 1) != 0 )
    return 3221225485LL;
  MEMORY[0xFFFFF6FFFFFFE000] = a1 & 0xFFFFFFFFFF000LL | 0x8000000000000003uLL;
  _InterlockedOr(v2, 0);
  memset_0((void *)0xFFFFFFFFFFC00000LL, 0, 0x1000uLL);
  MEMORY[0xFFFFF6FFFFFFE000] = 0LL;
  HalpFlushTLB();
  return 0LL;
}
