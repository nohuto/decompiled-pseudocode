/*
 * XREFs of WPP_RECORDER_SF_H @ 0x140034464
 * Callers:
 *     HUBMISC_GenerateControllerSuffix @ 0x140030164 (HUBMISC_GenerateControllerSuffix.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 */

__int64 WPP_RECORDER_SF_H(__int64 a1, _DWORD a2, _DWORD a3, _DWORD a4, __int64 a5, ...)
{
  int v7; // [rsp+20h] [rbp-28h]
  va_list va; // [rsp+78h] [rbp+30h] BYREF

  va_start(va, a5);
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_a8f221bb5af334040897444f02cc5603_Traceguids,
      123LL,
      va,
      2LL,
      0LL);
  LOWORD(v7) = 123;
  return WppAutoLogTrace(a1, 2LL, 5LL, &WPP_a8f221bb5af334040897444f02cc5603_Traceguids, v7, va, 2LL, 0LL);
}
