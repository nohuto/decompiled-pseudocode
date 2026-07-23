/*
 * XREFs of McTemplateK0qhzr1jxjhzr6_EtwWriteTransfer @ 0x1405A1800
 * Callers:
 *     PnpNotifyDriverCallback @ 0x1409EC7F0 (PnpNotifyDriverCallback.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1402B8E28 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qhzr1jxjhzr6_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned __int16 a5,
        __int64 a6,
        __int64 a7,
        char a8,
        __int64 a9,
        unsigned __int16 a10,
        __int64 a11)
{
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+30h] [rbp-81h] BYREF
  int *v13; // [rsp+40h] [rbp-71h]
  __int64 v14; // [rsp+48h] [rbp-69h]
  unsigned __int16 *v15; // [rsp+50h] [rbp-61h]
  __int64 v16; // [rsp+58h] [rbp-59h]
  __int64 v17; // [rsp+60h] [rbp-51h]
  int v18; // [rsp+68h] [rbp-49h]
  int v19; // [rsp+6Ch] [rbp-45h]
  __int64 v20; // [rsp+70h] [rbp-41h]
  __int64 v21; // [rsp+78h] [rbp-39h]
  char *v22; // [rsp+80h] [rbp-31h]
  __int64 v23; // [rsp+88h] [rbp-29h]
  __int64 v24; // [rsp+90h] [rbp-21h]
  __int64 v25; // [rsp+98h] [rbp-19h]
  unsigned __int16 *v26; // [rsp+A0h] [rbp-11h]
  __int64 v27; // [rsp+A8h] [rbp-9h]
  __int64 v28; // [rsp+B0h] [rbp-1h]
  int v29; // [rsp+B8h] [rbp+7h]
  int v30; // [rsp+BCh] [rbp+Bh]
  int v31; // [rsp+F8h] [rbp+47h] BYREF

  v31 = a4;
  v14 = 4LL;
  v16 = 2LL;
  v13 = &v31;
  v19 = 0;
  v15 = &a5;
  v17 = a6;
  v21 = 16LL;
  v18 = 2 * a5;
  v20 = a7;
  v22 = &a8;
  v24 = a9;
  v26 = &a10;
  v28 = a11;
  v23 = 8LL;
  v29 = 2 * a10;
  v25 = 16LL;
  v27 = 2LL;
  v30 = 0;
  return McGenEventWrite_EtwWriteTransfer(
           MS_KernelPnP_Provider_Context,
           (const EVENT_DESCRIPTOR *)KMPnPEvt_KernelNotificationLongRunning,
           0LL,
           9u,
           &v12);
}
