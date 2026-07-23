/*
 * XREFs of IoDuplicateDependency @ 0x14071BC90
 * Callers:
 *     <none>
 * Callees:
 *     PiListEntryToDependencyEdge @ 0x1404F5EF8 (PiListEntryToDependencyEdge.c)
 *     PipAddDependencyEdgeBetweenNodes @ 0x1405A1460 (PipAddDependencyEdgeBetweenNodes.c)
 *     PipCreateDependencyNode @ 0x14071C21C (PipCreateDependencyNode.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1409BD598 (PnpAcquireDependencyRelationsLock.c)
 *     PipAddDependentsToRebuildPowerRelationsQueue @ 0x1409BD5E8 (PipAddDependentsToRebuildPowerRelationsQueue.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x1409BD654 (PipProcessRebuildPowerRelationsQueue.c)
 *     PnpReleaseDependencyRelationsLock @ 0x1409BDC24 (PnpReleaseDependencyRelationsLock.c)
 *     PiGetDependentList @ 0x1409BE2CC (PiGetDependentList.c)
 *     PipQueryBindingResolution @ 0x140A67300 (PipQueryBindingResolution.c)
 *     PipDereferenceDependencyNode @ 0x140AAF930 (PipDereferenceDependencyNode.c)
 */

__int64 __fastcall IoDuplicateDependency(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 BindingResolution; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 DependencyNode; // rdi
  _QWORD **DependentList; // r15
  _QWORD *v13; // rsi
  __int64 v14; // rax
  __int64 v15; // r13
  _QWORD *v16; // r12
  _QWORD *v17; // r14
  _QWORD *v18; // r8
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  _DWORD v24[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v25; // [rsp+28h] [rbp-30h]

  v2 = 0;
  v24[1] = 0;
  v4 = a1;
  if ( a1 && a2 )
  {
    LOBYTE(a1) = 1;
    PnpAcquireDependencyRelationsLock(a1);
    if ( !*(_QWORD *)(*(_QWORD *)(v4 + 312) + 80LL) )
    {
LABEL_4:
      PnpReleaseDependencyRelationsLock(v6, v5, v7);
      return v2;
    }
    v24[0] = 0;
    v25 = a2;
    BindingResolution = PipQueryBindingResolution(v24);
    DependencyNode = BindingResolution;
    if ( BindingResolution )
    {
      ++*(_DWORD *)(BindingResolution + 88);
    }
    else
    {
      DependencyNode = PipCreateDependencyNode(v24, v9, v10);
      if ( !DependencyNode )
      {
        v2 = -1073741670;
        goto LABEL_4;
      }
    }
    DependentList = (_QWORD **)PiGetDependentList(v4);
    v13 = *DependentList;
    while ( v13 != DependentList )
    {
      v14 = PiListEntryToDependencyEdge((__int64)v13, 1);
      v13 = (_QWORD *)*v13;
      v15 = v14;
      v16 = (_QWORD *)(v14 + 56);
      v17 = *(_QWORD **)(v14 + 56);
      while ( v17 != v16 )
      {
        v18 = v17;
        v17 = (_QWORD *)*v17;
        v19 = PipAddDependencyEdgeBetweenNodes(*(_QWORD *)(v15 + 40), DependencyNode, (__int64)(v18 + 2));
        if ( v19 < 0 )
        {
          v2 = v19;
          goto LABEL_15;
        }
      }
    }
LABEL_15:
    PipDereferenceDependencyNode(DependencyNode);
    PipAddDependentsToRebuildPowerRelationsQueue(a2);
    PnpReleaseDependencyRelationsLock(v21, v20, v22);
    PipProcessRebuildPowerRelationsQueue();
    return v2;
  }
  return 3221225485LL;
}
