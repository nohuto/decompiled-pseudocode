/*
 * XREFs of McTemplateK0_EtwWriteTransfer @ 0x14059246C
 * Callers:
 *     PnpSerializeBoot @ 0x1405A07AC (PnpSerializeBoot.c)
 *     PiSwIrpStartCreate @ 0x1409A4020 (PiSwIrpStartCreate.c)
 *     IoInitSystemPreDrivers @ 0x140C0996C (IoInitSystemPreDrivers.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1404250D4 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0_EtwWriteTransfer(REGHANDLE *a1, const EVENT_DESCRIPTOR *a2)
{
  struct _EVENT_DATA_DESCRIPTOR v3; // [rsp+30h] [rbp-28h] BYREF

  return McGenEventWrite_EtwWriteTransfer(a1, a2, 0LL, 1u, &v3);
}
