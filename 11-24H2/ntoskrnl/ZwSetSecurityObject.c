/*
 * XREFs of ZwSetSecurityObject @ 0x1406AAAD0
 * Callers:
 *     BiZwSetSecurityObject @ 0x14049A718 (BiZwSetSecurityObject.c)
 *     DifZwSetSecurityObjectWrapper @ 0x1406473A0 (DifZwSetSecurityObjectWrapper.c)
 *     CmpApplyAdminSdOnHiveFiles @ 0x140665EF8 (CmpApplyAdminSdOnHiveFiles.c)
 *     SmKmStoreFileCreateForIoType @ 0x14079AD0C (SmKmStoreFileCreateForIoType.c)
 *     CmpDoReDoRecord @ 0x1407E7294 (CmpDoReDoRecord.c)
 *     MiCreatePagingFile @ 0x1407EE934 (MiCreatePagingFile.c)
 *     _RegRtlSetKeySecurity @ 0x140821AFC (_RegRtlSetKeySecurity.c)
 *     PiDevCfgCopyDeviceKeys @ 0x1409CDFE8 (PiDevCfgCopyDeviceKeys.c)
 *     PiDevCfgCopyDeviceKey @ 0x1409CE174 (PiDevCfgCopyDeviceKey.c)
 *     IopApplySystemPartitionProt @ 0x140C201A8 (IopApplySystemPartitionProt.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetSecurityObject(
        HANDLE Handle,
        SECURITY_INFORMATION SecurityInformation,
        PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Handle);
}
