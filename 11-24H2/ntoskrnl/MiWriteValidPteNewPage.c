/*
 * XREFs of MiWriteValidPteNewPage @ 0x140217188
 * Callers:
 *     MiTradeActivePage @ 0x1402172BC (MiTradeActivePage.c)
 *     MiStealPage @ 0x140253D10 (MiStealPage.c)
 *     MiCombineInitialInstance @ 0x140294F94 (MiCombineInitialInstance.c)
 *     MiRewritePteWithLockBit @ 0x140335F2C (MiRewritePteWithLockBit.c)
 *     MiWritePteHighLevelIsr @ 0x1404B2C80 (MiWritePteHighLevelIsr.c)
 *     MiWriteAweClusterPte @ 0x1404D0434 (MiWriteAweClusterPte.c)
 * Callees:
 *     MiPteInShadowRange @ 0x140202630 (MiPteInShadowRange.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiSanitizeShadowPxe @ 0x140203820 (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x1402038A0 (MiWritePteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 */

char __fastcall MiWriteValidPteNewPage(
        volatile signed __int64 *BugCheckParameter2,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4)
{
  int v4; // ebp
  unsigned __int64 v5; // rdi
  signed __int64 v7; // rbx
  unsigned __int64 v8; // rsi
  int v9; // edi
  __int64 v10; // rcx
  unsigned __int64 v11; // rsi
  signed __int64 v12; // rax
  unsigned __int64 v14; // [rsp+48h] [rbp+10h] BYREF

  v14 = a2;
  v4 = a3;
  v5 = a2;
  if ( (_DWORD)a3 )
  {
    v7 = *BugCheckParameter2;
    v5 = v14;
  }
  else
  {
    v7 = MI_READ_PTE_LOCK_FREE(BugCheckParameter2, a2, a3);
  }
  v8 = v5 & 0x80FFFFFFFFFFFFFFuLL | v7 & 0x7F00000000000000LL;
  v9 = 0;
  v14 = v8;
  if ( !v4 && MiPteInShadowRange((unsigned __int64)BugCheckParameter2) )
  {
    v9 = MiSanitizeShadowPxe(v10, (__int64)&v14, a3);
    goto LABEL_15;
  }
  while ( 1 )
  {
    if ( (v7 & 0x20) != 0 )
      v11 = v8 | 0x20;
    else
      v11 = v8 & 0xFFFFFFFFFFFFFFDFuLL;
    v14 = v11;
    if ( (MiFlags & 0x2000000) != 0 )
      _mm_lfence();
    if ( _bittest64(&MiFlags, 0x24u)
      && (v11 & 0x21) == 1
      && (unsigned __int64)BugCheckParameter2 >= 0xFFFFF6C000000000uLL )
    {
      MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)BugCheckParameter2, v11, 128LL);
    }
    v12 = _InterlockedCompareExchange64(BugCheckParameter2, v11, v7);
    if ( v7 == v12 )
      break;
    v7 = v12;
LABEL_15:
    v8 = v14;
  }
  if ( v9 )
    LOBYTE(v12) = MiWritePteShadow((__int64)BugCheckParameter2, v11, a3, a4);
  return v12;
}
