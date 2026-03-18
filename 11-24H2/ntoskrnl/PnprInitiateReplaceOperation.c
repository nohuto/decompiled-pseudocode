/*
 * XREFs of PnprInitiateReplaceOperation @ 0x140B53BF4
 * Callers:
 *     PnpReplacePartitionUnit @ 0x14072E220 (PnpReplacePartitionUnit.c)
 * Callees:
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x140409D80 (KeInitializeEvent.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     PnprCompleteWake @ 0x1405A76EC (PnprCompleteWake.c)
 *     PnprQuiesce @ 0x1405A7C88 (PnprQuiesce.c)
 *     PnprSwap @ 0x1405A7FAC (PnprSwap.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     PnprReplaceStart @ 0x14073058C (PnprReplaceStart.c)
 *     PnprWakeProcessors @ 0x140B55254 (PnprWakeProcessors.c)
 *     MmDuplicateMemory @ 0x140B62998 (MmDuplicateMemory.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 PnprInitiateReplaceOperation()
{
  char v0; // r14
  char v1; // r15
  struct _WORK_QUEUE_ITEM *v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rcx
  struct _WORK_QUEUE_ITEM *Pool2; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  int v11; // ebx
  int v12; // ecx
  int v13; // eax
  __int64 v14; // rdx
  int v15; // ecx
  int v16; // eax
  __int64 v17; // rcx
  int v18; // eax
  int v19; // eax
  unsigned __int8 CurrentIrql; // bp
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rcx
  int v26; // eax
  int v27; // eax
  __int64 v28; // rcx
  int v29; // eax
  int v30; // eax
  __int64 v31; // rcx
  unsigned int v32; // eax
  __int128 v34; // [rsp+30h] [rbp-48h] BYREF
  __int128 v35; // [rsp+40h] [rbp-38h]
  __int64 v36; // [rsp+50h] [rbp-28h]

  v34 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  v0 = 0;
  v1 = 0;
  v2 = 0LL;
  KeInitializeEvent((PRKEVENT)(PnprContext + 33064), NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)(PnprContext + 33088), NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)(PnprContext + 33112), NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)(PnprContext + 33136), NotificationEvent, 0);
  v6 = *(unsigned int *)(PnprContext + 64);
  if ( (v6 & 0x20) == 0 )
  {
    Pool2 = (struct _WORK_QUEUE_ITEM *)ExAllocatePool2(0x40uLL);
    v2 = Pool2;
    if ( !Pool2 )
    {
      v10 = PnprContext;
      v11 = -1073741670;
      v12 = *(_DWORD *)(PnprContext + 33288);
      if ( !v12 )
        v12 = 1656;
      v13 = *(_DWORD *)(PnprContext + 33292);
      *(_DWORD *)(PnprContext + 33288) = v12;
      if ( !v13 )
        v13 = 10;
LABEL_7:
      *(_DWORD *)(v10 + 33292) = v13;
      goto LABEL_42;
    }
    Pool2->List.Flink = 0LL;
    Pool2->WorkerRoutine = (void (__fastcall *)(void *))PnprQuiesceWorker;
    Pool2->Parameter = Pool2;
    ExQueueWorkItem(Pool2, CriticalWorkQueue);
  }
  v11 = PnprReplaceStart(v6, v3, v4, v5);
  if ( v11 < 0 )
  {
    v10 = PnprContext;
    v15 = *(_DWORD *)(PnprContext + 33288);
    if ( !v15 )
      v15 = 1671;
    v13 = *(_DWORD *)(PnprContext + 33292);
    *(_DWORD *)(PnprContext + 33288) = v15;
    if ( !v13 )
      v13 = 1;
    goto LABEL_7;
  }
  v1 = 1;
  if ( !*(_DWORD *)(*(_QWORD *)(PnprContext + 24) + 4LL) )
    goto LABEL_26;
  if ( (*(_DWORD *)(PnprContext + 64) & 8) == 0 )
  {
    *((_QWORD *)&v35 + 1) = 0LL;
    *(_QWORD *)&v34 = PnprStartMirroring;
    *((_QWORD *)&v34 + 1) = PnprEndMirroring;
    *(_QWORD *)&v35 = PnprMirrorPhysicalMemory;
    v36 = 8LL;
    v16 = MmDuplicateMemory(&v34);
    v11 = 0;
    if ( v16 != 1073742484 )
      v11 = v16;
    goto LABEL_42;
  }
  v11 = guard_dispatch_icall_no_overrides(*(_QWORD *)(PnprContext + 33184), v14, v8, v9);
  if ( v11 < 0 )
  {
    v17 = PnprContext;
    v10 = 1739LL;
    v18 = *(_DWORD *)(PnprContext + 33288);
    if ( !v18 )
      v18 = 1739;
    *(_DWORD *)(PnprContext + 33288) = v18;
    v19 = *(_DWORD *)(v17 + 33292);
    if ( !v19 )
      v19 = 8;
    *(_DWORD *)(v17 + 33292) = v19;
  }
  else
  {
LABEL_26:
    CurrentIrql = KeGetCurrentIrql();
    v11 = PnprQuiesce();
    if ( v11 < 0 )
    {
      v28 = PnprContext;
      v10 = 1772LL;
      v29 = *(_DWORD *)(PnprContext + 33288);
      if ( !v29 )
        v29 = 1772;
      *(_DWORD *)(PnprContext + 33288) = v29;
      v30 = *(_DWORD *)(v28 + 33292);
      if ( !v30 )
        v30 = 1;
      *(_DWORD *)(v28 + 33292) = v30;
    }
    else
    {
      v0 = 1;
      v11 = PnprSwap(v22, v21, v8, v9);
      if ( v11 < 0 )
      {
        guard_dispatch_icall_no_overrides(3LL, *(_QWORD *)(PnprContext + 33176), v23, v24);
        v25 = PnprContext;
        v26 = *(_DWORD *)(PnprContext + 33288);
        if ( !v26 )
          v26 = 1762;
        *(_DWORD *)(PnprContext + 33288) = v26;
        v27 = *(_DWORD *)(v25 + 33292);
        if ( !v27 )
          v27 = 1;
        *(_DWORD *)(v25 + 33292) = v27;
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
  v31 = *(_QWORD *)(PnprContext + 33176);
  if ( v31 )
    guard_dispatch_icall_no_overrides(v31, v10, v8, v9);
  if ( v1 )
  {
    if ( *(_DWORD *)(*(_QWORD *)(PnprContext + 24) + 4LL) )
    {
      v32 = guard_dispatch_icall_no_overrides(*(_QWORD *)(PnprContext + 33184), v10, v8, v9);
      if ( v11 >= 0 )
        return v32;
    }
  }
  return (unsigned int)v11;
}
