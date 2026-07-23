/*
 * XREFs of VerifierPortIoAllocateMdl @ 0x140B8D1A0
 * Callers:
 *     <none>
 * Callees:
 *     IoAllocateMdl @ 0x14025F1D0 (IoAllocateMdl.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

PMDL __fastcall VerifierPortIoAllocateMdl(void *a1, __int64 a2, BOOLEAN a3, BOOLEAN a4, PIRP Irp)
{
  if ( (VfRuleClasses & 0x400000) == 0 || (MmVerifierData & 1) != 0 || (MmVerifierData & 8) != 0 )
    return (PMDL)guard_dispatch_icall_no_overrides(a1, a2);
  else
    return IoAllocateMdl(a1, a2, a3, a4, Irp);
}
