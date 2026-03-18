/*
 * XREFs of McTemplateU0nxnnn_EventWriteTransfer @ 0x180285170
 * Callers:
 *     ?Ready@CTargetStats@@QEAA_N_K_N@Z @ 0x1800C9348 (-Ready@CTargetStats@@QEAA_N_K_N@Z.c)
 *     ?ReviseTargetMonitorTime@CTargetStats@@IEAAX_K0@Z @ 0x1800CAE40 (-ReviseTargetMonitorTime@CTargetStats@@IEAAX_K0@Z.c)
 *     ?GetTargetTime@CTargetStats@@QEAA_K_K0@Z @ 0x180140604 (-GetTargetTime@CTargetStats@@QEAA_K_K0@Z.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x1800B1240 (McGenEventWrite_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateU0nxnnn_EventWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11)
{
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+30h] [rbp-51h] BYREF
  __int64 v13; // [rsp+40h] [rbp-41h]
  __int64 v14; // [rsp+48h] [rbp-39h]
  char *v15; // [rsp+50h] [rbp-31h]
  __int64 v16; // [rsp+58h] [rbp-29h]
  __int64 v17; // [rsp+60h] [rbp-21h]
  __int64 v18; // [rsp+68h] [rbp-19h]
  __int64 v19; // [rsp+70h] [rbp-11h]
  __int64 v20; // [rsp+78h] [rbp-9h]
  __int64 v21; // [rsp+80h] [rbp-1h]
  __int64 v22; // [rsp+88h] [rbp+7h]

  v13 = a4;
  v15 = &a5;
  v17 = a7;
  v19 = a9;
  v21 = a11;
  v14 = 28LL;
  v16 = 8LL;
  v18 = 24LL;
  v20 = 24LL;
  v22 = 24LL;
  return McGenEventWrite_EventWriteTransfer(
           Microsoft_Windows_Dwm_Compositor_Context,
           &TargetStats_TargetTime,
           a3,
           6u,
           &v12);
}
