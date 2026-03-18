/*
 * XREFs of PipCreateNewDependencyEdge @ 0x1405A0E4C
 * Callers:
 *     PipAddDependencyEdgeBetweenNodes @ 0x1405A0DB0 (PipAddDependencyEdgeBetweenNodes.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     PipNotifyDependenciesChanged @ 0x1406EE4E4 (PipNotifyDependenciesChanged.c)
 *     PipReferenceDependencyNode @ 0x1406F0334 (PipReferenceDependencyNode.c)
 *     PipAddRequestToEdge @ 0x140712318 (PipAddRequestToEdge.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall PipCreateNewDependencyEdge(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 Pool2; // rax
  _QWORD *v7; // rbx
  KIRQL v9; // r10
  _QWORD *v10; // r9
  _QWORD *v11; // rdx
  _QWORD *v12; // rax

  Pool2 = ExAllocatePool2(0x40uLL);
  v7 = (_QWORD *)Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 48) = 0;
    *(_QWORD *)(Pool2 + 40) = a1;
    *(_QWORD *)(Pool2 + 32) = a2;
    *(_QWORD *)(Pool2 + 64) = Pool2 + 56;
    *(_QWORD *)(Pool2 + 56) = Pool2 + 56;
    *(_BYTE *)(Pool2 + 72) = 0;
    if ( PipAddRequestToEdge(Pool2, a3) )
    {
      PipReferenceDependencyNode(a1);
      PipReferenceDependencyNode(a2);
      v9 = KeAcquireSpinLockRaiseToDpc(&PiDependencyEdgeWriteLock);
      v10 = *(_QWORD **)(a2 + 40);
      v11 = v7 + 2;
      if ( *v10 != a2 + 32
        || (*v11 = a2 + 32,
            v7[3] = v10,
            *v10 = v11,
            *(_QWORD *)(a2 + 40) = v11,
            v12 = *(_QWORD **)(a1 + 24),
            *v12 != a1 + 16) )
      {
        __fastfail(3u);
      }
      *v7 = a1 + 16;
      v7[1] = v12;
      *v12 = v7;
      *(_QWORD *)(a1 + 24) = v7;
      KeReleaseSpinLock(&PiDependencyEdgeWriteLock, v9);
      PipNotifyDependenciesChanged(a1, a2);
    }
    else
    {
      ExFreePoolWithTag(v7, 0x53706E50u);
      return 0LL;
    }
  }
  return v7;
}
