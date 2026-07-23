/*
 * XREFs of HalpDmaProcessMapRegisterQueueV2 @ 0x14038A12C
 * Callers:
 *     IoFreeMapRegistersV2 @ 0x14038A060 (IoFreeMapRegistersV2.c)
 *     HalpGrowMapBufferWorker @ 0x1404B13C0 (HalpGrowMapBufferWorker.c)
 * Callees:
 *     HalpDmaAllocateMapRegisters @ 0x14038829C (HalpDmaAllocateMapRegisters.c)
 *     IoFreeAdapterChannelV2 @ 0x140388C50 (IoFreeAdapterChannelV2.c)
 *     HalpDmaFreeMapRegisters @ 0x14038A214 (HalpDmaFreeMapRegisters.c)
 *     HalpDmaDequeueAdapter @ 0x14038A5E0 (HalpDmaDequeueAdapter.c)
 *     HalpQueueMapBufferWorker @ 0x140497EF8 (HalpQueueMapBufferWorker.c)
 *     HalpDmaQueueAdapter @ 0x1404D3844 (HalpDmaQueueAdapter.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpDmaProcessMapRegisterQueueV2(__int64 a1, __int64 a2)
{
  char v2; // si
  __int64 result; // rax
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 MapRegisters; // rax
  int v8; // eax
  __int64 v9; // r8

  v2 = a2;
  while ( 1 )
  {
    LOBYTE(a2) = v2;
    result = HalpDmaDequeueAdapter(a1, a2);
    v5 = result;
    if ( !result )
      return result;
    v6 = *(_QWORD *)(result + 352);
    MapRegisters = HalpDmaAllocateMapRegisters(result, *(_DWORD *)(result + 248));
    *(_QWORD *)(v5 + 240) = MapRegisters;
    if ( !MapRegisters )
    {
      HalpDmaQueueAdapter(v5);
      return HalpQueueMapBufferWorker(v5, *(unsigned int *)(v5 + 248));
    }
    v8 = guard_dispatch_icall_no_overrides(*(_QWORD *)(v6 + 48), *(_QWORD *)(v6 + 56));
    if ( v8 == 3 )
    {
      *(_DWORD *)(v5 + 248) = 0;
      goto LABEL_6;
    }
    if ( v8 == 2 )
    {
LABEL_6:
      v9 = *(unsigned int *)(v5 + 248);
      if ( (_DWORD)v9 )
      {
        HalpDmaFreeMapRegisters(v5, *(_QWORD *)(v5 + 240), v9);
        *(_DWORD *)(v5 + 248) = 0;
      }
      IoFreeAdapterChannelV2(v5);
    }
  }
}
