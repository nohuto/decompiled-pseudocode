/*
 * XREFs of MiGetSlabPage @ 0x14021CE24
 * Callers:
 *     MiResolveMappedFileFault @ 0x140214824 (MiResolveMappedFileFault.c)
 *     MiAllocateKernelStackPages @ 0x14021639C (MiAllocateKernelStackPages.c)
 *     MiGetPageTablePages @ 0x14021CA98 (MiGetPageTablePages.c)
 *     MiAllocateSlabPageForMdl @ 0x14021CD30 (MiAllocateSlabPageForMdl.c)
 *     MiGetPageChain @ 0x140307540 (MiGetPageChain.c)
 *     MiGetUltraPage @ 0x14033BE50 (MiGetUltraPage.c)
 *     MiReplenishCombineResources @ 0x1403447DC (MiReplenishCombineResources.c)
 *     MiCopyOnWrite @ 0x140346A74 (MiCopyOnWrite.c)
 *     MiPfPutPagesInTransition @ 0x140347F6C (MiPfPutPagesInTransition.c)
 *     MiWalkEntireImage @ 0x140349C00 (MiWalkEntireImage.c)
 *     MiCompleteSecureProcessFault @ 0x1404286A0 (MiCompleteSecureProcessFault.c)
 *     MmAllocateNonChargedSecurePages @ 0x140498780 (MmAllocateNonChargedSecurePages.c)
 *     MiFinalizeImageHeaderPage @ 0x1404998B8 (MiFinalizeImageHeaderPage.c)
 *     MiProtectDriverSectionPte @ 0x14066C5D0 (MiProtectDriverSectionPte.c)
 *     MmAllocateSecureKernelPages @ 0x140689BF4 (MmAllocateSecureKernelPages.c)
 *     MiPfPrepareReadList @ 0x14093919C (MiPfPrepareReadList.c)
 *     MiPfPrepareSequentialReadList @ 0x140939D28 (MiPfPrepareSequentialReadList.c)
 *     MiAllocateTopLevelPage @ 0x140A51BBC (MiAllocateTopLevelPage.c)
 *     MiAllocateDriverPage @ 0x140A62088 (MiAllocateDriverPage.c)
 *     MmAllocateIndependentPagesEx @ 0x140A8536C (MmAllocateIndependentPagesEx.c)
 *     MmInitializeImageViewExtensionCfg @ 0x140C5641C (MmInitializeImageViewExtensionCfg.c)
 * Callees:
 *     MiGetPageFromSlabAllocator @ 0x14021D5AC (MiGetPageFromSlabAllocator.c)
 *     MiReplenishSlabAllocator @ 0x14021E544 (MiReplenishSlabAllocator.c)
 *     MiZeroPhysicalPage @ 0x14024B990 (MiZeroPhysicalPage.c)
 *     MiChangePageAttribute @ 0x14024C2DC (MiChangePageAttribute.c)
 *     MiPfnZeroingNeeded @ 0x1403934B0 (MiPfnZeroingNeeded.c)
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
  v11 = (unsigned int *)(qword_140E2DC10 + 4LL * v10 * (unsigned int)(unsigned __int16)KeNumberNodes);
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
    if ( !byte_140E2DC08 )
      break;
    if ( (a4 & 2) == 0 )
      break;
    v21 = *v11;
    if ( v10 == (_DWORD)v21 || (*(_BYTE *)(*(_QWORD *)(384 * v21 + qword_140E2DC38 + 376) + 32LL) & 1) == 0 )
      break;
LABEL_24:
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
    goto LABEL_24;
  }
  v17 = 48 * PageFromSlabAllocator - 0x220000000000LL;
  v18 = 0;
  if ( (*(_QWORD *)(v17 + 40) & 0x10000000000LL) != 0 )
    v18 = *(_DWORD *)(v17 + 36) & 0x18000000;
  *(_DWORD *)(v17 + 36) = v18;
  if ( (a4 & 8) != 0 && (unsigned int)MiPfnZeroingNeeded(v17, 1LL) )
  {
    MiZeroPhysicalPage(0LL, v13, (a4 >> 3) & 2, v20);
    *(_QWORD *)(v17 + 16) &= 0xFFFFFFFFFFFFFC1FuLL;
  }
  if ( (a4 & 4) != 0 && (HIWORD(*(_DWORD *)(v17 + 32)) & 0xC0) != 0x40 )
    MiChangePageAttribute(v17, 1LL, a4 & 0x10 | 8);
  return v13;
}
