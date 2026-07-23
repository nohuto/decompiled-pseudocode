/*
 * XREFs of MiGetUltraMapping @ 0x1403361B0
 * Callers:
 *     MiMapPageInHyperSpaceWorker @ 0x14024BEF0 (MiMapPageInHyperSpaceWorker.c)
 *     MiZeroLargePage @ 0x140312ABC (MiZeroLargePage.c)
 *     MiZeroWithUltraSpace @ 0x140312E40 (MiZeroWithUltraSpace.c)
 *     MiMapBackgroundPagesToZero @ 0x140331C80 (MiMapBackgroundPagesToZero.c)
 *     MiComputeCombineHash @ 0x140335700 (MiComputeCombineHash.c)
 *     MiDeleteUltraThreadContext @ 0x140335BD0 (MiDeleteUltraThreadContext.c)
 *     MiGetPteMappingSet @ 0x140335DF0 (MiGetPteMappingSet.c)
 *     MiAllocateHyperSpace @ 0x140335ED0 (MiAllocateHyperSpace.c)
 *     MiSharePages @ 0x140343830 (MiSharePages.c)
 *     MiReplacePageOfProtoPool @ 0x140348A30 (MiReplacePageOfProtoPool.c)
 *     MiDeleteUltraMapContext @ 0x140352DF0 (MiDeleteUltraMapContext.c)
 *     MiScrubPage @ 0x1403EBDB0 (MiScrubPage.c)
 *     MiInitializeNewUltraHugeContext @ 0x1403EF7D8 (MiInitializeNewUltraHugeContext.c)
 *     MiReplacePageTablePage @ 0x1403F2DE8 (MiReplacePageTablePage.c)
 *     MmMapMdl @ 0x140677E60 (MmMapMdl.c)
 *     MiHugePageOperation @ 0x140686CF0 (MiHugePageOperation.c)
 *     MiUseProcessorHugeMappingAtDpc @ 0x1406870F4 (MiUseProcessorHugeMappingAtDpc.c)
 *     MiScrubLargePage @ 0x14068EB34 (MiScrubLargePage.c)
 *     MiUpdateForkMaps @ 0x140A5F5F0 (MiUpdateForkMaps.c)
 * Callees:
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiMakeValidPte @ 0x140212550 (MiMakeValidPte.c)
 *     MiGetHighestUltraLevel @ 0x140291C54 (MiGetHighestUltraLevel.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1402E6E94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiRewritePteWithLockBit @ 0x140335F2C (MiRewritePteWithLockBit.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1403368E0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1403369B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     MiReuseUltraPageTable @ 0x1404622AC (MiReuseUltraPageTable.c)
 *     MiDeleteUltraMapHierarchy @ 0x140462310 (MiDeleteUltraMapHierarchy.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiGetUltraMapping(__int64 a1, unsigned __int64 a2, __int64 a3, char a4)
{
  unsigned __int64 v4; // rbx
  int v5; // esi
  __int64 v9; // r14
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  __int64 v12; // r15
  __int64 v13; // rax
  __int64 result; // rax
  __int64 v15; // r12
  unsigned __int8 CurrentIrql; // r15
  unsigned int v17; // r14d
  LONG j; // edx
  unsigned __int64 v19; // r14
  volatile __int64 *v20; // rbx
  int v21; // ebx
  unsigned int v22; // r14d
  LONG i; // edx
  unsigned __int64 v24; // rbx
  unsigned __int64 v25; // rbx
  __int64 v26; // r12
  ULONG_PTR ValidPte; // rax
  ULONG_PTR v28; // rbx
  unsigned __int64 v29; // r14
  __int64 *v30; // r15
  __int64 v31; // r12
  ULONG_PTR v32; // rax
  ULONG_PTR v33; // rbx
  _QWORD *BugCheckParameter2; // [rsp+20h] [rbp-48h]
  unsigned __int64 HighestUltraLevel; // [rsp+28h] [rbp-40h]
  __int64 retaddr; // [rsp+68h] [rbp+0h]

  v4 = *(_QWORD *)a1;
  v5 = a2;
  v9 = MiUltraMapSizes[(unsigned int)a2];
  if ( *(_QWORD *)a1 )
  {
    v10 = 0x40000000LL;
    if ( (_DWORD)a2 != 1 )
      v10 = 0x200000LL;
    v11 = (unsigned __int64)(unsigned int)v10 << 9;
    if ( (_DWORD)a2 )
      v11 = v10;
    v12 = a3 << 12;
    v13 = v4 & (v11 - 1);
    a2 = (a3 << 12) + v13;
    if ( a2 <= v11 && v13 && (a4 & 2) == 0 )
    {
      *(_QWORD *)a1 = v12 + v4;
      return v4;
    }
    if ( v5 )
    {
      if ( a2 > v11 )
      {
        v4 = -(__int64)v11 & (v11 + v4 - 1);
        *(_QWORD *)a1 = v4;
      }
      v24 = (((v4 - 1) >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
      if ( v5 == 1 )
        v24 = ((v24 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( (a4 & 2) != 0 )
      {
        MiDeleteUltraMapHierarchy(v24);
      }
      else
      {
        MiRewritePteWithLockBit(0LL, 0, (volatile __int64 *)v24, CLFS_LSN_NULL_EXT);
        if ( v5 != 1 )
        {
          v25 = v24 + 8;
          BugCheckParameter2 = (_QWORD *)v25;
          if ( (v25 & 0xFFF) != 0 )
          {
            if ( byte_140E2DC81 )
              MiReuseUltraPageTable(a1, 1LL);
            v26 = (__int64)(v25 << 25) >> 16 << 25 >> 16;
            ValidPte = MiMakeValidPte(v25, *(_QWORD *)(a1 + 16), -1207959548);
            v28 = ValidPte;
            if ( _bittest64(&MiFlags, 0x24u)
              && (ValidPte & 0x20) == 0
              && (unsigned __int64)BugCheckParameter2 >= 0xFFFFF6C000000000uLL )
            {
              MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)BugCheckParameter2, ValidPte, 128LL);
            }
            *BugCheckParameter2 = v28;
            *(_BYTE *)(a1 + 25) = 1;
            *(_QWORD *)a1 = v12 + v26;
            if ( v26 )
              return v26;
          }
        }
      }
    }
    v4 = *(_QWORD *)a1 - v9;
  }
  v15 = 0LL;
  if ( (a4 & 4) != 0 )
  {
    CurrentIrql = 17;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      v22 = 0;
      if ( _interlockedbittestandset(&dword_140E36020, 0x1Fu) )
      {
        LOBYTE(a2) = -1;
        v22 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_140E36020, a2);
      }
      for ( i = dword_140E36020; (dword_140E36020 & 0xBFFFFFFF) != 0x80000000; i = dword_140E36020 )
      {
        if ( (i & 0x40000000) == 0 )
          _InterlockedOr(&dword_140E36020, 0x40000000u);
        if ( (++v22 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v22);
        }
        else
        {
          _mm_pause();
        }
      }
    }
    else
    {
      LOBYTE(a2) = -1;
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_140E36020, a2);
    }
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      v17 = 0;
      if ( _interlockedbittestandset(&dword_140E36020, 0x1Fu) )
        v17 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_140E36020, CurrentIrql);
      for ( j = dword_140E36020; (dword_140E36020 & 0xBFFFFFFF) != 0x80000000; j = dword_140E36020 )
      {
        if ( (j & 0x40000000) == 0 )
          _InterlockedOr(&dword_140E36020, 0x40000000u);
        if ( (++v17 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v17);
        }
        else
        {
          _mm_pause();
        }
      }
    }
    else
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_140E36020, CurrentIrql);
    }
  }
  if ( v4 )
  {
    v19 = (v4 - qword_140E36028) >> 30;
    v20 = (volatile __int64 *)(((v4 >> 27) & 0x1FFFF8) - 0x90482600000LL);
    if ( *v20 )
      MiRewritePteWithLockBit(0LL, 0, v20, CLFS_LSN_NULL_EXT);
    v21 = a4 & 2;
    if ( (a4 & 2) == 0 && byte_140E2DC81 && *(_QWORD *)(a1 + 8) != -1LL )
      MiReuseUltraPageTable(a1, 0LL);
    _bittestandset64((signed __int64 *)qword_140E36050, v19);
  }
  else
  {
    v21 = a4 & 2;
  }
  if ( v21 )
  {
    *(_QWORD *)a1 = 0LL;
    if ( CurrentIrql == 17 )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      {
        dword_140E36020 = 0;
        return 0LL;
      }
      else
      {
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140E36020, retaddr);
        return 0LL;
      }
    }
    else
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        dword_140E36020 = 0;
      else
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140E36020, retaddr);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
      return 0LL;
    }
  }
  else
  {
    HighestUltraLevel = MiGetHighestUltraLevel((__int64)&dword_140E36020);
    v4 = HighestUltraLevel;
    MiReleaseSpinLockExclusive(&dword_140E36020, CurrentIrql);
    if ( (a4 & 1) == 0 )
      *(_QWORD *)a1 = HighestUltraLevel + (a3 << 12);
    if ( !v5 )
      return v4;
    v29 = ((HighestUltraLevel >> 27) & 0x1FFFF8) - 0x90482600000LL;
    v30 = (__int64 *)(a1 + 8);
    LOBYTE(v15) = v5 != 1;
    v31 = v15 + 1;
    do
    {
      v32 = MiMakeValidPte(v29, *v30, -1207959548);
      v33 = v32;
      if ( _bittest64(&MiFlags, 0x24u) && (v32 & 0x20) == 0 && v29 >= 0xFFFFF6C000000000uLL )
        MiCheckLinearProtectedPteAccessedBit(v29, v32, 128LL);
      *(_QWORD *)v29 = v33;
      ++v30;
      v29 = (__int64)(v29 << 25) >> 16;
      --v31;
    }
    while ( v31 );
    result = HighestUltraLevel;
    *(_BYTE *)(a1 + 25) = 1;
  }
  return result;
}
