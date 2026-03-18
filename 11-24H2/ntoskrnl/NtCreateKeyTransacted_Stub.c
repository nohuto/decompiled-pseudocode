/*
 * XREFs of NtCreateKeyTransacted_Stub @ 0x1408213D4
 * Callers:
 *     _RegRtlCreateTreeTransacted @ 0x1409261A4 (_RegRtlCreateTreeTransacted.c)
 *     _RegRtlCreateKeyTransacted @ 0x140926504 (_RegRtlCreateKeyTransacted.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall NtCreateKeyTransacted_Stub(__int64 a1, __int64 a2, __int64 a3)
{
  NTSTATUS (__stdcall *v3)(PHANDLE, ACCESS_MASK, POBJECT_ATTRIBUTES, ULONG, PUNICODE_STRING, ULONG, HANDLE, PULONG); // rax

  if ( byte_140EEFBD0 )
  {
    v3 = (NTSTATUS (__stdcall *)(PHANDLE, ACCESS_MASK, POBJECT_ATTRIBUTES, ULONG, PUNICODE_STRING, ULONG, HANDLE, PULONG))qword_140EEFBD8;
  }
  else
  {
    v3 = ZwCreateKeyTransacted;
    byte_140EEFBD0 = 1;
    qword_140EEFBD8 = (__int64)ZwCreateKeyTransacted;
  }
  if ( v3 )
    return guard_dispatch_icall_no_overrides(a1, a2, a3, 0LL);
  else
    return 3221225594LL;
}
