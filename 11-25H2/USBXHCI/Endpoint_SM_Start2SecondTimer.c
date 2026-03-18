/*
 * XREFs of Endpoint_SM_Start2SecondTimer @ 0x140014490
 * Callers:
 *     ESM_WaitingForFSEAfterStopEndpointCommandCompletion @ 0x1400143C0 (ESM_WaitingForFSEAfterStopEndpointCommandCompletion.c)
 *     ESM_ProcessingExpectedEventTRBsAfterEndpointStop @ 0x140014410 (ESM_ProcessingExpectedEventTRBsAfterEndpointStop.c)
 *     ESM_WaitingForHaltedCompletionCode @ 0x14003C9C0 (ESM_WaitingForHaltedCompletionCode.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Endpoint_SM_Start2SecondTimer(__int64 a1)
{
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01033 + 2552))(
           WdfDriverGlobals,
           *(_QWORD *)(a1 + 1304),
           -20000000LL);
}
