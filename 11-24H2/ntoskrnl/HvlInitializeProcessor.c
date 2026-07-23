/*
 * XREFs of HvlInitializeProcessor @ 0x14070C95C
 * Callers:
 *     KiStartDynamicProcessor @ 0x1407393A8 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140C28DA8 (KeStartAllProcessors.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1402932D0 (MmGetPhysicalAddress.c)
 *     MmMapIoSpaceEx @ 0x14034B090 (MmMapIoSpaceEx.c)
 *     HvlpFreeOverlayPages @ 0x140397D90 (HvlpFreeOverlayPages.c)
 *     KeGetProcessorNodeNumber @ 0x14042ACE0 (KeGetProcessorNodeNumber.c)
 *     HvlpGetLpcbByLpIndex @ 0x140440CF0 (HvlpGetLpcbByLpIndex.c)
 *     HvlGetLpIndexFromProcessorIndex @ 0x140440D30 (HvlGetLpIndexFromProcessorIndex.c)
 *     HvlGetRootVpSharedPages @ 0x1405806AC (HvlGetRootVpSharedPages.c)
 *     HvlpGetLpcbByApicId @ 0x140581898 (HvlpGetLpcbByApicId.c)
 *     HvlpSetupCachedHypercallPages @ 0x140582884 (HvlpSetupCachedHypercallPages.c)
 *     HvlpAllocateOverlayPages @ 0x140589448 (HvlpAllocateOverlayPages.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     HvlpCreateRootVirtualProcessor @ 0x14070CB90 (HvlpCreateRootVirtualProcessor.c)
 *     MmAllocateIndependentPagesEx @ 0x140A8536C (MmAllocateIndependentPagesEx.c)
 */

__int64 __fastcall HvlInitializeProcessor(__int64 a1, unsigned int a2, int a3)
{
  __int64 v5; // rbp
  _DWORD *LpcbByApicId; // rax
  _DWORD *v7; // rbx
  __int64 result; // rax
  int v9; // eax
  void *v10; // r14
  __int64 *v11; // rbx
  __int64 v12; // rdi
  void *OverlayPages; // rax
  SIZE_T v14; // rdx
  MEMORY_CACHING_TYPE v15; // r8d
  char v16; // bl
  unsigned int LpIndexFromProcessorIndex; // eax
  __int128 *LpcbByLpIndex; // r15
  void *v19; // rax
  unsigned __int16 ProcessorNodeNumber; // ax
  __int64 IndependentPages; // rax
  PHYSICAL_ADDRESS *v22; // rbx
  void *v23; // rcx
  __int64 v24; // [rsp+68h] [rbp+20h] BYREF

  v24 = 0LL;
  if ( !HvlHypervisorConnected )
    return 0LL;
  v5 = 2LL;
  if ( (HvlpFlags & 2) != 0 )
  {
    LpcbByApicId = HvlpGetLpcbByApicId(a3);
    v7 = LpcbByApicId;
    if ( (HvlpRootFlags & 0x40) != 0 )
    {
      result = HvlpCreateRootVirtualProcessor(LpcbByApicId, *(unsigned int *)(a1 + 36));
      if ( (int)result < 0 )
        return result;
    }
    *(_QWORD *)(a1 + 35792) = *((_QWORD *)v7 + 3);
    v9 = *(_DWORD *)(a1 + 36);
    v7[5] = v9;
    if ( v9 != v7[1] )
      byte_140E0A8BC = 0;
  }
  v10 = 0LL;
  if ( (HvlpFlags & 2) != 0 && ((HvlpFlags & 0x20) != 0 || (HvlpFlags & 0x80000) != 0) )
  {
    v11 = (__int64 *)(a1 + 35808);
    HvlGetRootVpSharedPages(a2, (_QWORD *)(a1 + 35808), &v24);
    v12 = v24;
  }
  else
  {
    v11 = (__int64 *)(a1 + 35808);
    *(_QWORD *)(a1 + 35808) = 0LL;
    v12 = 0LL;
  }
  if ( (HvlpFlags & 0x80000) != 0 )
  {
    if ( (HvlpFlags & 2) != 0 )
    {
      *(_QWORD *)(a1 + 35848) = MmMapIoSpaceEx(*v11, 4096LL, 4LL);
    }
    else
    {
      OverlayPages = (void *)HvlpAllocateOverlayPages();
      *(_QWORD *)(a1 + 35848) = OverlayPages;
      if ( !OverlayPages )
        goto LABEL_25;
      *(PHYSICAL_ADDRESS *)v11 = MmGetPhysicalAddress(OverlayPages);
    }
  }
  v16 = HvlpFlags;
  if ( (HvlpFlags & 2) != 0 )
  {
    LpIndexFromProcessorIndex = HvlGetLpIndexFromProcessorIndex(*(_DWORD *)(a1 + 36));
    LpcbByLpIndex = HvlpGetLpcbByLpIndex(LpIndexFromProcessorIndex);
    if ( (v16 & 0x20) != 0 )
      *((_QWORD *)LpcbByLpIndex + 4) = MmMapIoSpaceEx(v12, 4096LL, 4LL);
  }
  if ( (HvlpFlags & 2) == 0 && (HvlpFlags & 0x8000) != 0 )
  {
    v19 = (void *)HvlpAllocateOverlayPages();
    v10 = v19;
    if ( !v19 )
      goto LABEL_25;
    memset_0(v19, 0, 0x80uLL);
    *(_QWORD *)(a1 + 36536) = v10;
  }
  ProcessorNodeNumber = KeGetProcessorNodeNumber(a1);
  IndependentPages = MmAllocateIndependentPagesEx(24576LL, ProcessorNodeNumber, 0LL, 0LL);
  v22 = (PHYSICAL_ADDRESS *)IndependentPages;
  if ( IndependentPages )
  {
    *(_QWORD *)(a1 + 35840) = IndependentPages;
    do
    {
      v22[2] = MmGetPhysicalAddress(v22);
      v22 += 512;
      --v5;
    }
    while ( v5 );
    HvlpSetupCachedHypercallPages((_SLIST_HEADER *)a1);
    return 0LL;
  }
LABEL_25:
  if ( (HvlpFlags & 2) == 0 )
  {
    v23 = *(void **)(a1 + 35848);
    if ( v23 )
    {
      HvlpFreeOverlayPages(v23, v14, v15);
      *(_QWORD *)(a1 + 35848) = 0LL;
      *(_QWORD *)(a1 + 35808) = 0LL;
    }
  }
  if ( v10 )
  {
    HvlpFreeOverlayPages(v10, v14, v15);
    *(_QWORD *)(a1 + 36536) = 0LL;
  }
  return 3221225626LL;
}
