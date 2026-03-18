/*
 * XREFs of PipFreeDependencyEdge @ 0x1404CD984
 * Callers:
 *     PipMergeDependencyEdgeList @ 0x14071E8CC (PipMergeDependencyEdgeList.c)
 *     PipDeleteAllDependencyRelations @ 0x140A0F350 (PipDeleteAllDependencyRelations.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     PipNotifyDependenciesChanged @ 0x1406FA368 (PipNotifyDependenciesChanged.c)
 *     PipFreeBindingRequestEntry @ 0x14071E804 (PipFreeBindingRequestEntry.c)
 *     PipDereferenceDependencyNode @ 0x140AB54A0 (PipDereferenceDependencyNode.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PipFreeDependencyEdge(_DWORD *P, __int64 a2)
{
  _QWORD **v3; // rdi
  _QWORD *v5; // rcx
  _QWORD *v6; // rax
  KIRQL v7; // r9
  _QWORD *v8; // rcx
  PVOID *v9; // rax
  _DWORD **v10; // r8
  PVOID *v11; // rdx

  v3 = (_QWORD **)(P + 14);
  while ( 1 )
  {
    v5 = *v3;
    if ( *v3 == v3 )
      break;
    if ( (_QWORD **)v5[1] != v3 )
      goto LABEL_13;
    v6 = (_QWORD *)*v5;
    if ( *(_QWORD **)(*v5 + 8LL) != v5 )
      goto LABEL_13;
    *v3 = v6;
    v6[1] = v3;
    PipFreeBindingRequestEntry(v5);
  }
  v7 = KeAcquireSpinLockRaiseToDpc(&PiDependencyEdgeWriteLock);
  if ( a2 )
    *(_DWORD *)(a2 + 48) |= P[12];
  v8 = *(_QWORD **)P;
  if ( *(_DWORD **)(*(_QWORD *)P + 8LL) != P
    || (v9 = (PVOID *)*((_QWORD *)P + 1), *v9 != P)
    || (*v9 = v8, v8[1] = v9, v10 = (_DWORD **)*((_QWORD *)P + 2), v10[1] != P + 4)
    || (v11 = (PVOID *)*((_QWORD *)P + 3), *v11 != P + 4) )
  {
LABEL_13:
    __fastfail(3u);
  }
  *v11 = v10;
  v10[1] = v11;
  KeReleaseSpinLock(&PiDependencyEdgeWriteLock, v7);
  PipNotifyDependenciesChanged(*((_QWORD *)P + 5), *((_QWORD *)P + 4));
  PipDereferenceDependencyNode(*((_QWORD *)P + 4));
  PipDereferenceDependencyNode(*((_QWORD *)P + 5));
  ExFreePoolWithTag(P, 0x53706E50u);
}
