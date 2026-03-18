/*
 * XREFs of MiGetSlabPage @ 0x14022BC70
 * Callers:
 *     MiResolveMappedFileFault @ 0x1402276BC (MiResolveMappedFileFault.c)
 *     MiAllocateKernelStackPages @ 0x1402282B8 (MiAllocateKernelStackPages.c)
 *     MiGetPageTablePages @ 0x14022A2B8 (MiGetPageTablePages.c)
 *     MiAllocateSlabPageForMdl @ 0x14022AE68 (MiAllocateSlabPageForMdl.c)
 *     MiGetUltraPage @ 0x14022CD10 (MiGetUltraPage.c)
 *     MiReplenishCombineResources @ 0x1402395F4 (MiReplenishCombineResources.c)
 *     MiGetPageChain @ 0x140241940 (MiGetPageChain.c)
 *     MiPfPutPagesInTransition @ 0x14033A50C (MiPfPutPagesInTransition.c)
 *     MiWalkEntireImage @ 0x14033BD50 (MiWalkEntireImage.c)
 *     MiCopyOnWrite @ 0x140386068 (MiCopyOnWrite.c)
 *     MiCompleteSecureProcessFault @ 0x1403F3164 (MiCompleteSecureProcessFault.c)
 *     MmAllocateNonChargedSecurePages @ 0x14049E89C (MmAllocateNonChargedSecurePages.c)
 *     MiFinalizeImageHeaderPage @ 0x1404A1818 (MiFinalizeImageHeaderPage.c)
 *     MiProtectDriverSectionPte @ 0x14065F8C0 (MiProtectDriverSectionPte.c)
 *     MmAllocateSecureKernelPages @ 0x14067D234 (MmAllocateSecureKernelPages.c)
 *     MiPfPrepareReadList @ 0x1409C90BC (MiPfPrepareReadList.c)
 *     MiPfPrepareSequentialReadList @ 0x1409C9C58 (MiPfPrepareSequentialReadList.c)
 *     MiAllocateTopLevelPage @ 0x140A480DC (MiAllocateTopLevelPage.c)
 *     MiAllocateDriverPage @ 0x140A69E40 (MiAllocateDriverPage.c)
 *     MmAllocateIndependentPagesEx @ 0x140A8508C (MmAllocateIndependentPagesEx.c)
 *     MmInitializeImageViewExtensionCfg @ 0x140C43014 (MmInitializeImageViewExtensionCfg.c)
 * Callees:
 *     MiPfnZeroingNeeded @ 0x140224750 (MiPfnZeroingNeeded.c)
 *     MiZeroPhysicalPage @ 0x14024D560 (MiZeroPhysicalPage.c)
 *     MiChangePageAttribute @ 0x14024DE74 (MiChangePageAttribute.c)
 *     MiReplenishSlabAllocator @ 0x1403769E8 (MiReplenishSlabAllocator.c)
 *     MiGetPageFromSlabAllocator @ 0x1403B7FAC (MiGetPageFromSlabAllocator.c)
 */

__int64 __fastcall MiGetSlabPage(__int64 a1, int a2, unsigned int a3, unsigned int a4, __int64 *a5, unsigned int a6)
{
  __int64 v8; // r9
  int v9; // r8d
  int v10; // ebx
  unsigned int *v11; // r14
  __int64 v12; // rax
  __int64 v13; // r15
  unsigned int *v14; // r12
  __int64 v15; // r13
  __int64 PageFromSlabAllocator; // rax
  __int64 v17; // rbx
  int v18; // ecx
  unsigned int v20; // edx
  __int64 v21; // rax
  int v22; // eax
  unsigned int *v23; // rcx

  v8 = a1;
  v9 = a2;
  if ( (unsigned __int64)a5 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    *a5 = 0LL;
  v10 = (a3 >> 9) & 0x3F;
LABEL_4:
  v11 = (unsigned int *)(qword_140E2D890 + 4LL * v10 * (unsigned int)(unsigned __int16)KeNumberNodes);
  if ( (a4 & 1) != 0 )
    v12 = 1LL;
  else
    v12 = (unsigned __int16)KeNumberNodes;
  v13 = -1LL;
  v14 = &v11[v12];
  while ( 1 )
  {
    if ( v11 >= v14 )
    {
      if ( (a4 & 2) == 0 )
        return v13;
      a4 &= ~2u;
      goto LABEL_4;
    }
    if ( !byte_140E2D888 )
      break;
    if ( (a4 & 2) == 0 )
      break;
    v21 = *v11;
    if ( v10 == (_DWORD)v21 || (*(_BYTE *)(*(_QWORD *)(384 * v21 + qword_140E2D8B8 + 376) + 32LL) & 1) == 0 )
      break;
LABEL_25:
    ++v11;
  }
  v15 = 232LL * v9 + 57216LL * *v11 + *(_QWORD *)(v8 + 16) + 15696LL;
  PageFromSlabAllocator = MiGetPageFromSlabAllocator(v15, a4);
  v13 = PageFromSlabAllocator;
  if ( PageFromSlabAllocator == -1 )
  {
    if ( (a4 & 2) == 0 && !*(_QWORD *)(v15 + 176) )
    {
      if ( a5 == (__int64 *)-1LL )
      {
        v22 = MiReplenishSlabAllocator(v15, 1LL, a6);
        v23 = v11 - 1;
        if ( !v22 )
          v23 = v11;
        v11 = v23;
      }
      else if ( a5 )
      {
        *a5 = v15;
        return v13;
      }
    }
    v8 = a1;
    v9 = a2;
    goto LABEL_25;
  }
  v17 = 48 * PageFromSlabAllocator - 0x220000000000LL;
  v18 = 0;
  if ( (*(_QWORD *)(v17 + 40) & 0x10000000000LL) != 0 )
    v18 = *(_DWORD *)(v17 + 36) & 0x18000000;
  *(_DWORD *)(v17 + 36) = v18;
  if ( (a4 & 8) != 0 && MiPfnZeroingNeeded(v17, 1) )
  {
    MiZeroPhysicalPage(0LL, v13, (a4 >> 3) & 2, v20);
    *(_QWORD *)(v17 + 16) &= 0xFFFFFFFFFFFFFC1FuLL;
  }
  if ( (a4 & 4) != 0 && (HIWORD(*(_DWORD *)(v17 + 32)) & 0xC0) != 0x40 )
    MiChangePageAttribute(v17, 1LL, a4 & 0x10 | 8);
  return v13;
}
