/*
 * XREFs of HalAllocateAdapterChannelV2 @ 0x14038740C
 * Callers:
 *     HalRealAllocateAdapterChannelV2 @ 0x140387290 (HalRealAllocateAdapterChannelV2.c)
 *     HalAllocateAdapterChannel @ 0x14053AFF0 (HalAllocateAdapterChannel.c)
 * Callees:
 *     KeInsertDeviceQueue @ 0x140388190 (KeInsertDeviceQueue.c)
 *     HalpDmaAllocateMapRegisters @ 0x14038829C (HalpDmaAllocateMapRegisters.c)
 *     IoFreeAdapterChannelV2 @ 0x140388C50 (IoFreeAdapterChannelV2.c)
 *     HalpQueueMapBufferWorker @ 0x140497EF8 (HalpQueueMapBufferWorker.c)
 *     HalpDmaQueueAdapter @ 0x1404D3844 (HalpDmaQueueAdapter.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalAllocateAdapterChannelV2(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  char v4; // r15
  char v5; // r14
  unsigned __int8 CurrentIrql; // di
  struct _KDEVICE_QUEUE_ENTRY *v8; // rsi
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 MapRegisters; // rax
  __int64 v13; // rcx
  int v14; // eax
  __int64 v16; // rdx

  *(_DWORD *)(a2 + 20) &= ~4u;
  v4 = 0;
  v5 = 0;
  *(_QWORD *)(a2 + 24) = a4;
  CurrentIrql = 0;
  *(_DWORD *)(a2 + 40) = a3;
  v8 = (struct _KDEVICE_QUEUE_ENTRY *)a2;
  v10 = 2LL;
  if ( KeGetCurrentIrql() < 2u )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a2) = 2;
      LOBYTE(v10) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(v10, a2);
    }
    v5 = 1;
  }
  if ( KeInsertDeviceQueue((PKDEVICE_QUEUE)(a1 + 184), v8) )
    goto LABEL_15;
  *(_DWORD *)(a1 + 248) = a3;
  *(_QWORD *)(a1 + 352) = v8;
  if ( !a3 || !*(_BYTE *)(a1 + 440) && *(_BYTE *)(a1 + 445) )
  {
    *(_QWORD *)(a1 + 240) = 0LL;
    *(_DWORD *)(a1 + 248) = 0;
    goto LABEL_8;
  }
  if ( a3 <= *(_DWORD *)(a1 + 232) )
  {
    MapRegisters = HalpDmaAllocateMapRegisters(a1, a3);
    *(_QWORD *)(a1 + 240) = MapRegisters;
    if ( !MapRegisters )
    {
      HalpDmaQueueAdapter(a1);
      v4 = 1;
      HalpQueueMapBufferWorker(a1, a3);
    }
LABEL_8:
    v13 = *(_QWORD *)(a1 + 432);
    if ( v13 )
      guard_dispatch_icall_no_overrides(v13, v11);
    if ( v4 )
      goto LABEL_15;
    *(_QWORD *)(a1 + 352) = v8;
    v14 = guard_dispatch_icall_no_overrides(v8[2].DeviceListEntry.Flink, v8[2].DeviceListEntry.Blink);
    if ( v14 != 2 )
    {
      if ( v14 != 3 )
      {
LABEL_15:
        if ( v5 )
        {
          if ( KiIrqlFlags )
          {
            LOBYTE(v11) = CurrentIrql;
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v11);
          }
          __writecr8(CurrentIrql);
        }
        return 0LL;
      }
      *(_DWORD *)(a1 + 248) = 0;
    }
    IoFreeAdapterChannelV2(a1);
    goto LABEL_15;
  }
  *(_DWORD *)(a1 + 248) = 0;
  IoFreeAdapterChannelV2(a1);
  if ( v5 )
  {
    if ( KiIrqlFlags )
    {
      LOBYTE(v16) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v16);
    }
    __writecr8(CurrentIrql);
  }
  return 3221225626LL;
}
