/*
 * XREFs of AcpiDumpInit @ 0x1400C70A8
 * Callers:
 *     DriverEntry @ 0x1400C64B0 (DriverEntry.c)
 * Callees:
 *     <none>
 */

char AcpiDumpInit()
{
  struct _KTRIAGE_DUMP_DATA_ARRAY *Pool2; // rax

  CallbackRecord.State = 0;
  Pool2 = (struct _KTRIAGE_DUMP_DATA_ARRAY *)ExAllocatePool2(64LL, 0x10000LL, 1332765505LL);
  KtriageDumpDataArray = Pool2;
  if ( !Pool2
    || (LODWORD(Pool2) = KeInitializeTriageDumpDataArray(Pool2, 0x10000u), (int)Pool2 < 0)
    || (AcpiDumpContext = (__int64)AcpiDumpRoutine,
        qword_14008AFA8 = (__int64)"ACPI_TRIAGE_DUMP_COMPONENT",
        LOBYTE(Pool2) = KeRegisterBugCheckReasonCallback(
                          &CallbackRecord,
                          (PKBUGCHECK_REASON_CALLBACK_ROUTINE)AcpiDumpRoutine,
                          KbCallbackTriageDumpData,
                          (PUCHAR)"ACPI_TRIAGE_DUMP_COMPONENT"),
        !(_BYTE)Pool2) )
  {
    if ( KtriageDumpDataArray )
      LOBYTE(Pool2) = ExFreePool2(KtriageDumpDataArray, 1332765505LL, 0LL, 0LL);
  }
  return (char)Pool2;
}
