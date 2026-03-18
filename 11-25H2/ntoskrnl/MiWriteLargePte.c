/*
 * XREFs of MiWriteLargePte @ 0x1402C3820
 * Callers:
 *     MiZeroLargePage @ 0x140223DEC (MiZeroLargePage.c)
 *     MiZeroWithUltraSpace @ 0x140224410 (MiZeroWithUltraSpace.c)
 *     MiInsertLargeUserMapping @ 0x140384EB8 (MiInsertLargeUserMapping.c)
 *     MiMapWithLargePages @ 0x1403900B8 (MiMapWithLargePages.c)
 *     MiMapMdlWithLargePages @ 0x1404C6BAC (MiMapMdlWithLargePages.c)
 *     MiHugePageOperation @ 0x14067A330 (MiHugePageOperation.c)
 *     MiReleaseProcessorHugeMappingAtDpc @ 0x14067A52C (MiReleaseProcessorHugeMappingAtDpc.c)
 *     MiUseProcessorHugeMappingAtDpc @ 0x14067A734 (MiUseProcessorHugeMappingAtDpc.c)
 *     MiScrubLargePage @ 0x140682174 (MiScrubLargePage.c)
 *     MiInitializeNewUltraHugeContext @ 0x1406841C4 (MiInitializeNewUltraHugeContext.c)
 *     MxMapVa @ 0x140C41F14 (MxMapVa.c)
 * Callees:
 *     MiUserPdeOrAbove @ 0x14020F170 (MiUserPdeOrAbove.c)
 *     MiRewritePteWithLockBit @ 0x1402110AC (MiRewritePteWithLockBit.c)
 *     MiGetLeafVa @ 0x1402B5480 (MiGetLeafVa.c)
 *     MiIsAddressGlobal @ 0x1402C3B60 (MiIsAddressGlobal.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x14037CB60 (MiCheckLinearProtectedPteAccessedBit.c)
 */

unsigned __int64 __fastcall MiWriteLargePte(unsigned __int64 a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 v4; // rbp
  __int64 v5; // r8
  unsigned __int64 v7; // rdi
  __int64 v8; // r14
  __int64 v9; // rdx
  unsigned __int64 v10; // rbx
  unsigned __int64 LeafVa; // rcx
  __int64 v12; // r9
  int IsAddressGlobal; // eax
  unsigned __int64 v14; // rdx
  int v15; // r9d
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rbp
  unsigned __int64 v19; // rcx
  __int64 v20; // rbx
  unsigned int v21; // esi
  ULONG_PTR v22; // rbx
  __int64 v23; // rax
  ULONG_PTR *v24; // r14
  unsigned __int64 v26; // rbx
  unsigned int v27; // esi
  __int64 v28; // rax
  volatile __int64 *v29; // rcx
  __int64 v30; // rcx

  v4 = a3;
  v5 = 0x7FFFFFFFF8LL;
  v7 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( (unsigned int)v4 <= 1 )
  {
    v30 = (unsigned int)(2 - v4);
    do
    {
      v7 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v30;
    }
    while ( v30 );
  }
  if ( a4 )
  {
    v8 = a4 & 0x1F;
    v9 = (a2 & 0xFFFFFFFFFFLL) << 12;
    v10 = v9 | MmProtectToPteMask[v8] & 0xFFF0000000000E7FuLL | 0x21;
    if ( v7 < 0xFFFFF68000000000uLL || v7 > 0xFFFFF6FFFFFFFFFFuLL )
    {
      v16 = v9 | MmProtectToPteMask[v8] & 0xFFF0000000000E7FuLL | 0x121;
      v15 = a4 & 0x4000000;
    }
    else
    {
      if ( v7 >= 0xFFFFF6FB40000000uLL && v7 <= 0xFFFFF6FB7FFFFFFFuLL )
      {
        if ( v7 == 0xFFFFF6FB7DBEDF68uLL )
        {
          v10 = v9 | MmProtectToPteMask[v8] & 0xFFF0000000000E7FuLL | 0x8000000000000021uLL;
        }
        else if ( (a4 & 0x4000000) == 0 )
        {
          v10 = v9 & 0x7FFFFFFFFFFFFFFFLL | MmProtectToPteMask[v8] & 0x7FF0000000000E7FLL | 0x21;
        }
        if ( (unsigned int)MiUserPdeOrAbove(v7) )
          v10 |= 4uLL;
      }
      LeafVa = (__int64)(v7 << 25) >> 16;
      v12 = a4 & 0x4000000;
      if ( (a4 & 0x4000000) != 0 )
        LeafVa = MiGetLeafVa(LeafVa);
      if ( LeafVa <= 0x7FFFFFFEFFFFLL )
        v10 |= 4uLL;
      IsAddressGlobal = MiIsAddressGlobal(LeafVa, v10, v5, v12);
      v16 = v10 | 0x100;
      if ( !IsAddressGlobal )
        v16 = v14;
    }
    if ( a4 < 0 && (v8 & 5) == 4 )
      v16 |= 0x42uLL;
    v17 = v16 & 0xFFFFFFFFFFFFFFFBuLL;
    if ( (a4 & 0x40000000) == 0 )
      v17 = v16;
    if ( (a4 & 0x20000000) != 0 )
      v17 = ((unsigned __int64)(unsigned __int8)word_140E2EB44 << 8) ^ (((unsigned __int64)(unsigned __int8)word_140E2EB44 << 8) ^ v17) & 0xFFFFFFFFFFFFFEFFuLL;
    v18 = MiPtesToSupportLargePageSizes[v4];
    v19 = v17 & 0xFFFFFFFFFFFFFEFFuLL;
    if ( (a4 & 0x8000000) == 0 )
      v19 = v17;
    v20 = v19 | 0x80;
    if ( !v15 )
      v20 = v19;
    v21 = 0;
    v22 = v20 & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
    if ( v18 )
    {
      v23 = 0LL;
      do
      {
        v24 = (ULONG_PTR *)(v7 + 8 * v23);
        if ( _bittest64(&MiFlags, 0x24u) && (v22 & 0x20) == 0 && (unsigned __int64)v24 >= 0xFFFFF6C000000000uLL )
          MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)v24, v22);
        *v24 = v22;
        v23 = ++v21;
        v22 = (v22 + 4096) ^ ((v22 + 4096) ^ v22) & 0xFFF0000000000FFFuLL;
      }
      while ( v21 < v18 );
    }
    return v7;
  }
  else
  {
    v26 = MiPtesToSupportLargePageSizes[v4];
    v27 = 0;
    if ( v26 )
    {
      v28 = 0LL;
      do
      {
        v29 = (volatile __int64 *)(v7 + 8 * v28);
        if ( *v29 )
        {
          if ( (unsigned int)v4 <= 1 )
            MiRewritePteWithLockBit(0LL, 0, v29, CLFS_LSN_NULL_EXT);
          else
            *v29 = CLFS_LSN_NULL_EXT;
        }
        v28 = ++v27;
      }
      while ( v27 < v26 );
    }
    return v7;
  }
}
