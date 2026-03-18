/*
 * XREFs of MiGetUltraMapping @ 0x140211990
 * Callers:
 *     MiMapBackgroundPagesToZero @ 0x140210430 (MiMapBackgroundPagesToZero.c)
 *     MiComputeCombineHash @ 0x140210ED0 (MiComputeCombineHash.c)
 *     MiDeleteUltraThreadContext @ 0x140211630 (MiDeleteUltraThreadContext.c)
 *     MiGetPteMappingSet @ 0x140211850 (MiGetPteMappingSet.c)
 *     MiAllocateHyperSpace @ 0x140211930 (MiAllocateHyperSpace.c)
 *     MiZeroLargePage @ 0x140223DEC (MiZeroLargePage.c)
 *     MiZeroWithUltraSpace @ 0x140224410 (MiZeroWithUltraSpace.c)
 *     MiSharePages @ 0x140238650 (MiSharePages.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14024DAC0 (MiMapPageInHyperSpaceWorker.c)
 *     MiReplacePageOfProtoPool @ 0x14033AFCC (MiReplacePageOfProtoPool.c)
 *     MiScrubPage @ 0x1403F0F94 (MiScrubPage.c)
 *     MiReplacePageTablePage @ 0x14040B438 (MiReplacePageTablePage.c)
 *     MiDeleteUltraMapContext @ 0x140450D20 (MiDeleteUltraMapContext.c)
 *     MmMapMdl @ 0x14066B340 (MmMapMdl.c)
 *     MiHugePageOperation @ 0x14067A330 (MiHugePageOperation.c)
 *     MiUseProcessorHugeMappingAtDpc @ 0x14067A734 (MiUseProcessorHugeMappingAtDpc.c)
 *     MiScrubLargePage @ 0x140682174 (MiScrubLargePage.c)
 *     MiInitializeNewUltraHugeContext @ 0x1406841C4 (MiInitializeNewUltraHugeContext.c)
 *     MiUpdateForkMaps @ 0x140A6EA7C (MiUpdateForkMaps.c)
 * Callees:
 *     MiMakeValidPte @ 0x14020EF10 (MiMakeValidPte.c)
 *     MiRewritePteWithLockBit @ 0x1402110AC (MiRewritePteWithLockBit.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1402120E0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1402121B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     MiGetHighestUltraLevel @ 0x1402A9B28 (MiGetHighestUltraLevel.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x14037CB60 (MiCheckLinearProtectedPteAccessedBit.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1403A2D94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiDeleteUltraMapHierarchy @ 0x140450B18 (MiDeleteUltraMapHierarchy.c)
 *     MiReuseUltraPageTable @ 0x140450BD4 (MiReuseUltraPageTable.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
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
  LONG v18; // edx
  __int64 v19; // rcx
  unsigned __int64 v20; // r14
  volatile __int64 *v21; // rbx
  int v22; // ebx
  unsigned int v23; // r14d
  LONG v24; // edx
  __int64 v25; // rcx
  unsigned __int64 v26; // rbx
  unsigned __int64 v27; // rbx
  __int64 v28; // r12
  ULONG_PTR ValidPte; // rax
  ULONG_PTR v30; // rbx
  unsigned __int64 v31; // r14
  __int64 *v32; // r15
  __int64 v33; // r12
  ULONG_PTR v34; // rax
  ULONG_PTR v35; // rbx
  _QWORD *BugCheckParameter2; // [rsp+20h] [rbp-48h]
  unsigned __int64 HighestUltraLevel; // [rsp+28h] [rbp-40h]
  void *retaddr; // [rsp+68h] [rbp+0h]

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
      v26 = (((v4 - 1) >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
      if ( v5 == 1 )
        v26 = ((v26 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( (a4 & 2) != 0 )
      {
        MiDeleteUltraMapHierarchy(v26);
      }
      else
      {
        MiRewritePteWithLockBit(0LL, 0, (volatile __int64 *)v26, CLFS_LSN_NULL_EXT);
        if ( v5 != 1 )
        {
          v27 = v26 + 8;
          BugCheckParameter2 = (_QWORD *)v27;
          if ( (v27 & 0xFFF) != 0 )
          {
            if ( byte_140E2D901 )
              MiReuseUltraPageTable(a1, 1LL);
            v28 = (__int64)(v27 << 25) >> 16 << 25 >> 16;
            ValidPte = MiMakeValidPte(v27, *(_QWORD *)(a1 + 16), -1207959548);
            v30 = ValidPte;
            if ( _bittest64(&MiFlags, 0x24u)
              && (ValidPte & 0x20) == 0
              && (unsigned __int64)BugCheckParameter2 >= 0xFFFFF6C000000000uLL )
            {
              MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)BugCheckParameter2, ValidPte);
            }
            *BugCheckParameter2 = v30;
            *(_BYTE *)(a1 + 25) = 1;
            *(_QWORD *)a1 = v12 + v28;
            if ( v28 )
              return v28;
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
      v23 = 0;
      if ( _interlockedbittestandset(&dword_140E35CA0, 0x1Fu) )
      {
        LOBYTE(a2) = -1;
        v23 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_140E35CA0, a2);
      }
      v24 = dword_140E35CA0;
      v25 = (unsigned int)dword_140E35CA0;
      for ( LODWORD(v25) = dword_140E35CA0 & 0xBFFFFFFF; (dword_140E35CA0 & 0xBFFFFFFF) != 0x80000000; v24 = dword_140E35CA0 )
      {
        if ( (v24 & 0x40000000) == 0 )
          _InterlockedOr(&dword_140E35CA0, 0x40000000u);
        if ( (++v23 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v25) )
        {
          HvlNotifyLongSpinWait(v23);
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
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_140E35CA0, a2);
    }
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      v17 = 0;
      if ( _interlockedbittestandset(&dword_140E35CA0, 0x1Fu) )
        v17 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_140E35CA0, CurrentIrql);
      v18 = dword_140E35CA0;
      v19 = (unsigned int)dword_140E35CA0;
      for ( LODWORD(v19) = dword_140E35CA0 & 0xBFFFFFFF; (dword_140E35CA0 & 0xBFFFFFFF) != 0x80000000; v18 = dword_140E35CA0 )
      {
        if ( (v18 & 0x40000000) == 0 )
          _InterlockedOr(&dword_140E35CA0, 0x40000000u);
        if ( (++v17 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v19) )
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
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_140E35CA0, CurrentIrql);
    }
  }
  if ( v4 )
  {
    v20 = (v4 - qword_140E35CA8) >> 30;
    v21 = (volatile __int64 *)(((v4 >> 27) & 0x1FFFF8) - 0x90482600000LL);
    if ( *v21 )
      MiRewritePteWithLockBit(0LL, 0, v21, CLFS_LSN_NULL_EXT);
    v22 = a4 & 2;
    if ( (a4 & 2) == 0 && byte_140E2D901 && *(_QWORD *)(a1 + 8) != -1LL )
      MiReuseUltraPageTable(a1, 0LL);
    _bittestandset64((signed __int64 *)qword_140E35CD0, v20);
  }
  else
  {
    v22 = a4 & 2;
  }
  if ( v22 )
  {
    *(_QWORD *)a1 = 0LL;
    if ( CurrentIrql == 17 )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      {
        dword_140E35CA0 = 0;
        return 0LL;
      }
      else
      {
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140E35CA0, retaddr);
        return 0LL;
      }
    }
    else
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        dword_140E35CA0 = 0;
      else
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140E35CA0, retaddr);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
      return 0LL;
    }
  }
  else
  {
    HighestUltraLevel = MiGetHighestUltraLevel(&dword_140E35CA0);
    v4 = HighestUltraLevel;
    MiReleaseSpinLockExclusive(&dword_140E35CA0, CurrentIrql);
    if ( (a4 & 1) == 0 )
      *(_QWORD *)a1 = HighestUltraLevel + (a3 << 12);
    if ( !v5 )
      return v4;
    v31 = ((HighestUltraLevel >> 27) & 0x1FFFF8) - 0x90482600000LL;
    v32 = (__int64 *)(a1 + 8);
    LOBYTE(v15) = v5 != 1;
    v33 = v15 + 1;
    do
    {
      v34 = MiMakeValidPte(v31, *v32, -1207959548);
      v35 = v34;
      if ( _bittest64(&MiFlags, 0x24u) && (v34 & 0x20) == 0 && v31 >= 0xFFFFF6C000000000uLL )
        MiCheckLinearProtectedPteAccessedBit(v31, v34);
      *(_QWORD *)v31 = v35;
      ++v32;
      v31 = (__int64)(v31 << 25) >> 16;
      --v33;
    }
    while ( v33 );
    result = HighestUltraLevel;
    *(_BYTE *)(a1 + 25) = 1;
  }
  return result;
}
