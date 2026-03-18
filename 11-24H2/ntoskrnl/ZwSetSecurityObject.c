/*
 * XREFs of ZwSetSecurityObject @ 0x1406A9B30
 * Callers:
 *     BiZwSetSecurityObject @ 0x14049F890 (BiZwSetSecurityObject.c)
 *     DifZwSetSecurityObjectWrapper @ 0x140648DE0 (DifZwSetSecurityObjectWrapper.c)
 *     CmpApplyAdminSdOnHiveFiles @ 0x140667608 (CmpApplyAdminSdOnHiveFiles.c)
 *     SmKmStoreFileCreateForIoType @ 0x14079ABFC (SmKmStoreFileCreateForIoType.c)
 *     CmpDoReDoRecord @ 0x1407E6CC4 (CmpDoReDoRecord.c)
 *     MiCreatePagingFile @ 0x1407EE364 (MiCreatePagingFile.c)
 *     _RegRtlSetKeySecurity @ 0x1408213BC (_RegRtlSetKeySecurity.c)
 *     PiDevCfgCopyDeviceKeys @ 0x14099B878 (PiDevCfgCopyDeviceKeys.c)
 *     PiDevCfgCopyDeviceKey @ 0x14099BA04 (PiDevCfgCopyDeviceKey.c)
 *     IopApplySystemPartitionProt @ 0x140C1E168 (IopApplySystemPartitionProt.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwSetSecurityObject(
        HANDLE Handle,
        SECURITY_INFORMATION SecurityInformation,
        PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Handle, *(_QWORD *)&SecurityInformation);
}
