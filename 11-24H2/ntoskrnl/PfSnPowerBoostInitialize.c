/*
 * XREFs of PfSnPowerBoostInitialize @ 0x140963038
 * Callers:
 *     PfSnAsyncContextInitialize @ 0x140962E58 (PfSnAsyncContextInitialize.c)
 * Callees:
 *     KeInitializeTimer @ 0x140455420 (KeInitializeTimer.c)
 *     KeInitializeDpc @ 0x140455470 (KeInitializeDpc.c)
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
