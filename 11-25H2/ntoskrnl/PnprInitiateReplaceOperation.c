/*
 * XREFs of PnprInitiateReplaceOperation @ 0x140B43BF4
 * Callers:
 *     PnpReplacePartitionUnit @ 0x1407222A0 (PnpReplacePartitionUnit.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
 *     KeInitializeEvent @ 0x140401B80 (KeInitializeEvent.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     PnprCompleteWake @ 0x1405A3EDC (PnprCompleteWake.c)
 *     PnprQuiesce @ 0x1405A4478 (PnprQuiesce.c)
 *     PnprSwap @ 0x1405A479C (PnprSwap.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     PnprReplaceStart @ 0x14072460C (PnprReplaceStart.c)
 *     PnprWakeProcessors @ 0x140B45254 (PnprWakeProcessors.c)
 *     MmDuplicateMemory @ 0x140B52868 (MmDuplicateMemory.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 PnprInitiateReplaceOperation()
{
  char v0; // r14
  char v1; // r15
  struct _WORK_QUEUE_ITEM *v2; // rdi
  struct _WORK_QUEUE_ITEM *Pool2; // rax
  __int64 v4; // rdx
  int v5; // ebx
  int v6; // ecx
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  int v12; // eax
  unsigned __int8 CurrentIrql; // bp
  __int64 v14; // rcx
  int v15; // eax
  int v16; // eax
  __int64 v17; // rcx
  int v18; // eax
  int v19; // eax
  __int64 v20; // rcx
  unsigned int v21; // eax
  __int128 v23; // [rsp+30h] [rbp-48h] BYREF
  __int128 v24; // [rsp+40h] [rbp-38h]
  __int64 v25; // [rsp+50h] [rbp-28h]

  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v0 = 0;
  v1 = 0;
  v2 = 0LL;
  KeInitializeEvent((PRKEVENT)(PnprContext + 33064), NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)(PnprContext + 33088), NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)(PnprContext + 33112), NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)(PnprContext + 33136), NotificationEvent, 0);
  if ( (*(_DWORD *)(PnprContext + 64) & 0x20) == 0 )
  {
    Pool2 = (struct _WORK_QUEUE_ITEM *)ExAllocatePool2(0x40uLL);
    v2 = Pool2;
    if ( !Pool2 )
    {
      v4 = PnprContext;
      v5 = -1073741670;
      v6 = *(_DWORD *)(PnprContext + 33288);
      if ( !v6 )
        v6 = 1656;
      v7 = *(_DWORD *)(PnprContext + 33292);
      *(_DWORD *)(PnprContext + 33288) = v6;
      if ( !v7 )
        v7 = 10;
LABEL_7:
      *(_DWORD *)(v4 + 33292) = v7;
      goto LABEL_42;
    }
    Pool2->List.Flink = 0LL;
    Pool2->WorkerRoutine = (void (__fastcall *)(void *))PnprQuiesceWorker;
    Pool2->Parameter = Pool2;
    ExQueueWorkItem(Pool2, CriticalWorkQueue);
  }
  v5 = PnprReplaceStart();
  if ( v5 < 0 )
  {
    v4 = PnprContext;
    v8 = *(_DWORD *)(PnprContext + 33288);
    if ( !v8 )
      v8 = 1671;
    v7 = *(_DWORD *)(PnprContext + 33292);
    *(_DWORD *)(PnprContext + 33288) = v8;
    if ( !v7 )
      v7 = 1;
    goto LABEL_7;
  }
  v1 = 1;
  if ( !*(_DWORD *)(*(_QWORD *)(PnprContext + 24) + 4LL) )
    goto LABEL_26;
  if ( (*(_DWORD *)(PnprContext + 64) & 8) == 0 )
  {
    *((_QWORD *)&v24 + 1) = 0LL;
    *(_QWORD *)&v23 = PnprStartMirroring;
    *((_QWORD *)&v23 + 1) = PnprEndMirroring;
    *(_QWORD *)&v24 = PnprMirrorPhysicalMemory;
    v25 = 8LL;
    v9 = MmDuplicateMemory(&v23);
    v5 = 0;
    if ( v9 != 1073742484 )
      v5 = v9;
    goto LABEL_42;
  }
  v5 = guard_dispatch_icall_no_overrides(*(_QWORD *)(PnprContext + 33184));
  if ( v5 < 0 )
  {
    v10 = PnprContext;
    v11 = *(_DWORD *)(PnprContext + 33288);
    if ( !v11 )
      v11 = 1739;
    *(_DWORD *)(PnprContext + 33288) = v11;
    v12 = *(_DWORD *)(v10 + 33292);
    if ( !v12 )
      v12 = 8;
    *(_DWORD *)(v10 + 33292) = v12;
  }
  else
  {
LABEL_26:
    CurrentIrql = KeGetCurrentIrql();
    v5 = PnprQuiesce();
    if ( v5 < 0 )
    {
      v17 = PnprContext;
      v18 = *(_DWORD *)(PnprContext + 33288);
      if ( !v18 )
        v18 = 1772;
      *(_DWORD *)(PnprContext + 33288) = v18;
      v19 = *(_DWORD *)(v17 + 33292);
      if ( !v19 )
        v19 = 1;
      *(_DWORD *)(v17 + 33292) = v19;
    }
    else
    {
      v0 = 1;
      v5 = PnprSwap();
      if ( v5 < 0 )
      {
        guard_dispatch_icall_no_overrides(3LL);
        v14 = PnprContext;
        v15 = *(_DWORD *)(PnprContext + 33288);
        if ( !v15 )
          v15 = 1762;
        *(_DWORD *)(PnprContext + 33288) = v15;
        v16 = *(_DWORD *)(v14 + 33292);
        if ( !v16 )
          v16 = 1;
        *(_DWORD *)(v14 + 33292) = v16;
      }
      PnprWakeProcessors();
    }
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
LABEL_42:
  if ( (*(_DWORD *)(PnprContext + 64) & 0x20) != 0 )
  {
    if ( v0 )
      PnprCompleteWake();
  }
  else if ( v2 )
  {
    KeSetEvent((PRKEVENT)(PnprContext + 33112), 0, 0);
    KeWaitForSingleObject((PVOID)(PnprContext + 33136), Executive, 0, 0, 0LL);
  }
  v20 = *(_QWORD *)(PnprContext + 33176);
  if ( v20 )
    guard_dispatch_icall_no_overrides(v20);
  if ( v1 )
  {
    if ( *(_DWORD *)(*(_QWORD *)(PnprContext + 24) + 4LL) )
    {
      v21 = guard_dispatch_icall_no_overrides(*(_QWORD *)(PnprContext + 33184));
      if ( v5 >= 0 )
        return v21;
    }
  }
  return (unsigned int)v5;
}
