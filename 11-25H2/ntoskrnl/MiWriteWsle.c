/*
 * XREFs of MiWriteWsle @ 0x14037CA80
 * Callers:
 *     MiDecommitAddToList @ 0x140382190 (MiDecommitAddToList.c)
 *     MiCountWslesInPageTableRange @ 0x140385CD0 (MiCountWslesInPageTableRange.c)
 *     MiRemoveWsle @ 0x14038B0E4 (MiRemoveWsle.c)
 *     MiSetPagingOfDriver @ 0x14049D9E4 (MiSetPagingOfDriver.c)
 *     MiUnmapKernelScp @ 0x14049F14C (MiUnmapKernelScp.c)
 *     MiClearDriverTablePtes @ 0x1404EE8A0 (MiClearDriverTablePtes.c)
 *     MiPageBootRegistry @ 0x14065D9FC (MiPageBootRegistry.c)
 *     MiCreatePteWsle @ 0x140662EB0 (MiCreatePteWsle.c)
 * Callees:
 *     MiCheckLinearProtectedPteAccessedBit @ 0x14037CB60 (MiCheckLinearProtectedPteAccessedBit.c)
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
