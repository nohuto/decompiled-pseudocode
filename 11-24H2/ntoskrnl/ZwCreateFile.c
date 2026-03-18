/*
 * XREFs of ZwCreateFile @ 0x1406A6EB0
 * Callers:
 *     RtlFileMapInitializeByNtPath @ 0x1404C9E5C (RtlFileMapInitializeByNtPath.c)
 *     LdrpMapResourceFile @ 0x1405E7AAC (LdrpMapResourceFile.c)
 *     DifZwCreateFileWrapper @ 0x14063D930 (DifZwCreateFileWrapper.c)
 *     CmpDeleteCorruptedFile @ 0x140668CA8 (CmpDeleteCorruptedFile.c)
 *     FsRtlpOpenDev @ 0x14070AC0C (FsRtlpOpenDev.c)
 *     IopBootLogToFile @ 0x140711A34 (IopBootLogToFile.c)
 *     PiCreateDirectoryPath @ 0x14071F3DC (PiCreateDirectoryPath.c)
 *     PopGetPolicyDeviceObject @ 0x14075A584 (PopGetPolicyDeviceObject.c)
 *     SmKmStoreFileOpenVolume @ 0x14079B448 (SmKmStoreFileOpenVolume.c)
 *     SmpUtilsGetControlDevice @ 0x14079E410 (SmpUtilsGetControlDevice.c)
 *     ExpGetSystemWriteConstraintInformation @ 0x1407B47A8 (ExpGetSystemWriteConstraintInformation.c)
 *     CmpVolumeContextStart @ 0x1407D89C0 (CmpVolumeContextStart.c)
 *     CmpVolumeManagerGetContextForFilePath @ 0x1407D8B88 (CmpVolumeManagerGetContextForFilePath.c)
 *     CmpInitBackupHive @ 0x1407DC6A4 (CmpInitBackupHive.c)
 *     CmpIsFileInSystemConfig @ 0x1407E1C10 (CmpIsFileInSystemConfig.c)
 *     SdbpGetFileTimestamp @ 0x14080125C (SdbpGetFileTimestamp.c)
 *     VhdiMountVhdFile @ 0x14082A068 (VhdiMountVhdFile.c)
 *     PspIoRateEntryActivate @ 0x14085F29C (PspIoRateEntryActivate.c)
 *     CmpOpenHiveFile @ 0x14092FE64 (CmpOpenHiveFile.c)
 *     EtwpDelayCreate @ 0x1409DB6A0 (EtwpDelayCreate.c)
 *     EtwpCreateDirectoryFile @ 0x140A59508 (EtwpCreateDirectoryFile.c)
 *     PopFlushVolumeWorker @ 0x140B6BC10 (PopFlushVolumeWorker.c)
 *     KdpCreateFileCallback @ 0x140B76830 (KdpCreateFileCallback.c)
 *     PiCreateDriverDataDirectoryRoot @ 0x140C22798 (PiCreateDriverDataDirectoryRoot.c)
 *     BapdpProcessVsmKeyBlobs @ 0x140C3F25C (BapdpProcessVsmKeyBlobs.c)
 *     EmInitSystem @ 0x140C607D0 (EmInitSystem.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
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
  return KiServiceInternal(FileHandle, *(_QWORD *)&DesiredAccess);
}
