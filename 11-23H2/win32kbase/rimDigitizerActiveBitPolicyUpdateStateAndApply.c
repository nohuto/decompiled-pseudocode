/*
 * XREFs of rimDigitizerActiveBitPolicyUpdateStateAndApply @ 0x1C01A80C8
 * Callers:
 *     rimApplyPointerDevicePolicies @ 0x1C00E2CF0 (rimApplyPointerDevicePolicies.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C00744D4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     RIMCmAddContactSuppressionReasons @ 0x1C01AFF50 (RIMCmAddContactSuppressionReasons.c)
 *     RIMCmRemoveContactSuppressionReasons @ 0x1C01B0A44 (RIMCmRemoveContactSuppressionReasons.c)
 */

__int64 __fastcall rimDigitizerActiveBitPolicyUpdateStateAndApply(__int64 a1, _DWORD *a2)
{
  int v3; // edx
  PDEVICE_OBJECT v4; // rcx
  char v5; // dl
  __int64 result; // rax
  char v7; // r8
  unsigned __int16 v8; // r9

  v3 = a2[611];
  if ( (v3 & 0x1000002) == 0x1000000 )
  {
    RIMCmAddContactSuppressionReasons(a1, a2);
    v4 = WPP_GLOBAL_Control;
    v5 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    result = (__int64)&WPP_RECORDER_INITIALIZED;
    v7 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v8 = 43;
      return WPP_RECORDER_AND_TRACE_SF_d(
               (__int64)v4->AttachedDevice,
               v5,
               v7,
               (__int64)gRimLog,
               4u,
               1u,
               v8,
               (__int64)&WPP_acebe0338cf732913f05b3829fd55bbc_Traceguids,
               *a2);
    }
  }
  else
  {
    result = (unsigned int)a2[2];
    if ( (result & 0x40) != 0 && (v3 & 2) != 0 )
    {
      RIMCmRemoveContactSuppressionReasons(a1, a2, 64LL);
      v4 = WPP_GLOBAL_Control;
      v5 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      result = (__int64)&WPP_RECORDER_INITIALIZED;
      v7 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v8 = 44;
        return WPP_RECORDER_AND_TRACE_SF_d(
                 (__int64)v4->AttachedDevice,
                 v5,
                 v7,
                 (__int64)gRimLog,
                 4u,
                 1u,
                 v8,
                 (__int64)&WPP_acebe0338cf732913f05b3829fd55bbc_Traceguids,
                 *a2);
      }
    }
  }
  return result;
}
