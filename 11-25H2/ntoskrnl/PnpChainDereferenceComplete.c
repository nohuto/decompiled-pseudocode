/*
 * XREFs of PnpChainDereferenceComplete @ 0x140A82AFC
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x1402FEF84 (IopCompleteUnloadOrDelete.c)
 *     PnpIsChainDereferenced @ 0x1404A2190 (PnpIsChainDereferenced.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x14028A9E0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
 *     PnpDelayedRemoveWorkerContextCreate @ 0x140717A9C (PnpDelayedRemoveWorkerContextCreate.c)
 *     PnpDelayedRemoveWorker @ 0x14082EE10 (PnpDelayedRemoveWorker.c)
 *     IopSetRelationsTag @ 0x140A82C14 (IopSetRelationsTag.c)
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
