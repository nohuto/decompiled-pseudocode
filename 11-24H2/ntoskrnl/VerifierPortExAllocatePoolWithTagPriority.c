/*
 * XREFs of VerifierPortExAllocatePoolWithTagPriority @ 0x140B9BFB0
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x140437960 (ExAllocatePoolWithTagPriority.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

PVOID __fastcall VerifierPortExAllocatePoolWithTagPriority(POOL_TYPE a1, SIZE_T a2, ULONG a3, EX_POOL_PRIORITY a4)
{
  if ( (VfRuleClasses & 0x400000) == 0 || (MmVerifierData & 1) != 0 )
    return (PVOID)guard_dispatch_icall_no_overrides(a1 | 0x80u, 0LL, a2, a3);
  else
    return ExAllocatePoolWithTagPriority(a1, a2, a3, a4);
}
