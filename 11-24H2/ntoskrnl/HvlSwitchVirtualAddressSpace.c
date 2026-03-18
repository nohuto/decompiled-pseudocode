/*
 * XREFs of HvlSwitchVirtualAddressSpace @ 0x1404D48A0
 * Callers:
 *     MiUnlockStealVm @ 0x1402E1FC0 (MiUnlockStealVm.c)
 *     KeForceDetachProcess @ 0x1402F9B70 (KeForceDetachProcess.c)
 *     KiStackAttachProcess @ 0x1403209E0 (KiStackAttachProcess.c)
 *     KiDetachProcess @ 0x140321440 (KiDetachProcess.c)
 *     KiLoadDirectoryTableBase @ 0x140321990 (KiLoadDirectoryTableBase.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     KiAttachProcess @ 0x140322460 (KiAttachProcess.c)
 *     KeUnstackDetachProcess @ 0x140322730 (KeUnstackDetachProcess.c)
 *     MiDetachFromWorkingSet @ 0x140379390 (MiDetachFromWorkingSet.c)
 *     SwapContext @ 0x1406B2B40 (SwapContext.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x1403AF710 (HvcallInitiateHypercall.c)
 */

__int64 HvlSwitchVirtualAddressSpace()
{
  return HvcallInitiateHypercall(65537);
}
