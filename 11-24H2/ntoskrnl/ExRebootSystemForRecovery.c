/*
 * XREFs of ExRebootSystemForRecovery @ 0x14065396C
 * Callers:
 *     KiDeferredBugcheckRecoveryWorker @ 0x1405C6000 (KiDeferredBugcheckRecoveryWorker.c)
 *     NtShutdownSystem @ 0x140653BC0 (NtShutdownSystem.c)
 * Callees:
 *     ExNotifyWithProcessing @ 0x14044B6C4 (ExNotifyWithProcessing.c)
 *     KiSendThawExecution @ 0x1404D8230 (KiSendThawExecution.c)
 *     HalReturnToFirmware @ 0x140544920 (HalReturnToFirmware.c)
 *     VslNotifyShutdown @ 0x14058D944 (VslNotifyShutdown.c)
 *     KiBugcheckUnloadDebugSymbols @ 0x1405B3164 (KiBugcheckUnloadDebugSymbols.c)
 *     CmShutdownSystem @ 0x1407D5194 (CmShutdownSystem.c)
 *     MiDeleteAllHardwareEnclaves @ 0x140B634EC (MiDeleteAllHardwareEnclaves.c)
 */

void ExRebootSystemForRecovery()
{
  if ( PnpKsrCallbackObject )
  {
    CmShutdownSystem(0LL);
    CmShutdownSystem(1LL);
    ExNotifyWithProcessing((__int64)PnpKsrCallbackObject, (void *)0xA, 0LL, 0LL);
    ExNotifyWithProcessing((__int64)PnpKsrCallbackObject, (void *)0xF, 0LL, 0LL);
    ExNotifyWithProcessing((__int64)PnpKsrCallbackObject, (void *)0x14, 0LL, 0LL);
    ExNotifyWithProcessing((__int64)PnpKsrCallbackObject, (void *)0x16, 0LL, 0LL);
    ExNotifyWithProcessing((__int64)PnpKsrCallbackObject, (void *)0x19, 0LL, 0LL);
    MiDeleteAllHardwareEnclaves();
    VslNotifyShutdown(0);
    KiBugcheckUnloadDebugSymbols();
    KiResumeForReboot = 1;
    KiSendThawExecution(0);
    HalReturnToFirmware(3);
  }
}
