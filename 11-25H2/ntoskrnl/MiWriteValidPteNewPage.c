/*
 * XREFs of MiWriteValidPteNewPage @ 0x1403FF2B0
 * Callers:
 *     MiRewritePteWithLockBit @ 0x1402110AC (MiRewritePteWithLockBit.c)
 *     MiStealPage @ 0x1402C80F0 (MiStealPage.c)
 *     MiCombineInitialInstance @ 0x1402CE290 (MiCombineInitialInstance.c)
 *     MiTradeActivePage @ 0x1403FE5A0 (MiTradeActivePage.c)
 *     MiWritePteHighLevelIsr @ 0x1404B8D10 (MiWritePteHighLevelIsr.c)
 *     MiWriteAweClusterPte @ 0x1404D8144 (MiWriteAweClusterPte.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402480C0 (MiPteInShadowRange.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x14037CB60 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiSanitizeShadowPxe @ 0x1403FDBDC (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x1403FDC5C (MiWritePteShadow.c)
 */

char __fastcall MiWriteValidPteNewPage(volatile signed __int64 *BugCheckParameter2, __int64 a2, int a3)
{
  __int64 v4; // rdi
  signed __int64 v6; // rbx
  unsigned __int64 v7; // rsi
  int v8; // edi
  ULONG_PTR v9; // rsi
  signed __int64 v10; // rax
  unsigned __int64 v12; // [rsp+48h] [rbp+10h]

  v4 = a2;
  if ( a3 )
  {
    v6 = *BugCheckParameter2;
    v4 = a2;
  }
  else
  {
    v6 = MI_READ_PTE_LOCK_FREE((unsigned __int64)BugCheckParameter2);
  }
  v7 = v4 & 0x80FFFFFFFFFFFFFFuLL | v6 & 0x7F00000000000000LL;
  v8 = 0;
  v12 = v7;
  if ( !a3 && MiPteInShadowRange((unsigned __int64)BugCheckParameter2) )
  {
    v8 = MiSanitizeShadowPxe();
    goto LABEL_15;
  }
  while ( 1 )
  {
    if ( (v6 & 0x20) != 0 )
      v9 = v7 | 0x20;
    else
      v9 = v7 & 0xFFFFFFFFFFFFFFDFuLL;
    v12 = v9;
    if ( (MiFlags & 0x2000000) != 0 )
      _mm_lfence();
    if ( _bittest64(&MiFlags, 0x24u)
      && (v9 & 0x21) == 1
      && (unsigned __int64)BugCheckParameter2 >= 0xFFFFF6C000000000uLL )
    {
      MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)BugCheckParameter2, v9, 128);
    }
    v10 = _InterlockedCompareExchange64(BugCheckParameter2, v9, v6);
    if ( v6 == v10 )
      break;
    v6 = v10;
LABEL_15:
    v7 = v12;
  }
  if ( v8 )
    LOBYTE(v10) = MiWritePteShadow();
  return v10;
}
