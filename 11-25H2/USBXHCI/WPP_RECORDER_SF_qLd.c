/*
 * XREFs of WPP_RECORDER_SF_qLD @ 0x1400451D0
 * Callers:
 *     Controller_WdfEvtDeviceUsageNotification @ 0x14007A6F0 (Controller_WdfEvtDeviceUsageNotification.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

__int64 WPP_RECORDER_SF_qLD(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  int v7; // [rsp+20h] [rbp-48h]
  __int64 v8; // [rsp+98h] [rbp+30h] BYREF
  va_list va; // [rsp+98h] [rbp+30h]
  __int64 v10; // [rsp+A0h] [rbp+38h] BYREF
  va_list va1; // [rsp+A0h] [rbp+38h]
  va_list va2; // [rsp+A8h] [rbp+40h] BYREF

  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v8 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v10 = va_arg(va2, _QWORD);
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, __int64, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids,
      55LL,
      (__int64 *)va,
      8LL,
      (__int64 *)va1,
      4LL,
      va2,
      4LL,
      0LL);
  LOWORD(v7) = 55;
  return WppAutoLogTrace(
           a1,
           4LL,
           4LL,
           &WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids,
           v7,
           (__int64 *)va,
           8LL,
           (__int64 *)va1,
           4LL,
           va2);
}
