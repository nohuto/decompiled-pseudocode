/*
 * XREFs of ACPIEnableInitializeACPI @ 0x140022A10
 * Callers:
 *     ACPIInitialize @ 0x1400C4008 (ACPIInitialize.c)
 * Callees:
 *     ACPIGpeEnableDisableEvents @ 0x14001A570 (ACPIGpeEnableDisableEvents.c)
 *     ACPIGpeClearRegisters @ 0x140021CA4 (ACPIGpeClearRegisters.c)
 *     WRITE_PM1_ENABLE @ 0x140022AC8 (WRITE_PM1_ENABLE.c)
 *     WRITE_PM1_CONTROL @ 0x140023028 (WRITE_PM1_CONTROL.c)
 *     READ_PM1_STATUS @ 0x140023400 (READ_PM1_STATUS.c)
 *     ACPIEnableEnterACPIMode @ 0x1400234B0 (ACPIEnableEnterACPIMode.c)
 *     READ_PM1_CONTROL @ 0x140023620 (READ_PM1_CONTROL.c)
 *     CLEAR_PM1_STATUS_REGISTER @ 0x140055CB8 (CLEAR_PM1_STATUS_REGISTER.c)
 */

void *__fastcall ACPIEnableInitializeACPI(char a1)
{
  void *result; // rax
  __int64 v3; // rcx
  unsigned __int16 v4; // ax
  __int64 v5; // rdx

  result = AcpiInformation;
  if ( !*((_BYTE *)AcpiInformation + 133) )
  {
    if ( (READ_PM1_CONTROL() & 1) != 0 )
    {
      if ( (_DWORD)AcpiKsrContext == 1481917259 )
        *((_BYTE *)AcpiInformation + 84) = BYTE8(AcpiKsrContext) & 1;
    }
    else
    {
      LOBYTE(v3) = a1;
      *((_BYTE *)AcpiInformation + 84) = 0;
      ACPIEnableEnterACPIMode(v3);
    }
    CLEAR_PM1_STATUS_REGISTER();
    if ( (READ_PM1_STATUS() & 0xFBEF) != 0 )
    {
      CLEAR_PM1_STATUS_REGISTER();
      READ_PM1_STATUS();
    }
    WRITE_PM1_ENABLE(*((unsigned __int16 *)AcpiInformation + 56));
    if ( a1 )
    {
      ACPIGpeClearRegisters();
      ACPIGpeEnableDisableEvents(1);
    }
    v4 = READ_PM1_CONTROL();
    LOBYTE(v5) = 1;
    return (void *)WRITE_PM1_CONTROL(v4 & 0xDFFD, v5);
  }
  return result;
}
