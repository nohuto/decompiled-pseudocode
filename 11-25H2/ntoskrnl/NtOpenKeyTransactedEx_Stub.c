/*
 * XREFs of NtOpenKeyTransactedEx_Stub @ 0x1406EDC38
 * Callers:
 *     _RegRtlOpenKeyTransacted @ 0x1408C9BF0 (_RegRtlOpenKeyTransacted.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall NtOpenKeyTransactedEx_Stub(__int64 a1)
{
  NTSTATUS (__stdcall *v1)(PHANDLE, ACCESS_MASK, POBJECT_ATTRIBUTES, ULONG, HANDLE); // rax

  if ( byte_140EEF930 )
  {
    v1 = (NTSTATUS (__stdcall *)(PHANDLE, ACCESS_MASK, POBJECT_ATTRIBUTES, ULONG, HANDLE))qword_140EEF908;
  }
  else
  {
    v1 = ZwOpenKeyTransactedEx;
    byte_140EEF930 = 1;
    qword_140EEF908 = (__int64)ZwOpenKeyTransactedEx;
  }
  if ( v1 )
    return guard_dispatch_icall_no_overrides(a1);
  else
    return 3221225594LL;
}
