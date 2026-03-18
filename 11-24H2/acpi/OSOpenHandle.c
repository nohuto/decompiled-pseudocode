/*
 * XREFs of OSOpenHandle @ 0x1400B7118
 * Callers:
 *     ACPIInitGlobalHeapSize @ 0x140098914 (ACPIInitGlobalHeapSize.c)
 *     AcpiUseFlexibleOscHandoff @ 0x1400A0D78 (AcpiUseFlexibleOscHandoff.c)
 *     ACPIRegGetTableFromSimulatorRegistryEntry @ 0x1400A35AC (ACPIRegGetTableFromSimulatorRegistryEntry.c)
 *     OSOpenAMLINamespaceOverrideHandle @ 0x1400A3C50 (OSOpenAMLINamespaceOverrideHandle.c)
 *     OSOpenNextSubkey @ 0x1400A3F64 (OSOpenNextSubkey.c)
 *     ACPIRootInitialize @ 0x1400A67CC (ACPIRootInitialize.c)
 *     ACPIThermalGetOverrideHandle @ 0x1400B6754 (ACPIThermalGetOverrideHandle.c)
 *     OSReadRegValue @ 0x1400B6898 (OSReadRegValue.c)
 *     ACPIRegReadAMLRegistryEntry @ 0x1400B6E24 (ACPIRegReadAMLRegistryEntry.c)
 *     ACPIInitReadRegistryKeys @ 0x1400C5868 (ACPIInitReadRegistryKeys.c)
 *     ACPIInitGetPlatformOverrides @ 0x1400C5E00 (ACPIInitGetPlatformOverrides.c)
 *     AcpiDiagInitialize @ 0x1400C6398 (AcpiDiagInitialize.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x14003A7DC (WPP_RECORDER_SF_d.c)
 *     OSOpenUnicodeHandle @ 0x1400B71E8 (OSOpenUnicodeHandle.c)
 */

__int64 __fastcall OSOpenHandle(PCSZ SourceString, __int64 a2, __int64 a3)
{
  NTSTATUS v5; // ebx
  NTSTATUS v7; // [rsp+28h] [rbp-30h]
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF
  struct _STRING SourceStringa; // [rsp+40h] [rbp-18h] BYREF

  SourceStringa = 0LL;
  DestinationString = 0LL;
  RtlInitAnsiString(&SourceStringa, SourceString);
  v5 = RtlAnsiStringToUnicodeString(&DestinationString, &SourceStringa, 1u);
  if ( v5 >= 0 )
  {
    v5 = OSOpenUnicodeHandle(&DestinationString, a2, a3);
    RtlFreeUnicodeString(&DestinationString);
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v7 = v5;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0x16u,
      0xCu,
      (__int64)&WPP_b53b04e5215c33f856eb87d923c6e01e_Traceguids,
      v7,
      *(_QWORD *)&DestinationString.Length,
      DestinationString.Buffer);
  }
  return (unsigned int)v5;
}
