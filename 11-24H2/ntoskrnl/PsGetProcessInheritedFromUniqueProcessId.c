/*
 * XREFs of PsGetProcessInheritedFromUniqueProcessId @ 0x1404563A0
 * Callers:
 *     PsChargeProcessWakeCounter @ 0x14088E7A0 (PsChargeProcessWakeCounter.c)
 *     AlpcpCompleteDispatchMessage @ 0x1408912A0 (AlpcpCompleteDispatchMessage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessInheritedFromUniqueProcessId(__int64 a1)
{
  return *(_QWORD *)(a1 + 720);
}
