/*
 * XREFs of AcpiUseFlexibleOscHandoff @ 0x1400A0D78
 * Callers:
 *     DriverEntry @ 0x1400C64B0 (DriverEntry.c)
 * Callees:
 *     OSReadRegValue @ 0x1400B6898 (OSReadRegValue.c)
 *     OSOpenHandle @ 0x1400B7118 (OSOpenHandle.c)
 */

char AcpiUseFlexibleOscHandoff()
{
  if ( (int)OSOpenHandle("\\Registry\\Machine\\System\\CurrentControlSet\\Services\\ACPI\\Parameters") >= 0 )
  {
    OSReadRegValue("UseFlexibleOscHandoff");
    ZwClose(0LL);
  }
  return 0;
}
