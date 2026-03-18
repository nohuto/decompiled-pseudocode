/*
 * XREFs of ZwQueryObject @ 0x1406A6610
 * Callers:
 *     DifZwQueryObjectWrapper @ 0x140646220 (DifZwQueryObjectWrapper.c)
 *     EtwpObjectTypeRundown @ 0x1407B0FE4 (EtwpObjectTypeRundown.c)
 *     CmpCmdRenameHive @ 0x1407D5930 (CmpCmdRenameHive.c)
 *     _RegRtlQueryKeyPathName @ 0x1408211B8 (_RegRtlQueryKeyPathName.c)
 *     CmpNameFromAttributes @ 0x14092D668 (CmpNameFromAttributes.c)
 *     CmpAddToHiveFileList @ 0x140A6A4C4 (CmpAddToHiveFileList.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwQueryObject(
        HANDLE Handle,
        OBJECT_INFORMATION_CLASS ObjectInformationClass,
        PVOID ObjectInformation,
        ULONG ObjectInformationLength,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Handle, *(_QWORD *)&ObjectInformationClass);
}
