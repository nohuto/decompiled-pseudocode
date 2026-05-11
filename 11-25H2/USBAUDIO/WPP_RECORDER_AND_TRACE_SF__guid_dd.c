/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF__guid_dd @ 0x1400081F4
 * Callers:
 *     PropertySetBoolean @ 0x14003E690 (PropertySetBoolean.c)
 *     PropertySetDbLevel @ 0x14003E940 (PropertySetDbLevel.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14001C680 (_guard_dispatch_icall.c)
 */

__int64 WPP_RECORDER_AND_TRACE_SF__guid_dd(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        int a5,
        int a6,
        unsigned __int16 a7,
        int a8,
        __int64 a9,
        ...)
{
  __int64 result; // rax
  int v12; // [rsp+20h] [rbp-48h]
  __int64 v13; // [rsp+B8h] [rbp+50h] BYREF
  va_list va; // [rsp+B8h] [rbp+50h]
  va_list va1; // [rsp+C0h] [rbp+58h] BYREF

  va_start(va1, a9);
  va_start(va, a9);
  v13 = va_arg(va1, _QWORD);
  if ( a2 )
    result = ((__int64 (__fastcall *)(__int64, __int64, void *, _QWORD, __int64, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
               a1,
               43LL,
               &WPP_b83ba1dee83736acd1729b525419a2d7_Traceguids,
               a7,
               a9,
               16LL,
               (__int64 *)va,
               4LL,
               va1,
               4LL,
               0LL);
  if ( a3 )
  {
    LOWORD(v12) = a7;
    return WppAutoLogTrace(
             a4,
             0LL,
             10LL,
             &WPP_b83ba1dee83736acd1729b525419a2d7_Traceguids,
             v12,
             a9,
             16LL,
             (__int64 *)va,
             4LL,
             va1,
             4LL,
             0LL);
  }
  return result;
}
