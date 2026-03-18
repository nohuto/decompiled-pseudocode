/*
 * XREFs of KiRecordRecoveryFailure @ 0x1405C6518
 * Callers:
 *     KiAttemptBugcheckRecovery @ 0x1405C5784 (KiAttemptBugcheckRecovery.c)
 *     KiDeferredBugcheckRecoveryWorker @ 0x1405C6000 (KiDeferredBugcheckRecoveryWorker.c)
 *     KiHandleMultipleBugchecksDuringRecovery @ 0x1405C62C0 (KiHandleMultipleBugchecksDuringRecovery.c)
 *     KiScheduleBugcheckRecovery @ 0x1405C6580 (KiScheduleBugcheckRecovery.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x1403F2880 (IoAddTriageDumpDataBlock.c)
 */

char __fastcall KiRecordRecoveryFailure(ULONG a1)
{
  KiBugcheckRecoveryFailureReason = a1;
  IoAddTriageDumpDataBlock((ULONG)&KiBugcheckRecoveryFailureReason, (PVOID)4);
  return IoAddTriageDumpDataBlock((ULONG)&KiBugcheckRecoveryInformation, (PVOID)0x4C);
}
