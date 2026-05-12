/*
 * XREFs of PortTraceErrorRegisterDriver @ 0x1401B47A8
 * Callers:
 *     PortTraceInitTracing @ 0x14013B6A0 (PortTraceInitTracing.c)
 * Callees:
 *     PortpErrorInitDpc @ 0x14013B408 (PortpErrorInitDpc.c)
 *     PortpErrorInitRecords @ 0x1401B47CC (PortpErrorInitRecords.c)
 */

void __fastcall PortTraceErrorRegisterDriver(char *DeferredContext)
{
  PortpErrorInitRecords();
  PortpErrorInitDpc(DeferredContext);
}
