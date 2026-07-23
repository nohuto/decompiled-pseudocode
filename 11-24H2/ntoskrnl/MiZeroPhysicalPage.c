/*
 * XREFs of MiZeroPhysicalPage @ 0x14024B990
 * Callers:
 *     MiZeroAndReleasePages @ 0x140217770 (MiZeroAndReleasePages.c)
 *     MiGetSlabPage @ 0x14021CE24 (MiGetSlabPage.c)
 *     MmCheckCachedPageStates @ 0x140236420 (MmCheckCachedPageStates.c)
 *     MiFreePageToSlabAllocator @ 0x140250F18 (MiFreePageToSlabAllocator.c)
 *     MiMakePageAvoidRead @ 0x140253334 (MiMakePageAvoidRead.c)
 *     MiGetPageChainSmallPageProcess @ 0x140253A70 (MiGetPageChainSmallPageProcess.c)
 *     MiGetPageChain @ 0x140307540 (MiGetPageChain.c)
 *     MiZeroLargePage @ 0x140312ABC (MiZeroLargePage.c)
 *     MiZeroChainWorker @ 0x140314138 (MiZeroChainWorker.c)
 *     MiGetPage @ 0x14033BF40 (MiGetPage.c)
 *     MiPfPutPagesInTransition @ 0x140347F6C (MiPfPutPagesInTransition.c)
 *     MiIssueHardFault @ 0x140350280 (MiIssueHardFault.c)
 *     MiWaitForInPageComplete @ 0x140350CE8 (MiWaitForInPageComplete.c)
 *     MiZeroAndConvertPage @ 0x1403F8F1C (MiZeroAndConvertPage.c)
 *     MiPerformFinalZeroing @ 0x1404F5E44 (MiPerformFinalZeroing.c)
 *     MiInitializeCacheFlushing @ 0x140C5C468 (MiInitializeCacheFlushing.c)
 * Callees:
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiMakeValidPte @ 0x140212550 (MiMakeValidPte.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14024BEF0 (MiMapPageInHyperSpaceWorker.c)
 *     MiChangePageAttribute @ 0x14024C2DC (MiChangePageAttribute.c)
 *     MiFlushSingleTbEntry @ 0x1402FDA50 (MiFlushSingleTbEntry.c)
 *     AccelFillMemory @ 0x140402B5C (AccelFillMemory.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     KeZeroPages @ 0x1406B4330 (KeZeroPages.c)
 *     MxGetPhase0Mapping @ 0x140BE09E0 (MxGetPhase0Mapping.c)
 */

__int64 __fastcall MiZeroPhysicalPage(__int64 a1, __int64 a2, char a3, int a4)
{
  __int64 v5; // r13
  unsigned int v6; // r14d
  unsigned int v7; // r15d
  unsigned int v8; // esi
  int v9; // ecx
  ULONG_PTR v10; // r10
  char *v11; // rax
  int i; // r8d
  int v13; // edx
  ULONG_PTR *v14; // r12
  void *MmInternal; // rbp
  unsigned __int64 Phase0Mapping; // rdi
  unsigned __int64 v17; // rbx
  __int64 result; // rax
  ULONG_PTR ValidPte; // rax
  ULONG_PTR v20; // rbx
  unsigned __int8 v22; // [rsp+90h] [rbp+18h] BYREF
  int v23; // [rsp+98h] [rbp+20h]

  v23 = a4;
  v5 = 48 * a2 - 0x220000000000LL;
  v6 = (unsigned __int8)BYTE2(*(_DWORD *)(v5 + 32)) >> 6;
  v7 = 8 * (a3 & 2);
  v8 = v6;
  if ( (a3 & 1) == 0 )
  {
    v9 = dword_140E2DC04;
    v10 = 0xAAAAAAAAAAAAAAABuLL * ((48 * a2) >> 4);
    if ( dword_140E2DC00 > (unsigned int)dword_140E2DC04
      || (v11 = (char *)qword_140E2DC60 + 16 * dword_140E2DC00, v10 < *(_QWORD *)v11)
      || dword_140E2DC00 != dword_140E2DC04 && v10 >= *((_QWORD *)v11 + 2) )
    {
      for ( i = 0; ; i = v13 + 1 )
      {
        while ( 1 )
        {
          if ( v9 < i )
            KeBugCheckEx(0x1Au, 0x5180uLL, v10, 0LL, 0LL);
          v13 = (i + v9) >> 1;
          v11 = (char *)qword_140E2DC60 + 16 * v13;
          if ( v10 >= *(_QWORD *)v11 )
            break;
          if ( !v13 )
            KeBugCheckEx(0x1Au, 0x5180uLL, v10, (ULONG_PTR)qword_140E2DC60, 0LL);
          v9 = v13 - 1;
        }
        if ( v13 == dword_140E2DC04 || v10 < *((_QWORD *)v11 + 2) )
          break;
      }
      dword_140E2DC00 = (i + v9) >> 1;
    }
    v8 = *(_DWORD *)(qword_140E2DC38
                   + 384LL * *((unsigned int *)v11 + 2)
                   + 4 * (a4 + 4 * ((unsigned __int64)(unsigned __int8)BYTE2(*(_DWORD *)(v5 + 32)) >> 6))
                   + 120);
    if ( v8 != v6 )
      MiChangePageAttribute(v5, v8, v7);
  }
  v22 = 17;
  v14 = 0LL;
  MmInternal = KeGetCurrentPrcb()->MmInternal;
  if ( MmInternal )
  {
    Phase0Mapping = MiMapPageInHyperSpaceWorker(a2, &v22, 0x80000000LL);
  }
  else
  {
    Phase0Mapping = MxGetPhase0Mapping();
    v14 = (ULONG_PTR *)(((Phase0Mapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    ValidPte = MiMakeValidPte((unsigned __int64)v14, a2, -1610612732);
    v20 = ValidPte;
    if ( _bittest64(&MiFlags, 0x24u) && (ValidPte & 0x20) == 0 && (unsigned __int64)v14 >= 0xFFFFF6C000000000uLL )
      MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)v14, ValidPte, 128LL);
    *v14 = v20;
  }
  if ( !a1 )
    goto LABEL_16;
  if ( (int)AccelFillMemory(a1, Phase0Mapping, 4096, 0, 3LL) < 0 )
  {
    ++dword_140EF4ECC;
LABEL_16:
    KeZeroPages(Phase0Mapping, 4096LL);
  }
  if ( MmInternal )
  {
    v17 = v22;
    result = CLFS_LSN_NULL_EXT;
    *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
    *(_QWORD *)(((Phase0Mapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = CLFS_LSN_NULL_EXT;
    if ( (_BYTE)v17 != 17 )
    {
      if ( KiIrqlFlags )
        result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v17);
      __writecr8(v17);
    }
  }
  else
  {
    *v14 = CLFS_LSN_NULL_EXT;
    result = MiFlushSingleTbEntry(Phase0Mapping, 2LL, 1LL);
  }
  if ( v8 != v6 && v8 != v23 )
    return MiChangePageAttribute(v5, v6, v7);
  return result;
}
