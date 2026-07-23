/*
 * XREFs of ExRebootSystemForRecovery @ 0x1406520CC
 * Callers:
 *     KiDeferredBugcheckRecoveryWorker @ 0x1405C3730 (KiDeferredBugcheckRecoveryWorker.c)
 *     NtShutdownSystem @ 0x140652320 (NtShutdownSystem.c)
 * Callees:
 *     ExNotifyWithProcessing @ 0x140442804 (ExNotifyWithProcessing.c)
 *     KiSendThawExecution @ 0x1404D1680 (KiSendThawExecution.c)
 *     HalReturnToFirmware @ 0x1405421E0 (HalReturnToFirmware.c)
 *     VslNotifyShutdown @ 0x14058AC34 (VslNotifyShutdown.c)
 *     KiBugcheckUnloadDebugSymbols @ 0x1405B00D4 (KiBugcheckUnloadDebugSymbols.c)
 *     CmShutdownSystem @ 0x1407D5684 (CmShutdownSystem.c)
 *     MiDeleteAllHardwareEnclaves @ 0x140B655BC (MiDeleteAllHardwareEnclaves.c)
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
