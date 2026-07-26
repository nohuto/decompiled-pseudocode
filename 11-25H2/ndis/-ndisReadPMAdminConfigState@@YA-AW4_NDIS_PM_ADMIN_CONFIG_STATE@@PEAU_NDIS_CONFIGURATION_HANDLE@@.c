/*
 * XREFs of ?ndisReadPMAdminConfigState@@YA?AW4_NDIS_PM_ADMIN_CONFIG_STATE@@PEAU_NDIS_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@@Z @ 0x14004F6B0
 * Callers:
 *     ?ndisReadPMRegistry@@YAXPEAU_NDIS_CONFIGURATION_HANDLE@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14004DEF0 (-ndisReadPMRegistry@@YAXPEAU_NDIS_CONFIGURATION_HANDLE@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     NdisReadConfiguration @ 0x140050D30 (NdisReadConfiguration.c)
 */

__int64 __fastcall ndisReadPMAdminConfigState(NDIS_HANDLE ConfigurationHandle, PNDIS_STRING Keyword)
{
  int v2; // ebx
  int Status; // [rsp+50h] [rbp+18h] BYREF
  PNDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+58h] [rbp+20h] BYREF

  v2 = 0;
  Status = 0;
  ParameterValue = 0LL;
  NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, Keyword, NdisParameterInteger);
  if ( Status )
    return 0LL;
  LOBYTE(v2) = ParameterValue->ParameterData.IntegerData != 0;
  return (unsigned int)(v2 + 1);
}
