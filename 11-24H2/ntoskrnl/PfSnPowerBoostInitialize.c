/*
 * XREFs of PfSnPowerBoostInitialize @ 0x14094AAF8
 * Callers:
 *     PfSnAsyncContextInitialize @ 0x14094A918 (PfSnAsyncContextInitialize.c)
 * Callees:
 *     KeInitializeTimer @ 0x14044A0E0 (KeInitializeTimer.c)
 *     KeInitializeDpc @ 0x14044A220 (KeInitializeDpc.c)
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
