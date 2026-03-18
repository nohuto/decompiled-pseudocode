/*
 * XREFs of HalpDmaProcessMapRegisterQueueV2 @ 0x1403907EC
 * Callers:
 *     IoFreeMapRegistersV2 @ 0x140390720 (IoFreeMapRegistersV2.c)
 *     HalpGrowMapBufferWorker @ 0x1404B6BE0 (HalpGrowMapBufferWorker.c)
 * Callees:
 *     HalpDmaAllocateMapRegisters @ 0x14038E95C (HalpDmaAllocateMapRegisters.c)
 *     IoFreeAdapterChannelV2 @ 0x14038F310 (IoFreeAdapterChannelV2.c)
 *     HalpDmaFreeMapRegisters @ 0x1403908D4 (HalpDmaFreeMapRegisters.c)
 *     HalpDmaDequeueAdapter @ 0x140390CA0 (HalpDmaDequeueAdapter.c)
 *     HalpQueueMapBufferWorker @ 0x14049D1A8 (HalpQueueMapBufferWorker.c)
 *     HalpDmaQueueAdapter @ 0x1404D9E04 (HalpDmaQueueAdapter.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpDmaProcessMapRegisterQueueV2(__int64 a1, __int64 a2)
{
  char v2; // si
  __int64 result; // rax
  __int64 v5; // rbx
  _QWORD *v6; // rdi
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
    v6 = *(_QWORD **)(result + 352);
    MapRegisters = HalpDmaAllocateMapRegisters(result, *(_DWORD *)(result + 248));
    *(_QWORD *)(v5 + 240) = MapRegisters;
    if ( !MapRegisters )
    {
      HalpDmaQueueAdapter(v5);
      return HalpQueueMapBufferWorker(v5, *(unsigned int *)(v5 + 248));
    }
    v8 = guard_dispatch_icall_no_overrides(v6[6], v6[7], MapRegisters, v6[4]);
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
