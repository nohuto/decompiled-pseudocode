/*
 * XREFs of Validate_PCT_PTC @ 0x14002FE24
 * Callers:
 *     ValidateAcpi2PStates @ 0x14002DB34 (ValidateAcpi2PStates.c)
 *     ValidateAcpiThrottleStates @ 0x14002DFD0 (ValidateAcpiThrottleStates.c)
 * Callees:
 *     WPP_RECORDER_SF_DD @ 0x140003804 (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_D @ 0x1400050E8 (WPP_RECORDER_SF_D.c)
 */

__int64 __fastcall Validate_PCT_PTC(unsigned __int8 *a1)
{
  unsigned int v1; // ebx
  int v2; // edx

  v1 = -1073741637;
  if ( !*((_QWORD *)a1 + 2) || *a1 == a1[12] )
  {
    v2 = *a1;
    if ( v2 && (v2 == 1 || v2 == 127) )
    {
      return 0;
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        0xBu,
        (__int64)&WPP_55f5cba5bfed31fa58f2d2c50d7725f9_Traceguids,
        v2);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_DD(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      0xAu,
      (__int64)&WPP_55f5cba5bfed31fa58f2d2c50d7725f9_Traceguids,
      *a1,
      a1[12]);
  }
  return v1;
}
