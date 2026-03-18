/*
 * XREFs of McTemplateK0ppqqxdqp_EtwWriteTransfer @ 0x140013F38
 * Callers:
 *     ?PropagatePresentHistoryToken@DXGPRESENTHISTORYTOKENQUEUE@@QEAAXPEAU_D3DKMT_PRESENTHISTORYTOKEN@@_N111111PEAX@Z @ 0x140013D14 (-PropagatePresentHistoryToken@DXGPRESENTHISTORYTOKENQUEUE@@QEAAXPEAU_D3DKMT_PRESENTHISTORYTOKEN@.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400190D0 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140056260 (__security_check_cookie.c)
 */

__int64 McTemplateK0ppqqxdqp_EtwWriteTransfer(_DWORD a1, _DWORD a2, _BYTE a3, __int64 a4, ...)
{
  int v5; // [rsp+30h] [rbp-B1h] BYREF
  int v6; // [rsp+38h] [rbp-A9h] BYREF
  int v7; // [rsp+40h] [rbp-A1h] BYREF
  int v8; // [rsp+48h] [rbp-99h] BYREF
  _QWORD v9[20]; // [rsp+50h] [rbp-91h] BYREF
  __int64 v10; // [rsp+128h] [rbp+47h] BYREF
  __int64 v11; // [rsp+130h] [rbp+4Fh] BYREF
  va_list va; // [rsp+130h] [rbp+4Fh]
  __int64 v13; // [rsp+138h] [rbp+57h]
  __int64 v14; // [rsp+140h] [rbp+5Fh]
  __int64 v15; // [rsp+148h] [rbp+67h]
  __int64 v16; // [rsp+150h] [rbp+6Fh]
  __int64 v17; // [rsp+158h] [rbp+77h]
  va_list va1; // [rsp+160h] [rbp+7Fh] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v11 = va_arg(va1, _QWORD);
  v13 = va_arg(va1, _QWORD);
  v14 = va_arg(va1, _QWORD);
  v15 = va_arg(va1, _QWORD);
  v16 = va_arg(va1, _QWORD);
  v17 = va_arg(va1, _QWORD);
  v10 = a4;
  v9[5] = 8LL;
  v8 = 0;
  v9[4] = &v10;
  v7 = 0;
  va_copy((va_list)&v9[6], va);
  v9[0] = 0LL;
  v9[8] = &v5;
  v6 = 0;
  v9[10] = &v6;
  v9[12] = v9;
  v9[14] = &v7;
  v9[16] = &v8;
  va_copy((va_list)&v9[18], va1);
  v5 = 0;
  v9[7] = 8LL;
  v9[9] = 4LL;
  v9[11] = 4LL;
  v9[13] = 8LL;
  v9[15] = 4LL;
  v9[17] = 4LL;
  v9[19] = 8LL;
  return McGenEventWrite_EtwWriteTransfer(&DxgkControlGuid_Context);
}
