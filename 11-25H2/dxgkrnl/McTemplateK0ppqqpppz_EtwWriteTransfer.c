/*
 * XREFs of McTemplateK0ppqqpppz_EtwWriteTransfer @ 0x140077318
 * Callers:
 *     ?DestroyVmProcess@DXGPROCESSVM@@QEAAXXZ @ 0x140182BA4 (-DestroyVmProcess@DXGPROCESSVM@@QEAAXXZ.c)
 *     ?VmBusCreateProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14021AE20 (-VmBusCreateProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?ReportProcess@DXGPROCESS@@QEAAXXZ @ 0x1403B3124 (-ReportProcess@DXGPROCESS@@QEAAXXZ.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400156A8 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 */

NTSTATUS McTemplateK0ppqqpppz_EtwWriteTransfer(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, ...)
{
  const wchar_t *v3; // rcx
  __int64 v4; // rax
  int v5; // eax
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+30h] [rbp-81h] BYREF
  va_list v8; // [rsp+40h] [rbp-71h]
  __int64 v9; // [rsp+48h] [rbp-69h]
  va_list v10; // [rsp+50h] [rbp-61h]
  __int64 v11; // [rsp+58h] [rbp-59h]
  va_list v12; // [rsp+60h] [rbp-51h]
  __int64 v13; // [rsp+68h] [rbp-49h]
  va_list v14; // [rsp+70h] [rbp-41h]
  __int64 v15; // [rsp+78h] [rbp-39h]
  va_list v16; // [rsp+80h] [rbp-31h]
  __int64 v17; // [rsp+88h] [rbp-29h]
  va_list v18; // [rsp+90h] [rbp-21h]
  __int64 v19; // [rsp+98h] [rbp-19h]
  va_list v20; // [rsp+A0h] [rbp-11h]
  __int64 v21; // [rsp+A8h] [rbp-9h]
  const wchar_t *v22; // [rsp+B0h] [rbp-1h]
  int v23; // [rsp+B8h] [rbp+7h]
  int v24; // [rsp+BCh] [rbp+Bh]
  __int64 v25; // [rsp+F8h] [rbp+47h] BYREF
  va_list va; // [rsp+F8h] [rbp+47h]
  __int64 v27; // [rsp+100h] [rbp+4Fh] BYREF
  va_list va1; // [rsp+100h] [rbp+4Fh]
  __int64 v29; // [rsp+108h] [rbp+57h] BYREF
  va_list va2; // [rsp+108h] [rbp+57h]
  __int64 v31; // [rsp+110h] [rbp+5Fh] BYREF
  va_list va3; // [rsp+110h] [rbp+5Fh]
  __int64 v33; // [rsp+118h] [rbp+67h] BYREF
  va_list va4; // [rsp+118h] [rbp+67h]
  __int64 v35; // [rsp+120h] [rbp+6Fh] BYREF
  va_list va5; // [rsp+120h] [rbp+6Fh]
  __int64 v37; // [rsp+128h] [rbp+77h] BYREF
  va_list va6; // [rsp+128h] [rbp+77h]
  const wchar_t *v39; // [rsp+130h] [rbp+7Fh]
  va_list va7; // [rsp+138h] [rbp+87h] BYREF

  va_start(va7, a3);
  va_start(va6, a3);
  va_start(va5, a3);
  va_start(va4, a3);
  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v25 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v27 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v29 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v31 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v33 = va_arg(va5, _QWORD);
  va_copy(va6, va5);
  v35 = va_arg(va6, _QWORD);
  va_copy(va7, va6);
  v37 = va_arg(va7, _QWORD);
  v39 = va_arg(va7, const wchar_t *);
  v3 = v39;
  va_copy(v8, va);
  v9 = 8LL;
  va_copy(v10, va1);
  va_copy(v12, va2);
  va_copy(v14, va3);
  va_copy(v16, va4);
  va_copy(v18, va5);
  va_copy(v20, va6);
  v11 = 8LL;
  v13 = 4LL;
  v15 = 4LL;
  v17 = 8LL;
  v19 = 8LL;
  v21 = 8LL;
  if ( v39 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( v39[v4] );
    v5 = 2 * v4 + 2;
  }
  else
  {
    v5 = 10;
  }
  v23 = v5;
  v24 = 0;
  if ( !v39 )
    v3 = L"NULL";
  v22 = v3;
  return McGenEventWrite_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, a2, (__int64)L"NULL", 9u, &v7);
}
