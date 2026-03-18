/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_DLD @ 0x1402AC0E4
 * Callers:
 *     ?TraceTopology@CMonitorTopology@@QEBAXXZ @ 0x1402AB77C (-TraceTopology@CMonitorTopology@@QEBAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 WPP_RECORDER_AND_TRACE_SF_DLD(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        ...)
{
  __int64 result; // rax
  int v11; // [rsp+20h] [rbp-48h]
  __int64 v12; // [rsp+B0h] [rbp+48h] BYREF
  va_list va; // [rsp+B0h] [rbp+48h]
  __int64 v14; // [rsp+B8h] [rbp+50h] BYREF
  va_list va1; // [rsp+B8h] [rbp+50h]
  va_list va2; // [rsp+C0h] [rbp+58h] BYREF

  va_start(va2, a8);
  va_start(va1, a8);
  va_start(va, a8);
  v12 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v14 = va_arg(va2, _QWORD);
  if ( a2 )
    result = ((__int64 (__fastcall *)(__int64, __int64, void *, __int64, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
               a1,
               43LL,
               &WPP_f02a4a4a8b293b2feea165eb98bca231_Traceguids,
               22LL,
               (__int64 *)va,
               4LL,
               (__int64 *)va1,
               4LL,
               va2,
               4LL,
               0LL);
  if ( a3 )
  {
    LOWORD(v11) = 22;
    return WppAutoLogTrace(
             a4,
             5LL,
             7LL,
             &WPP_f02a4a4a8b293b2feea165eb98bca231_Traceguids,
             v11,
             (__int64 *)va,
             4LL,
             (__int64 *)va1,
             4LL,
             va2,
             4LL,
             0LL);
  }
  return result;
}
