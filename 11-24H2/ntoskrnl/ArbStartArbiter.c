/*
 * XREFs of ArbStartArbiter @ 0x140704200
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     RtlFreeRangeList @ 0x140A4A270 (RtlFreeRangeList.c)
 */

__int64 __fastcall ArbStartArbiter(__int64 a1, __int64 a2)
{
  RtlFreeRangeList(*(_QWORD *)(a1 + 40));
  return guard_dispatch_icall_no_overrides(a1, *(unsigned int *)(a2 + 16));
}
