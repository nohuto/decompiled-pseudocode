/*
 * XREFs of WPP_RECORDER_SF_ddddidLL @ 0x140021EE0
 * Callers:
 *     Interrupter_DeferredWorkProcessor @ 0x140025E20 (Interrupter_DeferredWorkProcessor.c)
 *     Interrupter_DeferredWorkProcessorWithVelocityFor48657796Disabled @ 0x140048624 (Interrupter_DeferredWorkProcessorWithVelocityFor48657796Disabled.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

__int64 WPP_RECORDER_SF_ddddidLL(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4, int a5, ...)
{
  int v8; // [rsp+20h] [rbp-98h]
  __int64 v9; // [rsp+E8h] [rbp+30h] BYREF
  va_list va; // [rsp+E8h] [rbp+30h]
  __int64 v11; // [rsp+F0h] [rbp+38h] BYREF
  va_list va1; // [rsp+F0h] [rbp+38h]
  __int64 v13; // [rsp+F8h] [rbp+40h] BYREF
  va_list va2; // [rsp+F8h] [rbp+40h]
  __int64 v15; // [rsp+100h] [rbp+48h] BYREF
  va_list va3; // [rsp+100h] [rbp+48h]
  __int64 v17; // [rsp+108h] [rbp+50h] BYREF
  va_list va4; // [rsp+108h] [rbp+50h]
  __int64 v19; // [rsp+110h] [rbp+58h] BYREF
  va_list va5; // [rsp+110h] [rbp+58h]
  __int64 v21; // [rsp+118h] [rbp+60h] BYREF
  va_list va6; // [rsp+118h] [rbp+60h]
  va_list va7; // [rsp+120h] [rbp+68h] BYREF

  va_start(va7, a5);
  va_start(va6, a5);
  va_start(va5, a5);
  va_start(va4, a5);
  va_start(va3, a5);
  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v9 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v11 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v13 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v15 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v17 = va_arg(va5, _QWORD);
  va_copy(va6, va5);
  v19 = va_arg(va6, _QWORD);
  va_copy(va7, va6);
  v21 = va_arg(va7, _QWORD);
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, _QWORD, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_7c6d88ad550c373b598f9d026beeab64_Traceguids,
      a4,
      (__int64 *)va,
      4LL,
      (__int64 *)va1,
      4LL,
      (__int64 *)va2,
      4LL,
      (__int64 *)va3,
      4LL,
      (__int64 *)va4,
      8LL,
      (__int64 *)va5,
      4LL,
      (__int64 *)va6,
      4LL,
      va7,
      4LL,
      0LL);
  LOWORD(v8) = a4;
  return WppAutoLogTrace(
           a1,
           4LL,
           9LL,
           &WPP_7c6d88ad550c373b598f9d026beeab64_Traceguids,
           v8,
           (__int64 *)va,
           4LL,
           (__int64 *)va1,
           4LL,
           (__int64 *)va2);
}
