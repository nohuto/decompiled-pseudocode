/*
 * XREFs of VerifierExReleaseFastMutex @ 0x140B9DD30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     VfKeIrqlTransitionReserveLogEntry @ 0x140BAA0B8 (VfKeIrqlTransitionReserveLogEntry.c)
 *     VfKeIrqlLogLower @ 0x140BAB1FC (VfKeIrqlLogLower.c)
 */

__int64 __fastcall VerifierExReleaseFastMutex(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // r9
  __int64 result; // rax

  v3 = 0LL;
  LOBYTE(a2) = *(_BYTE *)(a1 + 48);
  v4 = a1;
  if ( (VfRuleClasses & 2) != 0 )
    v3 = VfKeIrqlTransitionReserveLogEntry(KeGetCurrentIrql(), a2, a3, a1);
  result = guard_dispatch_icall_no_overrides(v4, a2);
  if ( (VfRuleClasses & 2) != 0 )
    return VfKeIrqlLogLower(v3);
  return result;
}
