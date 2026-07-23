/*
 * XREFs of VerifierMmAllocatePagesForMdlEx @ 0x140BA2600
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     ViTargetAddToCounter @ 0x140B8D8F0 (ViTargetAddToCounter.c)
 *     VfFaultsInjectResourceFailure @ 0x140B98568 (VfFaultsInjectResourceFailure.c)
 *     VfFillAllocatePagesForMdl @ 0x140BA3030 (VfFillAllocatePagesForMdl.c)
 */

struct _MDL *__fastcall VerifierMmAllocatePagesForMdlEx(__int64 a1, __int64 a2)
{
  struct _MDL *v5; // rax
  struct _MDL *v6; // rbx
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  if ( (VfRuleClasses & 4) != 0 && (unsigned int)VfFaultsInjectResourceFailure(0) )
    return 0LL;
  v5 = (struct _MDL *)guard_dispatch_icall_no_overrides(a1, a2);
  v6 = v5;
  if ( v5 )
  {
    VfFillAllocatePagesForMdl(v5);
    if ( (MmVerifierData & 0x1000) != 0 )
      ViTargetAddToCounter(retaddr, 232LL, 0xF0u, v6->ByteCount);
  }
  return v6;
}
