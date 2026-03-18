/*
 * XREFs of ?DispBrokerAsyncSessionStateChanged@@YAJQEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1400C7110
 * Callers:
 *     UserThreadCallout @ 0x140166CD0 (UserThreadCallout.c)
 *     xxxRemoteConnect @ 0x140167F90 (xxxRemoteConnect.c)
 * Callees:
 *     ?DispBrokerUpdateKernelDisplayPolicies@@YAXXZ @ 0x1400C7B00 (-DispBrokerUpdateKernelDisplayPolicies@@YAXXZ.c)
 *     DispBroker::DispBrokerClient::AsyncMessageNoAlloc_1__lambda_0389f40e646f18740e1f12cb9d5b37a1___ @ 0x1400C84BC (DispBroker--DispBrokerClient--AsyncMessageNoAlloc_1__lambda_0389f40e646f18740e1f12cb9d5b37a1___.c)
 */

__int64 __fastcall DispBrokerAsyncSessionStateChanged(struct _DXGK_DISPLAY_SCENARIO_CONTEXT *const a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  DispBrokerUpdateKernelDisplayPolicies();
  W32GetUserSessionState(v2);
  return DispBroker::DispBrokerClient::AsyncMessageNoAlloc_1__lambda_0389f40e646f18740e1f12cb9d5b37a1___(v3, a1);
}
