/*
 * XREFs of PspLogAuditSetContextThreadEvent @ 0x140A6A8C8
 * Callers:
 *     NtSetContextThread @ 0x140A6A7E0 (NtSetContextThread.c)
 * Callees:
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
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
