/*
 * XREFs of MiWriteWsle @ 0x140203470
 * Callers:
 *     MiRemoveWsle @ 0x1402007F4 (MiRemoveWsle.c)
 *     MiDecommitAddToList @ 0x1402985A0 (MiDecommitAddToList.c)
 *     MiCountWslesInPageTableRange @ 0x140392E70 (MiCountWslesInPageTableRange.c)
 *     MiSetPagingOfDriver @ 0x140497850 (MiSetPagingOfDriver.c)
 *     MiUnmapKernelScp @ 0x140498D98 (MiUnmapKernelScp.c)
 *     MiClearDriverTablePtes @ 0x1404F0310 (MiClearDriverTablePtes.c)
 *     MiPageBootRegistry @ 0x14066A6F8 (MiPageBootRegistry.c)
 *     MiCreatePteWsle @ 0x14066FBC0 (MiCreatePteWsle.c)
 * Callees:
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 */

signed __int64 __fastcall MiWriteWsle(__int64 a1, unsigned __int64 a2, unsigned __int8 a3)
{
  volatile signed __int64 *v3; // rsi
  unsigned __int64 v4; // rbp
  signed __int64 v5; // rdi
  bool v6; // zf
  signed __int64 result; // rax

  v3 = (volatile signed __int64 *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v4 = (unsigned __int64)a3 << 56;
  v5 = *v3;
  do
  {
    if ( (MiFlags & 0x2000000) != 0 )
      _mm_lfence();
    if ( _bittest64(&MiFlags, 0x24u) && (v5 & 0x21) == 1 && (unsigned __int64)v3 >= 0xFFFFF6C000000000uLL )
      MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)v3, v4 ^ (v5 ^ v4) & 0x80FFFFFFFFFFFFFFuLL);
    result = _InterlockedCompareExchange64(v3, v4 ^ (v5 ^ v4) & 0x80FFFFFFFFFFFFFFuLL, v5);
    v6 = v5 == result;
    v5 = result;
  }
  while ( !v6 );
  return result;
}
