/*
 * XREFs of VerifierKeLowerIrql @ 0x140B97670
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     VfKeIrqlTransitionReserveLogEntry @ 0x140BAA0B8 (VfKeIrqlTransitionReserveLogEntry.c)
 *     VfKeIrqlLogLower @ 0x140BAB1FC (VfKeIrqlLogLower.c)
 */

__int64 __fastcall VerifierKeLowerIrql(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 result; // rax

  v4 = 0LL;
  LOBYTE(a2) = a1;
  if ( (MmVerifierData & 1) != 0 )
    v4 = VfKeIrqlTransitionReserveLogEntry(KeGetCurrentIrql(), a2, a3, a4);
  LOBYTE(a1) = a2;
  result = guard_dispatch_icall_no_overrides(a1, a2);
  if ( (MmVerifierData & 1) != 0 )
    return VfKeIrqlLogLower(v4);
  return result;
}
