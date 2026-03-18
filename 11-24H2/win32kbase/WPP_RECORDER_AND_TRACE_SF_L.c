/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_l @ 0x14012F6D0
 * Callers:
 *     UpdateMouseConnectionState @ 0x14012BF88 (UpdateMouseConnectionState.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 WPP_RECORDER_AND_TRACE_SF_l(__int64 a1, char a2, char a3, __int64 a4, int a5, int a6, int a7, int a8, ...)
{
  __int64 result; // rax
  int v11; // [rsp+20h] [rbp-28h]
  va_list va; // [rsp+90h] [rbp+48h] BYREF

  va_start(va, a8);
  if ( a2 )
    result = ((__int64 (__fastcall *)(__int64, __int64, void *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
               a1,
               43LL,
               &WPP_3a4616fad8403277dc93d19f568e60cb_Traceguids,
               11LL,
               va,
               4LL,
               0LL);
  if ( a3 )
  {
    LOWORD(v11) = 11;
    return WppAutoLogTrace(a4, 4LL, 2LL, &WPP_3a4616fad8403277dc93d19f568e60cb_Traceguids, v11, va, 4LL, 0LL);
  }
  return result;
}
