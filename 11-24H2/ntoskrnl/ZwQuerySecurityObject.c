/*
 * XREFs of ZwQuerySecurityObject @ 0x1406AA0B0
 * Callers:
 *     RtlIsUntrustedObject @ 0x14048B140 (RtlIsUntrustedObject.c)
 *     DifZwQuerySecurityObjectWrapper @ 0x140644B40 (DifZwQuerySecurityObjectWrapper.c)
 *     CmpSaveBootControlSet @ 0x1407CCC54 (CmpSaveBootControlSet.c)
 *     CmpCloneHwProfile @ 0x1407D354C (CmpCloneHwProfile.c)
 *     _RegRtlGetKeySecurity @ 0x140821814 (_RegRtlGetKeySecurity.c)
 *     CmpQueryFileSecurityDescriptor @ 0x140932BA0 (CmpQueryFileSecurityDescriptor.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x1409CEE40 (PiDevCfgGetKeySecurityDescriptor.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQuerySecurityObject(
        HANDLE Handle,
        SECURITY_INFORMATION SecurityInformation,
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        ULONG Length,
        PULONG LengthNeeded)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Handle);
}
