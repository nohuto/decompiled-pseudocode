/*
 * XREFs of FsRtlIsTotalDeviceFailure @ 0x1403BF240
 * Callers:
 *     CcIsFatalWriteError @ 0x1403BEC88 (CcIsFatalWriteError.c)
 *     MiIsRetryIoStatus @ 0x1403BF170 (MiIsRetryIoStatus.c)
 *     MmIsWriteErrorFatal @ 0x1403BF1B8 (MmIsWriteErrorFatal.c)
 *     MiConvertFaultStatus @ 0x1403BF610 (MiConvertFaultStatus.c)
 *     IopMountVolume @ 0x140A1F624 (IopMountVolume.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall FsRtlIsTotalDeviceFailure(NTSTATUS Status)
{
  return Status < 0 && Status != -1073741761 && Status != -1073741668 && Status != -1073740688;
}
