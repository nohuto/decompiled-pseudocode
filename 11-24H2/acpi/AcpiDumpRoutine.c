/*
 * XREFs of AcpiDumpRoutine @ 0x14005F6C0
 * Callers:
 *     <none>
 * Callees:
 *     ACPI_ADD_TRIAGE_DUMP_DATA @ 0x14005EA80 (ACPI_ADD_TRIAGE_DUMP_DATA.c)
 *     AcpiAddTriageAcpiGlobal @ 0x14005EC0C (AcpiAddTriageAcpiGlobal.c)
 *     AcpiAddTriageAmliGlobal @ 0x14005F518 (AcpiAddTriageAmliGlobal.c)
 */

void __fastcall AcpiDumpRoutine(
        KBUGCHECK_CALLBACK_REASON Reason,
        struct _KBUGCHECK_REASON_CALLBACK_RECORD *Record,
        _DWORD *ReasonSpecificData,
        ULONG ReasonSpecificDataLength)
{
  int v4; // eax

  v4 = ReasonSpecificData[4];
  if ( v4 == 159 || v4 == 307 )
  {
    ACPI_ADD_TRIAGE_DUMP_DATA(&gAcpiTriageInfo, (PVOID)0x18);
    AcpiAddTriageAcpiGlobal((void **)off_140086B60[0]);
    AcpiAddTriageAmliGlobal((void **)off_140086B68);
    *(_QWORD *)ReasonSpecificData = KtriageDumpDataArray;
  }
}
