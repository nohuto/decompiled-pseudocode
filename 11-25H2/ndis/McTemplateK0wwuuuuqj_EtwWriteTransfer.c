/*
 * XREFs of McTemplateK0wwuuuuqj_EtwWriteTransfer @ 0x1400A1874
 * Callers:
 *     McGenControlCallbackV2 @ 0x140091C20 (McGenControlCallbackV2.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400242C0 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0wwuuuuqj_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int16 a4,
        __int64 a5,
        __int16 a6,
        __int64 a7,
        char a8,
        char a9,
        char a10,
        char a11,
        char a12,
        __int64 a13)
{
  _EVENT_DATA_DESCRIPTOR v14; // [rsp+30h] [rbp-B1h] BYREF
  _DWORD *v15; // [rsp+40h] [rbp-A1h]
  __int64 v16; // [rsp+48h] [rbp-99h]
  __int64 v17; // [rsp+50h] [rbp-91h]
  _DWORD v18[2]; // [rsp+58h] [rbp-89h] BYREF
  _DWORD *v19; // [rsp+60h] [rbp-81h]
  __int64 v20; // [rsp+68h] [rbp-79h]
  __int64 v21; // [rsp+70h] [rbp-71h]
  _DWORD v22[2]; // [rsp+78h] [rbp-69h] BYREF
  char *v23; // [rsp+80h] [rbp-61h]
  __int64 v24; // [rsp+88h] [rbp-59h]
  char *v25; // [rsp+90h] [rbp-51h]
  __int64 v26; // [rsp+98h] [rbp-49h]
  char *v27; // [rsp+A0h] [rbp-41h]
  __int64 v28; // [rsp+A8h] [rbp-39h]
  char *v29; // [rsp+B0h] [rbp-31h]
  __int64 v30; // [rsp+B8h] [rbp-29h]
  char *v31; // [rsp+C0h] [rbp-21h]
  __int64 v32; // [rsp+C8h] [rbp-19h]
  __int64 v33; // [rsp+D0h] [rbp-11h]
  __int64 v34; // [rsp+D8h] [rbp-9h]

  v16 = 2LL;
  v18[1] = 0;
  v22[1] = 0;
  v15 = v18;
  v17 = a5;
  v18[0] = (unsigned __int16)(2 * a4);
  v20 = 2LL;
  v19 = v22;
  v21 = a7;
  v24 = 1LL;
  v22[0] = (unsigned __int16)(2 * a6);
  v23 = &a8;
  v25 = &a9;
  v27 = &a10;
  v29 = &a11;
  v31 = &a12;
  v33 = a13;
  v26 = 1LL;
  v28 = 1LL;
  v30 = 1LL;
  v32 = 4LL;
  v34 = 16LL;
  return McGenEventWrite_EtwWriteTransfer(NDIS_PROVIDER_ID_Context, &ProtocolDriverRundown, 0LL, 0xBu, &v14);
}
