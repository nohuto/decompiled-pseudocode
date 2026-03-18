/*
 * XREFs of WPP_RECORDER_SF__guid_d @ 0x140044850
 * Callers:
 *     Controller_ExecuteDSM @ 0x14008187C (Controller_ExecuteDSM.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_RECORDER_SF__guid_d(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  int v8; // [rsp+20h] [rbp-48h]
  _QWORD v9[3]; // [rsp+50h] [rbp-18h] BYREF

  LODWORD(v9[0]) = -1073741670;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, __int64, __int64, __int64, _QWORD *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
      276LL,
      a6,
      16LL,
      v9,
      4LL,
      0LL);
  LOWORD(v8) = 276;
  return WppAutoLogTrace(
           a1,
           2LL,
           4LL,
           &WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
           v8,
           a6,
           16LL,
           v9,
           4LL,
           0LL,
           v9[0],
           v9[1]);
}
