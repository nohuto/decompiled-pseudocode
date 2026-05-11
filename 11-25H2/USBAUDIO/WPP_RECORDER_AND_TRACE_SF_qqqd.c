/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qqqd @ 0x14000E2A8
 * Callers:
 *     USBType1CompleteCallback @ 0x140003520 (USBType1CompleteCallback.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14001C680 (_guard_dispatch_icall.c)
 */

__int64 WPP_RECORDER_AND_TRACE_SF_qqqd(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned __int16 a7,
        __int64 a8,
        ...)
{
  __int64 result; // rax
  int v11; // [rsp+20h] [rbp-58h]
  __int64 v12; // [rsp+C0h] [rbp+48h] BYREF
  va_list va; // [rsp+C0h] [rbp+48h]
  __int64 v14; // [rsp+C8h] [rbp+50h] BYREF
  va_list va1; // [rsp+C8h] [rbp+50h]
  __int64 v16; // [rsp+D0h] [rbp+58h] BYREF
  va_list va2; // [rsp+D0h] [rbp+58h]
  va_list va3; // [rsp+D8h] [rbp+60h] BYREF

  va_start(va3, a8);
  va_start(va2, a8);
  va_start(va1, a8);
  va_start(va, a8);
  v12 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v14 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v16 = va_arg(va3, _QWORD);
  if ( a2 )
    result = ((__int64 (__fastcall *)(__int64, __int64, void *, _QWORD, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
               a1,
               43LL,
               &WPP_f0d25a81eb873d2c4a08e4f8b28fc432_Traceguids,
               a7,
               (__int64 *)va,
               8LL,
               (__int64 *)va1,
               8LL,
               (__int64 *)va2,
               8LL,
               va3,
               4LL,
               0LL);
  if ( a3 )
  {
    LOWORD(v11) = a7;
    return WppAutoLogTrace(
             a4,
             0LL,
             3LL,
             &WPP_f0d25a81eb873d2c4a08e4f8b28fc432_Traceguids,
             v11,
             (__int64 *)va,
             8LL,
             (__int64 *)va1,
             8LL,
             (__int64 *)va2,
             8LL,
             va3);
  }
  return result;
}
