/*
 * XREFs of WPP_RECORDER_SF_HH @ 0x140034510
 * Callers:
 *     HUBMISC_GenerateControllerSuffix @ 0x140030164 (HUBMISC_GenerateControllerSuffix.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 */

__int64 WPP_RECORDER_SF_HH(__int64 a1, _DWORD a2, _DWORD a3, _DWORD a4, __int64 a5, ...)
{
  int v7; // [rsp+20h] [rbp-48h]
  _WORD v8[12]; // [rsp+50h] [rbp-18h] BYREF
  va_list va; // [rsp+98h] [rbp+30h] BYREF

  va_start(va, a5);
  v8[0] = 4;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, __int64, char *, __int64, _WORD *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_a8f221bb5af334040897444f02cc5603_Traceguids,
      124LL,
      va,
      2LL,
      v8,
      2LL,
      0LL);
  LOWORD(v7) = 124;
  return WppAutoLogTrace(a1, 2LL, 5LL, &WPP_a8f221bb5af334040897444f02cc5603_Traceguids, v7, va, 2LL, v8);
}
