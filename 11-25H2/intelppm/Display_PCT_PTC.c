/*
 * XREFs of Display_PCT_PTC @ 0x1400346CC
 * Callers:
 *     InitAcpiPerfStates @ 0x140027628 (InitAcpiPerfStates.c)
 *     InitAcpiThrottleStates @ 0x1400391DC (InitAcpiThrottleStates.c)
 * Callees:
 *     WPP_RECORDER_SF_s @ 0x140003B94 (WPP_RECORDER_SF_s.c)
 *     WPP_RECORDER_SF_ @ 0x140003CF8 (WPP_RECORDER_SF_.c)
 *     DisplayGenAddr @ 0x140028380 (DisplayGenAddr.c)
 */

__int64 __fastcall Display_PCT_PTC(unsigned __int8 *a1, const char *a2, struct _DEVICE_OBJECT *a3, __int64 a4)
{
  const char *v4; // rdi
  int v6; // edx
  struct _DEVICE_OBJECT *v7; // r8
  __int64 v8; // r9
  __int64 result; // rax
  int v10; // edx

  if ( a1 )
  {
    v4 = a2;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(a2) = 5;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          (_DWORD)a2,
          2,
          106,
          (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_s(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          2u,
          0x6Bu,
          (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids,
          v4);
    }
    DisplayGenAddr(a1, "  ", a3, a4);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(v6) = 5;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v6,
          2,
          108,
          (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_s(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          2u,
          0x6Du,
          (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids,
          v4);
    }
    result = DisplayGenAddr(a1 + 12, "  ", v7, v8);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(v10) = 5;
        return WPP_RECORDER_SF_(
                 WPP_GLOBAL_Control->DeviceExtension,
                 v10,
                 2,
                 110,
                 (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids);
      }
    }
  }
  return result;
}
