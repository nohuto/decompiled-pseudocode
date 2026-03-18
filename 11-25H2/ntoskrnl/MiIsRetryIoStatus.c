/*
 * XREFs of MiIsRetryIoStatus @ 0x1403BF170
 * Callers:
 *     MiWaitForInPageComplete @ 0x1402090B8 (MiWaitForInPageComplete.c)
 *     MiStoreFaultComplete @ 0x140209ACC (MiStoreFaultComplete.c)
 *     MiFinishHardFault @ 0x14023BBC0 (MiFinishHardFault.c)
 *     MiFlushSection @ 0x14033E540 (MiFlushSection.c)
 *     MiZeroPageWrite @ 0x1403BEEAC (MiZeroPageWrite.c)
 *     MiWriteComplete @ 0x14040E620 (MiWriteComplete.c)
 *     MiReadPagefilePage @ 0x14065E95C (MiReadPagefilePage.c)
 *     MiReadImageHeaders @ 0x1409413C0 (MiReadImageHeaders.c)
 *     MiLogFailedDriverLoad @ 0x140A1375C (MiLogFailedDriverLoad.c)
 * Callees:
 *     FsRtlIsTotalDeviceFailure @ 0x1403BF240 (FsRtlIsTotalDeviceFailure.c)
 */

_BOOL8 __fastcall MiIsRetryIoStatus(NTSTATUS a1, unsigned __int64 a2)
{
  return a1 == -1073741670 || a1 == -1073741801 || a1 == -1073741663 || a2 > 0x1000 && !FsRtlIsTotalDeviceFailure(a1);
}
