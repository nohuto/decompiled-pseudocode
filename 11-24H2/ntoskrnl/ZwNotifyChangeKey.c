/*
 * XREFs of ZwNotifyChangeKey @ 0x1406A9810
 * Callers:
 *     CcRegistryChangeCallback @ 0x140578990 (CcRegistryChangeCallback.c)
 *     CcSetupWatchForRegistryChanges @ 0x140578B80 (CcSetupWatchForRegistryChanges.c)
 *     PspReadDfssConfigurationValues @ 0x1405E20E0 (PspReadDfssConfigurationValues.c)
 *     DifZwNotifyChangeKeyWrapper @ 0x14063F790 (DifZwNotifyChangeKeyWrapper.c)
 *     IopRegistryInitializeCallbacks @ 0x140717618 (IopRegistryInitializeCallbacks.c)
 *     PipUpdateAsyncOptionsCallback @ 0x140717E50 (PipUpdateAsyncOptionsCallback.c)
 *     PipUpdateSetupInProgressNotify @ 0x140718028 (PipUpdateSetupInProgressNotify.c)
 *     PfpParametersWatcher @ 0x140746790 (PfpParametersWatcher.c)
 *     PopUpdateUpgradeInProgress @ 0x140747D60 (PopUpdateUpgradeInProgress.c)
 *     PopPowerButtonBugcheckConfigure @ 0x14075BB4C (PopPowerButtonBugcheckConfigure.c)
 *     ExpReadLeapSecondData @ 0x1407B68FC (ExpReadLeapSecondData.c)
 *     IopRegistryCallback @ 0x140A78E70 (IopRegistryCallback.c)
 *     PfInitializeSuperfetch @ 0x140C2EA3C (PfInitializeSuperfetch.c)
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
  return KiServiceInternal(KeyHandle);
}
