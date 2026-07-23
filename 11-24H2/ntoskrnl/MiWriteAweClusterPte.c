/*
 * XREFs of MiWriteAweClusterPte @ 0x1404D0434
 * Callers:
 *     MiWriteAwePtes @ 0x1404B4FD0 (MiWriteAwePtes.c)
 *     MiApplyLazyStampToAwePtes @ 0x14068236C (MiApplyLazyStampToAwePtes.c)
 *     MiZeroAndFlushAweLazyPtes @ 0x1406844BC (MiZeroAndFlushAweLazyPtes.c)
 * Callees:
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiWriteValidPteNewPage @ 0x140217188 (MiWriteValidPteNewPage.c)
 *     MiWriteValidPteNewProtection @ 0x140245FB0 (MiWriteValidPteNewProtection.c)
 *     MiRewritePteWithLockBit @ 0x140335F2C (MiRewritePteWithLockBit.c)
 */

void __fastcall MiWriteAweClusterPte(__int64 a1, volatile signed __int64 *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rbp
  int v6; // esi
  unsigned __int64 i; // rbx

  if ( (_DWORD)a4 )
  {
    v5 = a5;
    v6 = a4;
    for ( i = a3; v5; --v5 )
    {
      if ( v6 == 1 )
      {
        if ( ((i ^ *a2) & 0xFFFFFFFFFF000LL) != 0 )
          MiWriteValidPteNewPage(a2, i, 1LL, a4);
        else
          MiWriteValidPteNewProtection((ULONG_PTR)a2, i, a3);
      }
      else if ( ((v6 - 2) & 0xFFFFFFFD) != 0 )
      {
        if ( v6 != 3
          && v6 != 6
          && _bittest64(&MiFlags, 0x24u)
          && (i & 0x20) == 0
          && (unsigned __int64)a2 >= 0xFFFFF6C000000000uLL )
        {
          MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)a2, i, 128LL);
        }
        *a2 = i;
      }
      else
      {
        MiRewritePteWithLockBit(a1, 0, a2, i);
      }
      if ( (i & 1) != 0 || (i & 0x400) != 0 )
        i = (i + 4096) ^ ((i + 4096) ^ i) & 0xFFF0000000000FFFuLL;
      ++a2;
    }
  }
}
