/*
 * XREFs of RtlpInternHashBucketsAllocate @ 0x1407877D4
 * Callers:
 *     RtlInternTableIntern @ 0x140907824 (RtlInternTableIntern.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall RtlpInternHashBucketsAllocate(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return guard_dispatch_icall_no_overrides(a2, a1, a2, a4);
}
