/*
 * XREFs of RtlOverwriteFeatureConfigurationBuffer @ 0x1801455A0
 * Callers:
 *     <none>
 * Callees:
 *     ZwSetSystemInformation @ 0x1801637C0 (ZwSetSystemInformation.c)
 *     RtlpFcValidateFeatureConfigurationBuffer @ 0x1801702B0 (RtlpFcValidateFeatureConfigurationBuffer.c)
 */

NTSTATUS __cdecl RtlOverwriteFeatureConfigurationBuffer(
        PRTL_FEATURE_CHANGE_STAMP PreviousChangeStamp,
        RTL_FEATURE_CONFIGURATION_TYPE ConfigurationType,
        PVOID ConfigurationBuffer,
        ULONG ConfigurationBufferSize)
{
  __int64 v4; // rbp
  NTSTATUS result; // eax
  __int128 SystemInformation; // [rsp+20h] [rbp-48h] BYREF
  __int128 v10; // [rsp+30h] [rbp-38h]
  __int128 v11; // [rsp+40h] [rbp-28h]
  int v12; // [rsp+50h] [rbp-18h]

  v4 = ConfigurationBufferSize;
  v12 = 0;
  SystemInformation = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  result = RtlpFcValidateFeatureConfigurationBuffer(ConfigurationBuffer, ConfigurationBufferSize);
  if ( result >= 0 )
  {
    LODWORD(SystemInformation) = 1;
    LODWORD(v10) = ConfigurationType;
    if ( PreviousChangeStamp )
      *((_QWORD *)&SystemInformation + 1) = *PreviousChangeStamp;
    *((_QWORD *)&v10 + 1) = v4;
    *(_QWORD *)&v11 = ConfigurationBuffer;
    result = ZwSetSystemInformation(SystemFeatureConfigurationInformation, &SystemInformation, 0x28u);
    if ( result >= 0 )
      return 0;
  }
  return result;
}
