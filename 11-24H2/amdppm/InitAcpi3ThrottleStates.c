/*
 * XREFs of InitAcpi3ThrottleStates @ 0x1400383A4
 * Callers:
 *     InitAcpiThrottleStates @ 0x140038874 (InitAcpiThrottleStates.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140003B54 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x140003C68 (WPP_RECORDER_SF_.c)
 *     AcpiEval_PCT_PTC @ 0x140029A84 (AcpiEval_PCT_PTC.c)
 *     AcpiEval_TSS @ 0x14002A5D4 (AcpiEval_TSS.c)
 */

__int64 __fastcall InitAcpi3ThrottleStates(__int64 a1)
{
  unsigned int v2; // edi
  int v3; // eax
  int v4; // edx
  int v5; // ebx
  int v6; // eax
  int v7; // edx
  unsigned int v8; // ebx
  __int64 v10; // [rsp+28h] [rbp-10h]

  v2 = 0;
  v3 = AcpiEval_PCT_PTC(a1, 1129599071, a1 + 480);
  v5 = v3;
  if ( v3 < 0 )
  {
    if ( v3 == -1073741772 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v4) = 4;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v4,
          2,
          19,
          (__int64)&WPP_a3593c6019bf3e2a93a12731601a84ea_Traceguids);
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v4) = 3;
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        v4,
        3,
        20,
        (__int64)&WPP_a3593c6019bf3e2a93a12731601a84ea_Traceguids,
        v3);
    }
    v2 = v5;
  }
  v6 = AcpiEval_TSS(a1, (_QWORD *)(a1 + 504));
  v8 = v6;
  if ( v6 < 0 )
  {
    if ( v6 == -1073741772 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v7) = 4;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v7,
          2,
          21,
          (__int64)&WPP_a3593c6019bf3e2a93a12731601a84ea_Traceguids);
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v10) = v6;
      LOBYTE(v7) = 3;
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        v7,
        3,
        22,
        (__int64)&WPP_a3593c6019bf3e2a93a12731601a84ea_Traceguids,
        v10);
    }
    return v8;
  }
  return v2;
}
