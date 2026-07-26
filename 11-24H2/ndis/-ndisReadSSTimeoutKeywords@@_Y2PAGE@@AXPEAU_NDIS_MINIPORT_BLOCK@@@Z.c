/*
 * XREFs of ?ndisReadSSTimeoutKeywords@@_Y2PAGE@@AXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140141054
 * Callers:
 *     ?ndisSelectiveSuspendInitialize@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1401412C8 (-ndisSelectiveSuspendInitialize@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_Lq @ 0x140036410 (WPP_RECORDER_SF_Lq.c)
 *     NdisOpenConfigurationEx @ 0x140044A20 (NdisOpenConfigurationEx.c)
 *     NdisReadConfiguration @ 0x140044D40 (NdisReadConfiguration.c)
 *     NdisCloseConfiguration @ 0x140045400 (NdisCloseConfiguration.c)
 */

void __fastcall ndisReadSSTimeoutKeywords(struct _NDIS_MINIPORT_BLOCK *a1)
{
  NDIS_STATUS v2; // eax
  unsigned int IntegerData; // edi
  unsigned int v4; // r14d
  unsigned int v5; // edi
  int v6; // edi
  struct _NDIS_CONFIGURATION_OBJECT ConfigObject; // [rsp+40h] [rbp-20h] BYREF
  int Status; // [rsp+80h] [rbp+20h] BYREF
  PNDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+88h] [rbp+28h] BYREF
  PVOID ConfigurationHandle; // [rsp+90h] [rbp+30h] BYREF

  ConfigurationHandle = 0LL;
  ParameterValue = 0LL;
  *(_QWORD *)&ConfigObject.Header.Revision = 0LL;
  ConfigObject.NdisHandle = a1;
  *((_BYTE *)&ConfigObject.Flags + 4) = 0;
  ConfigObject.Flags = 0;
  *(_WORD *)((char *)&ConfigObject.Flags + 5) = 0;
  *((_BYTE *)&ConfigObject.Flags + 7) = 0;
  ConfigObject.Header = (_NDIS_OBJECT_HEADER)1311145;
  v2 = NdisOpenConfigurationEx(&ConfigObject, &ConfigurationHandle);
  Status = v2;
  if ( v2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Lq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xFu,
        0xCu,
        (struct _GUID *)&WPP_d69e2148828f3cdf9c5ee0d0c96342c3_Traceguids,
        v2,
        a1);
    *((_DWORD *)a1->SelectiveSuspend + 2) = 5000;
    *((_DWORD *)a1->SelectiveSuspend + 3) = 0;
  }
  else
  {
    IntegerData = 5;
    NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &SSIdleTimeoutStr, NdisParameterInteger);
    if ( !Status && ParameterValue->ParameterData.IntegerData - 1 <= 0x3B )
      IntegerData = ParameterValue->ParameterData.IntegerData;
    v4 = 1000 * IntegerData;
    v5 = 0;
    NdisReadConfiguration(
      &Status,
      &ParameterValue,
      ConfigurationHandle,
      &SSIdleTimeoutScreenOffStr,
      NdisParameterInteger);
    if ( !Status && ParameterValue->ParameterData.IntegerData - 1 <= 0x3B )
      v5 = ParameterValue->ParameterData.IntegerData;
    v6 = 1000 * v5;
    NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &SSIdleTimeoutMsStr, NdisParameterInteger);
    if ( !Status )
      v4 = ParameterValue->ParameterData.IntegerData;
    NdisCloseConfiguration(ConfigurationHandle);
    *((_DWORD *)a1->SelectiveSuspend + 2) = v4;
    *((_DWORD *)a1->SelectiveSuspend + 3) = v6;
  }
}
