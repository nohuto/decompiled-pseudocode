/*
 * XREFs of PnpNewDeviceNodeDependencyCheck @ 0x1409BD0AC
 * Callers:
 *     PiProcessNewDeviceNode @ 0x140A76864 (PiProcessNewDeviceNode.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x140321360 (ExAcquireResourceSharedLite.c)
 *     PiListEntryToDependencyEdge @ 0x1404F5EF8 (PiListEntryToDependencyEdge.c)
 *     PipNotifyDependenciesChanged @ 0x1406F7FA8 (PipNotifyDependenciesChanged.c)
 *     PiPnpRtlBeginOperation @ 0x1408C99A8 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x1408C9B88 (PiPnpRtlEndOperation.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1409BD598 (PnpAcquireDependencyRelationsLock.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x1409BD654 (PipProcessRebuildPowerRelationsQueue.c)
 *     PnpReleaseDependencyRelationsLock @ 0x1409BDC24 (PnpReleaseDependencyRelationsLock.c)
 *     PiGetProviderList @ 0x1409BDF50 (PiGetProviderList.c)
 *     PipAddtoRebuildPowerRelationsQueue @ 0x1409BDF84 (PipAddtoRebuildPowerRelationsQueue.c)
 *     PiGetDependentList @ 0x1409BE2CC (PiGetDependentList.c)
 */

void __fastcall PnpNewDeviceNodeDependencyCheck(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  struct _KTHREAD *CurrentThread; // rax
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD **ProviderList; // rdi
  __int64 v14; // r8
  _QWORD *v15; // rbx
  struct _KTHREAD *v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  _QWORD **DependentList; // rdi
  __int64 v21; // r8
  _QWORD *v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rax
  PVOID P; // [rsp+30h] [rbp+8h] BYREF

  P = 0LL;
  v1 = a1;
  LOBYTE(a1) = 1;
  PnpAcquireDependencyRelationsLock(a1);
  PipAddtoRebuildPowerRelationsQueue(*(_QWORD *)(v1 + 32));
  PnpReleaseDependencyRelationsLock(v3, v2, v4);
  PipProcessRebuildPowerRelationsQueue(v6, v5, v7, v8);
  PiPnpRtlBeginOperation(&P);
  CurrentThread = KeGetCurrentThread();
  v10 = *(_QWORD *)(v1 + 32);
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&IopDeviceTreeLock, 1u);
  ExAcquireResourceSharedLite(&PiDependencyRelationsLock, 1u);
  ProviderList = (_QWORD **)PiGetProviderList(v10);
  v15 = *ProviderList;
  while ( v15 != ProviderList )
  {
    v23 = PiListEntryToDependencyEdge((__int64)v15, 0);
    v15 = (_QWORD *)*v15;
    PipNotifyDependenciesChanged(0LL, *(_QWORD *)(v23 + 32));
  }
  PnpReleaseDependencyRelationsLock(v12, v11, v14);
  v16 = KeGetCurrentThread();
  v17 = *(_QWORD *)(v1 + 32);
  --v16->KernelApcDisable;
  ExAcquireResourceSharedLite(&IopDeviceTreeLock, 1u);
  ExAcquireResourceSharedLite(&PiDependencyRelationsLock, 1u);
  DependentList = (_QWORD **)PiGetDependentList(v17);
  v22 = *DependentList;
  while ( v22 != DependentList )
  {
    v24 = PiListEntryToDependencyEdge((__int64)v22, 1);
    v22 = (_QWORD *)*v22;
    PipNotifyDependenciesChanged(*(_QWORD *)(v24 + 40), 0LL);
  }
  PnpReleaseDependencyRelationsLock(v19, v18, v21);
  if ( P )
    PiPnpRtlEndOperation((PVOID **)P);
}
