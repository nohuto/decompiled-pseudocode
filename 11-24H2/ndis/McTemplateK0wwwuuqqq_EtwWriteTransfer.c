/*
 * XREFs of McTemplateK0wwwuuqqq_EtwWriteTransfer @ 0x140097514
 * Callers:
 *     McGenControlCallbackV2 @ 0x140077F50 (McGenControlCallbackV2.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x140038B00 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0wwwuuqqq_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int16 a4,
        __int64 a5,
        __int16 a6,
        __int64 a7,
        __int16 a8,
        __int64 a9,
        char a10,
        char a11,
        char a12,
        char a13,
        char a14)
{
  _EVENT_DATA_DESCRIPTOR v15; // [rsp+30h] [rbp-C9h] BYREF
  _DWORD *v16; // [rsp+40h] [rbp-B9h]
  __int64 v17; // [rsp+48h] [rbp-B1h]
  __int64 v18; // [rsp+50h] [rbp-A9h]
  _DWORD v19[2]; // [rsp+58h] [rbp-A1h] BYREF
  _DWORD *v20; // [rsp+60h] [rbp-99h]
  __int64 v21; // [rsp+68h] [rbp-91h]
  __int64 v22; // [rsp+70h] [rbp-89h]
  _DWORD v23[2]; // [rsp+78h] [rbp-81h] BYREF
  _DWORD *v24; // [rsp+80h] [rbp-79h]
  __int64 v25; // [rsp+88h] [rbp-71h]
  __int64 v26; // [rsp+90h] [rbp-69h]
  _DWORD v27[2]; // [rsp+98h] [rbp-61h] BYREF
  char *v28; // [rsp+A0h] [rbp-59h]
  __int64 v29; // [rsp+A8h] [rbp-51h]
  char *v30; // [rsp+B0h] [rbp-49h]
  __int64 v31; // [rsp+B8h] [rbp-41h]
  char *v32; // [rsp+C0h] [rbp-39h]
  __int64 v33; // [rsp+C8h] [rbp-31h]
  char *v34; // [rsp+D0h] [rbp-29h]
  __int64 v35; // [rsp+D8h] [rbp-21h]
  char *v36; // [rsp+E0h] [rbp-19h]
  __int64 v37; // [rsp+E8h] [rbp-11h]

  v17 = 2LL;
  v19[1] = 0;
  v23[1] = 0;
  v16 = v19;
  v18 = a5;
  v19[0] = (unsigned __int16)(2 * a4);
  v20 = v23;
  v22 = a7;
  v27[1] = 0;
  v23[0] = (unsigned __int16)(2 * a6);
  v24 = v27;
  v26 = a9;
  v21 = 2LL;
  v27[0] = (unsigned __int16)(2 * a8);
  v28 = &a10;
  v30 = &a11;
  v32 = &a12;
  v34 = &a13;
  v36 = &a14;
  v25 = 2LL;
  v29 = 1LL;
  v31 = 1LL;
  v33 = 4LL;
  v35 = 4LL;
  v37 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(NDIS_PROVIDER_ID_Context, &MiniportDriverRundown, 0LL, 0xCu, &v15);
}
