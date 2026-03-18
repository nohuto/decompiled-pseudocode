/*
 * XREFs of McTemplateU0xxxxq_EventWriteTransfer @ 0x1801FE5C8
 * Callers:
 *     ?ProcessComposition@CComposition@@QEAAXXZ @ 0x1800E6E20 (-ProcessComposition@CComposition@@QEAAXXZ.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x1800B1240 (McGenEventWrite_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateU0xxxxq_EventWriteTransfer(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // [rsp+30h] [rbp-51h] BYREF
  __int64 v5; // [rsp+38h] [rbp-49h] BYREF
  __int64 v6; // [rsp+40h] [rbp-41h] BYREF
  __int64 v7; // [rsp+48h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+50h] [rbp-31h] BYREF
  __int64 *v9; // [rsp+60h] [rbp-21h]
  __int64 v10; // [rsp+68h] [rbp-19h]
  __int64 *v11; // [rsp+70h] [rbp-11h]
  __int64 v12; // [rsp+78h] [rbp-9h]
  __int64 *v13; // [rsp+80h] [rbp-1h]
  __int64 v14; // [rsp+88h] [rbp+7h]
  __int64 *v15; // [rsp+90h] [rbp+Fh]
  __int64 v16; // [rsp+98h] [rbp+17h]
  int *v17; // [rsp+A0h] [rbp+1Fh]
  __int64 v18; // [rsp+A8h] [rbp+27h]
  __int64 v19; // [rsp+E0h] [rbp+5Fh] BYREF

  v19 = a3;
  v10 = 8LL;
  v4 = 0;
  v9 = &v19;
  v7 = 0LL;
  v11 = &v5;
  v6 = 0LL;
  v13 = &v6;
  v15 = &v7;
  v17 = &v4;
  v5 = 0LL;
  v12 = 8LL;
  v14 = 8LL;
  v16 = 8LL;
  v18 = 4LL;
  return McGenEventWrite_EventWriteTransfer(
           &Microsoft_Windows_Dwm_Core_Provider_Context,
           &EVTDESC_SCHEDULE_PRESENT_Start,
           a3,
           6u,
           &v8);
}
