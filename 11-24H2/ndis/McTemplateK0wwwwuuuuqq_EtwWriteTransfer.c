/*
 * XREFs of McTemplateK0wwwwuuuuqq_EtwWriteTransfer @ 0x140097644
 * Callers:
 *     McGenControlCallbackV2 @ 0x140077F50 (McGenControlCallbackV2.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x140038B00 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0wwwwuuuuqq_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int16 a4,
        __int64 a5,
        __int16 a6,
        __int64 a7,
        __int16 a8,
        __int64 a9,
        __int16 a10,
        __int64 a11,
        char a12,
        char a13,
        char a14,
        char a15,
        char a16,
        char a17)
{
  _EVENT_DATA_DESCRIPTOR v18; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD *v19; // [rsp+40h] [rbp-C0h]
  __int64 v20; // [rsp+48h] [rbp-B8h]
  __int64 v21; // [rsp+50h] [rbp-B0h]
  _DWORD v22[2]; // [rsp+58h] [rbp-A8h] BYREF
  _DWORD *v23; // [rsp+60h] [rbp-A0h]
  __int64 v24; // [rsp+68h] [rbp-98h]
  __int64 v25; // [rsp+70h] [rbp-90h]
  _DWORD v26[2]; // [rsp+78h] [rbp-88h] BYREF
  _DWORD *v27; // [rsp+80h] [rbp-80h]
  __int64 v28; // [rsp+88h] [rbp-78h]
  __int64 v29; // [rsp+90h] [rbp-70h]
  _DWORD v30[2]; // [rsp+98h] [rbp-68h] BYREF
  _DWORD *v31; // [rsp+A0h] [rbp-60h]
  __int64 v32; // [rsp+A8h] [rbp-58h]
  __int64 v33; // [rsp+B0h] [rbp-50h]
  _DWORD v34[2]; // [rsp+B8h] [rbp-48h] BYREF
  char *v35; // [rsp+C0h] [rbp-40h]
  __int64 v36; // [rsp+C8h] [rbp-38h]
  char *v37; // [rsp+D0h] [rbp-30h]
  __int64 v38; // [rsp+D8h] [rbp-28h]
  char *v39; // [rsp+E0h] [rbp-20h]
  __int64 v40; // [rsp+E8h] [rbp-18h]
  char *v41; // [rsp+F0h] [rbp-10h]
  __int64 v42; // [rsp+F8h] [rbp-8h]
  char *v43; // [rsp+100h] [rbp+0h]
  __int64 v44; // [rsp+108h] [rbp+8h]
  char *v45; // [rsp+110h] [rbp+10h]
  __int64 v46; // [rsp+118h] [rbp+18h]

  v20 = 2LL;
  v22[1] = 0;
  v26[1] = 0;
  v19 = v22;
  v21 = a5;
  v22[0] = (unsigned __int16)(2 * a4);
  v23 = v26;
  v25 = a7;
  v30[1] = 0;
  v26[0] = (unsigned __int16)(2 * a6);
  v27 = v30;
  v29 = a9;
  v34[1] = 0;
  v30[0] = (unsigned __int16)(2 * a8);
  v31 = v34;
  v33 = a11;
  v24 = 2LL;
  v34[0] = (unsigned __int16)(2 * a10);
  v35 = &a12;
  v37 = &a13;
  v39 = &a14;
  v41 = &a15;
  v43 = &a16;
  v45 = &a17;
  v28 = 2LL;
  v32 = 2LL;
  v36 = 1LL;
  v38 = 1LL;
  v40 = 1LL;
  v42 = 1LL;
  v44 = 4LL;
  v46 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(NDIS_PROVIDER_ID_Context, &FilterDriverRundown, 0LL, 0xFu, &v18);
}
