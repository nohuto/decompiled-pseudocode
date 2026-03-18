/*
 * XREFs of PnpChainDereferenceComplete @ 0x140A878A4
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x1403F2590 (IopCompleteUnloadOrDelete.c)
 *     PnpIsChainDereferenced @ 0x1404A1BD0 (PnpIsChainDereferenced.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402769C0 (ExAcquireResourceExclusiveLite.c)
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 *     PnpDelayedRemoveWorkerContextCreate @ 0x140723B9C (PnpDelayedRemoveWorkerContextCreate.c)
 *     PnpDelayedRemoveWorker @ 0x1409C6B60 (PnpDelayedRemoveWorker.c)
 *     IopSetRelationsTag @ 0x140A879BC (IopSetRelationsTag.c)
 */

void __fastcall PnpChainDereferenceComplete(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // r8
  PVOID *i; // rbx
  bool v7; // zf
  unsigned int *v8; // rcx
  _QWORD *v9; // rax
  unsigned int v10; // edx
  __int64 v11; // rcx
  _QWORD *v12; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&IopSurpriseRemoveListLock, 1u);
  for ( i = (PVOID *)IopPendingSurpriseRemovals; ; i = (PVOID *)*i )
  {
    if ( i == &IopPendingSurpriseRemovals )
      goto LABEL_7;
    if ( !*((_BYTE *)i + 104) && (int)IopSetRelationsTag(i[8], a1, v5) >= 0 )
    {
      v8 = *(unsigned int **)i[8];
      v9 = i[7];
      v10 = v8[2];
      v5 = *v8;
      v11 = v9 ? *(_QWORD *)(v9[39] + 40LL) : 0LL;
      if ( *(_DWORD *)(v11 + 300) != 784 && v10 == (_DWORD)v5 )
        break;
    }
  }
  v7 = PnpDelayedRemovePending == 0;
  *((_BYTE *)i + 104) = 1;
  if ( !v7 )
  {
LABEL_7:
    ExReleaseResourceLite(&IopSurpriseRemoveListLock);
    KeLeaveCriticalRegion();
    return;
  }
  PnpDelayedRemovePending = 1;
  ExReleaseResourceLite(&IopSurpriseRemoveListLock);
  KeLeaveCriticalRegion();
  if ( a2 && KeGetCurrentThread()->ApcState.Process == PsInitialSystemProcess )
  {
    PnpDelayedRemoveWorker(0LL);
  }
  else
  {
    v12 = PnpDelayedRemoveWorkerContextCreate((__int64)i);
    PnpDelayedRemoveWorkItem.List.Flink = 0LL;
    PnpDelayedRemoveWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PnpDelayedRemoveWorker;
    PnpDelayedRemoveWorkItem.Parameter = v12;
    ExQueueWorkItem(&PnpDelayedRemoveWorkItem, DelayedWorkQueue);
  }
}
