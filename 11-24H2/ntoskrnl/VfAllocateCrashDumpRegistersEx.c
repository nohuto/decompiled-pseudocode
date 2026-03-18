/*
 * XREFs of VfAllocateCrashDumpRegistersEx @ 0x140B85910
 * Callers:
 *     <none>
 * Callees:
 *     VfDisableHalVerifier @ 0x140610C18 (VfDisableHalVerifier.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall VfAllocateCrashDumpRegistersEx(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( KeGetCurrentIrql() == 15 )
    VfDisableHalVerifier();
  return guard_dispatch_icall_no_overrides(a1, a2, a3, a4);
}
