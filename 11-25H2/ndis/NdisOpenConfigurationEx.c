/*
 * XREFs of NdisOpenConfigurationEx @ 0x140050AC0
 * Callers:
 *     ?ndisMFindNumaNode@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14004F700 (-ndisMFindNumaNode@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIfUpdateInterfaceOnInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x14004FC80 (-ndisIfUpdateInterfaceOnInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@PEAU_NDIS_M.c)
 *     ?ndisReadRssKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140050220 (-ndisReadRssKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisReadMiniportDefaultPortAuthStates@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140050840 (-ndisReadMiniportDefaultPortAuthStates@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIovCreateDefaultNicSwitch@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14007FCE0 (-ndisIovCreateDefaultNicSwitch@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisGetMiniportInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@PEAJPEAE2@Z @ 0x14008B710 (-ndisGetMiniportInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES.c)
 *     ?ndisReadOffloadRegistry@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140092700 (-ndisReadOffloadRegistry@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisReadModernStandyWoLMagicPacketKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400A7DA0 (-ndisReadModernStandyWoLMagicPacketKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?DisableMagicPacketKeyword@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400B9F90 (-DisableMagicPacketKeyword@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisWmiSetPMAdminConfig@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WMI_PM_ADMIN_CONFIG@@@Z @ 0x1400BDD20 (-ndisWmiSetPMAdminConfig@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WMI_PM_ADMIN_CONFIG@@@Z.c)
 *     ?ndisUpdateHDSplitKeyword@@YAHPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1400C6B60 (-ndisUpdateHDSplitKeyword@@YAHPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisUpdateOffloadKeywords@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD_PARAMETERS@@@Z @ 0x1400C6CFC (-ndisUpdateOffloadKeywords@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD_PARAMETERS@@@Z.c)
 *     ?ndisOidPostIovNicSwitchParameters@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400E6DB0 (-ndisOidPostIovNicSwitchParameters@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisReadNicAutoPowerSaverTimeoutKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14014BC30 (-ndisReadNicAutoPowerSaverTimeoutKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisReadSSTimeoutKeywords@@_Y2PAGE@@AXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14014BD30 (-ndisReadSSTimeoutKeywords@@_Y2PAGE@@AXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisIfSetFilterIfInfoInRegistry @ 0x14016E530 (ndisIfSetFilterIfInfoInRegistry.c)
 *     ndisIfGetFilterIfInfoFromRegistry @ 0x14016F1C0 (ndisIfGetFilterIfInfoFromRegistry.c)
 *     ?ndisReadDataLinkLayerKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140170F00 (-ndisReadDataLinkLayerKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPDReadKeywords@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140176000 (-ndisPDReadKeywords@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x140186B80 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x14000EA50 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     NdisOpenConfiguration @ 0x14004F910 (NdisOpenConfiguration.c)
 *     NdisOpenProtocolConfiguration @ 0x1400513F0 (NdisOpenProtocolConfiguration.c)
 *     ndisAllocateConfigurationString @ 0x140051660 (ndisAllocateConfigurationString.c)
 *     ?ndisGetOrCreateFilterInstanceKey@@YAHPEBU_UNICODE_STRING@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@EPEAEPEAU1@@Z @ 0x1400871E0 (-ndisGetOrCreateFilterInstanceKey@@YAHPEBU_UNICODE_STRING@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MIN.c)
 *     ndisWdfOpenConfiguration @ 0x140141A3C (ndisWdfOpenConfiguration.c)
 */

