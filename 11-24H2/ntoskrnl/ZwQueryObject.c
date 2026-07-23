/*
 * XREFs of ZwQueryObject @ 0x1406A75B0
 * Callers:
 *     DifZwQueryObjectWrapper @ 0x1406447E0 (DifZwQueryObjectWrapper.c)
 *     EtwpObjectTypeRundown @ 0x1407B1434 (EtwpObjectTypeRundown.c)
 *     CmpCmdRenameHive @ 0x1407D5E20 (CmpCmdRenameHive.c)
 *     _RegRtlQueryKeyPathName @ 0x1408218F8 (_RegRtlQueryKeyPathName.c)
 *     CmpNameFromAttributes @ 0x14092F7A8 (CmpNameFromAttributes.c)
 *     CmpAddToHiveFileList @ 0x140A63874 (CmpAddToHiveFileList.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryObject(
        HANDLE Handle,
        OBJECT_INFORMATION_CLASS ObjectInformationClass,
        PVOID ObjectInformation,
        ULONG ObjectInformationLength,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Handle);
}
