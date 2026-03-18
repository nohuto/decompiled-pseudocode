/*
 * XREFs of MiWriteAweClusterPte @ 0x1404D8144
 * Callers:
 *     MiWriteAwePtes @ 0x1403FBB7C (MiWriteAwePtes.c)
 *     MiApplyLazyStampToAwePtes @ 0x14067595C (MiApplyLazyStampToAwePtes.c)
 *     MiZeroAndFlushAweLazyPtes @ 0x140677AAC (MiZeroAndFlushAweLazyPtes.c)
 * Callees:
 *     MiRewritePteWithLockBit @ 0x1402110AC (MiRewritePteWithLockBit.c)
 *     MiWriteValidPteNewProtection @ 0x1402B83C0 (MiWriteValidPteNewProtection.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x14037CB60 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiWriteValidPteNewPage @ 0x1403FF2B0 (MiWriteValidPteNewPage.c)
 */

void __fastcall MiWriteAweClusterPte(__int64 a1, volatile signed __int64 *a2, unsigned __int64 a3, int a4, __int64 a5)
{
  __int64 i; // rbp

  if ( a4 )
  {
    for ( i = a5; i; --i )
    {
      if ( a4 == 1 )
      {
        if ( ((a3 ^ *a2) & 0xFFFFFFFFFF000LL) != 0 )
          MiWriteValidPteNewPage(a2, a3, 1);
        else
          MiWriteValidPteNewProtection((ULONG_PTR)a2, a3);
      }
      else if ( ((a4 - 2) & 0xFFFFFFFD) != 0 )
      {
        if ( a4 != 3
          && a4 != 6
          && _bittest64(&MiFlags, 0x24u)
          && (a3 & 0x20) == 0
          && (unsigned __int64)a2 >= 0xFFFFF6C000000000uLL )
        {
          MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)a2, a3, 128);
        }
        *a2 = a3;
      }
      else
      {
        MiRewritePteWithLockBit(a1, 0, a2, a3);
      }
      if ( (a3 & 1) != 0 || (a3 & 0x400) != 0 )
        a3 = (a3 + 4096) ^ ((a3 + 4096) ^ a3) & 0xFFF0000000000FFFuLL;
      ++a2;
    }
  }
}