NDIS_STATUS __stdcall NdisOpenConfigurationEx(
        PNDIS_CONFIGURATION_OBJECT ConfigObject,
        PNDIS_HANDLE ConfigurationHandle)
{
  _BYTE *NdisHandle; // rsi
  PVOID *v4; // r15
  char v5; // r14
  int v6; // eax
  int v7; // eax
  NDIS_STATUS v8; // edi
  struct _UNICODE_STRING *p_Destination; // r8
  int v11; // eax
  __int64 v12; // rdx
  char v13; // cl
  char *v14; // r8
  __int64 v15; // rdx
  struct _UNICODE_STRING Destination; // [rsp+40h] [rbp-20h] BYREF
  _UNICODE_STRING GuidString; // [rsp+50h] [rbp-10h] BYREF
  unsigned __int8 v18; // [rsp+A0h] [rbp+40h] BYREF
  int Status; // [rsp+B0h] [rbp+50h] BYREF

  NdisHandle = ConfigObject->NdisHandle;
  v4 = ConfigurationHandle;
  Status = 0;
  v5 = 0;
  *(_QWORD *)&Destination.Length = 0LL;
  Destination.Buffer = 0LL;
  *(_QWORD *)&GuidString.Length = 0LL;
  GuidString.Buffer = 0LL;
  v18 = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(ConfigurationHandle) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)ConfigurationHandle,
      8,
      19,
      (struct _GUID *)&WPP_78fc2fada0c137ca2e9d99d042b3d7f2_Traceguids,
      (char)ConfigObject);
  }
  if ( ConfigObject->Header.Type != 0xA9 || ConfigObject->Header.Size < 0x14u || !ConfigObject->Header.Revision )
    return -1073741811;
  v6 = (unsigned __int8)*NdisHandle;
  if ( v6 != 5 )
  {
    if ( v6 == 17 )
    {
      v11 = *((_DWORD *)NdisHandle + 30);
      if ( (v11 & 0x80u) != 0 && (v11 & 0x100) == 0 )
      {
        v8 = ndisWdfOpenConfiguration((char)NdisHandle);
        goto LABEL_14;
      }
      NdisOpenConfiguration(&Status, v4, *((NDIS_HANDLE *)NdisHandle + 500));
      goto LABEL_13;
    }
    switch ( *NdisHandle )
    {
      case 2:
        if ( NdisHandle[24] < 6u )
        {
          v8 = -1073741637;
          goto LABEL_14;
        }
        p_Destination = (struct _UNICODE_STRING *)(NdisHandle + 488);
        break;
      case 3:
        v13 = (_BYTE)NdisHandle + 72;
        goto LABEL_41;
      case 4:
        v13 = (_BYTE)NdisHandle - 112;
LABEL_41:
        LOBYTE(v14) = 0;
        LOBYTE(v15) = 0;
        goto LABEL_43;
      case 0xA:
        NdisOpenConfiguration(&Status, v4, NdisHandle);
        goto LABEL_13;
      case 0x12:
        v14 = &ndisAdapterStr;
        v15 = *((_QWORD *)NdisHandle + 2) + 3792LL;
        v13 = *((_QWORD *)NdisHandle + 3) + 72;
LABEL_43:
        Status = ndisAllocateConfigurationString(v13, v15, (char)v14, &Destination);
        v8 = Status;
        if ( !Status )
          goto LABEL_11;
        goto LABEL_14;
      case 0x86:
        p_Destination = (struct _UNICODE_STRING *)*((_QWORD *)NdisHandle + 1);
        break;
      default:
        goto LABEL_30;
    }
LABEL_12:
    NdisOpenProtocolConfiguration(&Status, v4, p_Destination);
LABEL_13:
    v8 = Status;
    goto LABEL_14;
  }
  if ( (ConfigObject->Flags & 1) != 0 )
  {
    v12 = *((_QWORD *)NdisHandle + 2);
    if ( (*(_DWORD *)(*(_QWORD *)(v12 + 336) + 40LL) & 2) == 0 )
    {
LABEL_30:
      v8 = -1073741823;
      goto LABEL_14;
    }
    v7 = ndisGetOrCreateFilterInstanceKey(
           (const struct _UNICODE_STRING *)(v12 + 144),
           (struct _NDIS_FILTER_BLOCK *)NdisHandle,
           *((struct _NDIS_MINIPORT_BLOCK **)NdisHandle + 4),
           0,
           &v18,
           &Destination);
  }
  else
  {
    if ( RtlStringFromGUID((const GUID *const)(*(_QWORD *)(*((_QWORD *)NdisHandle + 4) + 16LL) + 4008LL), &GuidString) )
    {
      v8 = -1073741823;
      goto LABEL_14;
    }
    v5 = 1;
    v7 = ndisAllocateConfigurationString(
           (unsigned __int8)*((_QWORD *)NdisHandle + 2) - 112,
           (char)&GuidString,
           (char)&ndisFilterAdapterStr,
           &Destination);
  }
  Status = v7;
  v8 = v7;
  if ( !v7 )
  {
LABEL_11:
    p_Destination = &Destination;
    goto LABEL_12;
  }
LABEL_14:
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0);
  if ( !v8 && *v4 )
    *((_QWORD *)*v4 + 1) = NdisHandle;
  if ( v5 )
    RtlFreeUnicodeString(&GuidString);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      8u,
      0x14u,
      (struct _GUID *)&WPP_78fc2fada0c137ca2e9d99d042b3d7f2_Traceguids,
      (char)ConfigObject,
      v8);
  return v8;
}
