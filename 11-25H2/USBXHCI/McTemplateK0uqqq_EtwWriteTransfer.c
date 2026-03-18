/*
 * XREFs of McTemplateK0uqqq_EtwWriteTransfer @ 0x140006B40
 * Callers:
 *     Control_TransferData_Initialize @ 0x140006CB0 (Control_TransferData_Initialize.c)
 *     Bulk_RetrieveNextStage @ 0x14001ADD0 (Bulk_RetrieveNextStage.c)
 *     Bulk_TransferData_Initialize @ 0x140020A00 (Bulk_TransferData_Initialize.c)
 *     Isoch_TransferData_Initialize @ 0x1400237C0 (Isoch_TransferData_Initialize.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x140006C40 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400596A0 (__security_check_cookie.c)
 */

__int64 __fastcall McTemplateK0uqqq_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  _QWORD v8[10]; // [rsp+30h] [rbp-68h] BYREF
  char v9; // [rsp+B8h] [rbp+20h] BYREF

  v9 = a4;
  v8[3] = 1LL;
  v8[2] = &v9;
  v8[5] = 4LL;
  v8[4] = &a5;
  v8[7] = 4LL;
  v8[6] = &a6;
  v8[8] = &a7;
  v8[9] = 4LL;
  return McGenEventWrite_EtwWriteTransfer(a1, &USBXHCI_ETW_EVENT_TRANSFER_INITIALIZED_V1, a3, 5LL, v8);
}
