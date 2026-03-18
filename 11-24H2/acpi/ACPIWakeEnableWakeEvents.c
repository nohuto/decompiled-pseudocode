/*
 * XREFs of ACPIWakeEnableWakeEvents @ 0x140025710
 * Callers:
 *     <none>
 * Callees:
 *     ACPIGpeEnableWakeEvents @ 0x14002577C (ACPIGpeEnableWakeEvents.c)
 */

void *ACPIWakeEnableWakeEvents()
{
  void *result; // rax
  __int64 v1; // r9

  result = AcpiInformation;
  v1 = 0LL;
  AcpiPowerLeavingS0 = 0;
  if ( !*((_BYTE *)AcpiInformation + 133) )
  {
    if ( *((_WORD *)AcpiInformation + 51) )
    {
      do
      {
        *((_BYTE *)GpeCurEnable + v1) |= *((_BYTE *)GpeWakeEnable + v1) & (unsigned __int8)~*((_BYTE *)GpePending + v1);
        v1 = (unsigned int)(v1 + 1);
      }
      while ( (unsigned int)v1 < *((unsigned __int16 *)AcpiInformation + 51) );
    }
    return (void *)ACPIGpeEnableWakeEvents();
  }
  return result;
}
