/*
 * XREFs of ArbStartArbiter @ 0x1406FA760
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     RtlFreeRangeList @ 0x140A4EBF0 (RtlFreeRangeList.c)
 */

__int64 __fastcall ArbStartArbiter(__int64 a1)
{
  RtlFreeRangeList(*(_QWORD *)(a1 + 40));
  return guard_dispatch_icall_no_overrides(a1);
}
