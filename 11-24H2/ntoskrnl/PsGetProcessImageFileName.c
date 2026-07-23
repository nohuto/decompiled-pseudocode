/*
 * XREFs of PsGetProcessImageFileName @ 0x140443BB0
 * Callers:
 *     NtCreateIoRing @ 0x140714CF0 (NtCreateIoRing.c)
 *     CmLoadAppKey @ 0x14092FCDC (CmLoadAppKey.c)
 *     ObCheckRefTraceProcess @ 0x140A4B068 (ObCheckRefTraceProcess.c)
 *     PiUEventHandleVetoEvent @ 0x140A8758C (PiUEventHandleVetoEvent.c)
 *     PopDiagTraceExecutePowerAction @ 0x140A96D28 (PopDiagTraceExecutePowerAction.c)
 *     PnpLogVetoInformation @ 0x140A9A584 (PnpLogVetoInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessImageFileName(__int64 a1)
{
  return a1 + 824;
}
