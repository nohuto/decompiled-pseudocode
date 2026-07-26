/*
 * XREFs of NdisReadConfiguration @ 0x140050D30
 * Callers:
 *     ?ndisReadPMAdminConfigState@@YA?AW4_NDIS_PM_ADMIN_CONFIG_STATE@@PEAU_NDIS_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@@Z @ 0x14004F6B0 (-ndisReadPMAdminConfigState@@YA-AW4_NDIS_PM_ADMIN_CONFIG_STATE@@PEAU_NDIS_CONFIGURATION_HANDLE@@.c)
 *     ?ndisMFindNumaNode@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14004F700 (-ndisMFindNumaNode@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisReadMiniportSpecificPortAuthStates@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CONFIGURATION_HANDLE@@@Z @ 0x14004F7D0 (-ndisReadMiniportSpecificPortAuthStates@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CONFIGURATION_HA.c)
 *     ?ndisIfUpdateInterfaceOnInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x14004FC80 (-ndisIfUpdateInterfaceOnInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@PEAU_NDIS_M.c)
 *     ?ndisReadRssKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140050220 (-ndisReadRssKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NdisWdfReadConfiguration @ 0x140050570 (NdisWdfReadConfiguration.c)
 *     NdisReadNetworkAddress @ 0x140050620 (NdisReadNetworkAddress.c)
 *     ?ndisReadMiniportDefaultPortAuthStates@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140050840 (-ndisReadMiniportDefaultPortAuthStates@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisGetMiniportInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@PEAJPEAE2@Z @ 0x14008B710 (-ndisGetMiniportInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES.c)
 *     ?ndisReadOffloadRegistry@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140092700 (-ndisReadOffloadRegistry@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisReadSoftwareTimestampSettings@@YAXPEAU_NDIS_CONFIGURATION_HANDLE@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140098410 (-ndisReadSoftwareTimestampSettings@@YAXPEAU_NDIS_CONFIGURATION_HANDLE@@PEAU_NDIS_MINIPORT_BLOCK@.c)
 *     ?ndisReadModernStandyWoLMagicPacketKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400A7DA0 (-ndisReadModernStandyWoLMagicPacketKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?NdisReadConfigShimHook@@YAXPEAHPEAPEAU_NDIS_CONFIGURATION_PARAMETER@@PEAXPEAU_UNICODE_STRING@@W4_NDIS_PARAMETER_TYPE@@@Z @ 0x1400B6500 (-NdisReadConfigShimHook@@YAXPEAHPEAPEAU_NDIS_CONFIGURATION_PARAMETER@@PEAXPEAU_UNICODE_STRING@@W.c)
 *     ?ndisUpdateOffloadKeywords@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD_PARAMETERS@@@Z @ 0x1400C6CFC (-ndisUpdateOffloadKeywords@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD_PARAMETERS@@@Z.c)
 *     ?ndisIovReadSwitchConfiguration@@YAHPEAXPEAU_NDIS_NIC_SWITCH_PARAMETERS@@@Z @ 0x1400E6344 (-ndisIovReadSwitchConfiguration@@YAHPEAXPEAU_NDIS_NIC_SWITCH_PARAMETERS@@@Z.c)
 *     ?ndisReadNicAutoPowerSaverTimeoutKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14014BC30 (-ndisReadNicAutoPowerSaverTimeoutKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisReadSSTimeoutKeywords@@_Y2PAGE@@AXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14014BD30 (-ndisReadSSTimeoutKeywords@@_Y2PAGE@@AXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisIfGetFilterIfInfoFromRegistry @ 0x14016F1C0 (ndisIfGetFilterIfInfoFromRegistry.c)
 *     ?ndisInitializeConfiguration@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z @ 0x14016F660 (-ndisInitializeConfiguration@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z.c)
 *     ?ndisReadDataLinkLayerKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140170F00 (-ndisReadDataLinkLayerKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPDReadKeywords@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140176000 (-ndisPDReadKeywords@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIfLuidAllocatorSubsystemInitialize@@YAJXZ @ 0x140199470 (-ndisIfLuidAllocatorSubsystemInitialize@@YAJXZ.c)
 *     ?ndisIfInterfaceSubsystemInitialize@@YAJXZ @ 0x1401996D8 (-ndisIfInterfaceSubsystemInitialize@@YAJXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140036F70 (WPP_RECORDER_SF_.c)
 *     ndisReadUpperBindings @ 0x140063080 (ndisReadUpperBindings.c)
 *     WPP_RECORDER_SF_Z @ 0x14006CDE0 (WPP_RECORDER_SF_Z.c)
 *     ndisOpenProtocolSubkey @ 0x140075E90 (ndisOpenProtocolSubkey.c)
 *     ?ndisSaveParameters@@YAJPEA_WKPEAXK11@Z @ 0x14007C340 (-ndisSaveParameters@@YAJPEA_WKPEAXK11@Z.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     memmove @ 0x1400EE080 (memmove.c)
 *     ?ndisNDKGlobalDisabled@@YAEXZ @ 0x14014B2A0 (-ndisNDKGlobalDisabled@@YAEXZ.c)
 *     ?ndisReadNDKGlobalFlags@@YAKXZ @ 0x14014B678 (-ndisReadNDKGlobalFlags@@YAKXZ.c)
 */

