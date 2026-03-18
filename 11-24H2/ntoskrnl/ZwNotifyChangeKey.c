/*
 * XREFs of ZwNotifyChangeKey @ 0x1406A8870
 * Callers:
 *     CcRegistryChangeCallback @ 0x14057B500 (CcRegistryChangeCallback.c)
 *     CcSetupWatchForRegistryChanges @ 0x14057B6F0 (CcSetupWatchForRegistryChanges.c)
 *     PspReadDfssConfigurationValues @ 0x1405E4BB8 (PspReadDfssConfigurationValues.c)
 *     DifZwNotifyChangeKeyWrapper @ 0x1406411D0 (DifZwNotifyChangeKeyWrapper.c)
 *     IopRegistryInitializeCallbacks @ 0x140719A88 (IopRegistryInitializeCallbacks.c)
 *     PipUpdateAsyncOptionsCallback @ 0x14071A2C0 (PipUpdateAsyncOptionsCallback.c)
 *     PipUpdateSetupInProgressNotify @ 0x14071A498 (PipUpdateSetupInProgressNotify.c)
 *     PfpParametersWatcher @ 0x1407484A0 (PfpParametersWatcher.c)
 *     PopUpdateUpgradeInProgress @ 0x140749A30 (PopUpdateUpgradeInProgress.c)
 *     PopPowerButtonBugcheckConfigure @ 0x14075CBAC (PopPowerButtonBugcheckConfigure.c)
 *     ExpReadLeapSecondData @ 0x1407B64AC (ExpReadLeapSecondData.c)
 *     IopRegistryCallback @ 0x140A7F6C0 (IopRegistryCallback.c)
 *     PfInitializeSuperfetch @ 0x140C2C91C (PfInitializeSuperfetch.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwNotifyChangeKey(
        HANDLE KeyHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG CompletionFilter,
        BOOLEAN WatchTree,
        PVOID Buffer,
        ULONG BufferSize,
        BOOLEAN Asynchronous)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle, Event);
}
