/*
 * XREFs of OSCloseHandle @ 0x1400BE908
 * Callers:
 *     ACPIRootPowerCallBack @ 0x14003A030 (ACPIRootPowerCallBack.c)
 *     AMLIAddNamespaceOverride @ 0x14006C0C4 (AMLIAddNamespaceOverride.c)
 *     AMLIAddNextNamespaceOverride @ 0x14006C1E8 (AMLIAddNextNamespaceOverride.c)
 *     OSReadAcpiConfigurationData @ 0x1400C4D0C (OSReadAcpiConfigurationData.c)
 *     ACPIInitReadRegistryKeys @ 0x1400C5868 (ACPIInitReadRegistryKeys.c)
 *     ACPIInitGetPlatformOverrides @ 0x1400C5E00 (ACPIInitGetPlatformOverrides.c)
 *     AcpiDiagInitialize @ 0x1400C6398 (AcpiDiagInitialize.c)
 *     ACPIRegDumpAcpiTable @ 0x1400C9730 (ACPIRegDumpAcpiTable.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall OSCloseHandle(void *a1)
{
  return ZwClose(a1);
}
