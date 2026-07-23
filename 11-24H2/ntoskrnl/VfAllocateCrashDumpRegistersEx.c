/*
 * XREFs of VfAllocateCrashDumpRegistersEx @ 0x140B87910
 * Callers:
 *     <none>
 * Callees:
 *     VfDisableHalVerifier @ 0x14060F1D8 (VfDisableHalVerifier.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall VfAllocateCrashDumpRegistersEx(__int64 a1, __int64 a2)
{
  if ( KeGetCurrentIrql() == 15 )
    VfDisableHalVerifier();
  return guard_dispatch_icall_no_overrides(a1, a2);
}
