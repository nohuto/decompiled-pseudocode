/*
 * XREFs of McTemplateK0pqqq_EtwWriteTransfer @ 0x140032B8C
 * Callers:
 *     HmgInsertObjectInternal @ 0x14001E500 (HmgInsertObjectInternal.c)
 *     ?vUnlockAndRelease@HANDLELOCK@@QEAAXXZ @ 0x140032060 (-vUnlockAndRelease@HANDLELOCK@@QEAAXXZ.c)
 *     ?Pid@HANDLELOCK@@QEAAXK@Z @ 0x140032EF8 (-Pid@HANDLELOCK@@QEAAXK@Z.c)
 *     HMAllocObjectEx @ 0x140041FF0 (HMAllocObjectEx.c)
 *     EtwTraceUserUpdateHandleOwner @ 0x1400624B0 (EtwTraceUserUpdateHandleOwner.c)
 *     EtwTraceUserCreateHandle @ 0x140063210 (EtwTraceUserCreateHandle.c)
 *     EtwTraceGdiCreateHandle @ 0x1400CACFC (EtwTraceGdiCreateHandle.c)
 *     EtwTraceUserDestroyHandle @ 0x1400D64AC (EtwTraceUserDestroyHandle.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x140033530 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

__int64 McTemplateK0pqqq_EtwWriteTransfer(__int64 a1, __int64 a2, __int64 a3, ...)
{
  _BYTE v4[16]; // [rsp+30h] [rbp-21h] BYREF
  va_list v5; // [rsp+40h] [rbp-11h]
  __int64 v6; // [rsp+48h] [rbp-9h]
  va_list v7; // [rsp+50h] [rbp-1h]
  __int64 v8; // [rsp+58h] [rbp+7h]
  va_list v9; // [rsp+60h] [rbp+Fh]
  __int64 v10; // [rsp+68h] [rbp+17h]
  va_list v11; // [rsp+70h] [rbp+1Fh]
  __int64 v12; // [rsp+78h] [rbp+27h]
  __int64 v13; // [rsp+B8h] [rbp+67h] BYREF
  va_list va; // [rsp+B8h] [rbp+67h]
  __int64 v15; // [rsp+C0h] [rbp+6Fh] BYREF
  va_list va1; // [rsp+C0h] [rbp+6Fh]
  __int64 v17; // [rsp+C8h] [rbp+77h] BYREF
  va_list va2; // [rsp+C8h] [rbp+77h]
  va_list va3; // [rsp+D0h] [rbp+7Fh] BYREF

  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v13 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v15 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v17 = va_arg(va3, _QWORD);
  v6 = 8LL;
  va_copy(v5, va);
  v8 = 4LL;
  va_copy(v7, va1);
  v10 = 4LL;
  va_copy(v9, va2);
  va_copy(v11, va3);
  v12 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(a1, a2, &W32kControlGuid, 5LL, v4);
}
