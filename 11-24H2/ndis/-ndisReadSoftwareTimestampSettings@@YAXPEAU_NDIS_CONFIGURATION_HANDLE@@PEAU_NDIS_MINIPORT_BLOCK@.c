/*
 * XREFs of ?ndisReadSoftwareTimestampSettings@@YAXPEAU_NDIS_CONFIGURATION_HANDLE@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14008CC60
 * Callers:
 *     ?ndisInitializeConfiguration@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z @ 0x14016A2A0 (-ndisInitializeConfiguration@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z.c)
 * Callees:
 *     NdisReadConfiguration @ 0x140044D40 (NdisReadConfiguration.c)
 */

void __fastcall ndisReadSoftwareTimestampSettings(NDIS_HANDLE ConfigurationHandle, struct _NDIS_MINIPORT_BLOCK *a2)
{
  int Status; // [rsp+50h] [rbp+18h] BYREF
  PNDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+58h] [rbp+20h] BYREF

  Status = 0;
  ParameterValue = 0LL;
  NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &SwTimestampSettingsStr, NdisParameterInteger);
  if ( Status )
    a2->TimestampFlags = 0;
  else
    a2->TimestampFlags = ParameterValue->ParameterData.IntegerData;
}
