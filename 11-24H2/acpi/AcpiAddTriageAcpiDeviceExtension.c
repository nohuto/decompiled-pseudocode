/*
 * XREFs of AcpiAddTriageAcpiDeviceExtension @ 0x14005EAD0
 * Callers:
 *     AcpiAddTriagePowerRequestEntry @ 0x14005F6A0 (AcpiAddTriagePowerRequestEntry.c)
 * Callees:
 *     ACPI_ADD_TRIAGE_DUMP_DATA @ 0x14005EA80 (ACPI_ADD_TRIAGE_DUMP_DATA.c)
 *     AcpiAddTriageNSTree @ 0x14005F5BC (AcpiAddTriageNSTree.c)
 */

void __fastcall AcpiAddTriageAcpiDeviceExtension(__int64 a1)
{
  PVOID *v2; // rsi
  __int64 v3; // rdi
  _BYTE *v4; // rcx
  __int64 v5; // rdx
  void *v6; // rcx
  _BYTE *v7; // rcx
  void *v8; // rcx
  __int64 v9; // rdi
  void **v10; // rsi
  __int64 v11; // rbp
  void **v12; // rbx

  if ( a1 && *(_DWORD *)(a1 + 16) == 1599293264 )
  {
    ACPI_ADD_TRIAGE_DUMP_DATA((void *)a1, (PVOID)0x468);
    v2 = (PVOID *)(a1 + 608);
    if ( a1 != -608 )
    {
      v3 = -1LL;
      if ( *v2 && MmIsAddressValid(*v2) )
      {
        v4 = *v2;
        v5 = -1LL;
        do
          ++v5;
        while ( v4[v5] );
        ACPI_ADD_TRIAGE_DUMP_DATA(v4, (PVOID)(v5 + 1));
      }
      v6 = *(void **)(a1 + 616);
      if ( v6 && MmIsAddressValid(v6) )
      {
        v7 = *(_BYTE **)(a1 + 616);
        do
          ++v3;
        while ( v7[v3] );
        ACPI_ADD_TRIAGE_DUMP_DATA(v7, (PVOID)(v3 + 1));
      }
    }
    v8 = *(void **)(a1 + 760);
    if ( v8 )
    {
      ACPI_ADD_TRIAGE_DUMP_DATA(v8, (PVOID)0x10);
      if ( **(_QWORD **)(a1 + 760) )
        AcpiAddTriageNSTree();
    }
    v9 = 5LL;
    v10 = (void **)(a1 + 408);
    v11 = 5LL;
    do
    {
      ACPI_ADD_TRIAGE_DUMP_DATA(*v10++, (PVOID)0x38);
      --v11;
    }
    while ( v11 );
    ACPI_ADD_TRIAGE_DUMP_DATA(*(void **)(a1 + 448), (PVOID)0x38);
    v12 = (void **)(a1 + 456);
    do
    {
      ACPI_ADD_TRIAGE_DUMP_DATA(*v12++, (PVOID)8);
      --v9;
    }
    while ( v9 );
  }
}
