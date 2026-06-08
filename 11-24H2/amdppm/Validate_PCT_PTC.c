/*
 * XREFs of Validate_PCT_PTC @ 0x140032A7C
 * Callers:
 *     ValidateAcpi2PStates @ 0x1400301CC (ValidateAcpi2PStates.c)
 *     ValidateAcpiThrottleStates @ 0x140030A04 (ValidateAcpiThrottleStates.c)
 * Callees:
 *     WPP_RECORDER_SF_DD @ 0x140003618 (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_d @ 0x140003B54 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall Validate_PCT_PTC(unsigned __int8 *a1)
{
  unsigned int v1; // ebx
  int v2; // edx
  int v4; // [rsp+28h] [rbp-20h]

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
      v4 = v2;
      LOBYTE(v2) = 2;
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        v2,
        1,
        11,
        (__int64)&WPP_55f5cba5bfed31fa58f2d2c50d7725f9_Traceguids,
        v4);
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
