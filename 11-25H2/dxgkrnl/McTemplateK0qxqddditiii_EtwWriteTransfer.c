/*
 * XREFs of McTemplateK0qxqddditiii_EtwWriteTransfer @ 0x1400921C8
 * Callers:
 *     ?QueryPresentStats@BLTQUEUE@@QEAAJPEAU_D3DKMT_PRESENT_STATS@@@Z @ 0x14027BA3C (-QueryPresentStats@BLTQUEUE@@QEAAJPEAU_D3DKMT_PRESENT_STATS@@@Z.c)
 *     ?QueryPresentStatsDWM@BLTQUEUE@@QEAAJPEAU_D3DKMT_PRESENT_STATS_DWM2@@@Z @ 0x1402A3D74 (-QueryPresentStatsDWM@BLTQUEUE@@QEAAJPEAU_D3DKMT_PRESENT_STATS_DWM2@@@Z.c)
 *     ?UpdatePresentStats@BLTQUEUE@@AEAAXPEAVBLTENTRY@@PEAU__BLTWAITINFO@1@@Z @ 0x1403053B8 (-UpdatePresentStats@BLTQUEUE@@AEAAXPEAVBLTENTRY@@PEAU__BLTWAITINFO@1@@Z.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400156A8 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qxqddditiii_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9,
        char a10,
        char a11,
        char a12,
        char a13,
        char a14)
{
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+30h] [rbp-C9h] BYREF
  int *v16; // [rsp+40h] [rbp-B9h]
  __int64 v17; // [rsp+48h] [rbp-B1h]
  char *v18; // [rsp+50h] [rbp-A9h]
  __int64 v19; // [rsp+58h] [rbp-A1h]
  char *v20; // [rsp+60h] [rbp-99h]
  __int64 v21; // [rsp+68h] [rbp-91h]
  char *v22; // [rsp+70h] [rbp-89h]
  __int64 v23; // [rsp+78h] [rbp-81h]
  char *v24; // [rsp+80h] [rbp-79h]
  __int64 v25; // [rsp+88h] [rbp-71h]
  char *v26; // [rsp+90h] [rbp-69h]
  __int64 v27; // [rsp+98h] [rbp-61h]
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
  int v38; // [rsp+128h] [rbp+2Fh] BYREF

  v38 = a4;
  v17 = 4LL;
  v16 = &v38;
  v19 = 8LL;
  v18 = &a5;
  v21 = 4LL;
  v20 = &a6;
  v23 = 4LL;
  v22 = &a7;
  v24 = &a8;
  v26 = &a9;
  v28 = &a10;
  v30 = &a11;
  v32 = &a12;
  v34 = &a13;
  v36 = &a14;
  v25 = 4LL;
  v27 = 4LL;
  v29 = 8LL;
  v31 = 4LL;
  v33 = 8LL;
  v35 = 8LL;
  v37 = 8LL;
  return McGenEventWrite_EtwWriteTransfer(
           (REGHANDLE *)&DxgkControlGuid_Context,
           &EventBltQueuePresentStats,
           a3,
           0xCu,
           &v15);
}
