/*
 * XREFs of _tlgKeywordOn @ 0x140036458
 * Callers:
 *     FreeContext @ 0x14000AF70 (FreeContext.c)
 *     AcpiDiagTraceAmliWatchdogTimeout @ 0x140056A30 (AcpiDiagTraceAmliWatchdogTimeout.c)
 *     AcpiDiagTracePccCommandTimeout @ 0x140056DC0 (AcpiDiagTracePccCommandTimeout.c)
 *     AcpiDiagTracePccEjectSubspace @ 0x140056F40 (AcpiDiagTracePccEjectSubspace.c)
 *     AcpiDiagTraceTemperatureTelemetry @ 0x140057534 (AcpiDiagTraceTemperatureTelemetry.c)
 *     IrqTraceAffinityPolicy @ 0x1400BEF1C (IrqTraceAffinityPolicy.c)
 * Callees:
 *     <none>
 */

bool __fastcall tlgKeywordOn(__int64 a1)
{
  return (*(_QWORD *)(a1 + 16) & 0x400000000000LL) != 0
      && (*(_QWORD *)(a1 + 24) & 0x400000000000LL) == *(_QWORD *)(a1 + 24);
}
