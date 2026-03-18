/*
 * XREFs of VerifierKeAcquireSpinLockRaiseToDpc @ 0x140BA8320
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ViKeIrqlLogAndTrimMemory @ 0x140BA7F68 (ViKeIrqlLogAndTrimMemory.c)
 */

__int64 __fastcall VerifierKeAcquireSpinLockRaiseToDpc(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 result; // rax

  v4 = 0LL;
  v5 = a1;
  if ( (VfRuleClasses & 2) != 0 )
  {
    LOBYTE(a1) = 2;
    v4 = ViKeIrqlLogAndTrimMemory(a1, a2);
  }
  result = guard_dispatch_icall_no_overrides(v5, a2, a3, a4);
  if ( (VfRuleClasses & 2) != 0 )
  {
    if ( v4 )
      *(_WORD *)(v4 + 10) = KeGetPcr()->Prcb.Number;
  }
  return result;
}
