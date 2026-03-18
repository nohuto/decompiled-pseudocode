/*
 * XREFs of MiPrepareToTradeUsingAccessedBit @ 0x140229DC8
 * Callers:
 *     MiStealPage @ 0x1402263B0 (MiStealPage.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFlushSingleTbEntry @ 0x14022A7E0 (MiFlushSingleTbEntry.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140232A20 (MiCheckLinearProtectedPteAccessedBit.c)
 */

unsigned __int64 __fastcall MiPrepareToTradeUsingAccessedBit(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rbp
  __int64 v4; // rax
  signed __int64 v5; // rdi
  unsigned __int64 v6; // rbx

  v3 = (__int64)(a2 << 25) >> 16;
  if ( (*(_BYTE *)(a1 + 35) & 0x10) != 0 )
  {
    ++dword_140EF4D8C;
    return 0LL;
  }
  v4 = MI_READ_PTE_LOCK_FREE(a2);
  v5 = v4;
  if ( (v4 & 0x200) != 0 || (v4 & 0x20) == 0 )
  {
    ++dword_140EF4D90;
    return 0LL;
  }
  v6 = v4 & 0xFFFFFFFFFFFFFFDFuLL;
  if ( (MiFlags & 0x2000000) != 0 )
    _mm_lfence();
  if ( _bittest64(&MiFlags, 0x24u) && (v4 & 1) == 1 && a2 >= 0xFFFFF6C000000000uLL )
    MiCheckLinearProtectedPteAccessedBit(a2, v6);
  if ( v5 != _InterlockedCompareExchange64((volatile signed __int64 *)a2, v6, v5) )
  {
    ++dword_140EF4D94;
    return 0LL;
  }
  MiFlushSingleTbEntry(v3, 2LL, 2LL);
  return v6;
}
