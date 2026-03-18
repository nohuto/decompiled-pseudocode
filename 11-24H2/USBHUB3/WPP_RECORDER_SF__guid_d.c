/*
 * XREFs of WPP_RECORDER_SF__guid_d @ 0x140040A98
 * Callers:
 *     HUBACPI_ExecuteDSM @ 0x14008D74C (HUBACPI_ExecuteDSM.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140046540 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_RECORDER_SF__guid_d(__int64 a1)
{
  int v3; // [rsp+20h] [rbp-48h]
  _DWORD v4[6]; // [rsp+50h] [rbp-18h] BYREF

  v4[0] = -1073741670;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, __int64, GUID *, __int64, _DWORD *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_87abda6c49cb3f06b0a228f67f220255_Traceguids,
      10LL,
      &GUID_DSM_SDM845_HS_RH_PORT_RESET_WORKAROUND,
      16LL,
      v4,
      4LL,
      0LL);
  LOWORD(v3) = 10;
  return WppAutoLogTrace(
           a1,
           2LL,
           3LL,
           &WPP_87abda6c49cb3f06b0a228f67f220255_Traceguids,
           v3,
           &GUID_DSM_SDM845_HS_RH_PORT_RESET_WORKAROUND,
           16LL,
           v4);
}
