/*
 * XREFs of VerifierPortIoAllocateWorkItem @ 0x140B8B210
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall VerifierPortIoAllocateWorkItem(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return guard_dispatch_icall_no_overrides(a1, a2, IovAllocateWorkItem, a4);
}
