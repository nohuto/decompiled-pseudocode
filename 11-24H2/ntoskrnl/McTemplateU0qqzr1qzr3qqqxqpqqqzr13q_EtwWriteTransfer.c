/*
 * XREFs of McTemplateU0qqzr1qzr3qqqxqpqqqzr13q_EtwWriteTransfer @ 0x140604D10
 * Callers:
 *     Pdcv2EventWrite_ACTIVATION_CLIENT_CALLBACK @ 0x1406050B8 (Pdcv2EventWrite_ACTIVATION_CLIENT_CALLBACK.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1402B8E28 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateU0qqzr1qzr3qqqxqpqqqzr13q_EtwWriteTransfer(
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
        char a13,
        char a14,
        int a15,
        int a16,
        __int64 a17,
        char a18)
{
  int v19; // [rsp+30h] [rbp-D0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+40h] [rbp-C0h] BYREF
  int *v21; // [rsp+50h] [rbp-B0h]
  __int64 v22; // [rsp+58h] [rbp-A8h]
  int *v23; // [rsp+60h] [rbp-A0h]
  __int64 v24; // [rsp+68h] [rbp-98h]
  __int64 v25; // [rsp+70h] [rbp-90h]
  int v26; // [rsp+78h] [rbp-88h]
  int v27; // [rsp+7Ch] [rbp-84h]
  int *v28; // [rsp+80h] [rbp-80h]
  __int64 v29; // [rsp+88h] [rbp-78h]
  __int64 v30; // [rsp+90h] [rbp-70h]
  int v31; // [rsp+98h] [rbp-68h]
  int v32; // [rsp+9Ch] [rbp-64h]
  char *v33; // [rsp+A0h] [rbp-60h]
  __int64 v34; // [rsp+A8h] [rbp-58h]
  char *v35; // [rsp+B0h] [rbp-50h]
  __int64 v36; // [rsp+B8h] [rbp-48h]
  char *v37; // [rsp+C0h] [rbp-40h]
  __int64 v38; // [rsp+C8h] [rbp-38h]
  char *v39; // [rsp+D0h] [rbp-30h]
  __int64 v40; // [rsp+D8h] [rbp-28h]
  char *v41; // [rsp+E0h] [rbp-20h]
  __int64 v42; // [rsp+E8h] [rbp-18h]
  char *v43; // [rsp+F0h] [rbp-10h]
  __int64 v44; // [rsp+F8h] [rbp-8h]
  char *v45; // [rsp+100h] [rbp+0h]
  __int64 v46; // [rsp+108h] [rbp+8h]
  int *v47; // [rsp+110h] [rbp+10h]
  __int64 v48; // [rsp+118h] [rbp+18h]
  int *v49; // [rsp+120h] [rbp+20h]
  __int64 v50; // [rsp+128h] [rbp+28h]
  __int64 v51; // [rsp+130h] [rbp+30h]
  int v52; // [rsp+138h] [rbp+38h]
  int v53; // [rsp+13Ch] [rbp+3Ch]
  char *v54; // [rsp+140h] [rbp+40h]
  __int64 v55; // [rsp+148h] [rbp+48h]
  int v56; // [rsp+180h] [rbp+80h] BYREF
  int v57; // [rsp+188h] [rbp+88h] BYREF

  v57 = a4;
  v56 = a3;
  v19 = 2;
  v27 = 0;
  v21 = &v56;
  v32 = 0;
  v23 = &v57;
  v25 = a5;
  v26 = 2 * a4;
  v53 = 0;
  v28 = &a6;
  v30 = a7;
  v22 = 4LL;
  v31 = 2 * a6;
  v33 = &a8;
  v35 = &a9;
  v37 = &a10;
  v39 = &a11;
  v41 = &a12;
  v43 = &a13;
  v45 = &a14;
  v47 = &v19;
  v49 = &a16;
  v51 = a17;
  v24 = 4LL;
  v52 = 2 * a16;
  v54 = &a18;
  v29 = 4LL;
  v34 = 4LL;
  v36 = 4LL;
  v38 = 4LL;
  v40 = 8LL;
  v42 = 4LL;
  v44 = 8LL;
  v46 = 4LL;
  v48 = 4LL;
  v50 = 4LL;
  v55 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(
           PDC_EVENT_PROVIDER_Context,
           (const EVENT_DESCRIPTOR *)PDCV2_ACTIVATION_CALLBACK,
           0LL,
           0x11u,
           &v20);
}
