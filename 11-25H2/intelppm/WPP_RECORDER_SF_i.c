/*
 * XREFs of WPP_RECORDER_SF_i @ 0x14000CA9C
 * Callers:
 *     Display_LPI @ 0x140034288 (Display_LPI.c)
 *     Display_PSS @ 0x140034838 (Display_PSS.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14000FF90 (_guard_dispatch_icall.c)
 */

__int64 WPP_RECORDER_SF_i(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4, int a5, ...)
{
  int v8; // [rsp+20h] [rbp-28h]
  va_list va; // [rsp+78h] [rbp+30h] BYREF

  va_start(va, a5);
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids,
      a4,
      va,
      8LL,
      0LL);
  LOWORD(v8) = a4;
  return WppAutoLogTrace(a1, 5LL, 2LL, &WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids, v8, va, 8LL, 0LL);
}
