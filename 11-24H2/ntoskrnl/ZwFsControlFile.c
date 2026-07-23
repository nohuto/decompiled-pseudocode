/*
 * XREFs of ZwFsControlFile @ 0x1406A7AD0
 * Callers:
 *     MiTrimUnusedPageFileRegionsWorker @ 0x1403C5F70 (MiTrimUnusedPageFileRegionsWorker.c)
 *     DifZwFsControlFileWrapper @ 0x14063EC30 (DifZwFsControlFileWrapper.c)
 *     FsRtlpRegisterProviderWithMUP @ 0x140708894 (FsRtlpRegisterProviderWithMUP.c)
 *     PfpQueryFileExtentsRequest @ 0x140743F38 (PfpQueryFileExtentsRequest.c)
 *     PopClearHiberFileSignature @ 0x14074FF70 (PopClearHiberFileSignature.c)
 *     PopCreateHiberFile @ 0x140750050 (PopCreateHiberFile.c)
 *     SmKmStoreFileGetExtents @ 0x14079B060 (SmKmStoreFileGetExtents.c)
 *     CmpHiveCacheAcknowledgeOplockBreak @ 0x1407E57CC (CmpHiveCacheAcknowledgeOplockBreak.c)
 *     CmpRequestOplockOnHiveFile @ 0x1407E6358 (CmpRequestOplockOnHiveFile.c)
 *     CmpOpenHiveFile @ 0x140931FA4 (CmpOpenHiveFile.c)
 *     RtlUnlockBootStatusData @ 0x140A35050 (RtlUnlockBootStatusData.c)
 *     PopSanityCheckHiberFile @ 0x140A72784 (PopSanityCheckHiberFile.c)
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
  return KiServiceInternal(FileHandle);
}
