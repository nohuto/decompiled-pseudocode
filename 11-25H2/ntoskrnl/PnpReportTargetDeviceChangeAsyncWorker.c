/*
 * XREFs of PnpReportTargetDeviceChangeAsyncWorker @ 0x1407148A0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     PnpSetCustomTargetEvent @ 0x14096A3EC (PnpSetCustomTargetEvent.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PnpReportTargetDeviceChangeAsyncWorker(PVOID P)
{
  PnpSetCustomTargetEvent(*((PVOID *)P + 4), *((_QWORD *)P + 6), *((void **)P + 7));
  ObfDereferenceObjectWithTag(*((PVOID *)P + 4), 0x4E706E50u);
  ExFreePoolWithTag(P, 0x38706E50u);
}
