/*
 * XREFs of ExRebootSystemForRecovery @ 0x140647A6C
 * Callers:
 *     KiDeferredBugcheckRecoveryWorker @ 0x1405C1C60 (KiDeferredBugcheckRecoveryWorker.c)
 *     NtShutdownSystem @ 0x140647CC0 (NtShutdownSystem.c)
 * Callees:
 *     ExNotifyWithProcessing @ 0x14044C104 (ExNotifyWithProcessing.c)
 *     KiSendThawExecution @ 0x1404D91B0 (KiSendThawExecution.c)
 *     HalReturnToFirmware @ 0x140542060 (HalReturnToFirmware.c)
 *     VslNotifyShutdown @ 0x14058A224 (VslNotifyShutdown.c)
 *     KiBugcheckUnloadDebugSymbols @ 0x1405AF7D4 (KiBugcheckUnloadDebugSymbols.c)
 *     CmShutdownSystem @ 0x1407C5A50 (CmShutdownSystem.c)
 *     MiDeleteAllHardwareEnclaves @ 0x140B5339C (MiDeleteAllHardwareEnclaves.c)
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
