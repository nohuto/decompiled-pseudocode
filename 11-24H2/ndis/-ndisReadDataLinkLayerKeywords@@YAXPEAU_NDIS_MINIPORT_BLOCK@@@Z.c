/*
 * XREFs of ?ndisReadDataLinkLayerKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140164940
 * Callers:
 *     ?ndisMSetGeneralAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x14007EC60 (-ndisMSetGeneralAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTR.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x140014250 (WPP_RECORDER_SF_qL.c)
 *     NdisOpenConfigurationEx @ 0x140044A20 (NdisOpenConfigurationEx.c)
 *     NdisReadConfiguration @ 0x140044D40 (NdisReadConfiguration.c)
 *     NdisCloseConfiguration @ 0x140045400 (NdisCloseConfiguration.c)
 */

void __fastcall ndisReadDataLinkLayerKeywords(struct _NDIS_MINIPORT_BLOCK *a1)
{
  NDIS_HANDLE v2; // rsi
  int v3; // edi
  UNICODE_STRING Keyword; // [rsp+40h] [rbp-48h] BYREF
  struct _NDIS_CONFIGURATION_OBJECT v5; // [rsp+50h] [rbp-38h] BYREF
  int Status; // [rsp+90h] [rbp+8h] BYREF
  NDIS_HANDLE ConfigurationHandle; // [rsp+98h] [rbp+10h] BYREF
  PNDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+A0h] [rbp+18h] BYREF

  v5.NdisHandle = a1;
  ConfigurationHandle = 0LL;
  *(_QWORD *)&v5.Flags = 0LL;
  ParameterValue = 0LL;
  Keyword.Buffer = L"*DataLinkLayerType";
  *(_QWORD *)&v5.Header.Type = 1311145LL;
  *(_QWORD *)&Keyword.Length = 2490404LL;
  Status = NdisOpenConfigurationEx(&v5, &ConfigurationHandle);
  if ( !Status )
  {
    v2 = ConfigurationHandle;
    NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &Keyword, NdisParameterInteger);
    v3 = Status;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        1u,
        0x77u,
        (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
        (char)a1,
        Status);
    if ( !v3 )
    {
      a1->DataLinkLayerType = ParameterValue->ParameterData.IntegerData;
      _InterlockedOr((volatile signed __int32 *)&a1->InterlockedFlags, 0x100u);
      v2 = ConfigurationHandle;
    }
    NdisCloseConfiguration(v2);
  }
}
