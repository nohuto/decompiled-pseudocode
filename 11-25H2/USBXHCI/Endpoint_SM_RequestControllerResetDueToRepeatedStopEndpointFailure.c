/*
 * XREFs of Endpoint_SM_RequestControllerResetDueToRepeatedStopEndpointFailure @ 0x140047878
 * Callers:
 *     ESM_ResettingControllerDueToRepeatedStopEndpointFailure @ 0x140055D30 (ESM_ResettingControllerDueToRepeatedStopEndpointFailure.c)
 * Callees:
 *     Controller_HwVerifierBreakIfEnabled @ 0x14001103C (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x140013068 (Controller_ReportFatalError.c)
 *     WPP_RECORDER_SF_q @ 0x14002CE68 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall Endpoint_SM_RequestControllerResetDueToRepeatedStopEndpointFailure(__int64 *a1)
{
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(a1[10], 1, 13, 121, (__int64)&WPP_0e51d3b82fdb347dedaae242937bad3f_Traceguids, a1[3]);
  Controller_HwVerifierBreakIfEnabled(
    *a1,
    a1[1],
    a1[3],
    1024LL,
    "Stop Endpoint command repeatedly failed with context state error",
    0LL,
    0LL);
  return Controller_ReportFatalError(*a1, 2, 4100, 0, a1[2], (__int64)a1, 0LL);
}
