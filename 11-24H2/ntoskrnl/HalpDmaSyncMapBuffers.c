/*
 * XREFs of HalpDmaSyncMapBuffers @ 0x140389860
 * Callers:
 *     HalpDmaMapContiguousTransferV2 @ 0x1403872C4 (HalpDmaMapContiguousTransferV2.c)
 *     IopMapTransfer @ 0x140387610 (IopMapTransfer.c)
 *     HalpAllocateAdapterCallbackV2 @ 0x1403886C0 (HalpAllocateAdapterCallbackV2.c)
 *     HalPutScatterGatherListV2 @ 0x140389070 (HalPutScatterGatherListV2.c)
 *     IoMapTransferInternal @ 0x140389CC4 (IoMapTransferInternal.c)
 *     HalpDmaFlushContiguousTransferV2 @ 0x14038AA14 (HalpDmaFlushContiguousTransferV2.c)
 *     IoFlushAdapterBuffersV2 @ 0x14038AB20 (IoFlushAdapterBuffersV2.c)
 *     HalpDmaFlushScatterTransferV3 @ 0x14038BDCC (HalpDmaFlushScatterTransferV3.c)
 *     HalpDmaFlushContiguousTransferV3 @ 0x14038CE18 (HalpDmaFlushContiguousTransferV3.c)
 *     HalpDmaMapScatterTransferV3 @ 0x14048DF94 (HalpDmaMapScatterTransferV3.c)
 *     HalpDmaMapContiguousTransferV3 @ 0x14048E174 (HalpDmaMapContiguousTransferV3.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x14029D5C0 (MmUnmapLockedPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14029F5F0 (MmMapLockedPagesSpecifyCache.c)
 *     KxReleaseQueuedSpinLock @ 0x1402CA740 (KxReleaseQueuedSpinLock.c)
 *     HalpDmaAcquireBufferMappings @ 0x140389C1C (HalpDmaAcquireBufferMappings.c)
 *     HalpDmaSyncMapBuffersWithEmergencyResources @ 0x14038B104 (HalpDmaSyncMapBuffersWithEmergencyResources.c)
 *     MmUnmapReservedMapping @ 0x140433320 (MmUnmapReservedMapping.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     HalpFlushMapBuffers @ 0x14054D3C8 (HalpFlushMapBuffers.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B4870 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

void __fastcall HalpDmaSyncMapBuffers(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        size_t Size,
        char a6,
        char a7,
        char a8)
{
  __int64 v8; // r13
  __int64 v11; // r10
  unsigned __int8 CurrentIrql; // si
  char *v13; // rbx
  __int64 v14; // rcx
  int v15; // r15d
  unsigned __int64 v16; // r14
  __int64 v17; // rdi
  unsigned int v18; // r12d
  char v19; // bp
  char *v20; // rbx
  unsigned int v21; // edi
  int v22; // ecx
  char v23; // dl
  unsigned int v24; // ebp
  __int64 v25; // rbx
  char *v26; // rax
  __int64 v27; // rdx
  unsigned int i; // ecx
  __int64 v29; // rdx
  PSLIST_ENTRY v30; // rdx
  __int64 v31; // rcx
  ULONG BugCheckOnFailure[2]; // [rsp+20h] [rbp-98h]
  int v33; // [rsp+40h] [rbp-78h]
  PMDL MemoryDescriptorList[2]; // [rsp+48h] [rbp-70h] BYREF
  PSLIST_ENTRY ListEntry[2]; // [rsp+58h] [rbp-60h] BYREF
  __int128 v36; // [rsp+68h] [rbp-50h]
  __int64 v37; // [rsp+78h] [rbp-40h]
  char v39; // [rsp+C8h] [rbp+10h]

  *(_OWORD *)MemoryDescriptorList = 0LL;
  v37 = 0LL;
  v8 = a4;
  *(_OWORD *)ListEntry = 0LL;
  v36 = 0LL;
  v11 = a1;
  CurrentIrql = KeGetCurrentIrql();
  if ( (*(_BYTE *)(a2 + 10) & 5) != 0 )
  {
    v13 = *(char **)(a2 + 24);
  }
  else
  {
    v26 = (char *)MmMapLockedPagesSpecifyCache((PMDL)a2, 0, MmCached, 0LL, 0, 0x40000020u);
    v11 = a1;
    v13 = v26;
  }
  if ( v13 )
  {
    v14 = a3 & 0xFFF;
    v15 = Size;
    v39 = 0;
    v16 = (v14 + (unsigned __int64)(unsigned int)Size + 4095) >> 12;
    if ( CurrentIrql > 2u )
    {
      v27 = v8;
      for ( i = 0; i < (unsigned int)v16; ++i )
      {
        if ( (*(_QWORD *)(v27 + 48) & 0xFFFFFFFFFFFFF000uLL) == 0 )
          KeBugCheckEx(0xACu, 0x1000uLL, 0xEF03uLL, 0LL, 0LL);
        v27 = *(_QWORD *)(v27 + 8);
      }
    }
    else
    {
      if ( CurrentIrql < 2u )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags )
          KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
        v39 = 1;
      }
      HalpDmaAcquireBufferMappings(v14, v8, (unsigned int)v16, MemoryDescriptorList);
      v11 = a1;
    }
    v17 = a3 - *(unsigned int *)(a2 + 44) - *(_QWORD *)(a2 + 32);
    v18 = Size;
    v19 = a6;
    v20 = &v13[v17];
    v33 = (int)v20;
    v21 = (unsigned __int16)v20 & 0xFFF;
    v22 = (int)v20;
    if ( !*(_BYTE *)(v11 + 445) && !a6 )
    {
      HalpFlushMapBuffers(v11, (_DWORD)v20, a4, Size, 0, a8);
      v11 = a1;
      v22 = (int)v20;
    }
    if ( (_DWORD)Size )
    {
      v23 = a7;
      do
      {
        v24 = v18;
        if ( v18 >= 4096 - v21 )
          v24 = 4096 - v21;
        if ( !v23 )
        {
          if ( a6 )
            guard_dispatch_icall_no_overrides(v21 + (*(_QWORD *)(v8 + 48) & 0xFFFFFFFFFFFFF000uLL), v20);
          else
            memmove(v20, (const void *)(v21 + (*(_QWORD *)(v8 + 48) & 0xFFFFFFFFFFFFF000uLL)), v24);
          v23 = a7;
        }
        v8 = *(_QWORD *)(v8 + 8);
        v21 = 0;
        v20 += v24;
        v18 -= v24;
      }
      while ( v18 );
      v15 = Size;
      v11 = a1;
      v19 = a6;
      v22 = v33;
    }
    v25 = a4;
    if ( !*(_BYTE *)(v11 + 445) && v19 )
      HalpFlushMapBuffers(v11, v22, a4, v15, v19, a8);
    if ( CurrentIrql <= 2u && MemoryDescriptorList[0] )
    {
      if ( (_BYTE)v37 )
      {
        MmUnmapReservedMapping(MemoryDescriptorList[1], 0x446C6148u, MemoryDescriptorList[0]);
        if ( !byte_140E3EC78 )
        {
          KxReleaseQueuedSpinLock((volatile signed __int64 **)&ListEntry[1], v29);
          v30 = ListEntry[0];
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&ListEntry[0][1].Next + 2, 0xFFFFFFFF) == 1
            && !_InterlockedCompareExchange((volatile signed __int32 *)&v30[1].Next + 3, 1, 0) )
          {
            RtlpInterlockedPushEntrySList(&stru_140E3EC80, v30);
          }
        }
      }
      else
      {
        MmUnmapLockedPages(MemoryDescriptorList[1], MemoryDescriptorList[0]);
      }
      if ( (_DWORD)v16 )
      {
        v31 = (unsigned int)v16;
        do
        {
          if ( (*(_QWORD *)(v25 + 48) & 0x10) != 0 )
            *(_QWORD *)(v25 + 48) &= 0xFEFuLL;
          v25 = *(_QWORD *)(v25 + 8);
          --v31;
        }
        while ( v31 );
      }
    }
    if ( v39 )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
    }
  }
  else
  {
    if ( CurrentIrql > 2u )
      KeBugCheckEx(0xACu, 0x1000uLL, 0xEF05uLL, 0LL, 0LL);
    BugCheckOnFailure[0] = Size;
    HalpDmaSyncMapBuffersWithEmergencyResources(v11, a2, a3, v8, *(size_t *)BugCheckOnFailure, a6, a7, a8);
  }
}
