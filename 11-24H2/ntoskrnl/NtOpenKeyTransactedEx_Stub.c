/*
 * XREFs of NtOpenKeyTransactedEx_Stub @ 0x1406F7554
 * Callers:
 *     _RegRtlOpenKeyTransacted @ 0x1408C5590 (_RegRtlOpenKeyTransacted.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall NtOpenKeyTransactedEx_Stub(__int64 a1, __int64 a2)
{
  NTSTATUS (__stdcall *v2)(PHANDLE, ACCESS_MASK, POBJECT_ATTRIBUTES, ULONG, HANDLE); // rax

  if ( byte_140EEFE08 )
  {
    v2 = (NTSTATUS (__stdcall *)(PHANDLE, ACCESS_MASK, POBJECT_ATTRIBUTES, ULONG, HANDLE))qword_140EEFE10;
  }
  else
  {
    v2 = ZwOpenKeyTransactedEx;
    byte_140EEFE08 = 1;
    qword_140EEFE10 = (__int64)ZwOpenKeyTransactedEx;
  }
  if ( v2 )
    return guard_dispatch_icall_no_overrides(a1, a2);
  else
    return 3221225594LL;
}
