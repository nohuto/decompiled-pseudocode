/*
 * XREFs of RtlpInternHashBucketsAllocate @ 0x140787704
 * Callers:
 *     RtlInternTableIntern @ 0x1408DEF40 (RtlInternTableIntern.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall RtlpInternHashBucketsAllocate(__int64 a1, __int64 a2)
{
  return guard_dispatch_icall_no_overrides(a2, a1);
}
