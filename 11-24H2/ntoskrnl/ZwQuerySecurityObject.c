/*
 * XREFs of ZwQuerySecurityObject @ 0x1406A9110
 * Callers:
 *     RtlIsUntrustedObject @ 0x140490B00 (RtlIsUntrustedObject.c)
 *     DifZwQuerySecurityObjectWrapper @ 0x140646580 (DifZwQuerySecurityObjectWrapper.c)
 *     CmpSaveBootControlSet @ 0x1407CC764 (CmpSaveBootControlSet.c)
 *     CmpCloneHwProfile @ 0x1407D305C (CmpCloneHwProfile.c)
 *     _RegRtlGetKeySecurity @ 0x1408210D4 (_RegRtlGetKeySecurity.c)
 *     CmpQueryFileSecurityDescriptor @ 0x140930A60 (CmpQueryFileSecurityDescriptor.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x14099C6D0 (PiDevCfgGetKeySecurityDescriptor.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwQuerySecurityObject(
        HANDLE Handle,
        SECURITY_INFORMATION SecurityInformation,
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        ULONG Length,
        PULONG LengthNeeded)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Handle, *(_QWORD *)&SecurityInformation);
}
