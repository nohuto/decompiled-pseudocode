/*
 * XREFs of PortpErrorInitDpc @ 0x14013B408
 * Callers:
 *     PortTraceErrorRegisterDriver @ 0x1401B47A8 (PortTraceErrorRegisterDriver.c)
 * Callees:
 *     <none>
 */

void __fastcall PortpErrorInitDpc(char *DeferredContext)
{
  KeInitializeDpc((PRKDPC)(DeferredContext + 88), (PKDEFERRED_ROUTINE)PortpErrorDrainListDpc, DeferredContext);
}
