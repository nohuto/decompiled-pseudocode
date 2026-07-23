/*
 * XREFs of ZwWaitForSingleObject @ 0x1406A7430
 * Callers:
 *     CcDeletePrivateVolumeCacheMap @ 0x1404309A4 (CcDeletePrivateVolumeCacheMap.c)
 *     CcDeletePartition @ 0x140579B7C (CcDeletePartition.c)
 *     PiDrvDbUnloadNodeWaitWorkerCallback @ 0x1405A6880 (PiDrvDbUnloadNodeWaitWorkerCallback.c)
 *     DifZwWaitForSingleObjectWrapper @ 0x140648330 (DifZwWaitForSingleObjectWrapper.c)
 *     MiZeroPageThread @ 0x140691640 (MiZeroPageThread.c)
 *     FsRtlpRegisterProviderWithMUP @ 0x140708894 (FsRtlpRegisterProviderWithMUP.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x140718298 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x140733A20 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     PspShutdownCsrProcess @ 0x1407731D4 (PspShutdownCsrProcess.c)
 *     ExpPartitionDestroy @ 0x1407C00FC (ExpPartitionDestroy.c)
 *     CMFFlushHitsFile @ 0x1407C30E0 (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x1407C3A10 (CMFSystemThreadRoutine.c)
 *     MiDeletePartitionResources @ 0x1407FC4B4 (MiDeletePartitionResources.c)
 *     PiDrvDbLoadNode @ 0x140928080 (PiDrvDbLoadNode.c)
 *     BiAcquireBcdSyncMutant @ 0x1409A48B8 (BiAcquireBcdSyncMutant.c)
 *     PfSnVolumeCheckIsSdBus @ 0x140A4AED8 (PfSnVolumeCheckIsSdBus.c)
 *     PfSnVolumeCheckSeekPenalty @ 0x140A4F244 (PfSnVolumeCheckSeekPenalty.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwWaitForSingleObject(HANDLE Handle, BOOLEAN Alertable, PLARGE_INTEGER Timeout)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Handle);
}
