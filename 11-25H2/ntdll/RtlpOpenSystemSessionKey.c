/*
 * XREFs of RtlpOpenSystemSessionKey @ 0x180115410
 * Callers:
 *     RtlSetImageMitigationPolicy @ 0x1801385F0 (RtlSetImageMitigationPolicy.c)
 * Callees:
 *     NtOpenKey @ 0x180163460 (NtOpenKey.c)
 */

NTSTATUS __fastcall RtlpOpenSystemSessionKey(ACCESS_MASK DesiredAccess, PHANDLE KeyHandle)
{
  _OBJECT_ATTRIBUTES v3; // [rsp+20h] [rbp-38h] BYREF

  *(_QWORD *)&v3.Length = 48LL;
  *(_QWORD *)&v3.Attributes = 576LL;
  v3.RootDirectory = 0LL;
  v3.ObjectName = (PUNICODE_STRING)&unk_180176050;
  *(_OWORD *)&v3.SecurityDescriptor = 0LL;
  return NtOpenKey(KeyHandle, DesiredAccess, &v3);
}
