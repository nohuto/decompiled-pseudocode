/*
 * XREFs of WPP_RECORDER_SF_qqLd @ 0x1C000645C
 * Callers:
 *     MouseClassDeviceControl @ 0x1C000F310 (MouseClassDeviceControl.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1C0006B20 (_guard_dispatch_icall.c)
 */

__int64 WPP_RECORDER_SF_qqLd(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  int v7; // [rsp+20h] [rbp-68h]
  int v8; // [rsp+70h] [rbp-18h] BYREF
  int v9; // [rsp+78h] [rbp-10h] BYREF
  __int64 v10; // [rsp+B8h] [rbp+30h] BYREF
  va_list va; // [rsp+B8h] [rbp+30h]
  va_list va1; // [rsp+C0h] [rbp+38h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v10 = va_arg(va1, _QWORD);
  v8 = -1073741789;
  v9 = 983040;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_d07d70ae1de939905882a75eef030211_Traceguids,
      25LL,
      (__int64 *)va,
      8LL,
      va1,
      8LL,
      &v9,
      4LL,
      &v8,
      4LL,
      0LL);
  LOWORD(v7) = 25;
  return WppAutoLogTrace(
           a1,
           2LL,
           4LL,
           &WPP_d07d70ae1de939905882a75eef030211_Traceguids,
           v7,
           (__int64 *)va,
           8LL,
           va1,
           8LL,
           &v9,
           4LL,
           &v8,
           4LL,
           0LL);
}
