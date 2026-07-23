/*
 * XREFs of MiSetWsleProtection @ 0x140203240
 * Callers:
 *     MiSetReadOnlyOnSectionView @ 0x140202E14 (MiSetReadOnlyOnSectionView.c)
 *     MiSetProtectionOnSection @ 0x1402107C0 (MiSetProtectionOnSection.c)
 *     MiBuildForkPte @ 0x1402687D0 (MiBuildForkPte.c)
 *     MiCombineInitialInstance @ 0x140294F94 (MiCombineInitialInstance.c)
 *     MiCopyOnWrite @ 0x140346A74 (MiCopyOnWrite.c)
 * Callees:
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 */

signed __int64 __fastcall MiSetWsleProtection(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rdx
  char v4; // bl
  volatile signed __int64 *v5; // rsi
  __int64 v6; // rax
  signed __int64 v7; // rdi
  unsigned __int64 v8; // rbp
  bool v9; // zf
  signed __int64 result; // rax

  v3 = a2 >> 9;
  v4 = a3;
  v5 = (volatile signed __int64 *)((v3 & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v6 = MI_READ_PTE_LOCK_FREE(v5, v3, a3);
  v7 = *v5;
  v8 = (unsigned __int64)(unsigned __int8)((16 * (v4 & 7)) | HIBYTE(v6) & 0xF) << 56;
  do
  {
    if ( (MiFlags & 0x2000000) != 0 )
      _mm_lfence();
    if ( _bittest64(&MiFlags, 0x24u)
      && (((unsigned __int8)v8 | (unsigned __int8)v7) & 0x21) == 1
      && (unsigned __int64)v5 >= 0xFFFFF6C000000000uLL )
    {
      MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)v5, v8 | v7 & 0x80FFFFFFFFFFFFFFuLL);
    }
    result = _InterlockedCompareExchange64(v5, v8 | v7 & 0x80FFFFFFFFFFFFFFuLL, v7);
    v9 = v7 == result;
    v7 = result;
  }
  while ( !v9 );
  return result;
}