void __stdcall NdisReadConfiguration(
        PNDIS_STATUS Status,
        PNDIS_CONFIGURATION_PARAMETER *ParameterValue,
        NDIS_HANDLE ConfigurationHandle,
        PNDIS_STRING Keyword,
        NDIS_PARAMETER_TYPE ParameterType)
{
  PNDIS_STATUS v6; // r12
  NDIS_HANDLE v7; // r13
  unsigned int v8; // r15d
  NTSTATUS RegistryValues; // edi
  unsigned int i; // ebx
  __int64 v11; // rdx
  __int64 v12; // r14
  unsigned int j; // ebx
  __int64 v14; // r14
  __int64 v15; // r12
  char *v16; // rax
  char *v17; // rdi
  PNDIS_CONFIGURATION_PARAMETER *v18; // rbx
  _DWORD *v19; // rcx
  int v20; // edx
  size_t v21; // rbx
  const void *v22; // r14
  __int64 Pool2; // rax
  _QWORD *v24; // rdi
  struct _NDIS_CONFIGURATION_PARAMETER *v25; // rax
  __int64 v26; // rax
  unsigned int v27; // r8d
  __int64 v28; // rbx
  int v29; // eax
  int v30; // eax
  _BYTE *v31; // rcx
  PVOID v32; // rbx
  PNDIS_CONFIGURATION_PARAMETER *v33; // [rsp+30h] [rbp-89h]
  PNDIS_CONFIGURATION_PARAMETER *v34; // [rsp+38h] [rbp-81h]
  int v35; // [rsp+40h] [rbp-79h] BYREF
  PNDIS_STATUS v36; // [rsp+48h] [rbp-71h]
  unsigned int v37; // [rsp+50h] [rbp-69h] BYREF
  void *v38; // [rsp+58h] [rbp-61h]
  __int64 v39; // [rsp+60h] [rbp-59h]
  PVOID v40; // [rsp+68h] [rbp-51h] BYREF
  PVOID P; // [rsp+70h] [rbp-49h]
  _UNICODE_STRING String; // [rsp+78h] [rbp-41h] BYREF
  _DWORD v43[2]; // [rsp+88h] [rbp-31h]
  char v44; // [rsp+90h] [rbp-29h]
  _OWORD v45[2]; // [rsp+98h] [rbp-21h] BYREF
  __int64 v46; // [rsp+B8h] [rbp-1h]

  v6 = Status;
  v7 = ConfigurationHandle;
  v8 = 0;
  v38 = ConfigurationHandle;
  v46 = 0LL;
  v34 = ParameterValue;
  v36 = Status;
  v35 = 0;
  String = 0LL;
  v40 = 0LL;
  memset(v45, 0, sizeof(v45));
  v37 = 0;
  v43[0] = 67305985;
  v43[1] = 33620481;
  v44 = 3;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(ParameterValue) = 4;
    WPP_RECORDER_SF_Z(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)ParameterValue,
      8,
      30,
      (struct _GUID *)&WPP_78fc2fada0c137ca2e9d99d042b3d7f2_Traceguids,
      (__int64)Keyword);
  }
  RegistryValues = -1073741823;
  P = Keyword->Buffer;
  for ( i = 0; i < 3; ++i )
  {
    if ( RtlEqualUnicodeString(Keyword, (PCUNICODE_STRING)&unk_1400FBDE8 + i, 1u) )
    {
      LODWORD(v11) = (_DWORD)v34;
      RegistryValues = 0;
      *v34 = (PNDIS_CONFIGURATION_PARAMETER)(0x140000000LL + 24LL * i + 1059488);
      goto LABEL_8;
    }
  }
  v12 = *(_QWORD *)(*((_QWORD *)v7 + 2) + 8LL);
  v39 = v12;
  if ( !v12 )
    goto LABEL_24;
  if ( RtlEqualUnicodeString(Keyword, &String2, 1u) )
  {
    v21 = *(unsigned __int16 *)(v12 + 3808);
    v22 = *(const void **)(v12 + 3816);
    Pool2 = ExAllocatePool2(64LL, (unsigned int)(v21 + 32), 1852851278);
    v24 = (_QWORD *)Pool2;
    if ( Pool2 )
    {
      *v34 = (PNDIS_CONFIGURATION_PARAMETER)(Pool2 + 8);
      *(_DWORD *)(Pool2 + 8) = 2;
      (*v34)->ParameterData.StringData.Buffer = (wchar_t *)(Pool2 + 32);
      memmove((*v34)->ParameterData.StringData.Buffer, v22, v21);
      LODWORD(v11) = (_DWORD)v34;
      (*v34)->ParameterData.StringData.Length = v21;
      (*v34)->ParameterData.StringData.MaximumLength = v21;
      if ( !*((_BYTE *)v22 + (unsigned int)(v21 - 1)) && !*((_BYTE *)v22 + (unsigned int)(v21 - 2)) )
        (*v34)->ParameterData.StringData.Length -= 2;
      *v24 = *((_QWORD *)v7 + 3);
      *((_QWORD *)v7 + 3) = v24;
      RegistryValues = 0;
    }
    else
    {
      RegistryValues = -1073741670;
    }
    goto LABEL_8;
  }
  if ( RtlEqualUnicodeString(Keyword, &stru_1400FBE48, 1u) && (*(_DWORD *)(*((_QWORD *)v7 + 2) + 16LL) & 1) == 0 )
  {
    if ( (unsigned int)ParameterType <= NdisParameterHexInteger )
    {
      RegistryValues = ndisSaveParameters((wchar_t *)L"BusType", 4u, (void *)(v12 + 3720), 4u, v7, v34);
      goto LABEL_8;
    }
    if ( ParameterType == NdisParameterString )
    {
      String.MaximumLength = 40;
      String.Buffer = (wchar_t *)v45;
      RegistryValues = RtlIntegerToUnicodeString(*(_DWORD *)(v12 + 3720), 0xAu, &String);
      if ( !RegistryValues )
        RegistryValues = ndisSaveParameters((wchar_t *)L"BusType", 1u, String.Buffer, String.Length, v7, v34);
      goto LABEL_8;
    }
  }
  for ( j = 0; j < 9; ++j )
  {
    v14 = 2LL * j;
    v15 = j;
    if ( RtlEqualUnicodeString(Keyword, (PCUNICODE_STRING)((char *)&unk_1400FD2E0 + v14 * 8), 1u) )
    {
      v26 = *(_QWORD *)(v39 + 944);
      if ( v26 )
      {
        v27 = *(_DWORD *)(v26 + 16);
        v28 = v26 + 12;
        while ( v8 < v27 )
        {
          v29 = *((unsigned __int8 *)v43 + v15);
          v11 = v28 + 20LL * v8;
          if ( *(_BYTE *)(v11 + 8) == (_BYTE)v29 )
          {
            if ( v29 == 1 )
              goto LABEL_71;
            if ( v29 == 2 )
            {
              v30 = *(unsigned __int16 *)(v11 + 12);
LABEL_72:
              v35 = v30;
            }
            else if ( (unsigned int)(v29 - 3) <= 1 )
            {
LABEL_71:
              v30 = *(_DWORD *)(v11 + 12);
              goto LABEL_72;
            }
            RegistryValues = ndisSaveParameters((&off_1400FD2E8)[v14], 4u, &v35, 4u, v38, v34);
            break;
          }
          ++v8;
        }
        v6 = v36;
        if ( v8 >= *(_DWORD *)(v28 + 4) )
          RegistryValues = -1073741823;
        goto LABEL_8;
      }
LABEL_85:
      v6 = v36;
      goto LABEL_8;
    }
  }
  if ( !RtlEqualUnicodeString(Keyword, &stru_1400FBE28, 1u) )
    goto LABEL_21;
  if ( ParameterType )
    goto LABEL_85;
  if ( ndisNDKGlobalDisabled() )
  {
    RegistryValues = 0;
    v25 = (struct _NDIS_CONFIGURATION_PARAMETER *)&unk_1400FEAA8;
    goto LABEL_84;
  }
