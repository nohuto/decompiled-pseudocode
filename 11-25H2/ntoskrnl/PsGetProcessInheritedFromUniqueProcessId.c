/*
 * XREFs of PsGetProcessInheritedFromUniqueProcessId @ 0x140456260
 * Callers:
 *     AlpcpCompleteDispatchMessage @ 0x1408A9370 (AlpcpCompleteDispatchMessage.c)
 *     PsChargeProcessWakeCounter @ 0x1408B0B30 (PsChargeProcessWakeCounter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessInheritedFromUniqueProcessId(__int64 a1)
{
  return *(_QWORD *)(a1 + 720);
}
