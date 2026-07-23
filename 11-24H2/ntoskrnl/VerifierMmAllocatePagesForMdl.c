/*
 * XREFs of VerifierMmAllocatePagesForMdl @ 0x140BA2520
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     ViTargetAddToCounter @ 0x140B8D8F0 (ViTargetAddToCounter.c)
 *     VfFaultsInjectResourceFailure @ 0x140B98568 (VfFaultsInjectResourceFailure.c)
 */

__int64 __fastcall VerifierMmAllocatePagesForMdl(__int64 a1, __int64 a2)
{
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  if ( (VfRuleClasses & 4) != 0 && (unsigned int)VfFaultsInjectResourceFailure(0)
    || (VfRuleClasses & 0x40000) != 0
    && ViFnAutoFailInject
    && (unsigned __int8)guard_dispatch_icall_no_overrides("MmAllocatePagesForMdl", a2) )
  {
    return 0LL;
  }
  v5 = guard_dispatch_icall_no_overrides(a1, a2);
  v6 = v5;
  if ( v5 )
  {
    if ( (MmVerifierData & 0x1000) != 0 )
      ViTargetAddToCounter(retaddr, 232LL, 0xF0u, *(unsigned int *)(v5 + 40));
  }
  return v6;
}
