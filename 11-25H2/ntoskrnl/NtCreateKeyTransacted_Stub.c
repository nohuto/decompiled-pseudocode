/*
 * XREFs of NtCreateKeyTransacted_Stub @ 0x1408114D4
 * Callers:
 *     _RegRtlCreateTreeTransacted @ 0x140931CBC (_RegRtlCreateTreeTransacted.c)
 *     _RegRtlCreateKeyTransacted @ 0x14093201C (_RegRtlCreateKeyTransacted.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall NtCreateKeyTransacted_Stub(__int64 a1)
{
  NTSTATUS (__stdcall *v1)(PHANDLE, ACCESS_MASK, POBJECT_ATTRIBUTES, ULONG, PUNICODE_STRING, ULONG, HANDLE, PULONG); // rax

  if ( byte_140EEF910 )
  {
    v1 = (NTSTATUS (__stdcall *)(PHANDLE, ACCESS_MASK, POBJECT_ATTRIBUTES, ULONG, PUNICODE_STRING, ULONG, HANDLE, PULONG))qword_140EEF918;
  }
  else
  {
    v1 = ZwCreateKeyTransacted;
    byte_140EEF910 = 1;
    qword_140EEF918 = (__int64)ZwCreateKeyTransacted;
  }
  if ( v1 )
    return guard_dispatch_icall_no_overrides(a1);
  else
    return 3221225594LL;
}