LABEL_21:
  if ( RtlEqualUnicodeString(Keyword, &stru_1400FBE38, 1u) )
  {
    if ( ParameterType == NdisParameterInteger )
    {
      dword_140126BD8 = ndisReadNDKGlobalFlags();
      RegistryValues = 0;
      v25 = (struct _NDIS_CONFIGURATION_PARAMETER *)&unk_140126BD0;
LABEL_84:
      LODWORD(v11) = (_DWORD)v34;
      *v34 = v25;
    }
    goto LABEL_85;
  }
  v12 = v39;
  v6 = v36;
  v7 = v38;
  if ( RtlEqualUnicodeString(Keyword, &::Keyword, 1u) )
  {
    *(_DWORD *)(v39 + 568) |= 0x80u;
    *(_DWORD *)(v12 + 1872) |= 0x10000u;
  }
LABEL_24:
  if ( !ndisAllowFlowControl && RtlEqualUnicodeString(Keyword, &FlowControlStr, 1u) )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v20) = 3;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v20,
        8,
        31,
        (struct _GUID *)&WPP_78fc2fada0c137ca2e9d99d042b3d7f2_Traceguids);
    }
    LODWORD(v11) = (_DWORD)v34;
    RegistryValues = 0;
    *v34 = (PNDIS_CONFIGURATION_PARAMETER)&unk_1400FEAA8;
    goto LABEL_8;
  }
  if ( (*(_DWORD *)(*((_QWORD *)v7 + 2) + 16LL) & 2) == 0
    || *((_QWORD *)v7 + 4)
    || (RegistryValues = ndisOpenProtocolSubkey(v7), RegistryValues >= 0) )
  {
    v16 = (char *)ExAllocatePool2(66LL, Keyword->Length + 2LL, 538985550);
    P = v16;
    v17 = v16;
    if ( v16 )
    {
      memmove(v16, Keyword->Buffer, Keyword->Length);
      v18 = v34;
      *(_WORD *)&v17[Keyword->Length] = 0;
      *(_QWORD *)(*((_QWORD *)v7 + 2) + 40LL) = v17;
      *(_QWORD *)(*((_QWORD *)v7 + 2) + 48LL) = v34;
      RegistryValues = RtlQueryRegistryValuesEx(
                         0x40000000u,
                         *((PCWSTR *)v7 + 4),
                         (PRTL_QUERY_REGISTRY_TABLE)(*((_QWORD *)v7 + 2) + 24LL),
                         v7,
                         0LL);
      goto LABEL_28;
    }
    RegistryValues = -1073741670;
  }
  else
  {
    v18 = v34;
LABEL_28:
    if ( v12 )
    {
LABEL_29:
      if ( RegistryValues < 0 )
        goto LABEL_8;
    }
    else if ( RegistryValues < 0 )
    {
      if ( !RtlEqualUnicodeString(Keyword, &stru_1400FBE58, 1u) )
        goto LABEL_8;
      v31 = (_BYTE *)*((_QWORD *)v7 + 1);
      if ( !v31 || *v31 != 2 || v31[24] < 6u || (unsigned int)ndisReadUpperBindings(v31, &v40, &v37) )
        goto LABEL_8;
      v33 = v18;
      v32 = v40;
      RegistryValues = ndisSaveParameters((wchar_t *)L"UpperBindings", 7u, v40, v37, v7, v33);
      if ( v32 )
        ExFreePoolWithTag(v32, 0);
      v18 = v34;
      goto LABEL_29;
    }
    v19 = *v18;
    if ( (*v18)->ParameterType == NdisParameterString )
    {
      if ( ParameterType )
      {
        if ( ParameterType == NdisParameterHexInteger )
        {
          RtlUnicodeStringToInteger((PCUNICODE_STRING)(v19 + 2), 0x10u, v19 + 2);
          (*v18)->ParameterType = NdisParameterHexInteger;
        }
      }
      else
      {
        RtlUnicodeStringToInteger((PCUNICODE_STRING)(v19 + 2), 0xAu, v19 + 2);
        (*v18)->ParameterType = NdisParameterInteger;
      }
    }
LABEL_8:
    if ( P && P != Keyword->Buffer )
      ExFreePoolWithTag(P, 0);
  }
  *v6 = (RegistryValues >> 31) & 0xC0000001;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v11) = 4;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v11,
      8,
      32,
      (struct _GUID *)&WPP_78fc2fada0c137ca2e9d99d042b3d7f2_Traceguids);
  }
}
