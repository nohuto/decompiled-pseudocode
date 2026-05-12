/*
 * XREFs of RaAttemptHighWaterMarkIncrease @ 0x14003E1D0
 * Callers:
 *     StorNextIoGatewayItem @ 0x140029150 (StorNextIoGatewayItem.c)
 *     RaAttemptHighWaterMarkIncreasePassive @ 0x14003E1B0 (RaAttemptHighWaterMarkIncreasePassive.c)
 *     StorSubmitIoGatewayItem @ 0x140051730 (StorSubmitIoGatewayItem.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     StorAllocateContiguousIoResourcesWithPreferredNode @ 0x140021D94 (StorAllocateContiguousIoResourcesWithPreferredNode.c)
 *     StorGetPreferredNodeNumber @ 0x140021FE0 (StorGetPreferredNodeNumber.c)
 *     McTemplateK0zqqqqq_EtwWriteTransfer @ 0x1400A6050 (McTemplateK0zqqqqq_EtwWriteTransfer.c)
 *     McTemplateK0zqqqqqqq_EtwWriteTransfer @ 0x1400A6134 (McTemplateK0zqqqqqqq_EtwWriteTransfer.c)
 */

char __fastcall RaAttemptHighWaterMarkIncrease(unsigned int *Context)
{
  char v2; // r15
  PIO_WORKITEM WorkItem; // rax
  __int64 v5; // r9
  __int64 v6; // r14
  int PreferredNodeNumber; // eax
  __int64 v8; // rdx
  __int64 Pool; // rax
  int v10; // r8d
  struct _SLIST_ENTRY *v11; // rsi
  unsigned int v12; // ecx
  unsigned int v13; // r9d
  union _SLIST_HEADER *v14; // rcx
  unsigned int v15; // r8d
  ULONG TimeIncrement; // eax
  int v17; // r8d
  int v18; // ecx

  v2 = 0;
  if ( KeGetCurrentIrql() && !*((_BYTE *)Context + 184) )
  {
    if ( *((_QWORD *)Context + 36)
      || (WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(*(_QWORD *)(*((_QWORD *)Context + 19) + 64LL) + 8LL)),
          (*((_QWORD *)Context + 36) = WorkItem) != 0LL) )
    {
      if ( !_InterlockedCompareExchange((volatile signed __int32 *)Context + 76, 1, 0) )
        IoQueueWorkItem(
          *((PIO_WORKITEM *)Context + 36),
          (PIO_WORKITEM_ROUTINE)RaAttemptHighWaterMarkIncreasePassive,
          CriticalWorkQueue,
          Context);
    }
    return 0;
  }
  if ( _InterlockedCompareExchange((volatile signed __int32 *)Context + 47, 1, 0) )
    return 0;
  if ( Context[34] < Context[36] )
  {
    if ( !*((_QWORD *)Context + 21) )
      goto LABEL_13;
    if ( MEMORY[0xFFFFF78000000320] >= *((_QWORD *)Context + 21) )
    {
      *((_QWORD *)Context + 21) = 0LL;
LABEL_13:
      v5 = *((_QWORD *)Context + 19);
      v6 = *(_QWORD *)(v5 + 64);
      if ( *((_BYTE *)Context + 184) )
      {
        Pool = RaidAllocatePool(64LL, Context[37], 1397907794LL, v5);
      }
      else
      {
        PreferredNodeNumber = StorGetPreferredNodeNumber((__int64)Context);
        Pool = StorAllocateContiguousIoResourcesWithPreferredNode(Context[37], v8, (_QWORD *)v6, PreferredNodeNumber);
      }
      v11 = (struct _SLIST_ENTRY *)Pool;
      if ( Pool )
      {
        *(_DWORD *)(Pool + 48) = 523124044;
        *(_DWORD *)(Pool + 792) = Context[45];
        v12 = Context[45];
        if ( v12 )
          *(_QWORD *)(Pool + 808) = Pool + Context[37] - v12;
        if ( *((_BYTE *)Context + 184) )
          *(_QWORD *)(Pool + 840) = 0LL;
        Context[41] = 0;
        v2 = 1;
        *(_QWORD *)(Pool + 32) = Context;
        if ( (Microsoft_Windows_StorPortEnableBits & 0x10) != 0 )
          McTemplateK0zqqqqq_EtwWriteTransfer(
            Context[34] + 1,
            Context[34],
            v10,
            *(_QWORD *)(v6 + 48),
            *(_DWORD *)(v6 + 56),
            Context[48],
            Context[34],
            Context[34] + 1,
            Context[36]);
        _InterlockedAdd((volatile signed __int32 *)Context + 34, 1u);
        Context[7] = Context[34];
        Context[8] = Context[7];
        v13 = Context[32];
        if ( v13 )
        {
          v15 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)Context + 19) + 64LL) + 976LL);
          v14 = *(union _SLIST_HEADER **)(*((_QWORD *)Context + 8)
                                        + 8LL * (v13 * (HIDWORD(KeGetPcr()[1].LockArray) % v15) / v15));
        }
        else
        {
          v14 = (union _SLIST_HEADER *)(Context + 16);
        }
        ExpInterlockedPushEntrySList(v14, v11);
      }
      else
      {
        ++Context[40];
        ++Context[41];
        *((_QWORD *)Context + 21) = MEMORY[0xFFFFF78000000320];
        TimeIncrement = KeQueryTimeIncrement();
        v18 = Context[44] + 1;
        Context[44] = v18;
        *((_QWORD *)Context + 21) += 30 * (0x989680 / TimeIncrement);
        if ( (Microsoft_Windows_StorPortEnableBits & 0x20) != 0 )
          McTemplateK0zqqqqqqq_EtwWriteTransfer(
            v18,
            0x989680 % TimeIncrement,
            v17,
            *(_QWORD *)(v6 + 48),
            *(_DWORD *)(v6 + 56),
            Context[48],
            Context[7],
            Context[36],
            Context[40],
            Context[41],
            v18);
      }
    }
  }
  Context[47] = 0;
  return v2;
}
