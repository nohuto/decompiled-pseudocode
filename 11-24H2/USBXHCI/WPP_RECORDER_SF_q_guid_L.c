/*
 * XREFs of WPP_RECORDER_SF_q_guid_L @ 0x1400450AC
 * Callers:
 *     Controller_ExecuteDSM @ 0x14008187C (Controller_ExecuteDSM.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

__int64 WPP_RECORDER_SF_q_guid_L(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  __int64 v5; // rbx
  int v8; // [rsp+20h] [rbp-48h]
  __int64 v9; // [rsp+98h] [rbp+30h] BYREF
  va_list va; // [rsp+98h] [rbp+30h]
  __int64 v11; // [rsp+A0h] [rbp+38h]
  va_list va1; // [rsp+A8h] [rbp+40h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v9 = va_arg(va1, _QWORD);
  v11 = va_arg(va1, _QWORD);
  v5 = v11;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, __int64, __int64 *, __int64, __int64, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
      278LL,
      (__int64 *)va,
      8LL,
      v11,
      16LL,
      va1,
      4LL,
      0LL);
  LOWORD(v8) = 278;
  return WppAutoLogTrace(
           a1,
           4LL,
           4LL,
           &WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
           v8,
           (__int64 *)va,
           8LL,
           v5,
           16LL,
           va1,
           4LL,
           0LL);
}
