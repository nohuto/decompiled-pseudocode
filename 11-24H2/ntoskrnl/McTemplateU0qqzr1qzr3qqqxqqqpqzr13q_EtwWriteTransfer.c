/*
 * XREFs of McTemplateU0qqzr1qzr3qqqxqqqpqzr13q_EtwWriteTransfer @ 0x140604EC4
 * Callers:
 *     Pdcv2EventWrite_ACTIVATION_CLIENT_RENEW_ACTIVATION @ 0x1406053A8 (Pdcv2EventWrite_ACTIVATION_CLIENT_RENEW_ACTIVATION.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1402B8E28 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateU0qqzr1qzr3qqqxqqqpqzr13q_EtwWriteTransfer(
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
        char a15,
        int a16,
        __int64 a17,
        char a18)
{
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+30h] [rbp-D0h] BYREF
  int *v20; // [rsp+40h] [rbp-C0h]
  __int64 v21; // [rsp+48h] [rbp-B8h]
  int *v22; // [rsp+50h] [rbp-B0h]
  __int64 v23; // [rsp+58h] [rbp-A8h]
  __int64 v24; // [rsp+60h] [rbp-A0h]
  int v25; // [rsp+68h] [rbp-98h]
  int v26; // [rsp+6Ch] [rbp-94h]
  int *v27; // [rsp+70h] [rbp-90h]
  __int64 v28; // [rsp+78h] [rbp-88h]
  __int64 v29; // [rsp+80h] [rbp-80h]
  int v30; // [rsp+88h] [rbp-78h]
  int v31; // [rsp+8Ch] [rbp-74h]
  char *v32; // [rsp+90h] [rbp-70h]
  __int64 v33; // [rsp+98h] [rbp-68h]
  char *v34; // [rsp+A0h] [rbp-60h]
  __int64 v35; // [rsp+A8h] [rbp-58h]
  char *v36; // [rsp+B0h] [rbp-50h]
  __int64 v37; // [rsp+B8h] [rbp-48h]
  char *v38; // [rsp+C0h] [rbp-40h]
  __int64 v39; // [rsp+C8h] [rbp-38h]
  char *v40; // [rsp+D0h] [rbp-30h]
  __int64 v41; // [rsp+D8h] [rbp-28h]
  char *v42; // [rsp+E0h] [rbp-20h]
  __int64 v43; // [rsp+E8h] [rbp-18h]
  char *v44; // [rsp+F0h] [rbp-10h]
  __int64 v45; // [rsp+F8h] [rbp-8h]
  char *v46; // [rsp+100h] [rbp+0h]
  __int64 v47; // [rsp+108h] [rbp+8h]
  int *v48; // [rsp+110h] [rbp+10h]
  __int64 v49; // [rsp+118h] [rbp+18h]
  __int64 v50; // [rsp+120h] [rbp+20h]
  int v51; // [rsp+128h] [rbp+28h]
  int v52; // [rsp+12Ch] [rbp+2Ch]
  char *v53; // [rsp+130h] [rbp+30h]
  __int64 v54; // [rsp+138h] [rbp+38h]
  int v55; // [rsp+170h] [rbp+70h] BYREF
  int v56; // [rsp+178h] [rbp+78h] BYREF

  v56 = a4;
  v55 = a3;
  v21 = 4LL;
  v26 = 0;
  v20 = &v55;
  v31 = 0;
  v22 = &v56;
  v24 = a5;
  v25 = 2 * a4;
  v52 = 0;
  v27 = &a6;
  v29 = a7;
  v23 = 4LL;
  v30 = 2 * a6;
  v32 = &a8;
  v34 = &a9;
  v36 = &a10;
  v38 = &a11;
  v40 = &a12;
  v42 = &a13;
  v44 = &a14;
  v46 = &a15;
  v48 = &a16;
  v50 = a17;
  v28 = 4LL;
  v51 = 2 * a16;
  v53 = &a18;
  v33 = 4LL;
  v35 = 4LL;
  v37 = 4LL;
  v39 = 8LL;
  v41 = 4LL;
  v43 = 4LL;
  v45 = 4LL;
  v47 = 8LL;
  v49 = 4LL;
  v54 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(
           PDC_EVENT_PROVIDER_Context,
           (const EVENT_DESCRIPTOR *)PDCV2_ACTIVATION_RENEW_ACTIVATION,
           0LL,
           0x11u,
           &v19);
}
