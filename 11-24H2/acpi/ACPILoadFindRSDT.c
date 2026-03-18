/*
 * XREFs of ACPILoadFindRSDT @ 0x1400C6114
 * Callers:
 *     ACPIGlobalInitialize @ 0x1400C6008 (ACPIGlobalInitialize.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1400283FC (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

__int64 ACPILoadFindRSDT()
{
  __int64 v0; // rbx
  int v1; // edx

  v0 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(PmHalDispatchTable + 88))(1413763922LL, 0LL, 0LL);
  if ( !v0 )
  {
    v0 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(PmHalDispatchTable + 88))(1413763928LL, 0LL, 0LL);
    if ( !v0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v1) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v1,
        6,
        10,
        (__int64)&WPP_e79443b43ad4376df2974b199a0dd63c_Traceguids);
    }
  }
  return v0;
}
