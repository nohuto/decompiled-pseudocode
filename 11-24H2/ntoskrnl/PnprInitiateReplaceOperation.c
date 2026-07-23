/*
 * XREFs of PnprInitiateReplaceOperation @ 0x140B55C44
 * Callers:
 *     PnpReplacePartitionUnit @ 0x14072C230 (PnpReplacePartitionUnit.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x140402260 (KeInitializeEvent.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     PnprCompleteWake @ 0x1405A46DC (PnprCompleteWake.c)
 *     PnprQuiesce @ 0x1405A4C78 (PnprQuiesce.c)
 *     PnprSwap @ 0x1405A4F9C (PnprSwap.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     PnprReplaceStart @ 0x14072E59C (PnprReplaceStart.c)
 *     PnprWakeProcessors @ 0x140B572A4 (PnprWakeProcessors.c)
 *     MmDuplicateMemory @ 0x140B64A68 (MmDuplicateMemory.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
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
  __int64 v8; // rdx
  int v9; // ecx
  int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  int v13; // eax
  unsigned __int8 CurrentIrql; // bp
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // eax
  int v19; // eax
  __int64 v20; // rcx
  int v21; // eax
  int v22; // eax
  __int64 v23; // rcx
  unsigned int v24; // eax
  __int128 v26; // [rsp+30h] [rbp-48h] BYREF
  __int128 v27; // [rsp+40h] [rbp-38h]
  __int64 v28; // [rsp+50h] [rbp-28h]

  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v0 = 0;
  v1 = 0;
  v2 = 0LL;
  KeInitializeEvent((PRKEVENT)(PnprContext + 33064), NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)(PnprContext + 33088), NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)(PnprContext + 33112), NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)(PnprContext + 33136), NotificationEvent, 0);
  if ( (*(_DWORD *)(PnprContext + 64) & 0x20) == 0 )
  {
    Pool2 = (struct _WORK_QUEUE_ITEM *)ExAllocatePool2(0x40uLL, 0x20uLL, 0x51706E50u);
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
    v9 = *(_DWORD *)(PnprContext + 33288);
    if ( !v9 )
      v9 = 1671;
    v7 = *(_DWORD *)(PnprContext + 33292);
    *(_DWORD *)(PnprContext + 33288) = v9;
    if ( !v7 )
      v7 = 1;
    goto LABEL_7;
  }
  v1 = 1;
  if ( !*(_DWORD *)(*(_QWORD *)(PnprContext + 24) + 4LL) )
    goto LABEL_26;
  if ( (*(_DWORD *)(PnprContext + 64) & 8) == 0 )
  {
    *((_QWORD *)&v27 + 1) = 0LL;
    *(_QWORD *)&v26 = PnprStartMirroring;
    *((_QWORD *)&v26 + 1) = PnprEndMirroring;
    *(_QWORD *)&v27 = PnprMirrorPhysicalMemory;
    v28 = 8LL;
    v10 = MmDuplicateMemory(&v26);
    v5 = 0;
    if ( v10 != 1073742484 )
      v5 = v10;
    goto LABEL_42;
  }
  v5 = guard_dispatch_icall_no_overrides(*(_QWORD *)(PnprContext + 33184), v8);
  if ( v5 < 0 )
  {
    v11 = PnprContext;
    v4 = 1739LL;
    v12 = *(_DWORD *)(PnprContext + 33288);
    if ( !v12 )
      v12 = 1739;
    *(_DWORD *)(PnprContext + 33288) = v12;
    v13 = *(_DWORD *)(v11 + 33292);
    if ( !v13 )
      v13 = 8;
    *(_DWORD *)(v11 + 33292) = v13;
  }
  else
  {
LABEL_26:
    CurrentIrql = KeGetCurrentIrql();
    v5 = PnprQuiesce();
    if ( v5 < 0 )
    {
      v20 = PnprContext;
      v4 = 1772LL;
      v21 = *(_DWORD *)(PnprContext + 33288);
      if ( !v21 )
        v21 = 1772;
      *(_DWORD *)(PnprContext + 33288) = v21;
      v22 = *(_DWORD *)(v20 + 33292);
      if ( !v22 )
        v22 = 1;
      *(_DWORD *)(v20 + 33292) = v22;
    }
    else
    {
      v0 = 1;
      v5 = PnprSwap(v16, v15);
      if ( v5 < 0 )
      {
        guard_dispatch_icall_no_overrides(3LL, *(_QWORD *)(PnprContext + 33176));
        v17 = PnprContext;
        v18 = *(_DWORD *)(PnprContext + 33288);
        if ( !v18 )
          v18 = 1762;
        *(_DWORD *)(PnprContext + 33288) = v18;
        v19 = *(_DWORD *)(v17 + 33292);
        if ( !v19 )
          v19 = 1;
        *(_DWORD *)(v17 + 33292) = v19;
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
  v23 = *(_QWORD *)(PnprContext + 33176);
  if ( v23 )
    guard_dispatch_icall_no_overrides(v23, v4);
  if ( v1 )
  {
    if ( *(_DWORD *)(*(_QWORD *)(PnprContext + 24) + 4LL) )
    {
      v24 = guard_dispatch_icall_no_overrides(*(_QWORD *)(PnprContext + 33184), v4);
      if ( v5 >= 0 )
        return v24;
    }
  }
  return (unsigned int)v5;
}
