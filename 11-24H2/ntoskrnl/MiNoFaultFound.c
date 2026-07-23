/*
 * XREFs of MiNoFaultFound @ 0x140203670
 * Callers:
 *     MiRaisedIrqlFault @ 0x1402FADDC (MiRaisedIrqlFault.c)
 *     MiSystemFault @ 0x1402FC7E0 (MiSystemFault.c)
 *     MiLargePageFault @ 0x1404C1204 (MiLargePageFault.c)
 *     MiValidFault @ 0x1404F0710 (MiValidFault.c)
 * Callees:
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiFlushSingleTbEntry @ 0x1402FDA50 (MiFlushSingleTbEntry.c)
 */

__int64 __fastcall MiNoFaultFound(
        __int64 a1,
        volatile signed __int64 *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        signed __int64 a6)
{
  unsigned int v6; // esi
  __int64 v7; // r10
  int v10; // ecx
  unsigned int v11; // ebp
  __int64 v12; // rbx

  v6 = 0;
  v7 = *(_QWORD *)(a1 + 8);
  v10 = 0;
  v11 = 0;
  v12 = a6;
  if ( (a6 & 0x20) != 0 )
  {
    if ( ((a4 & 1) == 0 || *(_BYTE *)(a4 & 0xFFFFFFFFFFFFFFFEuLL) != 5)
      && (MiFlags & 0x100) == 0
      && (MiFlags & 0x200) == 0 )
    {
      v6 = 1;
    }
  }
  else
  {
    v11 = 4;
    v12 = a6 | 0x20;
    v10 = 1;
  }
  if ( (v7 & 2) == 0 )
    goto LABEL_14;
  if ( (v12 & 0x42) == 0 )
  {
    if ( (MiFlags & 0x100) == 0 && (MiFlags & 0x200) == 0 )
      v6 = 1;
    goto LABEL_7;
  }
  if ( (v12 & 0x42) != 0x40 )
  {
LABEL_14:
    if ( !v10 )
      goto LABEL_15;
    goto LABEL_8;
  }
  v6 = 1;
LABEL_7:
  v11 |= 0x10u;
  v12 |= 0x42uLL;
LABEL_8:
  if ( (MiFlags & 0x2000000) != 0 )
    _mm_lfence();
  if ( _bittest64(&MiFlags, 0x24u) && (v12 & 0x21) == 1 && (unsigned __int64)a2 >= 0xFFFFF6C000000000uLL )
    MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)a2, v12, 128LL);
  if ( a6 != _InterlockedCompareExchange64(a2, v12, a6) )
    return 0LL;
LABEL_15:
  if ( v6 && (MiFlags & 0x100) == 0 && (MiFlags & 0x200) == 0 )
  {
    if ( !v11 )
      v11 = 128;
    MiFlushSingleTbEntry(a3, a5, v11);
  }
  return v6;
}
