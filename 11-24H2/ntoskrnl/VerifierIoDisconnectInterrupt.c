/*
 * XREFs of VerifierIoDisconnectInterrupt @ 0x140BA1CC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall VerifierIoDisconnectInterrupt(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v4; // rbx

  v4 = 0LL;
  if ( (VfRuleClasses & 0x800) != 0 && ViCtxInitializedIsrStateBlocks )
    v4 = *(void **)(a1 + 48);
  guard_dispatch_icall_no_overrides(a1, a2, a3, a4);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
}
