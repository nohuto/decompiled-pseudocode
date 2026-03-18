/*
 * XREFs of CreateMonitorRegionForDpi @ 0x1C0059CD0
 * Callers:
 *     ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x1C0059C2C (-SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z.c)
 *     GetMonitorDC @ 0x1C005B3E8 (GetMonitorDC.c)
 * Callees:
 *     GreCreateRectRgnIndirect @ 0x1C003F2F0 (GreCreateRectRgnIndirect.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     GetMonitorRectForDpi @ 0x1C005A3D8 (GetMonitorRectForDpi.c)
 */

struct HOBJ__ *__fastcall CreateMonitorRegionForDpi(__int64 a1, unsigned __int16 a2)
{
  int v2; // edx
  struct HOBJ__ *v3; // rbx
  int v4; // r8d
  struct _RECTL v6; // [rsp+40h] [rbp-18h] BYREF

  v6 = *(struct _RECTL *)GetMonitorRectForDpi(&v6, a1, a2);
  v3 = GreCreateRectRgnIndirect(&v6);
  if ( !v3 )
  {
    LOBYTE(v2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    if ( (_BYTE)v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v4) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v2,
        v4,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        3,
        10,
        (__int64)&WPP_11a9cae0f644375e3b058a18d2976a7e_Traceguids);
    }
  }
  return v3;
}
