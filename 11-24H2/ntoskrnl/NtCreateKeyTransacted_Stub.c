/*
 * XREFs of NtCreateKeyTransacted_Stub @ 0x140821B14
 * Callers:
 *     _RegRtlCreateTreeTransacted @ 0x1409282E4 (_RegRtlCreateTreeTransacted.c)
 *     _RegRtlCreateKeyTransacted @ 0x140928644 (_RegRtlCreateKeyTransacted.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall NtCreateKeyTransacted_Stub(__int64 a1, __int64 a2)
{
  NTSTATUS (__stdcall *v2)(PHANDLE, ACCESS_MASK, POBJECT_ATTRIBUTES, ULONG, PUNICODE_STRING, ULONG, HANDLE, PULONG); // rax

  if ( byte_140EEFE18 )
  {
    v2 = (NTSTATUS (__stdcall *)(PHANDLE, ACCESS_MASK, POBJECT_ATTRIBUTES, ULONG, PUNICODE_STRING, ULONG, HANDLE, PULONG))qword_140EEFDF0;
  }
  else
  {
    v2 = ZwCreateKeyTransacted;
    byte_140EEFE18 = 1;
    qword_140EEFDF0 = (__int64)ZwCreateKeyTransacted;
  }
  if ( v2 )
    return guard_dispatch_icall_no_overrides(a1, a2);
  else
    return 3221225594LL;
}
