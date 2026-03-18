/*
 * XREFs of ACPI_ADD_TRIAGE_DUMP_DATA @ 0x14005EA80
 * Callers:
 *     AcpiAddTriageAcpiDeviceExtension @ 0x14005EAD0 (AcpiAddTriageAcpiDeviceExtension.c)
 *     AcpiAddTriageAcpiGlobal @ 0x14005EC0C (AcpiAddTriageAcpiGlobal.c)
 *     AcpiAddTriageAcpiGpe @ 0x14005EF70 (AcpiAddTriageAcpiGpe.c)
 *     AcpiAddTriageAcpiList @ 0x14005F354 (AcpiAddTriageAcpiList.c)
 *     AcpiAddTriageAmliContext @ 0x14005F3E4 (AcpiAddTriageAmliContext.c)
 *     AcpiAddTriageAmliGlobal @ 0x14005F518 (AcpiAddTriageAmliGlobal.c)
 *     AcpiAddTriageNSTree @ 0x14005F5BC (AcpiAddTriageNSTree.c)
 *     AcpiDumpRoutine @ 0x14005F6C0 (AcpiDumpRoutine.c)
 * Callees:
 *     <none>
 */

void __fastcall ACPI_ADD_TRIAGE_DUMP_DATA(void *MaxDataSize, PVOID Address)
{
  ULONG v3; // ebx
  SIZE_T v4; // r9

  if ( MaxDataSize )
  {
    v3 = (unsigned int)MaxDataSize;
    if ( MmIsAddressValid(MaxDataSize) )
      KeAddTriageDumpDataBlock(KtriageDumpDataArray, v3, Address, v4);
  }
}
