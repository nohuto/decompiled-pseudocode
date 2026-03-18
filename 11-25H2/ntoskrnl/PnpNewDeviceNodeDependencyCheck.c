/*
 * XREFs of PnpNewDeviceNodeDependencyCheck @ 0x140830FBC
 * Callers:
 *     PiProcessNewDeviceNode @ 0x14082CE68 (PiProcessNewDeviceNode.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x140295130 (ExAcquireResourceSharedLite.c)
 *     PiListEntryToDependencyEdge @ 0x1404F5E64 (PiListEntryToDependencyEdge.c)
 *     PipNotifyDependenciesChanged @ 0x1406EE4E4 (PipNotifyDependenciesChanged.c)
 *     PiGetDependentList @ 0x140830B54 (PiGetDependentList.c)
 *     PipAddtoRebuildPowerRelationsQueue @ 0x140830F0C (PipAddtoRebuildPowerRelationsQueue.c)
 *     PiGetProviderList @ 0x1408319BC (PiGetProviderList.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1408325D8 (PnpAcquireDependencyRelationsLock.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x140832888 (PipProcessRebuildPowerRelationsQueue.c)
 *     PnpReleaseDependencyRelationsLock @ 0x140832A80 (PnpReleaseDependencyRelationsLock.c)
 *     PiPnpRtlBeginOperation @ 0x1408D0818 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x1408D09F8 (PiPnpRtlEndOperation.c)
 */

__int64 __fastcall PnpNewDeviceNodeDependencyCheck(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // r8
  struct _KTHREAD *CurrentThread; // rax
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD **ProviderList; // rdi
  __int64 v16; // r8
  _QWORD *v17; // rbx
  struct _KTHREAD *v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 *DependentList; // rdi
  __int64 v23; // r8
  __int64 *v24; // rbx
  __int64 result; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  PVOID P; // [rsp+30h] [rbp+8h] BYREF

  P = 0LL;
  v1 = a1;
  LOBYTE(a1) = 1;
  PnpAcquireDependencyRelationsLock(a1);
  PipAddtoRebuildPowerRelationsQueue(*(_QWORD *)(v1 + 32));
  PnpReleaseDependencyRelationsLock(v3, v2, v4);
  PipProcessRebuildPowerRelationsQueue(v6, v5, v7, v8);
  PiPnpRtlBeginOperation(&P, v9, v10);
  CurrentThread = KeGetCurrentThread();
  v12 = *(_QWORD *)(v1 + 32);
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&IopDeviceTreeLock, 1u);
  ExAcquireResourceSharedLite(&PiDependencyRelationsLock, 1u);
  ProviderList = (_QWORD **)PiGetProviderList(v12);
  v17 = *ProviderList;
  while ( v17 != ProviderList )
  {
    v26 = PiListEntryToDependencyEdge((__int64)v17, 0);
    v17 = (_QWORD *)*v17;
    PipNotifyDependenciesChanged(0LL, *(_QWORD *)(v26 + 32));
  }
  PnpReleaseDependencyRelationsLock(v14, v13, v16);
  v18 = KeGetCurrentThread();
  v19 = *(_QWORD *)(v1 + 32);
  --v18->KernelApcDisable;
  ExAcquireResourceSharedLite(&IopDeviceTreeLock, 1u);
  ExAcquireResourceSharedLite(&PiDependencyRelationsLock, 1u);
  DependentList = PiGetDependentList(v19);
  v24 = (__int64 *)*DependentList;
  while ( v24 != DependentList )
  {
    v27 = PiListEntryToDependencyEdge((__int64)v24, 1);
    v24 = (__int64 *)*v24;
    PipNotifyDependenciesChanged(*(_QWORD *)(v27 + 40), 0LL);
  }
  result = PnpReleaseDependencyRelationsLock(v21, v20, v23);
  if ( P )
    return PiPnpRtlEndOperation(P);
  return result;
}
