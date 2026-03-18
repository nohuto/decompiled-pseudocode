/*
 * XREFs of HalpDmaSyncMapBuffers @ 0x140336530
 * Callers:
 *     HalpDmaFlushContiguousTransferV3 @ 0x140331380 (HalpDmaFlushContiguousTransferV3.c)
 *     HalpDmaFlushScatterTransferV3 @ 0x14033239C (HalpDmaFlushScatterTransferV3.c)
 *     IoMapTransferInternal @ 0x140333E20 (IoMapTransferInternal.c)
 *     IopMapTransfer @ 0x140334310 (IopMapTransfer.c)
 *     HalpAllocateAdapterCallbackV2 @ 0x1403353E0 (HalpAllocateAdapterCallbackV2.c)
 *     HalPutScatterGatherListV2 @ 0x140335DA0 (HalPutScatterGatherListV2.c)
 *     HalpDmaMapContiguousTransferV2 @ 0x1403373F4 (HalpDmaMapContiguousTransferV2.c)
 *     HalpDmaFlushContiguousTransferV2 @ 0x14033753C (HalpDmaFlushContiguousTransferV2.c)
 *     IoFlushAdapterBuffersV2 @ 0x140337650 (IoFlushAdapterBuffersV2.c)
 *     HalpDmaMapScatterTransferV3 @ 0x140497828 (HalpDmaMapScatterTransferV3.c)
 *     HalpDmaMapContiguousTransferV3 @ 0x1404CCF54 (HalpDmaMapContiguousTransferV3.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14028A810 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MmUnmapLockedPages @ 0x1403285B0 (MmUnmapLockedPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140329CF0 (MmMapLockedPagesSpecifyCache.c)
 *     HalpDmaAcquireBufferMappings @ 0x1403368EC (HalpDmaAcquireBufferMappings.c)
 *     MmUnmapReservedMapping @ 0x140411E60 (MmUnmapReservedMapping.c)
 *     HalpDmaSyncMapBuffersWithEmergencyResources @ 0x1404D4CFC (HalpDmaSyncMapBuffersWithEmergencyResources.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     HalpFlushMapBuffers @ 0x14054D128 (HalpFlushMapBuffers.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406A8600 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406B4940 (memmove.c)
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
  __int64 v30; // rcx
  ULONG BugCheckOnFailure[2]; // [rsp+20h] [rbp-98h]
  int v32; // [rsp+40h] [rbp-78h]
  PMDL MemoryDescriptorList[2]; // [rsp+48h] [rbp-70h] BYREF
  _QWORD LockHandle[4]; // [rsp+58h] [rbp-60h] BYREF
  __int64 v35; // [rsp+78h] [rbp-40h]
  char v37; // [rsp+C8h] [rbp+10h]

  *(_OWORD *)MemoryDescriptorList = 0LL;
  v35 = 0LL;
  v8 = a4;
  memset(LockHandle, 0, sizeof(LockHandle));
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
    v37 = 0;
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
          KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
        v37 = 1;
      }
      HalpDmaAcquireBufferMappings(v14, v8, (unsigned int)v16, MemoryDescriptorList);
      v11 = a1;
    }
    v17 = a3 - *(unsigned int *)(a2 + 44) - *(_QWORD *)(a2 + 32);
    v18 = Size;
    v19 = a6;
    v20 = &v13[v17];
    v32 = (int)v20;
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
      v22 = v32;
    }
    v25 = a4;
    if ( !*(_BYTE *)(v11 + 445) && v19 )
      HalpFlushMapBuffers(v11, v22, a4, v15, v19, a8);
    if ( CurrentIrql <= 2u && MemoryDescriptorList[0] )
    {
      if ( (_BYTE)v35 )
      {
        MmUnmapReservedMapping(MemoryDescriptorList[1], 0x446C6148u, MemoryDescriptorList[0]);
        if ( !byte_140E3E8F8 )
        {
          KeReleaseInStackQueuedSpinLockFromDpcLevel((PKLOCK_QUEUE_HANDLE)&LockHandle[1]);
          v29 = LockHandle[0];
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(LockHandle[0] + 24LL), 0xFFFFFFFF) == 1
            && !_InterlockedCompareExchange((volatile signed __int32 *)(v29 + 28), 1, 0) )
          {
            RtlpInterlockedPushEntrySList(&stru_140E3E900, (PSLIST_ENTRY)v29);
          }
        }
      }
      else
      {
        MmUnmapLockedPages(MemoryDescriptorList[1], MemoryDescriptorList[0]);
      }
      if ( (_DWORD)v16 )
      {
        v30 = (unsigned int)v16;
        do
        {
          if ( (*(_QWORD *)(v25 + 48) & 0x10) != 0 )
            *(_QWORD *)(v25 + 48) &= 0xFEFuLL;
          v25 = *(_QWORD *)(v25 + 8);
          --v30;
        }
        while ( v30 );
      }
    }
    if ( v37 )
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
