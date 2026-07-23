/*
 * XREFs of McTemplateU0qqzr1qzr3qqxqpqqzr11q_EtwWriteTransfer @ 0x1402B863C
 * Callers:
 *     Pdcv2EventWrite_ACTIVATION_CLIENT_DEACTIVATE @ 0x1402B83F0 (Pdcv2EventWrite_ACTIVATION_CLIENT_DEACTIVATE.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1402B8E28 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall McTemplateU0qqzr1qzr3qqxqpqqzr11q_EtwWriteTransfer(
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
        __int64 a15,
        char a16)
{
  int v17; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v18[16]; // [rsp+40h] [rbp-C0h] BYREF
  int *v19; // [rsp+50h] [rbp-B0h]
  __int64 v20; // [rsp+58h] [rbp-A8h]
  int *v21; // [rsp+60h] [rbp-A0h]
  __int64 v22; // [rsp+68h] [rbp-98h]
  __int64 v23; // [rsp+70h] [rbp-90h]
  int v24; // [rsp+78h] [rbp-88h]
  int v25; // [rsp+7Ch] [rbp-84h]
  int *v26; // [rsp+80h] [rbp-80h]
  __int64 v27; // [rsp+88h] [rbp-78h]
  __int64 v28; // [rsp+90h] [rbp-70h]
  int v29; // [rsp+98h] [rbp-68h]
  int v30; // [rsp+9Ch] [rbp-64h]
  char *v31; // [rsp+A0h] [rbp-60h]
  __int64 v32; // [rsp+A8h] [rbp-58h]
  char *v33; // [rsp+B0h] [rbp-50h]
  __int64 v34; // [rsp+B8h] [rbp-48h]
  char *v35; // [rsp+C0h] [rbp-40h]
  __int64 v36; // [rsp+C8h] [rbp-38h]
  char *v37; // [rsp+D0h] [rbp-30h]
  __int64 v38; // [rsp+D8h] [rbp-28h]
  char *v39; // [rsp+E0h] [rbp-20h]
  __int64 v40; // [rsp+E8h] [rbp-18h]
  int *v41; // [rsp+F0h] [rbp-10h]
  __int64 v42; // [rsp+F8h] [rbp-8h]
  int *v43; // [rsp+100h] [rbp+0h]
  __int64 v44; // [rsp+108h] [rbp+8h]
  __int64 v45; // [rsp+110h] [rbp+10h]
  int v46; // [rsp+118h] [rbp+18h]
  int v47; // [rsp+11Ch] [rbp+1Ch]
  char *v48; // [rsp+120h] [rbp+20h]
  __int64 v49; // [rsp+128h] [rbp+28h]
  int v50; // [rsp+160h] [rbp+60h] BYREF
  int v51; // [rsp+168h] [rbp+68h] BYREF

  v51 = a4;
  v50 = a3;
  v17 = 2;
  v25 = 0;
  v19 = &v50;
  v30 = 0;
  v21 = &v51;
  v23 = a5;
  v24 = 2 * a4;
  v47 = 0;
  v26 = &a6;
  v28 = a7;
  v20 = 4LL;
  v29 = 2 * a6;
  v31 = &a8;
  v33 = &a9;
  v35 = &a10;
  v37 = &a11;
  v39 = &a12;
  v41 = &v17;
  v43 = &a14;
  v45 = a15;
  v22 = 4LL;
  v46 = 2 * a14;
  v48 = &a16;
  v27 = 4LL;
  v32 = 4LL;
  v34 = 4LL;
  v36 = 8LL;
  v38 = 4LL;
  v40 = 8LL;
  v42 = 4LL;
  v44 = 4LL;
  v49 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(&PDC_EVENT_PROVIDER_Context, PDCV2_ACTIVATION_DEACTIVATE, 0LL, 15LL, v18);
}
