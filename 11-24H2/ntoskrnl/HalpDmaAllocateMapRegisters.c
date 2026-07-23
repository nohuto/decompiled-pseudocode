/*
 * XREFs of HalpDmaAllocateMapRegisters @ 0x14038829C
 * Callers:
 *     HalAllocateAdapterChannelV2 @ 0x14038740C (HalAllocateAdapterChannelV2.c)
 *     HalBuildScatterGatherListV2 @ 0x1403879B0 (HalBuildScatterGatherListV2.c)
 *     IoFreeAdapterChannelV2 @ 0x140388C50 (IoFreeAdapterChannelV2.c)
 *     HalpDmaProcessMapRegisterQueueV2 @ 0x14038A12C (HalpDmaProcessMapRegisterQueueV2.c)
 *     HalpAllocateDmaResourcesInternal @ 0x14038C280 (HalpAllocateDmaResourcesInternal.c)
 *     HalDmaAllocateCrashDumpRegistersEx @ 0x14053B3B0 (HalDmaAllocateCrashDumpRegistersEx.c)
 *     HalpAllocateMapRegisters @ 0x1406FB8A0 (HalpAllocateMapRegisters.c)
 * Callees:
 *     MiFreePagesFromMdl @ 0x140218F60 (MiFreePagesFromMdl.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     RtlFindClearBitsAndSet @ 0x14027BEE0 (RtlFindClearBitsAndSet.c)
 *     HalpMmAllocCtxAlloc @ 0x14027C378 (HalpMmAllocCtxAlloc.c)
 *     MmGetPhysicalAddress @ 0x1402932D0 (MmGetPhysicalAddress.c)
 *     MmUnmapLockedPages @ 0x14029D5C0 (MmUnmapLockedPages.c)
 *     HalpMmAllocCtxFree @ 0x1402EA1C8 (HalpMmAllocCtxFree.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 *     HalpDmaAllocateScatterPagesFromContiguousPool @ 0x140386D38 (HalpDmaAllocateScatterPagesFromContiguousPool.c)
 *     HalpDmaPrependTranslations @ 0x140386F7C (HalpDmaPrependTranslations.c)
 *     HalpDmaAllocateScatterPagesFromScatterPool @ 0x140386FA0 (HalpDmaAllocateScatterPagesFromScatterPool.c)
 *     HalpDmaGetAdapterVersion @ 0x14038951C (HalpDmaGetAdapterVersion.c)
 *     HalpDmaReturnPageToOwner @ 0x14038A7B4 (HalpDmaReturnPageToOwner.c)
 *     HalpDmaAllocateContiguousPagesFromContiguousPool @ 0x14038AD1C (HalpDmaAllocateContiguousPagesFromContiguousPool.c)
 *     HalpDmaLinkContiguousTranslations @ 0x14038AF38 (HalpDmaLinkContiguousTranslations.c)
 *     MmFreeContiguousMemory @ 0x140398060 (MmFreeContiguousMemory.c)
 *     HalpDmaGetTranslationEntries @ 0x1404899C4 (HalpDmaGetTranslationEntries.c)
 *     HalpDmaAllocateContiguousMemory @ 0x1404D0690 (HalpDmaAllocateContiguousMemory.c)
 *     HalpDmaAllocateContiguousPagesFromContiguousPoolV3 @ 0x140539AF8 (HalpDmaAllocateContiguousPagesFromContiguousPoolV3.c)
 *     HalpDmaAllocateMapRegisterFrame @ 0x14054C72C (HalpDmaAllocateMapRegisterFrame.c)
 *     HalpDmaCommitContiguousMapBuffers @ 0x14054CAF4 (HalpDmaCommitContiguousMapBuffers.c)
 *     HalpDmaFreeMapRegisterFrame @ 0x14054D144 (HalpDmaFreeMapRegisterFrame.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HalpDmaAllocateMapRegisters(__int64 a1, unsigned int a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rdi
  __int64 result; // rax
  __int64 v7; // r15
  __int64 ScatterPagesFromScatterPool; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r9
  ULONG ClearBitsAndSet; // edi
  __int64 v14; // rcx
  __int64 v15; // r9
  ULONG v16; // edi
  __int64 v17; // rcx
  unsigned int v18; // r14d
  __int64 v19; // rcx
  __int64 v20; // r13
  __int64 i; // r15
  __int64 TranslationEntries; // rax
  unsigned int v23; // r14d
  __int64 v24; // rax
  unsigned int ContiguousMemory; // eax
  PVOID v26; // rdi
  int v27; // r9d
  void *v28; // rax
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  __int64 v30; // rax
  __int64 ScatterPagesFromContiguousPool; // rax
  __int64 v32; // rax
  void *MapRegisterFrame; // rax
  __int64 *v34; // r12
  __int64 v35; // r15
  PHYSICAL_ADDRESS *QuadPart; // rdi
  void **v37; // rbx
  __int64 v38; // r12
  __int64 v39; // r14
  PMDL v40; // rbx
  void *v41; // rcx
  PHYSICAL_ADDRESS v42; // rax
  unsigned __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rbx
  int v48; // [rsp+20h] [rbp-49h]
  PVOID BaseAddress; // [rsp+30h] [rbp-39h] BYREF
  PMDL MemoryDescriptorList; // [rsp+38h] [rbp-31h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-29h] BYREF
  struct _KLOCK_QUEUE_HANDLE v52; // [rsp+58h] [rbp-11h] BYREF
  struct _KLOCK_QUEUE_HANDLE v53; // [rsp+70h] [rbp+7h] BYREF
  unsigned int v54; // [rsp+D0h] [rbp+67h] BYREF
  int v55; // [rsp+E0h] [rbp+77h] BYREF
  __int64 v56; // [rsp+E8h] [rbp+7Fh] BYREF

  v55 = 0;
  v2 = 0;
  v54 = 0;
  BaseAddress = 0LL;
  v5 = 0LL;
  v56 = 0LL;
  MemoryDescriptorList = 0LL;
  memset(&v53, 0, sizeof(v53));
  if ( !*(_BYTE *)(a1 + 345) )
  {
    if ( *(_BYTE *)(a1 + 442) )
    {
      result = HalpDmaAllocateScatterPagesFromScatterPool(a1, a1, a2, 0, 0, &v54);
      v2 = v54;
      v5 = result;
      if ( v54 == a2 )
        return result;
    }
    else
    {
      if ( (unsigned int)HalpDmaGetAdapterVersion(a1) == 2 )
      {
        v2 = a2;
        memset(&LockHandle, 0, sizeof(LockHandle));
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 128), &LockHandle);
        ClearBitsAndSet = -1;
        if ( a2 )
          ClearBitsAndSet = RtlFindClearBitsAndSet(*(PRTL_BITMAP *)(a1 + 24), a2, 0);
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        if ( ClearBitsAndSet == -1 )
        {
          v5 = 0LL;
          v2 = 0;
        }
        else
        {
          v5 = HalpDmaLinkContiguousTranslations(a1, ClearBitsAndSet, a2);
        }
        v54 = v2;
      }
      else
      {
        LOBYTE(v12) = 1;
        v30 = HalpDmaAllocateContiguousPagesFromContiguousPoolV3(v11, a1, a2, v12, 0, &v54);
        v2 = v54;
        v5 = v30;
      }
      if ( v5 )
        return v5;
    }
  }
  v7 = *(_QWORD *)(a1 + 160);
  if ( !*(_BYTE *)(a1 + 442) )
  {
    if ( (unsigned int)HalpDmaGetAdapterVersion(a1) == 2 )
    {
      memset(&v52, 0, sizeof(v52));
      v2 = a2;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v7 + 128), &v52);
      v16 = -1;
      if ( a2 )
        v16 = RtlFindClearBitsAndSet(*(PRTL_BITMAP *)(v7 + 24), a2, 0);
      KeReleaseInStackQueuedSpinLock(&v52);
      if ( v16 == -1 )
      {
        v5 = 0LL;
        v2 = 0;
        goto LABEL_24;
      }
      v24 = HalpDmaLinkContiguousTranslations(v7, v16, a2);
    }
    else
    {
      LOBYTE(v15) = 1;
      LOBYTE(v48) = 0;
      v24 = HalpDmaAllocateContiguousPagesFromContiguousPoolV3(v14, v7, a2, v15, v48, &v54);
      v2 = v54;
    }
    v5 = v24;
LABEL_24:
    if ( !v5 )
      goto LABEL_25;
    return v5;
  }
  ScatterPagesFromScatterPool = HalpDmaAllocateScatterPagesFromScatterPool(a1, v7, a2 - v2, 0, 0, (unsigned int *)&v55);
  if ( ScatterPagesFromScatterPool )
  {
    v10 = HalpDmaPrependTranslations(ScatterPagesFromScatterPool, v55, v5);
    v2 += v55;
    v5 = v10;
  }
  if ( v2 == a2 )
    return v5;
  ScatterPagesFromContiguousPool = HalpDmaAllocateScatterPagesFromContiguousPool(
                                     v9,
                                     *(_QWORD *)(a1 + 160),
                                     a2 - v2,
                                     0LL,
                                     0,
                                     (ULONG *)&v55);
  if ( ScatterPagesFromContiguousPool )
  {
    v32 = HalpDmaPrependTranslations(ScatterPagesFromContiguousPool, v55, v5);
    v2 += v55;
    v5 = v32;
  }
  if ( v2 == a2 )
    return v5;
LABEL_25:
  if ( !*(_BYTE *)(a1 + 442) )
  {
    ContiguousMemory = HalpDmaAllocateContiguousMemory(
                         a1,
                         a2,
                         (unsigned int)&BaseAddress,
                         (unsigned int)&v56,
                         (__int64)&MemoryDescriptorList);
    v54 = ContiguousMemory;
    if ( ContiguousMemory )
    {
      v26 = BaseAddress;
      if ( HalpDmaCommitContiguousMapBuffers(*(_QWORD *)(a1 + 160), BaseAddress, v56, ContiguousMemory) )
      {
        LOBYTE(v27) = 1;
        result = HalpDmaAllocateContiguousPagesFromContiguousPool(a1, *(_QWORD *)(a1 + 160), a2, v27, 0, (__int64)&v54);
        if ( result )
          return result;
      }
      else
      {
        v40 = MemoryDescriptorList;
        if ( MemoryDescriptorList )
        {
          if ( v26 )
            MmUnmapLockedPages(v26, MemoryDescriptorList);
          MiFreePagesFromMdl((ULONG_PTR)v40, 0, 0, 0);
          ExFreePoolWithTag(v40, 0);
        }
        else
        {
          MmFreeContiguousMemory(v26);
        }
      }
    }
    return 0LL;
  }
  v18 = a2 - v2;
  v20 = HalpMmAllocCtxAlloc(v17, 8LL * v18);
  if ( !v20 )
  {
LABEL_32:
    if ( v2 )
    {
      v39 = v2;
      do
      {
        v47 = *(_QWORD *)(v5 + 8);
        HalpDmaReturnPageToOwner(a1, *(_QWORD *)(a1 + 160), v5);
        v5 = v47;
        --v39;
      }
      while ( v39 );
    }
    return 0LL;
  }
  for ( i = 0LL; (unsigned int)i < v18; i = (unsigned int)(i + 1) )
  {
    if ( HalpDmaCvmConfiguration )
    {
      MapRegisterFrame = (void *)HalpDmaAllocateMapRegisterFrame();
      *(_QWORD *)(v20 + 8 * i) = MapRegisterFrame;
      if ( !MapRegisterFrame )
        goto LABEL_30;
      PhysicalAddress = MmGetPhysicalAddress(MapRegisterFrame);
      if ( HalpDmaCvmConfiguration )
      {
        v19 = ~qword_140FC0D48;
        PhysicalAddress.QuadPart &= ~qword_140FC0D48;
      }
    }
    else
    {
      v28 = (void *)HalpMmAllocCtxAlloc(v19, 4096LL);
      *(_QWORD *)(v20 + 8 * i) = v28;
      if ( !v28 )
        goto LABEL_30;
      PhysicalAddress = MmGetPhysicalAddress(v28);
    }
    if ( PhysicalAddress.HighPart )
      goto LABEL_30;
  }
  TranslationEntries = HalpDmaGetTranslationEntries(*(_QWORD *)(a1 + 160), 1LL, v18);
  if ( !TranslationEntries )
  {
LABEL_30:
    v23 = 0;
    if ( (_DWORD)i )
    {
      v34 = (__int64 *)v20;
      do
      {
        if ( HalpDmaCvmConfiguration )
          HalpDmaFreeMapRegisterFrame(*v34);
        else
          HalpMmAllocCtxFree(v19, *v34);
        ++v23;
        ++v34;
      }
      while ( v23 < (unsigned int)i );
    }
    HalpMmAllocCtxFree(v19, v20);
    goto LABEL_32;
  }
  v35 = HalpDmaPrependTranslations(TranslationEntries, v18, v5);
  QuadPart = (PHYSICAL_ADDRESS *)v35;
  if ( v18 )
  {
    v37 = (void **)v20;
    v38 = v18;
    do
    {
      v41 = *v37;
      if ( HalpDmaCvmConfiguration )
        v42 = MmGetPhysicalAddress(v41);
      else
        v42.QuadPart = MmGetPhysicalAddress(v41).LowPart;
      *QuadPart = v42;
      v43 = (unsigned __int64)*v37;
      v44 = 1LL;
      v45 = 2LL;
      do
      {
        v43 |= v44++;
        --v45;
      }
      while ( v45 );
      ++v37;
      QuadPart[6].QuadPart = v43 | 0xC;
      QuadPart = (PHYSICAL_ADDRESS *)QuadPart[1].QuadPart;
      --v38;
    }
    while ( v38 );
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 160) + 128LL), &v53);
  *(_DWORD *)(*(_QWORD *)(a1 + 160) + 224LL) += v18;
  KeReleaseInStackQueuedSpinLock(&v53);
  HalpMmAllocCtxFree(v46, v20);
  return v35;
}
