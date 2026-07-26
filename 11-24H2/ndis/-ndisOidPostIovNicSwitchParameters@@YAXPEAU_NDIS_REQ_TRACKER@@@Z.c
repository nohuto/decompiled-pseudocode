/*
 * XREFs of ?ndisOidPostIovNicSwitchParameters@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400DFBA0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     NdisOpenConfigurationEx @ 0x140044A20 (NdisOpenConfigurationEx.c)
 *     NdisCloseConfiguration @ 0x140045400 (NdisCloseConfiguration.c)
 *     WPP_RECORDER_SF_D @ 0x1400527F0 (WPP_RECORDER_SF_D_ea_1400527F0.c)
 *     NdisOpenConfigurationKeyByName @ 0x14005B220 (NdisOpenConfigurationKeyByName.c)
 *     NdisWriteConfiguration @ 0x1400622A0 (NdisWriteConfiguration.c)
 *     ?ndisIovFindSwitchBySwitchId@@YAPEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x14008C0C0 (-ndisIovFindSwitchBySwitchId@@YAPEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisCaptureIovOidContext@@YA?AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z @ 0x1400DD558 (-ndisCaptureIovOidContext@@YA-AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z.c)
 */

void __fastcall ndisOidPostIovNicSwitchParameters(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // r13
  __int64 v3; // rax
  int v4; // edx
  struct _NDIS_MINIPORT_BLOCK *v5; // r15
  int v6; // eax
  __int64 v7; // rbx
  _LIST_ENTRY *SwitchBySwitchId; // rax
  _LIST_ENTRY *v9; // rsi
  NDIS_STATUS v10; // eax
  PVOID v11; // rdi
  PVOID v12; // r14
  __int64 v13; // r8
  unsigned __int16 *v14; // rdx
  _OWORD *v15; // rcx
  _OWORD *v16; // rax
  __int128 v17; // xmm1
  struct _NDIS_CONFIGURATION_OBJECT ConfigObject; // [rsp+40h] [rbp-89h] BYREF
  struct _NDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+58h] [rbp-71h] BYREF
  __int128 v20; // [rsp+70h] [rbp-59h]
  _BYTE v21[112]; // [rsp+B0h] [rbp-19h] BYREF
  int Status; // [rsp+130h] [rbp+67h] BYREF
  PVOID ConfigurationHandle; // [rsp+138h] [rbp+6Fh] BYREF
  PVOID SubKeyHandle; // [rsp+140h] [rbp+77h] BYREF

  v1 = *((_QWORD *)a1 + 4);
  ConfigurationHandle = 0LL;
  SubKeyHandle = 0LL;
  memset(&ConfigObject, 0, sizeof(ConfigObject));
  memset(&ParameterValue, 0, sizeof(ParameterValue));
  v3 = ndisCaptureIovOidContext((__int64)v21, a1);
  v20 = *(_OWORD *)v3;
  v5 = *(struct _NDIS_MINIPORT_BLOCK **)(v3 + 8);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v4,
      26,
      33,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      (char)v5,
      v1);
  }
  if ( *(_DWORD *)(*((_QWORD *)a1 + 4) + 4LL) == 1 )
  {
    if ( (_BYTE)v20 )
    {
      v6 = *((_DWORD *)a1 + 10);
      if ( !v6 || v6 == -1071448016 )
      {
        v7 = *(_QWORD *)(v1 + 40);
        SwitchBySwitchId = ndisIovFindSwitchBySwitchId(v5, *(_DWORD *)(v7 + 12));
        v9 = SwitchBySwitchId;
        if ( SwitchBySwitchId )
        {
          if ( (*(_DWORD *)(v7 + 4) & 0x20000) != 0 )
          {
            LODWORD(SwitchBySwitchId[39].Blink) = *(_DWORD *)(v7 + 532);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v4) = 4;
              WPP_RECORDER_SF_D(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v4,
                26,
                34,
                (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
                *(_DWORD *)(v7 + 532));
            }
          }
          ConfigObject.Flags = 0;
          ConfigObject.Header = (_NDIS_OBJECT_HEADER)1573289;
          ConfigObject.NdisHandle = v5;
          v10 = NdisOpenConfigurationEx(&ConfigObject, &ConfigurationHandle);
          v11 = ConfigurationHandle;
          Status = v10;
          if ( !v10 )
          {
            NdisOpenConfigurationKeyByName(&Status, ConfigurationHandle, &NicSwitchDefaultSwitchStr, &SubKeyHandle);
            v12 = SubKeyHandle;
            if ( !Status && (*(_DWORD *)(v7 + 4) & 0x10000) != 0 )
            {
              v13 = 4LL;
              v14 = (unsigned __int16 *)(v7 + 16);
              v15 = (_OWORD *)((char *)&v9[7].Flink + 4);
              v16 = (_OWORD *)(v7 + 16);
              do
              {
                *v15 = *v16;
                v15[1] = v16[1];
                v15[2] = v16[2];
                v15[3] = v16[3];
                v15[4] = v16[4];
                v15[5] = v16[5];
                v15[6] = v16[6];
                v15 += 8;
                v17 = v16[7];
                v16 += 8;
                *(v15 - 1) = v17;
                --v13;
              }
              while ( v13 );
              *(_DWORD *)v15 = *(_DWORD *)v16;
              ParameterValue.ParameterType = NdisParameterString;
              ParameterValue.ParameterData.StringData.Buffer = (wchar_t *)(v7 + 18);
              ParameterValue.ParameterData.StringData.Length = *v14;
              ParameterValue.ParameterData.StringData.MaximumLength = *v14 + 2;
              NdisWriteConfiguration(&Status, v12, &NicSwitchNameStr, &ParameterValue);
            }
            if ( v12 )
              NdisCloseConfiguration(v12);
          }
          if ( v11 )
            NdisCloseConfiguration(v11);
        }
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v4,
      26,
      35,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      (char)v5,
      v1);
  }
}
