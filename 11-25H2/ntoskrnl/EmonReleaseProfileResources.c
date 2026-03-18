/*
 * XREFs of EmonReleaseProfileResources @ 0x14055AF40
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     HalpMmAllocCtxFree @ 0x140337DCC (HalpMmAllocCtxFree.c)
 *     HalpPmuGetNumberOfReservedCounters @ 0x140543550 (HalpPmuGetNumberOfReservedCounters.c)
 *     EmonReleaseProfileResourcesInternal @ 0x14055AFD4 (EmonReleaseProfileResourcesInternal.c)
 */

__int64 __fastcall EmonReleaseProfileResources(_QWORD *a1, _DWORD *a2)
{
  int NumberOfReservedCounters; // ebp
  int v5; // edi
  KIRQL v6; // al
  __int64 v7; // r8
  _QWORD *v8; // rdx
  __int64 v9; // rcx

  NumberOfReservedCounters = HalpPmuGetNumberOfReservedCounters((__int64)a1);
  v5 = EmonReleaseProfileResourcesInternal(a1);
  if ( v5 >= 0 )
  {
    *a2 = NumberOfReservedCounters;
    v6 = KeAcquireSpinLockRaiseToDpc(&EmonReservedResourcesLock);
    v7 = *a1;
    if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v8 = (_QWORD *)a1[1], (_QWORD *)*v8 != a1) )
      __fastfail(3u);
    *v8 = v7;
    *(_QWORD *)(v7 + 8) = v8;
    KeReleaseSpinLock(&EmonReservedResourcesLock, v6);
    HalpMmAllocCtxFree(v9, (__int64)a1);
  }
  return (unsigned int)v5;
}
