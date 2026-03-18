/*
 * XREFs of HvlSwitchVirtualAddressSpace @ 0x1403C4700
 * Callers:
 *     KeForceDetachProcess @ 0x14023A720 (KeForceDetachProcess.c)
 *     KiAttachProcess @ 0x1402891A0 (KiAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140289A10 (KiStackAttachProcess.c)
 *     KiDetachProcess @ 0x14028A0A0 (KiDetachProcess.c)
 *     KiLoadDirectoryTableBase @ 0x14028A5F0 (KiLoadDirectoryTableBase.c)
 *     MiUnlockStealVm @ 0x1402BB590 (MiUnlockStealVm.c)
 *     MiDetachFromWorkingSet @ 0x1403C31E0 (MiDetachFromWorkingSet.c)
 *     KeUnstackDetachProcess @ 0x1403C41A0 (KeUnstackDetachProcess.c)
 *     SwapContext @ 0x1406A7870 (SwapContext.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x14026D230 (HvcallInitiateHypercall.c)
 */

__int64 HvlSwitchVirtualAddressSpace()
{
  return HvcallInitiateHypercall(65537);
}
