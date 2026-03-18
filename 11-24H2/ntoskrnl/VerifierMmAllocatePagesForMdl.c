/*
 * XREFs of VerifierMmAllocatePagesForMdl @ 0x140BA0520
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ViTargetAddToCounter @ 0x140B8B8F0 (ViTargetAddToCounter.c)
 *     VfFaultsInjectResourceFailure @ 0x140B96568 (VfFaultsInjectResourceFailure.c)
 */

__int64 __fastcall VerifierMmAllocatePagesForMdl(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  if ( (VfRuleClasses & 4) != 0 && (unsigned int)VfFaultsInjectResourceFailure(0)
    || (VfRuleClasses & 0x40000) != 0
    && ViFnAutoFailInject
    && (unsigned __int8)guard_dispatch_icall_no_overrides("MmAllocatePagesForMdl", a2, a3, a4) )
  {
    return 0LL;
  }
  v9 = guard_dispatch_icall_no_overrides(a1, a2, a3, a4);
  v10 = v9;
  if ( v9 )
  {
    if ( (MmVerifierData & 0x1000) != 0 )
      ViTargetAddToCounter(retaddr, 232LL, 0xF0u, *(unsigned int *)(v9 + 40));
  }
  return v10;
}
