/*
 * XREFs of ObpCallPostOperationCallbacks @ 0x14099BDC0
 * Callers:
 *     ObpCreateHandle @ 0x1408518D0 (ObpCreateHandle.c)
 *     ObCompleteObjectDuplication @ 0x1408AD954 (ObCompleteObjectDuplication.c)
 *     ObpCallPreOperationCallbacks @ 0x14099B9C0 (ObpCallPreOperationCallbacks.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleaseRundownProtection @ 0x1403242B0 (ExfReleaseRundownProtection.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ObpCallPostOperationCallbacks(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rsi
  _QWORD *v5; // rax
  struct _EX_RUNDOWN_REF *v6; // rdi
  unsigned __int64 v7; // rtt

  while ( (_QWORD *)*a2 != a2 )
  {
    v4 = (_QWORD *)a2[1];
    if ( (_QWORD *)*v4 != a2 || (v5 = (_QWORD *)v4[1], (_QWORD *)*v5 != v4) )
      __fastfail(3u);
    a2[1] = v5;
    *v5 = a2;
    v6 = (struct _EX_RUNDOWN_REF *)v4[2];
    *(_QWORD *)(a1 + 24) = v4[3];
    guard_dispatch_icall_no_overrides(*(_QWORD *)(v6[3].Count + 8));
    _m_prefetchw(&v6[7]);
    v7 = v6[7].Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v7 != _InterlockedCompareExchange64((volatile signed __int64 *)&v6[7], v7 - 2, v7) )
      ExfReleaseRundownProtection(v6 + 7);
    ExFreePoolWithTag(v4, 0);
  }
  ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 8), 0x6243624Fu);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return 0LL;
}
