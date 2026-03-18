/*
 * XREFs of VfDisableHalVerifier @ 0x140610C18
 * Callers:
 *     VfAllocateCrashDumpRegisters @ 0x140B85870 (VfAllocateCrashDumpRegisters.c)
 *     VfAllocateCrashDumpRegistersEx @ 0x140B85910 (VfAllocateCrashDumpRegistersEx.c)
 *     VfNotifyOfHibernate @ 0x140B87628 (VfNotifyOfHibernate.c)
 * Callees:
 *     <none>
 */

void VfDisableHalVerifier()
{
  ViVerifyDma = 0;
}
