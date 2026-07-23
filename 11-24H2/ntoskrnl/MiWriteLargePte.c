/*
 * XREFs of MiWriteLargePte @ 0x140312F80
 * Callers:
 *     MiInsertLargeUserMapping @ 0x14026AC6C (MiInsertLargeUserMapping.c)
 *     MiMapWithLargePages @ 0x14026BB00 (MiMapWithLargePages.c)
 *     MiZeroLargePage @ 0x140312ABC (MiZeroLargePage.c)
 *     MiZeroWithUltraSpace @ 0x140312E40 (MiZeroWithUltraSpace.c)
 *     MiInitializeNewUltraHugeContext @ 0x1403EF7D8 (MiInitializeNewUltraHugeContext.c)
 *     MiMapMdlWithLargePages @ 0x1404C0630 (MiMapMdlWithLargePages.c)
 *     MiHugePageOperation @ 0x140686CF0 (MiHugePageOperation.c)
 *     MiReleaseProcessorHugeMappingAtDpc @ 0x140686EEC (MiReleaseProcessorHugeMappingAtDpc.c)
 *     MiUseProcessorHugeMappingAtDpc @ 0x1406870F4 (MiUseProcessorHugeMappingAtDpc.c)
 *     MiScrubLargePage @ 0x14068EB34 (MiScrubLargePage.c)
 *     MxMapVa @ 0x140C552D4 (MxMapVa.c)
 * Callees:
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiUserPdeOrAbove @ 0x1402127C8 (MiUserPdeOrAbove.c)
 *     MiRewritePteWithLockBit @ 0x140335F2C (MiRewritePteWithLockBit.c)
 */

unsigned __int64 __fastcall MiWriteLargePte(unsigned __int64 a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 v4; // r14
  unsigned __int64 v6; // rdi
  __int64 v7; // r15
  __int64 v8; // rdx
  unsigned __int64 v9; // rbx
  unsigned int v10; // esi
  unsigned __int64 v11; // rax
  int v12; // r8d
  __int64 v13; // rdx
  int v14; // eax
  unsigned __int64 v15; // rbx
  __int64 v16; // rdx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rcx
  bool v19; // zf
  unsigned __int64 v20; // rbp
  __int64 v21; // rbx
  ULONG_PTR v22; // rbx
  __int64 v23; // rax
  ULONG_PTR *v24; // r14
  unsigned __int64 v26; // rbx
  unsigned int v27; // esi
  __int64 v28; // rax
  _QWORD *v29; // rcx
  __int64 v30; // rcx

  v4 = a3;
  v6 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( a3 <= 1 )
  {
    v30 = 2 - a3;
    do
    {
      v6 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v30;
    }
    while ( v30 );
  }
  if ( a4 )
  {
    v7 = a4 & 0x1F;
    v8 = (a2 & 0xFFFFFFFFFFLL) << 12;
    v9 = v8 | MmProtectToPteMask[v7] & 0xFFF0000000000E7FuLL | 0x21;
    v10 = 0;
    if ( v6 < 0xFFFFF68000000000uLL || v6 > 0xFFFFF6FFFFFFFFFFuLL )
    {
      v15 = v8 | MmProtectToPteMask[v7] & 0xFFF0000000000E7FuLL | 0x121;
      v12 = a4 & 0x4000000;
    }
    else
    {
      if ( v6 >= 0xFFFFF6FB40000000uLL && v6 <= 0xFFFFF6FB7FFFFFFFuLL )
      {
        if ( v6 == 0xFFFFF6FB7DBEDF68uLL )
        {
          v9 = v8 | MmProtectToPteMask[v7] & 0xFFF0000000000E7FuLL | 0x8000000000000021uLL;
        }
        else if ( (a4 & 0x4000000) == 0 )
        {
          v9 = v8 & 0x7FFFFFFFFFFFFFFFLL | MmProtectToPteMask[v7] & 0x7FF0000000000E7FLL | 0x21;
        }
        if ( (unsigned int)MiUserPdeOrAbove(v6) )
          v9 |= 4uLL;
      }
      v11 = (__int64)(v6 << 25) >> 16;
      v12 = a4 & 0x4000000;
      if ( (a4 & 0x4000000) != 0 && v11 >= 0xFFFFF68000000000uLL )
      {
        do
        {
          if ( v11 > 0xFFFFF6FFFFFFFFFFuLL )
            break;
          v11 = (__int64)(v11 << 25) >> 16;
        }
        while ( v11 >= 0xFFFFF68000000000uLL );
      }
      v13 = v9 | 4;
      if ( v11 > 0x7FFFFFFEFFFFLL )
        v13 = v9;
      if ( v11 < 0xFFFF800000000000uLL )
      {
        v14 = HIBYTE(word_140E2EEC4);
      }
      else if ( v11 < 0xFFFFF68000000000uLL || v11 > 0xFFFFF6FFFFFFFFFFuLL )
      {
        if ( v11 < qword_140E2F3C0 || v11 > qword_140E2F3D0 )
          v14 = (unsigned __int8)word_140E2EEC4;
        else
          v14 = HIBYTE(word_140E2EEC4);
      }
      else
      {
        v14 = 0;
      }
      v15 = v13 | 0x100;
      if ( !v14 )
        v15 = v13;
    }
    v16 = v15 | 0x42;
    if ( (v7 & 5) != 4 || a4 >= 0 )
      v16 = v15;
    v17 = v16 & 0xFFFFFFFFFFFFFFFBuLL;
    if ( (a4 & 0x40000000) == 0 )
      v17 = v16;
    if ( (a4 & 0x20000000) != 0 )
      v17 = ((unsigned __int64)(unsigned __int8)word_140E2EEC4 << 8) ^ (((unsigned __int64)(unsigned __int8)word_140E2EEC4 << 8) ^ v17) & 0xFFFFFFFFFFFFFEFFuLL;
    v18 = v17 & 0xFFFFFFFFFFFFFEFFuLL;
    v19 = (a4 & 0x8000000) == 0;
    v20 = MiPtesToSupportLargePageSizes[v4];
    if ( v19 )
      v18 = v17;
    v21 = v18 | 0x80;
    if ( !v12 )
      v21 = v18;
    v22 = v21 & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
    if ( v20 )
    {
      v23 = 0LL;
      do
      {
        v24 = (ULONG_PTR *)(v6 + 8 * v23);
        if ( _bittest64(&MiFlags, 0x24u) && (v22 & 0x20) == 0 && (unsigned __int64)v24 >= 0xFFFFF6C000000000uLL )
          MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)v24, v22, 128LL);
        *v24 = v22;
        v23 = ++v10;
        v22 = (v22 + 4096) ^ ((v22 + 4096) ^ v22) & 0xFFF0000000000FFFuLL;
      }
      while ( v10 < v20 );
    }
    return v6;
  }
  else
  {
    v26 = MiPtesToSupportLargePageSizes[a3];
    v27 = 0;
    if ( v26 )
    {
      v28 = 0LL;
      do
      {
        v29 = (_QWORD *)(v6 + 8 * v28);
        if ( *v29 )
        {
          if ( (unsigned int)v4 <= 1 )
            MiRewritePteWithLockBit(0LL, 0LL, v29, CLFS_LSN_NULL_EXT);
          else
            *v29 = CLFS_LSN_NULL_EXT;
        }
        v28 = ++v27;
      }
      while ( v27 < v26 );
    }
    return v6;
  }
}
