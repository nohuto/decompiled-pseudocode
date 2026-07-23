/*
 * XREFs of EmonReleaseProfileResources @ 0x14055B470
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     HalpMmAllocCtxFree @ 0x1402EA1C8 (HalpMmAllocCtxFree.c)
 *     HalpPmuGetNumberOfReservedCounters @ 0x140543700 (HalpPmuGetNumberOfReservedCounters.c)
 *     EmonReleaseProfileResourcesInternal @ 0x14055B504 (EmonReleaseProfileResourcesInternal.c)
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
