/*
 * XREFs of ACPIGpeHalEnableDisableEvents @ 0x140021D00
 * Callers:
 *     <none>
 * Callees:
 *     ACPIGpeEnableDisableEvents @ 0x14001A570 (ACPIGpeEnableDisableEvents.c)
 *     ACPIReadGpeStatusRegister @ 0x140021DA0 (ACPIReadGpeStatusRegister.c)
 *     READ_PM1_STATUS @ 0x140023400 (READ_PM1_STATUS.c)
 *     memset @ 0x140070F40 (memset.c)
 */

void __fastcall ACPIGpeHalEnableDisableEvents(char a1)
{
  __int64 v1; // rbx
  PVOID v3; // rcx

  v1 = 0LL;
  if ( !*((_BYTE *)AcpiInformation + 133) )
  {
    if ( a1 )
    {
      if ( *((_WORD *)AcpiInformation + 51) )
      {
        do
        {
          *((_BYTE *)GpeSavedWakeStatus + v1) = ACPIReadGpeStatusRegister((unsigned int)v1);
          v1 = (unsigned int)(v1 + 1);
        }
        while ( (unsigned int)v1 < *((unsigned __int16 *)AcpiInformation + 51) );
      }
      *((_WORD *)AcpiInformation + 58) = READ_PM1_STATUS();
      AcpiPowerSavedGpeBitsValid = 1;
    }
    else
    {
      v3 = GpeSavedWakeMask;
      *((_WORD *)AcpiInformation + 57) = 0;
      memset(v3, 0, *((unsigned __int16 *)AcpiInformation + 51));
    }
    ACPIGpeEnableDisableEvents(a1);
  }
}
