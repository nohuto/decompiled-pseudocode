/*
 * XREFs of McTemplateK0pqXR1PR1qPR1_EtwWriteTransfer @ 0x140035E0C
 * Callers:
 *     ?UnblockCpuWaiter@@YA_NPEAUVIDSCH_CPU_WAITER@@PEAU_VIDSCH_SYNC_OBJECT@@PEA_K@Z @ 0x1400358F0 (-UnblockCpuWaiter@@YA_NPEAUVIDSCH_CPU_WAITER@@PEAU_VIDSCH_SYNC_OBJECT@@PEA_K@Z.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400190D0 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140056260 (__security_check_cookie.c)
 */

NTSTATUS McTemplateK0pqXR1PR1qPR1_EtwWriteTransfer(__int64 a1, __int64 a2, __int64 a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-51h] BYREF
  va_list v5; // [rsp+40h] [rbp-41h]
  __int64 v6; // [rsp+48h] [rbp-39h]
  va_list v7; // [rsp+50h] [rbp-31h]
  __int64 v8; // [rsp+58h] [rbp-29h]
  __int64 v9; // [rsp+60h] [rbp-21h]
  int v10; // [rsp+68h] [rbp-19h]
  int v11; // [rsp+6Ch] [rbp-15h]
  __int64 v12; // [rsp+70h] [rbp-11h]
  int v13; // [rsp+78h] [rbp-9h]
  int v14; // [rsp+7Ch] [rbp-5h]
  va_list v15; // [rsp+80h] [rbp-1h]
  __int64 v16; // [rsp+88h] [rbp+7h]
  __int64 v17; // [rsp+90h] [rbp+Fh]
  int v18; // [rsp+98h] [rbp+17h]
  int v19; // [rsp+9Ch] [rbp+1Bh]
  __int64 v20; // [rsp+D8h] [rbp+57h] BYREF
  va_list va; // [rsp+D8h] [rbp+57h]
  __int64 v22; // [rsp+E0h] [rbp+5Fh] BYREF
  va_list va1; // [rsp+E0h] [rbp+5Fh]
  __int64 v24; // [rsp+E8h] [rbp+67h]
  __int64 v25; // [rsp+F0h] [rbp+6Fh]
  __int64 v26; // [rsp+F8h] [rbp+77h] BYREF
  va_list va2; // [rsp+F8h] [rbp+77h]
  __int64 v28; // [rsp+100h] [rbp+7Fh]
  va_list va3; // [rsp+108h] [rbp+87h] BYREF

  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v20 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v22 = va_arg(va2, _QWORD);
  v24 = va_arg(va2, _QWORD);
  v25 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v26 = va_arg(va3, _QWORD);
  v28 = va_arg(va3, _QWORD);
  v6 = 8LL;
  v8 = 4LL;
  va_copy(v5, va);
  v11 = 0;
  va_copy(v7, va1);
  v9 = v24;
  v14 = 0;
  v16 = 4LL;
  v19 = 0;
  v12 = v25;
  va_copy(v15, va2);
  v17 = v28;
  v10 = 8 * v22;
  v13 = 8 * v22;
  v18 = 8 * v22;
  return McGenEventWrite_EtwWriteTransfer(&DxgkControlGuid_Context, &EventUnwaitCpuWaiter2, 0LL, 7u, &v4);
}
