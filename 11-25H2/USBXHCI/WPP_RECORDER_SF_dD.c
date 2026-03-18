/*
 * XREFs of WPP_RECORDER_SF_Dd @ 0x1400494C8
 * Callers:
 *     Interrupter_PrepareHardware @ 0x14007C634 (Interrupter_PrepareHardware.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

__int64 WPP_RECORDER_SF_Dd(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4, int a5, ...)
{
  int v8; // [rsp+20h] [rbp-38h]
  __int64 v9; // [rsp+88h] [rbp+30h] BYREF
  va_list va; // [rsp+88h] [rbp+30h]
  va_list va1; // [rsp+90h] [rbp+38h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v9 = va_arg(va1, _QWORD);
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, _QWORD, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_7c6d88ad550c373b598f9d026beeab64_Traceguids,
      a4,
      (__int64 *)va,
      4LL,
      va1,
      4LL,
      0LL);
  LOWORD(v8) = a4;
  return WppAutoLogTrace(
           a1,
           2LL,
           9LL,
           &WPP_7c6d88ad550c373b598f9d026beeab64_Traceguids,
           v8,
           (__int64 *)va,
           4LL,
           va1,
           4LL,
           0LL);
}
