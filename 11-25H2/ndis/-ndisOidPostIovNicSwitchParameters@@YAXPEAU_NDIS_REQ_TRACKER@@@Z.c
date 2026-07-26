/*
 * XREFs of ?ndisOidPostIovNicSwitchParameters@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400E6DB0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1400129A0 (WPP_RECORDER_SF_qq.c)
 *     NdisOpenConfigurationEx @ 0x140050AC0 (NdisOpenConfigurationEx.c)
 *     NdisCloseConfiguration @ 0x140051840 (NdisCloseConfiguration.c)
 *     WPP_RECORDER_SF_D @ 0x14006D370 (WPP_RECORDER_SF_D_ea_14006D370.c)
 *     NdisOpenConfigurationKeyByName @ 0x140075C50 (NdisOpenConfigurationKeyByName.c)
 *     NdisWriteConfiguration @ 0x14007D550 (NdisWriteConfiguration.c)
 *     ?ndisIovFindSwitchBySwitchId@@YAPEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x140097870 (-ndisIovFindSwitchBySwitchId@@YAPEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisCaptureIovOidContext@@YA?AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z @ 0x1400E4768 (-ndisCaptureIovOidContext@@YA-AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z.c)
 */

void __fastcall ndisOidPostIovNicSwitchParameters(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // r13
  __int64 v3; // rax
  struct _NDIS_MINIPORT_BLOCK *v4; // r15
  int v5; // eax
  __int64 v6; // rbx
  _LIST_ENTRY *SwitchBySwitchId; // rax
  _LIST_ENTRY *v8; // rsi
  NDIS_STATUS v9; // eax
  PVOID v10; // rdi
  PVOID v11; // r14
  __int64 v12; // r8
  unsigned __int16 *v13; // rdx
  _OWORD *v14; // rcx
  _OWORD *v15; // rax
  __int128 v16; // xmm1
  char v17[8]; // [rsp+28h] [rbp-A1h]
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
  v4 = *(struct _NDIS_MINIPORT_BLOCK **)(v3 + 8);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x21u,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      (char)v4,
      v1);
  if ( *(_DWORD *)(*((_QWORD *)a1 + 4) + 4LL) == 1 )
  {
    if ( (_BYTE)v20 )
    {
      v5 = *((_DWORD *)a1 + 10);
      if ( !v5 || v5 == -1071448016 )
      {
        v6 = *(_QWORD *)(v1 + 40);
        SwitchBySwitchId = ndisIovFindSwitchBySwitchId(v4, *(_DWORD *)(v6 + 12));
        v8 = SwitchBySwitchId;
        if ( SwitchBySwitchId )
        {
          if ( (*(_DWORD *)(v6 + 4) & 0x20000) != 0 )
          {
            LODWORD(SwitchBySwitchId[39].Blink) = *(_DWORD *)(v6 + 532);
            if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              *(_DWORD *)v17 = *(_DWORD *)(v6 + 532);
              WPP_RECORDER_SF_D(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                4u,
                0x1Au,
                0x22u,
                (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
                *(_QWORD *)v17);
            }
          }
          ConfigObject.Flags = 0;
          ConfigObject.Header = (_NDIS_OBJECT_HEADER)1573289;
          ConfigObject.NdisHandle = v4;
          v9 = NdisOpenConfigurationEx(&ConfigObject, &ConfigurationHandle);
          v10 = ConfigurationHandle;
          Status = v9;
          if ( !v9 )
          {
            NdisOpenConfigurationKeyByName(&Status, ConfigurationHandle, &NicSwitchDefaultSwitchStr, &SubKeyHandle);
            v11 = SubKeyHandle;
            if ( !Status && (*(_DWORD *)(v6 + 4) & 0x10000) != 0 )
            {
              v12 = 4LL;
              v13 = (unsigned __int16 *)(v6 + 16);
              v14 = (_OWORD *)((char *)&v8[7].Flink + 4);
              v15 = (_OWORD *)(v6 + 16);
              do
              {
                *v14 = *v15;
                v14[1] = v15[1];
                v14[2] = v15[2];
                v14[3] = v15[3];
                v14[4] = v15[4];
                v14[5] = v15[5];
                v14[6] = v15[6];
                v14 += 8;
                v16 = v15[7];
                v15 += 8;
                *(v14 - 1) = v16;
                --v12;
              }
              while ( v12 );
              *(_DWORD *)v14 = *(_DWORD *)v15;
              ParameterValue.ParameterType = NdisParameterString;
              ParameterValue.ParameterData.StringData.Buffer = (wchar_t *)(v6 + 18);
              ParameterValue.ParameterData.StringData.Length = *v13;
              ParameterValue.ParameterData.StringData.MaximumLength = *v13 + 2;
              NdisWriteConfiguration(&Status, v11, &NicSwitchNameStr, &ParameterValue);
            }
            if ( v11 )
              NdisCloseConfiguration(v11);
          }
          if ( v10 )
            NdisCloseConfiguration(v10);
        }
      }
    }
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x23u,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      (char)v4,
      v1);
}
