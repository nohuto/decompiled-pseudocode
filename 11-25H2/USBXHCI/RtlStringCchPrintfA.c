/*
 * XREFs of RtlStringCchPrintfA @ 0x140011198
 * Callers:
 *     Endpoint_Enable @ 0x140011530 (Endpoint_Enable.c)
 *     Endpoint_SetLogIdentifier @ 0x140033A2C (Endpoint_SetLogIdentifier.c)
 *     Controller_TelemetryReport @ 0x1400427C4 (Controller_TelemetryReport.c)
 *     Command_PrepareHardware @ 0x140074580 (Command_PrepareHardware.c)
 *     Controller_Create @ 0x140074D44 (Controller_Create.c)
 *     Controller_PopulateAcpiDeviceInformation @ 0x140076BE4 (Controller_PopulateAcpiDeviceInformation.c)
 *     Controller_SetLogIdentifier @ 0x140078ED0 (Controller_SetLogIdentifier.c)
 *     Interrupter_PrepareInterrupter @ 0x140082C5C (Interrupter_PrepareInterrupter.c)
 * Callees:
 *     <none>
 */

NTSTATUS RtlStringCchPrintfA(NTSTRSAFE_PSTR pszDest, size_t cchDest, NTSTRSAFE_PCSTR pszFormat, ...)
{
  size_t v4; // rdi
  NTSTATUS v5; // ebx
  int v6; // eax
  va_list Args; // [rsp+68h] [rbp+20h] BYREF

  va_start(Args, pszFormat);
  if ( cchDest - 1 > 0x7FFFFFFE )
  {
    v5 = -1073741811;
    if ( cchDest )
      *pszDest = 0;
  }
  else
  {
    v4 = cchDest - 1;
    v5 = 0;
    v6 = _vsnprintf(pszDest, cchDest - 1, pszFormat, Args);
    if ( v6 < 0 || v6 > v4 )
    {
      pszDest[v4] = 0;
      return -2147483643;
    }
    else if ( v6 == v4 )
    {
      pszDest[v4] = 0;
    }
  }
  return v5;
}
