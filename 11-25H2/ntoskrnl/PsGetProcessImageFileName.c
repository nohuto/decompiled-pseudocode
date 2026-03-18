/*
 * XREFs of PsGetProcessImageFileName @ 0x14044CF60
 * Callers:
 *     NtCreateIoRing @ 0x14070B060 (NtCreateIoRing.c)
 *     CmLoadAppKey @ 0x1409122B0 (CmLoadAppKey.c)
 *     ObCheckRefTraceProcess @ 0x140A4FAF4 (ObCheckRefTraceProcess.c)
 *     PiUEventHandleVetoEvent @ 0x140A8679C (PiUEventHandleVetoEvent.c)
 *     PopDiagTraceExecutePowerAction @ 0x140A95BA8 (PopDiagTraceExecutePowerAction.c)
 *     PnpLogVetoInformation @ 0x140A99FDC (PnpLogVetoInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessImageFileName(__int64 a1)
{
  return a1 + 824;
}
