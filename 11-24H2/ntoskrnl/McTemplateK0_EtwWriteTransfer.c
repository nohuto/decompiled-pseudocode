/*
 * XREFs of McTemplateK0_EtwWriteTransfer @ 0x140595BC4
 * Callers:
 *     PnpSerializeBoot @ 0x1405A3F1C (PnpSerializeBoot.c)
 *     PiSwIrpStartCreate @ 0x1409F8394 (PiSwIrpStartCreate.c)
 *     IoInitSystemPreDrivers @ 0x140C1AA0C (IoInitSystemPreDrivers.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1403305B0 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0_EtwWriteTransfer(REGHANDLE *a1, const EVENT_DESCRIPTOR *a2)
{
  struct _EVENT_DATA_DESCRIPTOR v3; // [rsp+30h] [rbp-28h] BYREF

  return McGenEventWrite_EtwWriteTransfer(a1, a2, 0LL, 1u, &v3);
}
