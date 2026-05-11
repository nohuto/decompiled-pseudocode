/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qdD @ 0x14000C48C
 * Callers:
 *     PowerSettingCallback @ 0x14000BF30 (PowerSettingCallback.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14001C680 (_guard_dispatch_icall.c)
 */

__int64 WPP_RECORDER_AND_TRACE_SF_qdD(
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
  int v11; // [rsp+20h] [rbp-58h]
  _DWORD v12[4]; // [rsp+60h] [rbp-18h] BYREF
  __int64 v13; // [rsp+C0h] [rbp+48h] BYREF
  va_list va; // [rsp+C0h] [rbp+48h]
  va_list va1; // [rsp+C8h] [rbp+50h] BYREF

  va_start(va1, a8);
  va_start(va, a8);
  v13 = va_arg(va1, _QWORD);
  v12[0] = -1073741811;
  if ( a2 )
    result = pfnWppTraceMessage(
               a1,
               43LL,
               &WPP_2bfdcd6a21f130676fcfbe1f4e3a8945_Traceguids,
               12LL,
               (__int64 *)va,
               8LL,
               va1,
               4LL,
               v12,
               4LL,
               0LL);
  if ( a3 )
  {
    LOWORD(v11) = 12;
    return WppAutoLogTrace(
             a4,
             0LL,
             1LL,
             &WPP_2bfdcd6a21f130676fcfbe1f4e3a8945_Traceguids,
             v11,
             (__int64 *)va,
             8LL,
             va1,
             4LL,
             v12,
             4LL,
             0LL);
  }
  return result;
}
