/*
 * XREFs of ZwCreateFile @ 0x1406A7E50
 * Callers:
 *     RtlFileMapInitializeByNtPath @ 0x1404C31AC (RtlFileMapInitializeByNtPath.c)
 *     LdrpMapResourceFile @ 0x1405E509C (LdrpMapResourceFile.c)
 *     DifZwCreateFileWrapper @ 0x14063BEF0 (DifZwCreateFileWrapper.c)
 *     CmpDeleteCorruptedFile @ 0x140669E80 (CmpDeleteCorruptedFile.c)
 *     FsRtlpOpenDev @ 0x1407087CC (FsRtlpOpenDev.c)
 *     IopBootLogToFile @ 0x14070F5C4 (IopBootLogToFile.c)
 *     PiCreateDirectoryPath @ 0x14071CF6C (PiCreateDirectoryPath.c)
 *     PopGetPolicyDeviceObject @ 0x140758C74 (PopGetPolicyDeviceObject.c)
 *     SmKmStoreFileOpenVolume @ 0x14079B558 (SmKmStoreFileOpenVolume.c)
 *     SmpUtilsGetControlDevice @ 0x14079E520 (SmpUtilsGetControlDevice.c)
 *     ExpGetSystemWriteConstraintInformation @ 0x1407B4BF8 (ExpGetSystemWriteConstraintInformation.c)
 *     CmpVolumeContextStart @ 0x1407D8F10 (CmpVolumeContextStart.c)
 *     CmpVolumeManagerGetContextForFilePath @ 0x1407D90D8 (CmpVolumeManagerGetContextForFilePath.c)
 *     CmpInitBackupHive @ 0x1407DCBF4 (CmpInitBackupHive.c)
 *     CmpIsFileInSystemConfig @ 0x1407E2160 (CmpIsFileInSystemConfig.c)
 *     SdbpGetFileTimestamp @ 0x14080199C (SdbpGetFileTimestamp.c)
 *     VhdiMountVhdFile @ 0x14082A898 (VhdiMountVhdFile.c)
 *     CmpOpenHiveFile @ 0x140931FA4 (CmpOpenHiveFile.c)
 *     EtwpDelayCreate @ 0x1409D61B0 (EtwpDelayCreate.c)
 *     EtwpCreateDirectoryFile @ 0x140A50CA0 (EtwpCreateDirectoryFile.c)
 *     PspIoRateEntryActivate @ 0x140A6D2B4 (PspIoRateEntryActivate.c)
 *     PopFlushVolumeWorker @ 0x140B6D040 (PopFlushVolumeWorker.c)
 *     KdpCreateFileCallback @ 0x140B78830 (KdpCreateFileCallback.c)
 *     PiCreateDriverDataDirectoryRoot @ 0x140C247C8 (PiCreateDriverDataDirectoryRoot.c)
 *     BapdpProcessVsmKeyBlobs @ 0x140C413AC (BapdpProcessVsmKeyBlobs.c)
 *     EmInitSystem @ 0x140C62920 (EmInitSystem.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCreateFile(
        PHANDLE FileHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PIO_STATUS_BLOCK IoStatusBlock,
        PLARGE_INTEGER AllocationSize,
        ULONG FileAttributes,
        ULONG ShareAccess,
        ULONG CreateDisposition,
        ULONG CreateOptions,
        PVOID EaBuffer,
        ULONG EaLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle);
}
