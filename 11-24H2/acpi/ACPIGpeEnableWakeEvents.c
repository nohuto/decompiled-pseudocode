/*
 * XREFs of ACPIGpeEnableWakeEvents @ 0x14002577C
 * Callers:
 *     ACPIWakeEnableWakeEvents @ 0x140025710 (ACPIWakeEnableWakeEvents.c)
 * Callees:
 *     ACPIWriteGpeEnableRegister @ 0x1400257F0 (ACPIWriteGpeEnableRegister.c)
 *     READ_PM1_ENABLE @ 0x140025890 (READ_PM1_ENABLE.c)
 */

__int64 ACPIGpeEnableWakeEvents()
{
  __int64 i; // rdi
  void *v1; // rdx
  __int64 result; // rax

  for ( i = 0LL; (unsigned int)i < *((unsigned __int16 *)AcpiInformation + 51); i = (unsigned int)(i + 1) )
  {
    v1 = GpeWakeEnable;
    LOBYTE(v1) = *((_BYTE *)GpeWakeEnable + i);
    ACPIWriteGpeEnableRegister((unsigned int)i, v1);
    *((_BYTE *)GpeSavedWakeMask + i) = *((_BYTE *)GpeWakeEnable + i);
  }
  result = READ_PM1_ENABLE();
  *((_WORD *)AcpiInformation + 57) = result;
  return result;
}
