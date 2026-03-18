/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_dq @ 0x14021A230
 * Callers:
 *     ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z @ 0x14018AF58 (-ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 WPP_RECORDER_AND_TRACE_SF_dq(__int64 a1, char a2, char a3, __int64 a4, int a5, int a6, int a7, int a8, ...)
{
  __int64 result; // rax
  int v11; // [rsp+20h] [rbp-38h]
  __int64 v12; // [rsp+A0h] [rbp+48h] BYREF
  va_list va; // [rsp+A0h] [rbp+48h]
  va_list va1; // [rsp+A8h] [rbp+50h] BYREF

  va_start(va1, a8);
  va_start(va, a8);
  v12 = va_arg(va1, _QWORD);
  if ( a2 )
    result = ((__int64 (__fastcall *)(__int64, __int64, void *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
               a1,
               43LL,
               &WPP_4438f3a2f9f43d777ccb023a4199db82_Traceguids,
               31LL,
               (__int64 *)va,
               4LL,
               va1,
               8LL,
               0LL);
  if ( a3 )
  {
    LOWORD(v11) = 31;
    return WppAutoLogTrace(a4, 2LL, 2LL, &WPP_4438f3a2f9f43d777ccb023a4199db82_Traceguids, v11, (__int64 *)va, 4LL, va1);
  }
  return result;
}
