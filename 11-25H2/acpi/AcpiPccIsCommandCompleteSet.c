/*
 * XREFs of AcpiPccIsCommandCompleteSet @ 0x140064150
 * Callers:
 *     AcpiPccCommandComplete @ 0x140050C90 (AcpiPccCommandComplete.c)
 *     AcpiPccEjectInterface @ 0x140050E7C (AcpiPccEjectInterface.c)
 *     AcpiPccWatchdog @ 0x1400513F0 (AcpiPccWatchdog.c)
 *     AcpiPccIsInterruptIssued @ 0x1400641AC (AcpiPccIsInterruptIssued.c)
 *     AcpiPccIsrIsPlatformNotificationIssued @ 0x140064210 (AcpiPccIsrIsPlatformNotificationIssued.c)
 * Callees:
 *     AcpiPccReadRegister @ 0x140053D9C (AcpiPccReadRegister.c)
 */

bool __fastcall AcpiPccIsCommandCompleteSet(unsigned __int8 *a1)
{
  char v2; // cl
  unsigned __int8 v3; // al
  char v4; // cl

  v2 = 0;
  if ( a1 )
  {
    v3 = *a1;
    if ( *a1 == 0xFF )
    {
      v4 = *(_BYTE *)(*((_QWORD *)a1 + 7) + 14LL);
      return v4 & 1;
    }
    if ( v3 < 3u )
    {
      v4 = *(_BYTE *)(*((_QWORD *)a1 + 7) + 6LL);
      return v4 & 1;
    }
    if ( (unsigned __int8)(v3 - 3) <= 1u )
      return (AcpiPccReadRegister(a1 + 264) & *((_QWORD *)a1 + 35)) != 0;
  }
  return v2;
}
