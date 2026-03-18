/*
 * XREFs of PfSnPowerBoostInitialize @ 0x140828878
 * Callers:
 *     PfSnAsyncContextInitialize @ 0x140828698 (PfSnAsyncContextInitialize.c)
 * Callees:
 *     KeInitializeTimer @ 0x140454D20 (KeInitializeTimer.c)
 *     KeInitializeDpc @ 0x140454E30 (KeInitializeDpc.c)
 */

void __fastcall PfSnPowerBoostInitialize(char *DeferredContext)
{
  *(_QWORD *)DeferredContext = 0LL;
  *((_QWORD *)DeferredContext + 17) = 0LL;
  *((_QWORD *)DeferredContext + 19) = PfSnPowerBoostWorker;
  *((_QWORD *)DeferredContext + 20) = DeferredContext;
  KeInitializeTimer((PKTIMER)(DeferredContext + 8));
  KeInitializeDpc((PRKDPC)(DeferredContext + 72), (PKDEFERRED_ROUTINE)PfSnPowerBoostDpc, DeferredContext);
}
