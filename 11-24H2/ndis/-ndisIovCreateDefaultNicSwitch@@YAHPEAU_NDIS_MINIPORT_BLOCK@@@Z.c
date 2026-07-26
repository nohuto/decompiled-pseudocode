/*
 * XREFs of ?ndisIovCreateDefaultNicSwitch@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140064190
 * Callers:
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x14017BC40 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     ?ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x14000AD50 (-ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQ.c)
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140014130 (WPP_RECORDER_SF_qD.c)
 *     NdisOpenConfigurationEx @ 0x140044A20 (NdisOpenConfigurationEx.c)
 *     NdisCloseConfiguration @ 0x140045400 (NdisCloseConfiguration.c)
 *     NdisOpenConfigurationKeyByName @ 0x14005B220 (NdisOpenConfigurationKeyByName.c)
 *     ?ndisIovFinalizeNicSwitch@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_NIC_SWITCH_PARAMETERS@@PEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_PF_BLOCK@@PEAU_NDIS_VPORT_BLOCK@@@Z @ 0x1400DE87C (-ndisIovFinalizeNicSwitch@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_NIC_SWITCH_PARAMETERS@@PEAU_ND.c)
 *     ?ndisIovInitializeNicSwitch@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_NIC_SWITCH_PARAMETERS@@PEAPEAU_NDIS_NIC_SWITCH_BLOCK@@PEAPEAU_NDIS_PF_BLOCK@@PEAPEAU_NDIS_VPORT_BLOCK@@@Z @ 0x1400DEF20 (-ndisIovInitializeNicSwitch@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_NIC_SWITCH_PARAMETERS@@PEAPE.c)
 *     ?ndisIovNicSwitchWithoutIovSupported@@YAEPEAU_NDIS_NIC_SWITCH_CAPABILITIES@@@Z @ 0x1400DF118 (-ndisIovNicSwitchWithoutIovSupported@@YAEPEAU_NDIS_NIC_SWITCH_CAPABILITIES@@@Z.c)
 *     ?ndisIovReadSwitchConfiguration@@YAHPEAXPEAU_NDIS_NIC_SWITCH_PARAMETERS@@@Z @ 0x1400DF134 (-ndisIovReadSwitchConfiguration@@YAHPEAXPEAU_NDIS_NIC_SWITCH_PARAMETERS@@@Z.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     memset @ 0x1400E7500 (memset.c)
 *     ?ndisIovGetNumberOfQueuesForDefaultVPort@@YAKPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14014B8F0 (-ndisIovGetNumberOfQueuesForDefaultVPort@@YAKPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisIovCreateDefaultNicSwitch(struct _NDIS_MINIPORT_BLOCK *a1)
{
  unsigned int v2; // edi
  PVOID v3; // rsi
  PVOID v4; // r14
  char v5; // r15
  struct _GUID *v6; // r8
  _NDIS_SRIOV_CAPABILITIES *SriovCurrentCapabilities; // rax
  _NDIS_NIC_SWITCH_CAPABILITIES *NicSwitchCurrentCapabilities; // rax
  unsigned int v9; // eax
  PVOID v10; // rcx
  struct _NDIS_VPORT_BLOCK *v11; // r12
  NDIS_STATUS SwitchConfiguration; // eax
  unsigned int MaxNumVFs; // eax
  _NDIS_NIC_SWITCH_CAPABILITIES *v14; // r9
  __int64 v15; // r9
  int v16; // eax
  int v17; // r8d
  PVOID v19; // [rsp+40h] [rbp-C0h] BYREF
  int Status[2]; // [rsp+48h] [rbp-B8h] BYREF
  PVOID P; // [rsp+50h] [rbp-B0h] BYREF
  PVOID SubKeyHandle; // [rsp+58h] [rbp-A8h] BYREF
  PVOID ConfigurationHandle; // [rsp+60h] [rbp-A0h] BYREF
  struct _NDIS_CONFIGURATION_OBJECT ConfigObject; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v25[248]; // [rsp+80h] [rbp-80h] BYREF
  _DWORD v26[4]; // [rsp+180h] [rbp+80h] BYREF
  _DWORD v27[140]; // [rsp+190h] [rbp+90h] BYREF

  v2 = 0;
  memset(&ConfigObject, 0, sizeof(ConfigObject));
  ConfigurationHandle = 0LL;
  SubKeyHandle = 0LL;
  v3 = 0LL;
  memset(v27, 0, 552);
  v4 = 0LL;
  memset(v25, 0, sizeof(v25));
  v5 = 0;
  v19 = 0LL;
  memset(v26, 0, 12);
  P = 0LL;
  *(_QWORD *)Status = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      26,
      10,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      (char)a1);
  if ( !ndisIovNicSwitchWithoutIovSupported(a1->TopNicSwitchCurrentCapabilities) )
  {
    SriovCurrentCapabilities = a1->SriovCurrentCapabilities;
    if ( SriovCurrentCapabilities )
    {
      if ( (SriovCurrentCapabilities->SriovCapabilities & 3) == 3 )
      {
        NicSwitchCurrentCapabilities = a1->NicSwitchCurrentCapabilities;
        if ( !NicSwitchCurrentCapabilities
          || NicSwitchCurrentCapabilities->Header.Revision < 2u
          || NicSwitchCurrentCapabilities->Header.Size < 0x74u
          || !NicSwitchCurrentCapabilities->MaxNumSwitches )
        {
          v2 = -1073741637;
          goto LABEL_36;
        }
        v9 = ndisIovInitializeNicSwitch(
               a1,
               (struct _NDIS_NIC_SWITCH_PARAMETERS *)v27,
               (struct _NDIS_NIC_SWITCH_BLOCK **)&v19,
               (struct _NDIS_PF_BLOCK **)&P,
               (struct _NDIS_VPORT_BLOCK **)Status);
        v10 = v19;
        v2 = v9;
        v11 = *(struct _NDIS_VPORT_BLOCK **)Status;
        if ( !v9 )
        {
          ConfigObject.Header = (_NDIS_OBJECT_HEADER)1573289;
          ConfigObject.NdisHandle = a1;
          ConfigObject.Flags = 0;
          SwitchConfiguration = NdisOpenConfigurationEx(&ConfigObject, &ConfigurationHandle);
          v3 = ConfigurationHandle;
          v2 = SwitchConfiguration;
          Status[0] = SwitchConfiguration;
          if ( !SwitchConfiguration )
          {
            NdisOpenConfigurationKeyByName(Status, ConfigurationHandle, &NicSwitchDefaultSwitchStr, &SubKeyHandle);
            v2 = Status[0];
            v4 = SubKeyHandle;
            if ( Status[0] )
              goto LABEL_24;
            v27[0] = 36176512;
            SwitchConfiguration = ndisIovReadSwitchConfiguration(
                                    SubKeyHandle,
                                    (struct _NDIS_NIC_SWITCH_PARAMETERS *)v27);
            v2 = SwitchConfiguration;
            if ( !SwitchConfiguration )
            {
              if ( v27[2] != 1 || v27[3] )
              {
                v2 = -1073676267;
                goto LABEL_24;
              }
              MaxNumVFs = v27[133];
              v14 = a1->NicSwitchCurrentCapabilities;
              if ( v27[133] > v14->MaxNumVFs )
                MaxNumVFs = v14->MaxNumVFs;
              v27[133] = MaxNumVFs;
              v27[134] = v14->MaxNumVPorts;
              v27[135] = v14->NdisReserved7;
              v27[137] = ndisIovGetNumberOfQueuesForDefaultVPort(a1);
              v16 = *(_DWORD *)(v15 + 52);
              memset(&v25[112], 0, 136);
              v27[136] = v16 - v17;
              *(_QWORD *)&v25[104] = &ndisIntReqGeneric;
              memset(v25, 0, 104);
              *(_DWORD *)&v25[88] = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8)) | 8;
              EtwActivityIdControl(v2 + 3, (LPGUID)&v25[168]);
              *(_DWORD *)v25 = 15466902;
              *(_QWORD *)&v25[40] = v27;
              *(_QWORD *)&v25[4] = 12LL;
              *(_DWORD *)&v25[32] = 66103;
              *(_QWORD *)&v25[52] = 552LL;
              *(_DWORD *)&v25[48] = 552;
              SwitchConfiguration = ndisQuerySetMiniport(a1, 0LL, (struct _NDIS_OID_REQUEST *)v25, 0, 0LL);
              v2 = SwitchConfiguration;
              if ( !SwitchConfiguration )
              {
                v5 = 1;
                SwitchConfiguration = ndisIovFinalizeNicSwitch(
                                        a1,
                                        (struct _NDIS_NIC_SWITCH_PARAMETERS *)v27,
                                        (struct _NDIS_NIC_SWITCH_BLOCK *)v19,
                                        (struct _NDIS_PF_BLOCK *)P,
                                        v11);
                v2 = SwitchConfiguration;
              }
            }
          }
          v10 = v19;
          if ( !SwitchConfiguration )
          {
LABEL_31:
            if ( v4 )
              NdisCloseConfiguration(v4);
            if ( v3 )
              NdisCloseConfiguration(v3);
            v6 = (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids;
            goto LABEL_36;
          }
        }
        if ( !v5 )
        {
LABEL_25:
          if ( v11 )
          {
            ExFreePoolWithTag(v11, 0);
            v10 = v19;
          }
          if ( P )
          {
            ExFreePoolWithTag(P, 0);
            v10 = v19;
          }
          if ( v10 )
            ExFreePoolWithTag(v10, 0);
          goto LABEL_31;
        }
        v26[0] = 786816;
        v26[2] = 0;
        memset(v25, 0, 104);
        *(_QWORD *)&v25[104] = &ndisIntReqGeneric;
        memset(&v25[112], 0, 136);
        *(_DWORD *)&v25[88] = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8)) | 8;
        EtwActivityIdControl(3u, (LPGUID)&v25[168]);
        *(_DWORD *)v25 = 15466902;
        *(_QWORD *)&v25[40] = v26;
        *(_DWORD *)&v25[32] = 66105;
        *(_DWORD *)&v25[48] = 12;
        *(_QWORD *)&v25[4] = 1LL;
        ndisQuerySetMiniport(a1, 0LL, (struct _NDIS_OID_REQUEST *)v25, 0, 0LL);
LABEL_24:
        v10 = v19;
        goto LABEL_25;
      }
    }
  }
LABEL_36:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qD(*((_QWORD *)WPP_GLOBAL_Control + 8), 4u, 0x1Au, 0xBu, v6, (char)a1, v2);
  return v2;
}
