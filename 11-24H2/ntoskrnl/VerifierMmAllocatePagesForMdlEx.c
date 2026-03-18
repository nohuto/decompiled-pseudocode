/*
 * XREFs of VerifierMmAllocatePagesForMdlEx @ 0x140BA0600
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ViTargetAddToCounter @ 0x140B8B8F0 (ViTargetAddToCounter.c)
 *     VfFaultsInjectResourceFailure @ 0x140B96568 (VfFaultsInjectResourceFailure.c)
 *     VfFillAllocatePagesForMdl @ 0x140BA1030 (VfFillAllocatePagesForMdl.c)
 */

struct _MDL *__fastcall VerifierMmAllocatePagesForMdlEx(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _MDL *v9; // rax
  struct _MDL *v10; // rbx
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  if ( (VfRuleClasses & 4) != 0 && (unsigned int)VfFaultsInjectResourceFailure(0) )
    return 0LL;
  v9 = (struct _MDL *)guard_dispatch_icall_no_overrides(a1, a2, a3, a4);
  v10 = v9;
  if ( v9 )
  {
    VfFillAllocatePagesForMdl(v9);
    if ( (MmVerifierData & 0x1000) != 0 )
      ViTargetAddToCounter(retaddr, 232LL, 0xF0u, v10->ByteCount);
  }
  return v10;
}
