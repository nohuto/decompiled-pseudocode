/*
 * XREFs of ValidateAcpiThrottleStates @ 0x14002DFD0
 * Callers:
 *     InitAcpiThrottleStates @ 0x1400391DC (InitAcpiThrottleStates.c)
 * Callees:
 *     WPP_RECORDER_SF_S @ 0x140009708 (WPP_RECORDER_SF_S.c)
 *     WPP_RECORDER_SF_Sd @ 0x140009EAC (WPP_RECORDER_SF_Sd.c)
 *     WPP_RECORDER_SF_SDD @ 0x14000A000 (WPP_RECORDER_SF_SDD.c)
 *     Validate_PCT_PTC @ 0x14002FE24 (Validate_PCT_PTC.c)
 */

__int64 __fastcall ValidateAcpiThrottleStates(__int64 a1, unsigned int *a2, const wchar_t *a3, _DWORD *a4)
{
  unsigned int i; // r10d
  int v7; // ebx
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned int v11; // [rsp+30h] [rbp-18h]
  int v12; // [rsp+30h] [rbp-18h]
  unsigned int v13; // [rsp+38h] [rbp-10h]

  *a4 = 0;
  if ( !a1 || !a2 )
    return (unsigned int)-1073741823;
  for ( i = 1; i < *a2; ++i )
  {
    if ( a2[5 * i + 1] >= a2[5 * i - 4] || a2[5 * i + 2] > a2[5 * i - 3] )
    {
      *a4 = 2048;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v13 = i - 1;
        v11 = i;
        WPP_RECORDER_SF_SDD(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          (__int64)a2,
          a1,
          0x11u,
          (__int64)&WPP_55f5cba5bfed31fa58f2d2c50d7725f9_Traceguids,
          a3,
          v11,
          v13);
      }
      return (unsigned int)-1073741823;
    }
  }
  if ( a2[1] != 100 )
  {
    *a4 = 2048;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_S(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        0x12u,
        (__int64)&WPP_55f5cba5bfed31fa58f2d2c50d7725f9_Traceguids,
        a3);
    return (unsigned int)-1073741823;
  }
  v7 = Validate_PCT_PTC(a1);
  if ( v7 < 0 )
  {
    *a4 = 1024;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v12 = v7;
      WPP_RECORDER_SF_Sd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v9,
        v10,
        0x13u,
        (__int64)&WPP_55f5cba5bfed31fa58f2d2c50d7725f9_Traceguids,
        a3,
        v12);
    }
  }
  return (unsigned int)v7;
}
