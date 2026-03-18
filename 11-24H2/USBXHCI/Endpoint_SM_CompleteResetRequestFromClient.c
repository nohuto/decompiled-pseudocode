/*
 * XREFs of Endpoint_SM_CompleteResetRequestFromClient @ 0x14002C414
 * Callers:
 *     ESM_CompletingResetRequestWhenEndpointNotHalted @ 0x14002C3F0 (ESM_CompletingResetRequestWhenEndpointNotHalted.c)
 *     Endpoint_SM_OkToCompleteEndpointResetRequest @ 0x140047B58 (Endpoint_SM_OkToCompleteEndpointResetRequest.c)
 * Callees:
 *     WPP_RECORDER_SF_ddqd @ 0x14002C4C0 (WPP_RECORDER_SF_ddqd.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Endpoint_SM_CompleteResetRequestFromClient(__int64 a1, int a2, int a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rdi

  _InterlockedAnd((volatile signed __int32 *)(a1 + 32), 0xFFFFFF7F);
  v3 = *(_DWORD *)(a1 + 296);
  v4 = *(_QWORD *)(a1 + 288);
  *(_QWORD *)(a1 + 288) = 0LL;
  *(_DWORD *)(a1 + 296) = 259;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_ddqd(*(_QWORD *)(a1 + 80), a2, a3, 120);
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01033 + 2104))(
           WdfDriverGlobals,
           v4,
           v3);
}
