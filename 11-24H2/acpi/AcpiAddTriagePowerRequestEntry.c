/*
 * XREFs of AcpiAddTriagePowerRequestEntry @ 0x14005F6A0
 * Callers:
 *     <none>
 * Callees:
 *     AcpiAddTriageAcpiDeviceExtension @ 0x14005EAD0 (AcpiAddTriageAcpiDeviceExtension.c)
 */

void __fastcall AcpiAddTriagePowerRequestEntry(__int64 a1)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(a1 + 40);
  if ( v1 )
    AcpiAddTriageAcpiDeviceExtension(v1);
}
