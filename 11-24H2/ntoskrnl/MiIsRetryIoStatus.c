/*
 * XREFs of MiIsRetryIoStatus @ 0x1402CBFE0
 * Callers:
 *     MiFlushSection @ 0x14023A550 (MiFlushSection.c)
 *     MiZeroPageWrite @ 0x140268964 (MiZeroPageWrite.c)
 *     MiFinishHardFault @ 0x1402F0070 (MiFinishHardFault.c)
 *     MiWriteComplete @ 0x14036B660 (MiWriteComplete.c)
 *     MiWaitForInPageComplete @ 0x140398598 (MiWaitForInPageComplete.c)
 *     MiStoreFaultComplete @ 0x140398D18 (MiStoreFaultComplete.c)
 *     MiReadPagefilePage @ 0x14066A47C (MiReadPagefilePage.c)
 *     MiReadImageHeaders @ 0x1409456C8 (MiReadImageHeaders.c)
 *     MiLogFailedDriverLoad @ 0x140A18B7C (MiLogFailedDriverLoad.c)
 * Callees:
 *     FsRtlIsTotalDeviceFailure @ 0x1402CC0B0 (FsRtlIsTotalDeviceFailure.c)
 */

_BOOL8 __fastcall MiIsRetryIoStatus(NTSTATUS a1, unsigned __int64 a2)
{
  return a1 == -1073741670 || a1 == -1073741801 || a1 == -1073741663 || a2 > 0x1000 && !FsRtlIsTotalDeviceFailure(a1);
}
