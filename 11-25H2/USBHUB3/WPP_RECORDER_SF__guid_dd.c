/*
 * XREFs of WPP_RECORDER_SF__guid_dd @ 0x14001D938
 * Callers:
 *     HUBPDO_IdleResiliencyCallback @ 0x1400193F0 (HUBPDO_IdleResiliencyCallback.c)
 *     HUBPDO_ReEnumerationCallback @ 0x14001A0D0 (HUBPDO_ReEnumerationCallback.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 */

__int64 WPP_RECORDER_SF__guid_dd(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4, int a5, __int64 a6, ...)
{
  int v9; // [rsp+20h] [rbp-48h]
  __int64 v10; // [rsp+A0h] [rbp+38h] BYREF
  va_list va; // [rsp+A0h] [rbp+38h]
  va_list va1; // [rsp+A8h] [rbp+40h] BYREF

  va_start(va1, a6);
  va_start(va, a6);
  v10 = va_arg(va1, _QWORD);
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, _QWORD, __int64, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_31a10eb015d93b042fda7856b1df3354_Traceguids,
      a4,
      a6,
      16LL,
      (__int64 *)va,
      4LL,
      va1,
      4LL,
      0LL);
  LOWORD(v9) = a4;
  return WppAutoLogTrace(a1, 4LL, 5LL, &WPP_31a10eb015d93b042fda7856b1df3354_Traceguids, v9, a6, 16LL, (__int64 *)va);
}
