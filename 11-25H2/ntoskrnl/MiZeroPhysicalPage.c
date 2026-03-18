/*
 * XREFs of MiZeroPhysicalPage @ 0x14024D560
 * Callers:
 *     MiIssueHardFault @ 0x1402085EC (MiIssueHardFault.c)
 *     MiWaitForInPageComplete @ 0x1402090B8 (MiWaitForInPageComplete.c)
 *     MiMakePageAvoidRead @ 0x140222A90 (MiMakePageAvoidRead.c)
 *     MiZeroLargePage @ 0x140223DEC (MiZeroLargePage.c)
 *     MiZeroChainWorker @ 0x1402242C4 (MiZeroChainWorker.c)
 *     MiGetSlabPage @ 0x14022BC70 (MiGetSlabPage.c)
 *     MiGetPage @ 0x14022CE00 (MiGetPage.c)
 *     MiGetPageChain @ 0x140241940 (MiGetPageChain.c)
 *     MmCheckCachedPageStates @ 0x14025B020 (MmCheckCachedPageStates.c)
 *     MiGetPageChainSmallPageProcess @ 0x1402C7A50 (MiGetPageChainSmallPageProcess.c)
 *     MiPfPutPagesInTransition @ 0x14033A50C (MiPfPutPagesInTransition.c)
 *     MiZeroAndReleasePages @ 0x14038C180 (MiZeroAndReleasePages.c)
 *     MiFreePageToSlabAllocator @ 0x1403B7474 (MiFreePageToSlabAllocator.c)
 *     MiZeroAndConvertPage @ 0x1403F8AEC (MiZeroAndConvertPage.c)
 *     MiPerformFinalZeroing @ 0x1404F5DB0 (MiPerformFinalZeroing.c)
 *     MiInitializeCacheFlushing @ 0x140C48FA8 (MiInitializeCacheFlushing.c)
 * Callees:
 *     MiMakeValidPte @ 0x14020EF10 (MiMakeValidPte.c)
 *     MiFlushSingleTbEntry @ 0x140219200 (MiFlushSingleTbEntry.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14024DAC0 (MiMapPageInHyperSpaceWorker.c)
 *     MiChangePageAttribute @ 0x14024DE74 (MiChangePageAttribute.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x14037CB60 (MiCheckLinearProtectedPteAccessedBit.c)
 *     AccelFillMemory @ 0x140406838 (AccelFillMemory.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     KeZeroPages @ 0x1406A80C0 (KeZeroPages.c)
 *     MxGetPhase0Mapping @ 0x140BCD9E0 (MxGetPhase0Mapping.c)
 */

__int64 __fastcall MiZeroPhysicalPage(__int64 a1, __int64 a2, char a3, int a4)
{
  __int64 v4; // r11
  __int64 v7; // r9
  unsigned int v8; // r14d
  unsigned int v9; // r13d
  unsigned int v10; // ebp
  int v11; // ecx
  ULONG_PTR v12; // r10
  char *v13; // rax
  int i; // r8d
  int v15; // edx
  ULONG_PTR *v16; // r15
  void *MmInternal; // rsi
  unsigned __int64 Phase0Mapping; // rdi
  unsigned __int64 v19; // rbx
  __int64 result; // rax
  ULONG_PTR ValidPte; // rax
  ULONG_PTR v22; // rbx
  __int64 v23; // [rsp+88h] [rbp+10h]
  unsigned __int8 v24; // [rsp+90h] [rbp+18h] BYREF
  int v25; // [rsp+98h] [rbp+20h]

  v25 = a4;
  v4 = a4;
  v7 = 48 * a2 - 0x220000000000LL;
  v8 = (unsigned __int8)BYTE2(*(_DWORD *)(v7 + 32)) >> 6;
  v9 = 8 * (a3 & 2);
  v10 = v8;
  v23 = v7;
  if ( (a3 & 1) == 0 )
  {
    v11 = dword_140E2D884;
    v12 = 0xAAAAAAAAAAAAAAABuLL * ((48 * a2) >> 4);
    if ( dword_140E2D880 > (unsigned int)dword_140E2D884
      || (v13 = (char *)qword_140E2D8E0 + 16 * dword_140E2D880, v12 < *(_QWORD *)v13)
      || dword_140E2D880 != dword_140E2D884 && v12 >= *((_QWORD *)v13 + 2) )
    {
      for ( i = 0; ; i = v15 + 1 )
      {
        while ( 1 )
        {
          if ( v11 < i )
            KeBugCheckEx(0x1Au, 0x5180uLL, v12, 0LL, 0LL);
          v15 = (i + v11) >> 1;
          v13 = (char *)qword_140E2D8E0 + 16 * v15;
          if ( v12 >= *(_QWORD *)v13 )
            break;
          if ( !v15 )
            KeBugCheckEx(0x1Au, 0x5180uLL, v12, (ULONG_PTR)qword_140E2D8E0, 0LL);
          v11 = v15 - 1;
        }
        if ( v15 == dword_140E2D884 || v12 < *((_QWORD *)v13 + 2) )
          break;
      }
      dword_140E2D880 = (i + v11) >> 1;
    }
    v10 = *(_DWORD *)(qword_140E2D8B8
                    + 384LL * *((unsigned int *)v13 + 2)
                    + 4 * (v4 + 4 * ((unsigned __int64)(unsigned __int8)BYTE2(*(_DWORD *)(v7 + 32)) >> 6))
                    + 120);
    if ( v10 != v8 )
      MiChangePageAttribute(v7, v10, v9);
  }
  v24 = 17;
  v16 = 0LL;
  MmInternal = KeGetCurrentPrcb()->MmInternal;
  if ( MmInternal )
  {
    Phase0Mapping = MiMapPageInHyperSpaceWorker(a2, &v24, 0x80000000LL);
  }
  else
  {
    Phase0Mapping = MxGetPhase0Mapping();
    v16 = (ULONG_PTR *)(((Phase0Mapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    ValidPte = MiMakeValidPte((unsigned __int64)v16, a2, -1610612732);
    v22 = ValidPte;
    if ( _bittest64(&MiFlags, 0x24u) && (ValidPte & 0x20) == 0 && (unsigned __int64)v16 >= 0xFFFFF6C000000000uLL )
      MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)v16, ValidPte);
    *v16 = v22;
  }
  if ( !a1 )
    goto LABEL_16;
  if ( (int)AccelFillMemory(a1, Phase0Mapping, 4096, 0, 3LL) < 0 )
  {
    ++dword_140EF49CC;
LABEL_16:
    KeZeroPages(Phase0Mapping, 4096LL);
  }
  if ( MmInternal )
  {
    v19 = v24;
    result = CLFS_LSN_NULL_EXT;
    *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
    *(_QWORD *)(((Phase0Mapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = CLFS_LSN_NULL_EXT;
    if ( (_BYTE)v19 != 17 )
    {
      if ( KiIrqlFlags )
        result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v19);
      __writecr8(v19);
    }
  }
  else
  {
    *v16 = CLFS_LSN_NULL_EXT;
    result = MiFlushSingleTbEntry(Phase0Mapping, 2, 1);
  }
  if ( v10 != v8 && v10 != v25 )
    return MiChangePageAttribute(v23, v8, v9);
  return result;
}
