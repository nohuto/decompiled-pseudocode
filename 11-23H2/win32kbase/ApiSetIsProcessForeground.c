/*
 * XREFs of ApiSetIsProcessForeground @ 0x1C0207EEC
 * Callers:
 *     ?HitTestRejectionRegion@DelayZonePalmRejection@@AEAA_NPEAXUtagPOINT@@1PEA_NPEAUCDelayZonePanelTelemetryData@@@Z @ 0x1C01E61A4 (-HitTestRejectionRegion@DelayZonePalmRejection@@AEAA_NPEAXUtagPOINT@@1PEA_NPEAUCDelayZonePanelTe.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetIsProcessForeground(unsigned int a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( qword_1C0296560 && (int)qword_1C0296560() >= 0 && qword_1C0296568 )
    return (unsigned int)qword_1C0296568(a1);
  return v1;
}
