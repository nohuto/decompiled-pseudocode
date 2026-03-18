/*
 * XREFs of HalAllocateAdapterChannelV2 @ 0x140333C24
 * Callers:
 *     HalRealAllocateAdapterChannelV2 @ 0x140333BF0 (HalRealAllocateAdapterChannelV2.c)
 *     HalAllocateAdapterChannel @ 0x14053AEC0 (HalAllocateAdapterChannel.c)
 * Callees:
 *     KeInsertDeviceQueue @ 0x140334EB0 (KeInsertDeviceQueue.c)
 *     HalpDmaAllocateMapRegisters @ 0x140334FBC (HalpDmaAllocateMapRegisters.c)
 *     IoFreeAdapterChannelV2 @ 0x140335920 (IoFreeAdapterChannelV2.c)
 *     HalpDmaQueueAdapter @ 0x14049DCFC (HalpDmaQueueAdapter.c)
 *     HalpQueueMapBufferWorker @ 0x14049E010 (HalpQueueMapBufferWorker.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalAllocateAdapterChannelV2(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  char v4; // r15
  char v5; // r14
  unsigned __int8 CurrentIrql; // di
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
  v10 = 2LL;
  if ( KeGetCurrentIrql() < 2u )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v10) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(v10);
    }
    v5 = 1;
  }
  if ( KeInsertDeviceQueue((PKDEVICE_QUEUE)(a1 + 184), (PKDEVICE_QUEUE_ENTRY)a2) )
    goto LABEL_15;
  *(_DWORD *)(a1 + 248) = a3;
  *(_QWORD *)(a1 + 352) = a2;
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
    *(_QWORD *)(a1 + 352) = a2;
    v14 = guard_dispatch_icall_no_overrides(*(_QWORD *)(a2 + 48), *(_QWORD *)(a2 + 56));
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
