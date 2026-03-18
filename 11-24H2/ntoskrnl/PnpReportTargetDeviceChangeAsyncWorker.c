/*
 * XREFs of PnpReportTargetDeviceChangeAsyncWorker @ 0x1407209A0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     PnpSetCustomTargetEvent @ 0x1408B37C0 (PnpSetCustomTargetEvent.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PnpReportTargetDeviceChangeAsyncWorker(PVOID P)
{
  PnpSetCustomTargetEvent(*((PVOID *)P + 4), *((_QWORD *)P + 6), *((void **)P + 7));
  ObfDereferenceObjectWithTag(*((PVOID *)P + 4), 0x4E706E50u);
  ExFreePoolWithTag(P, 0x38706E50u);
}
