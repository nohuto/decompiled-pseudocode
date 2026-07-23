/*
 * XREFs of IoFreeAdapterChannelV2 @ 0x140388C50
 * Callers:
 *     HalAllocateAdapterChannelV2 @ 0x14038740C (HalAllocateAdapterChannelV2.c)
 *     HalBuildScatterGatherListV2 @ 0x1403879B0 (HalBuildScatterGatherListV2.c)
 *     HalpDmaProcessMapRegisterQueueV2 @ 0x14038A12C (HalpDmaProcessMapRegisterQueueV2.c)
 * Callees:
 *     HalpDmaAllocateMapRegisters @ 0x14038829C (HalpDmaAllocateMapRegisters.c)
 *     IoFreeMapRegistersV2 @ 0x14038A060 (IoFreeMapRegistersV2.c)
 *     KeRemoveDeviceQueue @ 0x14038A4B0 (KeRemoveDeviceQueue.c)
 *     HalpQueueMapBufferWorker @ 0x140497EF8 (HalpQueueMapBufferWorker.c)
 *     HalpDmaQueueAdapter @ 0x1404D3844 (HalpDmaQueueAdapter.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IoFreeAdapterChannelV2(__int64 a1)
{
  char v1; // r14
  __int64 v2; // rbx
  unsigned __int8 CurrentIrql; // bp
  __int64 *v4; // rsi
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // rdi
  unsigned int v8; // edx
  __int64 MapRegisters; // rax

  v1 = 0;
  v2 = a1;
  CurrentIrql = 0;
  if ( KeGetCurrentIrql() < 2u )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a1) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
    }
    v1 = 1;
  }
  v4 = (__int64 *)(v2 + 240);
  while ( 1 )
  {
    if ( *(_DWORD *)(v2 + 248) )
      IoFreeMapRegistersV2(v2, *v4);
    result = (__int64)KeRemoveDeviceQueue((PKDEVICE_QUEUE)(v2 + 184));
    v7 = result;
    if ( !result )
      break;
    *(_QWORD *)(v2 + 352) = result;
    *(_DWORD *)(v2 + 248) = *(_DWORD *)(result + 40);
    v8 = *(_DWORD *)(result + 40);
    if ( v8 && *(_QWORD *)(v2 + 160) )
    {
      MapRegisters = HalpDmaAllocateMapRegisters(v2, v8);
      *v4 = MapRegisters;
      if ( !MapRegisters )
      {
        HalpDmaQueueAdapter(v2);
        result = HalpQueueMapBufferWorker(v2, *(unsigned int *)(v7 + 40));
        break;
      }
      v4 = (__int64 *)(v2 + 240);
    }
    else
    {
      *v4 = 0LL;
      *(_DWORD *)(v2 + 248) = 0;
    }
    *(_QWORD *)(v2 + 352) = v7;
    result = guard_dispatch_icall_no_overrides(*(_QWORD *)(v7 + 48), *(_QWORD *)(v7 + 56));
    if ( (_DWORD)result == 1 )
      break;
    if ( (_DWORD)result == 3 )
      *(_DWORD *)(v2 + 248) = 0;
  }
  if ( v1 )
  {
    if ( KiIrqlFlags )
    {
      LOBYTE(v6) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v6);
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
