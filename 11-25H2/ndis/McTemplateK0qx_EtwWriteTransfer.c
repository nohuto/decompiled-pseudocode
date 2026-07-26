/*
 * XREFs of McTemplateK0qx_EtwWriteTransfer @ 0x140077900
 * Callers:
 *     ndisNsiClientParameterChangeHandler @ 0x14016C490 (ndisNsiClientParameterChangeHandler.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400242C0 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qx_EtwWriteTransfer(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  _EVENT_DATA_DESCRIPTOR v6; // [rsp+30h] [rbp-48h] BYREF
  int *v7; // [rsp+40h] [rbp-38h]
  __int64 v8; // [rsp+48h] [rbp-30h]
  __int64 *v9; // [rsp+50h] [rbp-28h]
  __int64 v10; // [rsp+58h] [rbp-20h]
  int v11; // [rsp+98h] [rbp+20h] BYREF

  v11 = a4;
  v8 = 4LL;
  v7 = &v11;
  v10 = 8LL;
  v9 = &a5;
  return McGenEventWrite_EtwWriteTransfer(
           NDIS_PROVIDER_ID_Context,
           &ChangeNotificationInterfaceEnum,
           (const GUID *)&NDIS_PROVIDER_ID,
           3u,
           &v6);
}
