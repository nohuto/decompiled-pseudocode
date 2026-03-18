/*
 * XREFs of ZwFsControlFile @ 0x1406A6B30
 * Callers:
 *     MiTrimUnusedPageFileRegionsWorker @ 0x140403D20 (MiTrimUnusedPageFileRegionsWorker.c)
 *     DifZwFsControlFileWrapper @ 0x140640670 (DifZwFsControlFileWrapper.c)
 *     FsRtlpRegisterProviderWithMUP @ 0x14070ACD4 (FsRtlpRegisterProviderWithMUP.c)
 *     PfpQueryFileExtentsRequest @ 0x140745C48 (PfpQueryFileExtentsRequest.c)
 *     PopClearHiberFileSignature @ 0x140751C50 (PopClearHiberFileSignature.c)
 *     PopCreateHiberFile @ 0x140751D30 (PopCreateHiberFile.c)
 *     SmKmStoreFileGetExtents @ 0x14079AF50 (SmKmStoreFileGetExtents.c)
 *     CmpHiveCacheAcknowledgeOplockBreak @ 0x1407E51FC (CmpHiveCacheAcknowledgeOplockBreak.c)
 *     CmpRequestOplockOnHiveFile @ 0x1407E5D88 (CmpRequestOplockOnHiveFile.c)
 *     CmpOpenHiveFile @ 0x14092FE64 (CmpOpenHiveFile.c)
 *     RtlUnlockBootStatusData @ 0x140A3F7A0 (RtlUnlockBootStatusData.c)
 *     PopSanityCheckHiberFile @ 0x140A78484 (PopSanityCheckHiberFile.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwFsControlFile(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG FsControlCode,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle, Event);
}
