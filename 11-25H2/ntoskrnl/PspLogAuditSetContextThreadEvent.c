/*
 * XREFs of PspLogAuditSetContextThreadEvent @ 0x140A6F4E8
 * Callers:
 *     NtSetContextThread @ 0x140A6F400 (NtSetContextThread.c)
 * Callees:
 *     EtwWrite @ 0x140257AF0 (EtwWrite.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall PspLogAuditSetContextThreadEvent(int a1)
{
  struct _EVENT_DATA_DESCRIPTOR v2; // [rsp+30h] [rbp-28h] BYREF
  int v3; // [rsp+60h] [rbp+8h] BYREF

  v3 = a1;
  v2.Ptr = (ULONGLONG)&v3;
  v2.Reserved = 0;
  v2.Size = 4;
  return EtwWrite(EtwApiCallsProvRegHandle, &KERNEL_AUDIT_API_SETCONTEXTTHREAD, 0LL, 1u, &v2);
}
