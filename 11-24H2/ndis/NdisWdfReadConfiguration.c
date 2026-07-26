/*
 * XREFs of NdisWdfReadConfiguration @ 0x1400444D0
 * Callers:
 *     <none>
 * Callees:
 *     NdisReadConfiguration @ 0x140044D40 (NdisReadConfiguration.c)
 *     ndisIsWdfMiniportConfigurationKeywordDeprecated @ 0x140045390 (ndisIsWdfMiniportConfigurationKeywordDeprecated.c)
 *     WPP_RECORDER_SF_Z @ 0x1400511B0 (WPP_RECORDER_SF_Z.c)
 */

void __fastcall NdisWdfReadConfiguration(
        PNDIS_STATUS Status,
        PNDIS_CONFIGURATION_PARAMETER *ParameterValue,
        NDIS_HANDLE ConfigurationHandle,
        UNICODE_STRING *a4,
        NDIS_PARAMETER_TYPE ParameterType)
{
  int v9; // edx

  if ( (unsigned __int8)ndisIsWdfMiniportConfigurationKeywordDeprecated(a4) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 2;
      WPP_RECORDER_SF_Z(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v9,
        8,
        37,
        (struct _GUID *)&WPP_78fc2fada0c137ca2e9d99d042b3d7f2_Traceguids,
        (__int64)a4);
    }
    *Status = -1073741823;
  }
  else
  {
    NdisReadConfiguration(Status, ParameterValue, ConfigurationHandle, a4, ParameterType);
  }
}
