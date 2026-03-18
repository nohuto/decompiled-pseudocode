/*
 * XREFs of McTemplateK0pqun_EtwWriteTransfer @ 0x1400020D4
 * Callers:
 *     HUBDRIVER_EtwRundownHub @ 0x140079248 (HUBDRIVER_EtwRundownHub.c)
 *     HUBFDO_EvtDevicePrepareHardware @ 0x14007B8E0 (HUBFDO_EvtDevicePrepareHardware.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x140001A30 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140045CC0 (__security_check_cookie.c)
 */

NTSTATUS McTemplateK0pqun_EtwWriteTransfer(__int64 a1, const EVENT_DESCRIPTOR *a2, const GUID *a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-29h] BYREF
  va_list v5; // [rsp+40h] [rbp-19h]
  __int64 v6; // [rsp+48h] [rbp-11h]
  va_list v7; // [rsp+50h] [rbp-9h]
  __int64 v8; // [rsp+58h] [rbp-1h]
  va_list v9; // [rsp+60h] [rbp+7h]
  __int64 v10; // [rsp+68h] [rbp+Fh]
  __int64 v11; // [rsp+70h] [rbp+17h]
  __int64 v12; // [rsp+78h] [rbp+1Fh]
  __int64 v13; // [rsp+B8h] [rbp+5Fh] BYREF
  va_list va; // [rsp+B8h] [rbp+5Fh]
  __int64 v15; // [rsp+C0h] [rbp+67h] BYREF
  va_list va1; // [rsp+C0h] [rbp+67h]
  __int64 v17; // [rsp+C8h] [rbp+6Fh] BYREF
  va_list va2; // [rsp+C8h] [rbp+6Fh]
  __int64 v19; // [rsp+D0h] [rbp+77h]
  __int64 v20; // [rsp+D8h] [rbp+7Fh]
  va_list va3; // [rsp+E0h] [rbp+87h] BYREF

  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v13 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v15 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v17 = va_arg(va3, _QWORD);
  v19 = va_arg(va3, _QWORD);
  v20 = va_arg(va3, _QWORD);
  v6 = 8LL;
  va_copy(v5, va);
  v8 = 4LL;
  va_copy(v7, va1);
  va_copy(v9, va2);
  v11 = v20;
  v10 = 1LL;
  v12 = 12LL;
  return McGenEventWrite_EtwWriteTransfer(a1, a2, a3, 5u, &v4);
}
