/*
 * XREFs of McTemplateU0qqzr1qzr3qqqqpqqzr11_EtwWriteTransfer @ 0x1402B894C
 * Callers:
 *     Pdcv2EventWrite_ACTIVATION_CLIENT_ACTIVATE @ 0x1402B885C (Pdcv2EventWrite_ACTIVATION_CLIENT_ACTIVATE.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1402B8E28 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall McTemplateU0qqzr1qzr3qqqqpqqzr11_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 a5,
        int a6,
        __int64 a7,
        char a8,
        char a9,
        char a10,
        char a11,
        char a12,
        __int64 a13,
        int a14,
        __int64 a15)
{
  int v16; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v17[16]; // [rsp+40h] [rbp-C0h] BYREF
  int *v18; // [rsp+50h] [rbp-B0h]
  __int64 v19; // [rsp+58h] [rbp-A8h]
  int *v20; // [rsp+60h] [rbp-A0h]
  __int64 v21; // [rsp+68h] [rbp-98h]
  __int64 v22; // [rsp+70h] [rbp-90h]
  int v23; // [rsp+78h] [rbp-88h]
  int v24; // [rsp+7Ch] [rbp-84h]
  int *v25; // [rsp+80h] [rbp-80h]
  __int64 v26; // [rsp+88h] [rbp-78h]
  __int64 v27; // [rsp+90h] [rbp-70h]
  int v28; // [rsp+98h] [rbp-68h]
  int v29; // [rsp+9Ch] [rbp-64h]
  char *v30; // [rsp+A0h] [rbp-60h]
  __int64 v31; // [rsp+A8h] [rbp-58h]
  char *v32; // [rsp+B0h] [rbp-50h]
  __int64 v33; // [rsp+B8h] [rbp-48h]
  char *v34; // [rsp+C0h] [rbp-40h]
  __int64 v35; // [rsp+C8h] [rbp-38h]
  char *v36; // [rsp+D0h] [rbp-30h]
  __int64 v37; // [rsp+D8h] [rbp-28h]
  char *v38; // [rsp+E0h] [rbp-20h]
  __int64 v39; // [rsp+E8h] [rbp-18h]
  int *v40; // [rsp+F0h] [rbp-10h]
  __int64 v41; // [rsp+F8h] [rbp-8h]
  int *v42; // [rsp+100h] [rbp+0h]
  __int64 v43; // [rsp+108h] [rbp+8h]
  __int64 v44; // [rsp+110h] [rbp+10h]
  int v45; // [rsp+118h] [rbp+18h]
  int v46; // [rsp+11Ch] [rbp+1Ch]
  int v47; // [rsp+150h] [rbp+50h] BYREF
  int v48; // [rsp+158h] [rbp+58h] BYREF

  v48 = a4;
  v47 = a3;
  v16 = 2;
  v24 = 0;
  v18 = &v47;
  v29 = 0;
  v20 = &v48;
  v22 = a5;
  v23 = 2 * a4;
  v46 = 0;
  v25 = &a6;
  v27 = a7;
  v19 = 4LL;
  v28 = 2 * a6;
  v30 = &a8;
  v32 = &a9;
  v34 = &a10;
  v36 = &a11;
  v38 = &a12;
  v40 = &v16;
  v42 = &a14;
  v44 = a15;
  v21 = 4LL;
  v45 = 2 * a14;
  v26 = 4LL;
  v31 = 4LL;
  v33 = 4LL;
  v35 = 4LL;
  v37 = 4LL;
  v39 = 8LL;
  v41 = 4LL;
  v43 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(&PDC_EVENT_PROVIDER_Context, PDCV2_ACTIVATION_ACTIVATE, 0LL, 14LL, v17);
}
