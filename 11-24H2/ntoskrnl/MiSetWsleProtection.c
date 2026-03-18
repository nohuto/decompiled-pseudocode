/*
 * XREFs of MiSetWsleProtection @ 0x140232ACC
 * Callers:
 *     MiSetReadOnlyOnSectionView @ 0x140232BB8 (MiSetReadOnlyOnSectionView.c)
 *     MiSetProtectionOnSection @ 0x140236630 (MiSetProtectionOnSection.c)
 *     MiBuildForkPte @ 0x1402C53E8 (MiBuildForkPte.c)
 *     MiCopyOnWrite @ 0x1402E47DC (MiCopyOnWrite.c)
 *     MiCombineInitialInstance @ 0x14036C3E0 (MiCombineInitialInstance.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140232A20 (MiCheckLinearProtectedPteAccessedBit.c)
 */

signed __int64 __fastcall MiSetWsleProtection(__int64 a1, unsigned __int64 a2, char a3)
{
  volatile signed __int64 *v4; // rsi
  __int64 v5; // rax
  signed __int64 v6; // rdi
  unsigned __int64 v7; // rbp
  bool v8; // zf
  signed __int64 result; // rax

  v4 = (volatile signed __int64 *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v5 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v4);
  v6 = *v4;
  v7 = (unsigned __int64)(unsigned __int8)((16 * (a3 & 7)) | HIBYTE(v5) & 0xF) << 56;
  do
  {
    if ( (MiFlags & 0x2000000) != 0 )
      _mm_lfence();
    if ( _bittest64(&MiFlags, 0x24u)
      && (((unsigned __int8)v7 | (unsigned __int8)v6) & 0x21) == 1
      && (unsigned __int64)v4 >= 0xFFFFF6C000000000uLL )
    {
      MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)v4, v7 | v6 & 0x80FFFFFFFFFFFFFFuLL, 128);
    }
    result = _InterlockedCompareExchange64(v4, v7 | v6 & 0x80FFFFFFFFFFFFFFuLL, v6);
    v8 = v6 == result;
    v6 = result;
  }
  while ( !v8 );
  return result;
}
