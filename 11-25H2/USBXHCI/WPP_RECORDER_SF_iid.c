/*
 * XREFs of WPP_RECORDER_SF_iid @ 0x14003F5C8
 * Callers:
 *     CommonBuffer_AcquireCommonBufferFromPhysicalAddress @ 0x14003F06C (CommonBuffer_AcquireCommonBufferFromPhysicalAddress.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

__int64 WPP_RECORDER_SF_iid(__int64 a1, _DWORD a2, _DWORD a3, _DWORD a4, __int64 a5, ...)
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
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, __int64, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_ab4b74589bd330f105f5531a87063139_Traceguids,
      17LL,
      (__int64 *)va,
      8LL,
      (__int64 *)va1,
      8LL,
      va2,
      4LL,
      0LL);
  LOWORD(v7) = 17;
  return WppAutoLogTrace(
           a1,
           2LL,
           8LL,
           &WPP_ab4b74589bd330f105f5531a87063139_Traceguids,
           v7,
           (__int64 *)va,
           8LL,
           (__int64 *)va1,
           8LL,
           va2);
}
