/*
 * XREFs of McTemplateK0pppnnn_EtwWriteTransfer @ 0x14000AD1C
 * Callers:
 *     Etw_EndpointListRundown @ 0x14000A880 (Etw_EndpointListRundown.c)
 *     Etw_EndpointUpdate @ 0x14001F948 (Etw_EndpointUpdate.c)
 *     Endpoint_EvtEndpointCleanupCallback @ 0x14002D310 (Endpoint_EvtEndpointCleanupCallback.c)
 *     Etw_EndpointCreate @ 0x1400313AC (Etw_EndpointCreate.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x14000C8C0 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140058AC0 (__security_check_cookie.c)
 */

__int64 McTemplateK0pppnnn_EtwWriteTransfer(__int64 a1, __int64 a2, __int64 a3, ...)
{
  _BYTE v4[16]; // [rsp+30h] [rbp-69h] BYREF
  va_list v5; // [rsp+40h] [rbp-59h]
  __int64 v6; // [rsp+48h] [rbp-51h]
  va_list v7; // [rsp+50h] [rbp-49h]
  __int64 v8; // [rsp+58h] [rbp-41h]
  va_list v9; // [rsp+60h] [rbp-39h]
  __int64 v10; // [rsp+68h] [rbp-31h]
  __int64 v11; // [rsp+70h] [rbp-29h]
  __int64 v12; // [rsp+78h] [rbp-21h]
  __int64 v13; // [rsp+80h] [rbp-19h]
  __int64 v14; // [rsp+88h] [rbp-11h]
  __int64 v15; // [rsp+90h] [rbp-9h]
  __int64 v16; // [rsp+98h] [rbp-1h]
  __int64 v17; // [rsp+D8h] [rbp+3Fh] BYREF
  va_list va; // [rsp+D8h] [rbp+3Fh]
  __int64 v19; // [rsp+E0h] [rbp+47h] BYREF
  va_list va1; // [rsp+E0h] [rbp+47h]
  __int64 v21; // [rsp+E8h] [rbp+4Fh] BYREF
  va_list va2; // [rsp+E8h] [rbp+4Fh]
  __int64 v23; // [rsp+F0h] [rbp+57h]
  __int64 v24; // [rsp+F8h] [rbp+5Fh]
  __int64 v25; // [rsp+100h] [rbp+67h]
  __int64 v26; // [rsp+108h] [rbp+6Fh]
  __int64 v27; // [rsp+110h] [rbp+77h]
  __int64 v28; // [rsp+118h] [rbp+7Fh]
  va_list va3; // [rsp+120h] [rbp+87h] BYREF

  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v17 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v19 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v21 = va_arg(va3, _QWORD);
  v23 = va_arg(va3, _QWORD);
  v24 = va_arg(va3, _QWORD);
  v25 = va_arg(va3, _QWORD);
  v26 = va_arg(va3, _QWORD);
  v27 = va_arg(va3, _QWORD);
  v28 = va_arg(va3, _QWORD);
  v6 = 8LL;
  va_copy(v5, va);
  v8 = 8LL;
  va_copy(v7, va1);
  va_copy(v9, va2);
  v11 = v24;
  v13 = v26;
  v15 = v28;
  v10 = 8LL;
  v12 = 7LL;
  v14 = 6LL;
  v16 = 8LL;
  return McGenEventWrite_EtwWriteTransfer(a1, a2, a3, 7LL, v4);
}
