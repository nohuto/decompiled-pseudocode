/*
 * XREFs of RtlpOpenSystemSessionKey @ 0x18010D780
 * Callers:
 *     RtlSetImageMitigationPolicy @ 0x1801350B0 (RtlSetImageMitigationPolicy.c)
 * Callees:
 *     NtOpenKey @ 0x180160290 (NtOpenKey.c)
 */

NTSTATUS __fastcall RtlpOpenSystemSessionKey(ACCESS_MASK DesiredAccess, PHANDLE KeyHandle)
{
  _OBJECT_ATTRIBUTES v3; // [rsp+20h] [rbp-38h] BYREF

  *(_QWORD *)&v3.Length = 48LL;
  *(_QWORD *)&v3.Attributes = 576LL;
  v3.RootDirectory = 0LL;
  v3.ObjectName = (PUNICODE_STRING)&unk_180173040;
  *(_OWORD *)&v3.SecurityDescriptor = 0LL;
  return NtOpenKey(KeyHandle, DesiredAccess, &v3);
}
