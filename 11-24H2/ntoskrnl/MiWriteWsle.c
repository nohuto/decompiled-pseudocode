/*
 * XREFs of MiWriteWsle @ 0x140232940
 * Callers:
 *     MiDecommitAddToList @ 0x1402889A0 (MiDecommitAddToList.c)
 *     MiRemoveWsle @ 0x1402C8340 (MiRemoveWsle.c)
 *     MiCountWslesInPageTableRange @ 0x1402E3F20 (MiCountWslesInPageTableRange.c)
 *     MiSetPagingOfDriver @ 0x14049CBA8 (MiSetPagingOfDriver.c)
 *     MiUnmapKernelScp @ 0x14049DF98 (MiUnmapKernelScp.c)
 *     MiClearDriverTablePtes @ 0x1404F2870 (MiClearDriverTablePtes.c)
 *     MiPageBootRegistry @ 0x140669520 (MiPageBootRegistry.c)
 *     MiCreatePteWsle @ 0x14066E9F0 (MiCreatePteWsle.c)
 * Callees:
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140232A20 (MiCheckLinearProtectedPteAccessedBit.c)
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
