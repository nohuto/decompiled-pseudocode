/*
 * XREFs of MiWriteAweClusterPte @ 0x1404D6FE4
 * Callers:
 *     MiWriteAwePtes @ 0x1404BA130 (MiWriteAwePtes.c)
 *     MiApplyLazyStampToAwePtes @ 0x14068117C (MiApplyLazyStampToAwePtes.c)
 *     MiZeroAndFlushAweLazyPtes @ 0x1406832CC (MiZeroAndFlushAweLazyPtes.c)
 * Callees:
 *     MiRewritePteWithLockBit @ 0x14020CBCC (MiRewritePteWithLockBit.c)
 *     MiWriteValidPteNewProtection @ 0x140219260 (MiWriteValidPteNewProtection.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140232A20 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiWriteValidPteNewPage @ 0x1403A28B8 (MiWriteValidPteNewPage.c)
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
