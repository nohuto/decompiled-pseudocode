/*
 * XREFs of VerifierPortExAllocatePoolWithTagPriority @ 0x140B9DFB0
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x14042A3E0 (ExAllocatePoolWithTagPriority.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

PVOID __fastcall VerifierPortExAllocatePoolWithTagPriority(POOL_TYPE a1, SIZE_T a2, ULONG a3, EX_POOL_PRIORITY a4)
{
  if ( (VfRuleClasses & 0x400000) == 0 || (MmVerifierData & 1) != 0 )
    return (PVOID)guard_dispatch_icall_no_overrides(a1 | 0x80u, 0LL);
  else
    return ExAllocatePoolWithTagPriority(a1, a2, a3, a4);
}
