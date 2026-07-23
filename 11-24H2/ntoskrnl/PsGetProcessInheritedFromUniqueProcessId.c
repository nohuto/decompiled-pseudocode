/*
 * XREFs of PsGetProcessInheritedFromUniqueProcessId @ 0x14044B370
 * Callers:
 *     PsChargeProcessWakeCounter @ 0x1408983D0 (PsChargeProcessWakeCounter.c)
 *     AlpcpCompleteDispatchMessage @ 0x14089A890 (AlpcpCompleteDispatchMessage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessInheritedFromUniqueProcessId(__int64 a1)
{
  return *(_QWORD *)(a1 + 720);
}
