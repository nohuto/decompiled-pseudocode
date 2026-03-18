/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_DDqq @ 0x140289818
 * Callers:
 *     ?IsHotKey@@YAPEAUtagHOTKEY@@II@Z @ 0x1401C7F4C (-IsHotKey@@YAPEAUtagHOTKEY@@II@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 WPP_RECORDER_AND_TRACE_SF_DDqq(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7,
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
    result = ((__int64 (__fastcall *)(__int64, __int64, void *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
               a1,
               43LL,
               &WPP_0735e9b686cf323d257ae8be9898a1d6_Traceguids,
               16LL,
               (__int64 *)va,
               4LL,
               (__int64 *)va1,
               4LL,
               (__int64 *)va2,
               8LL,
               va3,
               8LL,
               0LL);
  if ( a3 )
  {
    LOWORD(v11) = 16;
    return WppAutoLogTrace(
             a4,
             4LL,
             6LL,
             &WPP_0735e9b686cf323d257ae8be9898a1d6_Traceguids,
             v11,
             (__int64 *)va,
             4LL,
             (__int64 *)va1,
             4LL,
             (__int64 *)va2,
             8LL,
             va3);
  }
  return result;
}
