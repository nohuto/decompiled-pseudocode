/*
 * XREFs of PsGetProcessImageFileName @ 0x14044CCB0
 * Callers:
 *     NtCreateIoRing @ 0x140717160 (NtCreateIoRing.c)
 *     CmLoadAppKey @ 0x14092DB9C (CmLoadAppKey.c)
 *     ObCheckRefTraceProcess @ 0x140A53078 (ObCheckRefTraceProcess.c)
 *     PiUEventHandleVetoEvent @ 0x140A8B24C (PiUEventHandleVetoEvent.c)
 *     PopDiagTraceExecutePowerAction @ 0x140A9B7B8 (PopDiagTraceExecutePowerAction.c)
 *     PnpLogVetoInformation @ 0x140A9F1B4 (PnpLogVetoInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessImageFileName(__int64 a1)
{
  return a1 + 824;
}
