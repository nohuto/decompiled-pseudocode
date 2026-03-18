/*
 * XREFs of NtOpenKeyTransactedEx_Stub @ 0x1406F9914
 * Callers:
 *     _RegRtlOpenKeyTransacted @ 0x1408C7B60 (_RegRtlOpenKeyTransacted.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall NtOpenKeyTransactedEx_Stub(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  NTSTATUS (__stdcall *v4)(PHANDLE, ACCESS_MASK, POBJECT_ATTRIBUTES, ULONG, HANDLE); // rax

  if ( byte_140EEFBC0 )
  {
    v4 = (NTSTATUS (__stdcall *)(PHANDLE, ACCESS_MASK, POBJECT_ATTRIBUTES, ULONG, HANDLE))qword_140EEFBC8;
  }
  else
  {
    v4 = ZwOpenKeyTransactedEx;
    byte_140EEFBC0 = 1;
    qword_140EEFBC8 = (__int64)ZwOpenKeyTransactedEx;
  }
  if ( v4 )
    return guard_dispatch_icall_no_overrides(a1, a2, a3, a4);
  else
    return 3221225594LL;
}
