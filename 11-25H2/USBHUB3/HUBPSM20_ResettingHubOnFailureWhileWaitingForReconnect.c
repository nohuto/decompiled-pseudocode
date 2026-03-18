/*
 * XREFs of HUBPSM20_ResettingHubOnFailureWhileWaitingForReconnect @ 0x140013260
 * Callers:
 *     <none>
 * Callees:
 *     HUBMUX_CheckAndQueueIfResetHubIsEnabled @ 0x140010820 (HUBMUX_CheckAndQueueIfResetHubIsEnabled.c)
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBPSM20_ResettingHubOnFailureWhileWaitingForReconnect(__int64 a1)
{
  __int64 *v1; // rbx

  v1 = *(__int64 **)(a1 + 960);
  (*(void (__fastcall **)(__int64, __int64))(v1[166] + 1472))(v1[166], 4082LL);
  HUBMUX_CheckAndQueueIfResetHubIsEnabled(*v1);
  return 3013LL;
}
