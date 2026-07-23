/*
 * XREFs of FsRtlIsTotalDeviceFailure @ 0x140260640
 * Callers:
 *     MiIsRetryIoStatus @ 0x140260570 (MiIsRetryIoStatus.c)
 *     MmIsWriteErrorFatal @ 0x1402605B8 (MmIsWriteErrorFatal.c)
 *     CcIsFatalWriteError @ 0x140260830 (CcIsFatalWriteError.c)
 *     MiConvertFaultStatus @ 0x140260910 (MiConvertFaultStatus.c)
 *     IopMountVolume @ 0x140A1DB24 (IopMountVolume.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall FsRtlIsTotalDeviceFailure(NTSTATUS Status)
{
  return Status < 0 && Status != -1073741761 && Status != -1073741668 && Status != -1073740688;
}
