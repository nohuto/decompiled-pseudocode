/*
 * XREFs of VfDisableHalVerifier @ 0x14060F1D8
 * Callers:
 *     VfAllocateCrashDumpRegisters @ 0x140B87870 (VfAllocateCrashDumpRegisters.c)
 *     VfAllocateCrashDumpRegistersEx @ 0x140B87910 (VfAllocateCrashDumpRegistersEx.c)
 *     VfNotifyOfHibernate @ 0x140B89628 (VfNotifyOfHibernate.c)
 * Callees:
 *     <none>
 */

void VfDisableHalVerifier()
{
  ViVerifyDma = 0;
}
