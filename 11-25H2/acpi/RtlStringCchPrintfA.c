/*
 * XREFs of RtlStringCchPrintfA @ 0x14000AE88
 * Callers:
 *     PushFrame @ 0x140009A30 (PushFrame.c)
 *     PushTerm @ 0x14000A040 (PushTerm.c)
 *     GetNameSpaceObjectNoLock @ 0x14000AA30 (GetNameSpaceObjectNoLock.c)
 *     ParseOpcode @ 0x14000E5F0 (ParseOpcode.c)
 *     LogError @ 0x14000FE74 (LogError.c)
 *     ConvertToString @ 0x14002FAA4 (ConvertToString.c)
 *     ACPIGetConvertToInstanceIDWide @ 0x14003EC14 (ACPIGetConvertToInstanceIDWide.c)
 *     ACPIGetConvertToCompatibleIDWide @ 0x14003EE60 (ACPIGetConvertToCompatibleIDWide.c)
 *     ACPIGetConvertToStringWideWithPrepend @ 0x14003F258 (ACPIGetConvertToStringWideWithPrepend.c)
 *     ACPIGetConvertToPnpIDWide @ 0x14003F6EC (ACPIGetConvertToPnpIDWide.c)
 *     ACPIGetConvertToDeviceIDWide @ 0x14004C2E8 (ACPIGetConvertToDeviceIDWide.c)
 *     ACPIGetProcessorIDWide @ 0x14004D5C8 (ACPIGetProcessorIDWide.c)
 *     ACPIGetConvertToHardwareIDWide @ 0x14004DEF0 (ACPIGetConvertToHardwareIDWide.c)
 *     ACPIGetConvertToStringWide @ 0x14004F820 (ACPIGetConvertToStringWide.c)
 *     ACPIAmliDoubleToName @ 0x1400521E0 (ACPIAmliDoubleToName.c)
 *     ACPIBuildDockExtension @ 0x140058480 (ACPIBuildDockExtension.c)
 *     ACPIBuildProcessorExtension @ 0x14005A0E8 (ACPIBuildProcessorExtension.c)
 *     ACPICMButtonStartWorker @ 0x14005BB60 (ACPICMButtonStartWorker.c)
 *     ACPIRegReadEntireAcpiTable @ 0x1400A37D8 (ACPIRegReadEntireAcpiTable.c)
 *     ACPIRegReadEntireSimulatorAcpiTable @ 0x1400A3A38 (ACPIRegReadEntireSimulatorAcpiTable.c)
 *     OSOpenAMLINamespaceOverrideHandle @ 0x1400A3C50 (OSOpenAMLINamespaceOverrideHandle.c)
 *     ACPIInitReadRegistryKeys @ 0x1400C5868 (ACPIInitReadRegistryKeys.c)
 *     ACPIRegDumpAcpiTable @ 0x1400C9730 (ACPIRegDumpAcpiTable.c)
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
