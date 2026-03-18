/*
 * XREFs of HUBPSM20_StoppingTimerAndQueueingHubResetInDisconnected @ 0x140013530
 * Callers:
 *     <none>
 * Callees:
 *     HUBMUX_CheckAndQueueIfResetHubIsEnabled @ 0x140010820 (HUBMUX_CheckAndQueueIfResetHubIsEnabled.c)
 *     HUBMISC_StopPortTimer @ 0x140033848 (HUBMISC_StopPortTimer.c)
 */

__int64 __fastcall HUBPSM20_StoppingTimerAndQueueingHubResetInDisconnected(__int64 a1)
{
  __int64 *v1; // rbx

  v1 = *(__int64 **)(a1 + 960);
  HUBMUX_CheckAndQueueIfResetHubIsEnabled(*v1);
  return HUBMISC_StopPortTimer(v1);
}
