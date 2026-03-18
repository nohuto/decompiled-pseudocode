/*
 * XREFs of McTemplateK0ppqqxdqp_EtwWriteTransfer @ 0x140025D54
 * Callers:
 *     ?PropagatePresentHistoryToken@DXGPRESENTHISTORYTOKENQUEUE@@QEAAXPEAU_D3DKMT_PRESENTHISTORYTOKEN@@_N111111PEAX@Z @ 0x140026104 (-PropagatePresentHistoryToken@DXGPRESENTHISTORYTOKENQUEUE@@QEAAXPEAU_D3DKMT_PRESENTHISTORYTOKEN@.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x14000DC70 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140055E20 (__security_check_cookie.c)
 */

NTSTATUS McTemplateK0ppqqxdqp_EtwWriteTransfer(__int64 a1, __int64 a2, __int64 a3, ...)
{
  int v4; // [rsp+30h] [rbp-B1h] BYREF
  int v5; // [rsp+38h] [rbp-A9h] BYREF
  int v6; // [rsp+40h] [rbp-A1h] BYREF
  int v7; // [rsp+48h] [rbp-99h] BYREF
  __int64 v8; // [rsp+50h] [rbp-91h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+60h] [rbp-81h] BYREF
  va_list v10; // [rsp+70h] [rbp-71h]
  __int64 v11; // [rsp+78h] [rbp-69h]
  va_list v12; // [rsp+80h] [rbp-61h]
  __int64 v13; // [rsp+88h] [rbp-59h]
  int *v14; // [rsp+90h] [rbp-51h]
  __int64 v15; // [rsp+98h] [rbp-49h]
  int *v16; // [rsp+A0h] [rbp-41h]
  __int64 v17; // [rsp+A8h] [rbp-39h]
  __int64 *v18; // [rsp+B0h] [rbp-31h]
  __int64 v19; // [rsp+B8h] [rbp-29h]
  int *v20; // [rsp+C0h] [rbp-21h]
  __int64 v21; // [rsp+C8h] [rbp-19h]
  int *v22; // [rsp+D0h] [rbp-11h]
  __int64 v23; // [rsp+D8h] [rbp-9h]
  va_list v24; // [rsp+E0h] [rbp-1h]
  __int64 v25; // [rsp+E8h] [rbp+7h]
  __int64 v26; // [rsp+128h] [rbp+47h] BYREF
  va_list va; // [rsp+128h] [rbp+47h]
  __int64 v28; // [rsp+130h] [rbp+4Fh] BYREF
  va_list va1; // [rsp+130h] [rbp+4Fh]
  __int64 v30; // [rsp+138h] [rbp+57h]
  __int64 v31; // [rsp+140h] [rbp+5Fh]
  __int64 v32; // [rsp+148h] [rbp+67h]
  __int64 v33; // [rsp+150h] [rbp+6Fh]
  __int64 v34; // [rsp+158h] [rbp+77h]
  va_list va2; // [rsp+160h] [rbp+7Fh] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v26 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v28 = va_arg(va2, _QWORD);
  v30 = va_arg(va2, _QWORD);
  v31 = va_arg(va2, _QWORD);
  v32 = va_arg(va2, _QWORD);
  v33 = va_arg(va2, _QWORD);
  v34 = va_arg(va2, _QWORD);
  v11 = 8LL;
  v7 = 0;
  va_copy(v10, va);
  v6 = 0;
  va_copy(v12, va1);
  v8 = 0LL;
  v14 = &v4;
  v5 = 0;
  v16 = &v5;
  v18 = &v8;
  v20 = &v6;
  v22 = &v7;
  va_copy(v24, va2);
  v4 = 0;
  v13 = 8LL;
  v15 = 4LL;
  v17 = 4LL;
  v19 = 8LL;
  v21 = 4LL;
  v23 = 4LL;
  v25 = 8LL;
  return McGenEventWrite_EtwWriteTransfer(&DxgkControlGuid_Context, &EventPropagatePresentHistory, 0LL, 9u, &v9);
}
