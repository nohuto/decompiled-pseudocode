/*
 * XREFs of VerifierPortIoAllocateMdl @ 0x140B8B1A0
 * Callers:
 *     <none>
 * Callees:
 *     IoAllocateMdl @ 0x140267BF0 (IoAllocateMdl.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

PMDL __fastcall VerifierPortIoAllocateMdl(void *a1, __int64 a2, __int64 a3, __int64 a4, PIRP Irp)
{
  if ( (VfRuleClasses & 0x400000) == 0 || (MmVerifierData & 1) != 0 || (MmVerifierData & 8) != 0 )
    return (PMDL)guard_dispatch_icall_no_overrides(a1, a2, a3, a4);
  else
    return IoAllocateMdl(a1, a2, a3, a4, Irp);
}
