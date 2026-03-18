/*
 * XREFs of rimPointerTransitionsPolicyUpdateStateAndApply @ 0x1C00E3224
 * Callers:
 *     rimApplyPointerDevicePolicies @ 0x1C00E2CF0 (rimApplyPointerDevicePolicies.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C00744D4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     RIMCmAddContactSuppressionReasons @ 0x1C01AFF50 (RIMCmAddContactSuppressionReasons.c)
 */

__int64 __fastcall rimPointerTransitionsPolicyUpdateStateAndApply(__int64 a1, _DWORD *a2, int a3)
{
  char v5; // dl
  __int64 result; // rax

  if ( a3 && (a2[611] & 0x1000000) == 0 )
  {
    v5 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_d(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v5,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)gRimLog,
        4u,
        1u,
        0x28u,
        (__int64)&WPP_acebe0338cf732913f05b3829fd55bbc_Traceguids,
        *a2);
    result = RIMCmAddContactSuppressionReasons(a1, a2);
    a2[611] |= 0x8000u;
  }
  return result;
}
