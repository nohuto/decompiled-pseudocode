/*
 * XREFs of HalpAllocateDmaResourcesInternal @ 0x14038C280
 * Callers:
 *     HalpDmaProcessMapRegisterQueueV3 @ 0x14038C0D8 (HalpDmaProcessMapRegisterQueueV3.c)
 *     HalpContinueProcessingWaitQueue @ 0x14038C65C (HalpContinueProcessingWaitQueue.c)
 *     HalpAllocateAdapterChannel @ 0x14038C740 (HalpAllocateAdapterChannel.c)
 *     HalpFreeDmaChannels @ 0x14038CCD8 (HalpFreeDmaChannels.c)
 *     HalpDmaReturnEmergencyLogicalAddressResources @ 0x14053A1C0 (HalpDmaReturnEmergencyLogicalAddressResources.c)
 * Callees:
 *     HalpDmaAllocateMapRegisters @ 0x14038829C (HalpDmaAllocateMapRegisters.c)
 *     HalFreeAdapterObject @ 0x14038C4B0 (HalFreeAdapterObject.c)
 *     IoFreeAdapterChannelV3 @ 0x14038C4E0 (IoFreeAdapterChannelV3.c)
 *     HalpAllocateDmaChannels @ 0x14038C97C (HalpAllocateDmaChannels.c)
 *     HalpQueueMapBufferWorker @ 0x140497EF8 (HalpQueueMapBufferWorker.c)
 *     HalpDmaQueueAdapter @ 0x1404D3844 (HalpDmaQueueAdapter.c)
 *     HalpDmaRemoveAdapterFromMasterQueue @ 0x140539FD0 (HalpDmaRemoveAdapterFromMasterQueue.c)
 *     HalpDmaRemoveFromEmergencyLogicalAddressQueue @ 0x14053A090 (HalpDmaRemoveFromEmergencyLogicalAddressQueue.c)
 *     HalpDmaUseEmergencyLogicalAddressResources @ 0x14053A29C (HalpDmaUseEmergencyLogicalAddressResources.c)
 *     HalpDmaRemoveAdapterFromChannelQueue @ 0x140550874 (HalpDmaRemoveAdapterFromChannelQueue.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall HalpAllocateDmaResourcesInternal(__int64 a1, char a2, unsigned int *a3)
{
  __int64 v3; // rsi
  _DWORD *v4; // rdi
  int v7; // ecx
  _DWORD *v9; // rax
  unsigned int v10; // ebp
  _QWORD *MapRegisters; // rax
  _QWORD *v12; // rcx
  unsigned int v13; // eax
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // eax
  unsigned int i; // eax
  _QWORD *v20; // r14
  __int64 v21; // r8

  v3 = *(_QWORD *)(a1 + 352);
  v4 = (_DWORD *)(a1 + 624);
  v7 = *(_DWORD *)(a1 + 624);
  if ( !v7 )
  {
    *v4 = 1;
LABEL_3:
    v9 = v4;
    if ( !*(_BYTE *)(a1 + 441) )
    {
      if ( !(unsigned __int8)HalpAllocateDmaChannels(a1) )
        goto LABEL_31;
      v9 = (_DWORD *)(a1 + 624);
    }
    ++*v4;
    v4 = v9;
LABEL_5:
    v10 = *(_DWORD *)(a1 + 248);
    if ( !v10 || !*(_BYTE *)(a1 + 440) )
    {
      *(_QWORD *)(a1 + 240) = 0LL;
      *(_DWORD *)(a1 + 248) = 0;
LABEL_10:
      *v4 = *(_DWORD *)(a1 + 624) + 1;
      goto LABEL_11;
    }
    MapRegisters = (_QWORD *)HalpDmaAllocateMapRegisters(a1, v10);
    *(_QWORD *)(a1 + 240) = MapRegisters;
    v12 = MapRegisters;
    if ( MapRegisters )
    {
      MapRegisters[3] = 0LL;
      MapRegisters[4] = 0LL;
      MapRegisters[5] = 0LL;
      if ( (*(_DWORD *)(v3 + 20) & 4) != 0 )
      {
        for ( i = 0; i < v10; ++i )
        {
          if ( !v12 )
            break;
          v12[6] |= 0x20uLL;
          v12 = (_QWORD *)v12[1];
        }
      }
      v4 = (_DWORD *)(a1 + 624);
      goto LABEL_10;
    }
    HalpQueueMapBufferWorker(a1, v10);
    if ( (*(_DWORD *)(v3 + 20) & 1) == 0 )
      HalpDmaQueueAdapter(a1);
LABEL_31:
    v18 = *(_DWORD *)(v3 + 20);
    if ( (v18 & 1) != 0
      || (v18 & 2) != 0
      && (*(_DWORD *)(v3 - 8) & 2) != 0
      && ((unsigned __int8)HalpDmaRemoveFromEmergencyLogicalAddressQueue(a1, a1 + 600)
       || (unsigned __int8)HalpDmaRemoveAdapterFromMasterQueue(a1)
       || (unsigned __int8)HalpDmaRemoveAdapterFromChannelQueue(a1)) )
    {
      *(_DWORD *)(a1 + 248) = 0;
      IoFreeAdapterChannelV3(a1);
    }
    return 0;
  }
  v15 = v7 - 1;
  if ( !v15 )
    goto LABEL_3;
  v16 = v15 - 1;
  if ( !v16 )
    goto LABEL_5;
  v17 = v16 - 1;
  if ( v17 )
  {
    if ( v17 == 1 )
      goto LABEL_13;
    return 0;
  }
LABEL_11:
  if ( *(_DWORD *)(a1 + 520) != 3 )
    goto LABEL_12;
  v20 = (_QWORD *)(*(_QWORD *)(a1 + 240) + 24LL);
  if ( (int)guard_dispatch_icall_no_overrides(
              *(_QWORD *)(*(_QWORD *)(a1 + 512) + 40LL),
              *(_DWORD *)(v3 + 20) & 0xFFFFF000) >= 0 )
    goto LABEL_12;
  LOBYTE(v21) = (*(_BYTE *)(v3 + 20) & 1) == 0;
  if ( !(unsigned __int8)HalpDmaUseEmergencyLogicalAddressResources(a1, a1 + 600, v21) )
    goto LABEL_31;
  *v20 = *(_QWORD *)(a1 + 560);
LABEL_12:
  ++*v4;
LABEL_13:
  if ( (*(_DWORD *)(v3 + 20) & 2) != 0 )
    _InterlockedOr((volatile signed __int32 *)(v3 - 8), 1u);
  ++*v4;
  if ( (*(_DWORD *)(v3 + 20) & 2) != 0 )
    *(_QWORD *)(a1 + 360) = v3 - 16;
  if ( *(_QWORD *)(v3 + 24) )
  {
    v13 = guard_dispatch_icall_no_overrides(*(_QWORD *)(v3 + 48), *(_QWORD *)(v3 + 56));
    if ( a3 )
      *a3 = v13;
    if ( a2 )
      HalFreeAdapterObject(a1, v13);
  }
  return 1;
}
