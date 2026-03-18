/*
 * XREFs of McTemplateK0_EtwWriteTransfer @ 0x14002DC64
 * Callers:
 *     Etw_EnableCallback @ 0x14002DA00 (Etw_EnableCallback.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x14000C8C0 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140058AC0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0_EtwWriteTransfer(__int64 a1, const EVENT_DESCRIPTOR *a2, const GUID *a3)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-28h] BYREF

  return McGenEventWrite_EtwWriteTransfer(a1, a2, a3, 1u, &v4);
}
