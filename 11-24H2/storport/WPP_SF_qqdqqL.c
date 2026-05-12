/*
 * XREFs of WPP_SF_qqdqqL @ 0x1400903A8
 * Callers:
 *     RaidUnlockContiguousPhysicalPagesList @ 0x140038CEC (RaidUnlockContiguousPhysicalPagesList.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

__int64 WPP_SF_qqdqqL(__int64 a1, __int64 a2, __int64 a3, ...)
{
  __int64 v4; // [rsp+B8h] [rbp+20h] BYREF
  va_list va; // [rsp+B8h] [rbp+20h]
  __int64 v6; // [rsp+C0h] [rbp+28h] BYREF
  va_list va1; // [rsp+C0h] [rbp+28h]
  __int64 v8; // [rsp+C8h] [rbp+30h] BYREF
  va_list va2; // [rsp+C8h] [rbp+30h]
  __int64 v10; // [rsp+D0h] [rbp+38h] BYREF
  va_list va3; // [rsp+D0h] [rbp+38h]
  __int64 v12; // [rsp+D8h] [rbp+40h] BYREF
  va_list va4; // [rsp+D8h] [rbp+40h]
  va_list va5; // [rsp+E0h] [rbp+48h] BYREF

  va_start(va5, a3);
  va_start(va4, a3);
  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v4 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v6 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v8 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v10 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v12 = va_arg(va5, _QWORD);
  return ((__int64 (__fastcall *)(__int64, __int64, void *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_fe6d764451ce35c6dcc82ee897ab329f_Traceguids,
           14LL,
           (__int64 *)va,
           8LL,
           (__int64 *)va1,
           8LL,
           (__int64 *)va2,
           4LL,
           (__int64 *)va3,
           8LL,
           (__int64 *)va4,
           8LL,
           va5,
           4LL,
           0LL);
}
