/*
 * XREFs of FsRtlIsTotalDeviceFailure @ 0x1402CC0B0
 * Callers:
 *     MiConvertFaultStatus @ 0x1402163C0 (MiConvertFaultStatus.c)
 *     CcIsFatalWriteError @ 0x1402CBF04 (CcIsFatalWriteError.c)
 *     MiIsRetryIoStatus @ 0x1402CBFE0 (MiIsRetryIoStatus.c)
 *     MmIsWriteErrorFatal @ 0x1402CC028 (MmIsWriteErrorFatal.c)
 *     IopMountVolume @ 0x140A29164 (IopMountVolume.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall FsRtlIsTotalDeviceFailure(NTSTATUS Status)
{
  return Status < 0 && Status != -1073741761 && Status != -1073741668 && Status != -1073740688;
}
