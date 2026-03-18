/*
 * XREFs of ObpCallPostOperationCallbacks @ 0x140940A78
 * Callers:
 *     ObpCreateHandle @ 0x14084DAA0 (ObpCreateHandle.c)
 *     ObCompleteObjectDuplication @ 0x140940288 (ObCompleteObjectDuplication.c)
 *     ObpCallPreOperationCallbacks @ 0x1409A65F0 (ObpCallPreOperationCallbacks.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x1402456A0 (ExfReleaseRundownProtection.c)
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ObpCallPostOperationCallbacks(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  _QWORD *v6; // rsi
  _QWORD *v7; // rax
  struct _EX_RUNDOWN_REF *v8; // rbx
  unsigned __int64 v9; // rtt

  while ( (_QWORD *)*a2 != a2 )
  {
    v6 = (_QWORD *)a2[1];
    if ( (_QWORD *)*v6 != a2 || (v7 = (_QWORD *)v6[1], (_QWORD *)*v7 != v6) )
      __fastfail(3u);
    a2[1] = v7;
    *v7 = a2;
    v8 = (struct _EX_RUNDOWN_REF *)v6[2];
    *(_QWORD *)(a1 + 24) = v6[3];
    guard_dispatch_icall_no_overrides(*(_QWORD *)(v8[3].Count + 8), a1, a3, a4);
    _m_prefetchw(&v8[7]);
    v9 = v8[7].Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v9 != _InterlockedCompareExchange64((volatile signed __int64 *)&v8[7], v9 - 2, v9) )
      ExfReleaseRundownProtection(v8 + 7);
    ExFreePoolWithTag(v6, 0);
  }
  ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 8), 0x6243624Fu);
  KeLeaveCriticalRegionThread();
  return 0LL;
}
