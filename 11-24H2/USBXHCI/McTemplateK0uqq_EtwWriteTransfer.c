/*
 * XREFs of McTemplateK0uqq_EtwWriteTransfer @ 0x14000C730
 * Callers:
 *     XilUsbDevice_WriteDoorbell @ 0x14000C6B0 (XilUsbDevice_WriteDoorbell.c)
 *     Bulk_Stage_MapIntoRing @ 0x140017BC0 (Bulk_Stage_MapIntoRing.c)
 *     Isoch_Stage_MapIntoRing @ 0x14001FE60 (Isoch_Stage_MapIntoRing.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x14000C8C0 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140058AC0 (__security_check_cookie.c)
 */

__int64 __fastcall McTemplateK0uqq_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4,
        __int64 a5,
        __int64 a6)
{
  _QWORD v7[8]; // [rsp+30h] [rbp-58h] BYREF
  char v8; // [rsp+A8h] [rbp+20h] BYREF

  v8 = a4;
  v7[3] = 1LL;
  v7[2] = &v8;
  v7[5] = 4LL;
  v7[4] = &a5;
  v7[7] = 4LL;
  v7[6] = &a6;
  return McGenEventWrite_EtwWriteTransfer(a1, &USBXHCI_ETW_EVENT_DOORBELL_V1, 0LL, 4LL, v7);
}
