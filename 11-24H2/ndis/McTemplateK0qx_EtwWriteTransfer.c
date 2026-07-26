/*
 * XREFs of McTemplateK0qx_EtwWriteTransfer @ 0x140037640
 * Callers:
 *     ndisNsiClientParameterChangeHandler @ 0x140160430 (ndisNsiClientParameterChangeHandler.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x140038B00 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 */

__int64 __fastcall McTemplateK0qx_EtwWriteTransfer(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  _QWORD v6[6]; // [rsp+30h] [rbp-48h] BYREF
  int v7; // [rsp+98h] [rbp+20h] BYREF

  v7 = a4;
  v6[3] = 4LL;
  v6[2] = &v7;
  v6[5] = 8LL;
  v6[4] = &a5;
  return McGenEventWrite_EtwWriteTransfer(
           &NDIS_PROVIDER_ID_Context,
           &ChangeNotificationInterfaceEnum,
           &NDIS_PROVIDER_ID,
           3LL,
           v6);
}
