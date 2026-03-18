/*
 * XREFs of ZwWaitForSingleObject @ 0x1406A6490
 * Callers:
 *     CcDeletePrivateVolumeCacheMap @ 0x1402CB768 (CcDeletePrivateVolumeCacheMap.c)
 *     CcDeletePartition @ 0x14057C6EC (CcDeletePartition.c)
 *     PiDrvDbUnloadNodeWaitWorkerCallback @ 0x1405A9910 (PiDrvDbUnloadNodeWaitWorkerCallback.c)
 *     DifZwWaitForSingleObjectWrapper @ 0x140649D70 (DifZwWaitForSingleObjectWrapper.c)
 *     MiZeroPageThread @ 0x140690570 (MiZeroPageThread.c)
 *     FsRtlpRegisterProviderWithMUP @ 0x14070ACD4 (FsRtlpRegisterProviderWithMUP.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x14071A708 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x140735AF0 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     PspShutdownCsrProcess @ 0x140772FB4 (PspShutdownCsrProcess.c)
 *     ExpPartitionDestroy @ 0x1407BFCAC (ExpPartitionDestroy.c)
 *     CMFFlushHitsFile @ 0x1407C1EAC (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x1407C27E0 (CMFSystemThreadRoutine.c)
 *     MiDeletePartitionResources @ 0x1407FBD44 (MiDeletePartitionResources.c)
 *     PiDrvDbLoadNode @ 0x140925F40 (PiDrvDbLoadNode.c)
 *     BiAcquireBcdSyncMutant @ 0x1409BE268 (BiAcquireBcdSyncMutant.c)
 *     PfSnVolumeCheckIsSdBus @ 0x140A52EE4 (PfSnVolumeCheckIsSdBus.c)
 *     PfSnVolumeCheckSeekPenalty @ 0x140A57A9C (PfSnVolumeCheckSeekPenalty.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwWaitForSingleObject(HANDLE Handle, BOOLEAN Alertable, PLARGE_INTEGER Timeout)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Handle, Alertable, Timeout);
}
