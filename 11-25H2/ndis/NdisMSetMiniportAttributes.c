/*
 * XREFs of NdisMSetMiniportAttributes @ 0x140057C10
 * Callers:
 *     ?ndisLWMInitializeHandler@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1401407B0 (-ndisLWMInitializeHandler@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x14000EA50 (WPP_RECORDER_SF_qL.c)
 *     ?ndisUpdateNoPauseOnSuspend@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400170C0 (-ndisUpdateNoPauseOnSuspend@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14002B910 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_qLL @ 0x1400575D0 (WPP_RECORDER_SF_qLL.c)
 *     ?ndisMSetGeneralAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x140058BA0 (-ndisMSetGeneralAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTR.c)
 *     ?ndisMSetOffloadAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@1PEAU_NDIS_TCP_CONNECTION_OFFLOAD@@2@Z @ 0x14007F760 (-ndisMSetOffloadAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@1PEAU_NDIS_TCP_CONNE.c)
 *     ?ndisMSetHDSplitAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_HD_SPLIT_ATTRIBUTES@@@Z @ 0x1400858D0 (-ndisMSetHDSplitAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_HD_SPLIT_ATTRIBUTES@@@Z.c)
 *     ?ndisMSetNative802_11Attributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_NATIVE_802_11_ATTRIBUTES@@@Z @ 0x1400A6EF8 (-ndisMSetNative802_11Attributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_NATIVE_.c)
 *     ?ndisMSetNicSwitchAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES@@@Z @ 0x1400A7014 (-ndisMSetNicSwitchAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWARE_A.c)
 *     ?ndisMSetQosAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES@@@Z @ 0x1400A72B0 (-ndisMSetQosAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_.c)
 *     ?ndisMSetReceiveFilterAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES@@@Z @ 0x1400A7524 (-ndisMSetReceiveFilterAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWA.c)
 *     ?ndisMSetSriovAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES@@@Z @ 0x1400A782C (-ndisMSetSriovAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIS.c)
 *     ?NdisTraceLoggingNDKCapabilities@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAT_NDIS_MINIPORT_ADAPTER_ATTRIBUTES@@@Z @ 0x1400B695C (-NdisTraceLoggingNDKCapabilities@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAT_NDIS_MINIPORT_ADAPTER_ATTRIB.c)
 *     ?NdisTraceLoggingOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@1@Z @ 0x1400B7000 (-NdisTraceLoggingOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@1@Z.c)
 *     ?NdisTraceLoggingQosConfigOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAT_NDIS_MINIPORT_ADAPTER_ATTRIBUTES@@@Z @ 0x1400B7124 (-NdisTraceLoggingQosConfigOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAT_NDIS_MINIPORT_ADAPTER_ATTR.c)
 *     ?NdisTraceLoggingQosHardwareOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAT_NDIS_MINIPORT_ADAPTER_ATTRIBUTES@@@Z @ 0x1400B71D8 (-NdisTraceLoggingQosHardwareOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAT_NDIS_MINIPORT_ADAPTER_AT.c)
 *     memmove @ 0x1400EE080 (memmove.c)
 *     ?ndisMSetPacketDirectAttributes@@YAHPEAXPEBT_NDIS_MINIPORT_ADAPTER_ATTRIBUTES@@@Z @ 0x140147850 (-ndisMSetPacketDirectAttributes@@YAHPEAXPEBT_NDIS_MINIPORT_ADAPTER_ATTRIBUTES@@@Z.c)
 *     ?ndisMSetNDKAttributes@@YAHPEAXPEAT_NDIS_MINIPORT_ADAPTER_ATTRIBUTES@@@Z @ 0x14014B120 (-ndisMSetNDKAttributes@@YAHPEAXPEAT_NDIS_MINIPORT_ADAPTER_ATTRIBUTES@@@Z.c)
 *     NdisMSetAttributesEx @ 0x1401840E0 (NdisMSetAttributesEx.c)
 */

NDIS_STATUS __stdcall NdisMSetMiniportAttributes(
        NDIS_HANDLE NdisMiniportHandle,
        PNDIS_MINIPORT_ADAPTER_ATTRIBUTES MiniportAttributes)
{
  int Type; // esi
  struct _NDIS_TCP_CONNECTION_OFFLOAD *DefaultTcpConnectionOffloadConfiguration; // rbp
  int v6; // edx
  UCHAR Revision; // al
  USHORT Size; // cx
  UCHAR *p_Revision; // r14
  int v11; // edx
  _NDIS_OFFLOAD **p_HardwareOffloadCapabilities; // r14
  unsigned int Flags; // r8d
  int v14; // ecx
  int v15; // edx
  int v16; // ecx
  ULONG v17; // r15d
  _NDIS_OFFLOAD **v18; // rcx
  int v19; // ecx
  unsigned int v20; // ecx
  void *Pool2; // rax
  struct _NDIS_TCP_CONNECTION_OFFLOAD *TcpConnectionOffloadHardwareCapabilities; // rax
  struct _NDIS_OFFLOAD *DefaultOffloadConfiguration; // r14
  struct _NDIS_OFFLOAD *HardwareOffloadCapabilities; // r15

  Type = MiniportAttributes->Header.Type;
  DefaultTcpConnectionOffloadConfiguration = 0LL;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x75u,
      (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
      (char)NdisMiniportHandle,
      MiniportAttributes->Header.Type);
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  if ( Type != 175 )
  {
    if ( Type == 158 )
    {
      v11 = 16 * ((*(_WORD *)(*((_QWORD *)NdisMiniportHandle + 470) + 26LL) & 1) + 34);
      if ( (MiniportAttributes->AddDeviceRegistrationAttributes.Flags & 1) != 0 )
        *((_DWORD *)NdisMiniportHandle + 31) |= 0x200000u;
      p_HardwareOffloadCapabilities = &MiniportAttributes->OffloadAttributes.HardwareOffloadCapabilities;
      if ( (MiniportAttributes->AddDeviceRegistrationAttributes.Flags & 2) != 0 )
      {
        *((_DWORD *)NdisMiniportHandle + 31) |= 0x400000u;
        p_HardwareOffloadCapabilities = &MiniportAttributes->OffloadAttributes.HardwareOffloadCapabilities;
      }
      Flags = MiniportAttributes->AddDeviceRegistrationAttributes.Flags;
      if ( (Flags & 4) != 0 )
        v11 |= 0x80u;
      v14 = v11 | 0x100;
      if ( (Flags & 8) == 0 )
        v14 = v11;
      v15 = v14 | 0x400;
      if ( (Flags & 0x10) == 0 )
        v15 = v14;
      v16 = v15 | 0x40;
      if ( (Flags & 0x20) == 0 )
        v16 = v15;
      v17 = v16 | 8;
      if ( (Flags & 0x40) == 0 )
        v17 = v16;
      if ( (Flags & 0x100) != 0 )
      {
        *((_DWORD *)NdisMiniportHandle + 468) |= 0x80000000;
        ndisUpdateNoPauseOnSuspend((struct _NDIS_MINIPORT_BLOCK *)NdisMiniportHandle);
        v18 = &MiniportAttributes->OffloadAttributes.HardwareOffloadCapabilities;
      }
      else
      {
        v18 = p_HardwareOffloadCapabilities;
      }
      if ( (*(_DWORD *)p_HardwareOffloadCapabilities & 0x200) != 0 )
      {
        *((_DWORD *)NdisMiniportHandle + 468) |= 0x200u;
        p_HardwareOffloadCapabilities = v18;
      }
      if ( (*(_DWORD *)p_HardwareOffloadCapabilities & 0x400) != 0
        || *((_BYTE *)NdisMiniportHandle + 32) <= 6u
        && (*((_BYTE *)NdisMiniportHandle + 32) != 6 || *((_BYTE *)NdisMiniportHandle + 33) < 0x1Eu) )
      {
        *((_DWORD *)NdisMiniportHandle + 30) |= 0x400u;
      }
      NdisMSetAttributesEx(
        NdisMiniportHandle,
        MiniportAttributes->AddDeviceRegistrationAttributes.MiniportAddDeviceContext,
        MiniportAttributes->RegistrationAttributes.CheckForHangTimeInSeconds,
        v17,
        MiniportAttributes->RegistrationAttributes.InterfaceType);
      v19 = *((_DWORD *)NdisMiniportHandle + 30);
      if ( (*(_DWORD *)p_HardwareOffloadCapabilities & 0x80u) == 0 )
      {
        v20 = v19 | 0x10000;
      }
      else
      {
        *((_DWORD *)NdisMiniportHandle + 31) |= 0x80u;
        v20 = v19 & 0xFFFEFFFF;
      }
      *((_DWORD *)NdisMiniportHandle + 30) = v20;
    }
    else
    {
      switch ( Type )
      {
        case 159:
          Pool2 = (void *)ExAllocatePool2(66LL, MiniportAttributes->Header.Size, 538985550);
          *((_QWORD *)NdisMiniportHandle + 339) = Pool2;
          if ( Pool2 )
          {
            memmove(Pool2, MiniportAttributes, MiniportAttributes->Header.Size);
            LODWORD(DefaultTcpConnectionOffloadConfiguration) = ndisMSetGeneralAttributes(
                                                                  (struct _NDIS_MINIPORT_BLOCK *)NdisMiniportHandle,
                                                                  *((struct _NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES **)NdisMiniportHandle
                                                                  + 339));
          }
          else
          {
            LODWORD(DefaultTcpConnectionOffloadConfiguration) = -1073741670;
          }
          break;
        case 160:
          TcpConnectionOffloadHardwareCapabilities = 0LL;
          DefaultOffloadConfiguration = 0LL;
          HardwareOffloadCapabilities = 0LL;
          if ( MiniportAttributes->Header.Size >= 0x28u )
          {
            DefaultOffloadConfiguration = MiniportAttributes->OffloadAttributes.DefaultOffloadConfiguration;
            HardwareOffloadCapabilities = MiniportAttributes->OffloadAttributes.HardwareOffloadCapabilities;
            DefaultTcpConnectionOffloadConfiguration = MiniportAttributes->OffloadAttributes.DefaultTcpConnectionOffloadConfiguration;
            TcpConnectionOffloadHardwareCapabilities = MiniportAttributes->OffloadAttributes.TcpConnectionOffloadHardwareCapabilities;
          }
          LODWORD(DefaultTcpConnectionOffloadConfiguration) = ndisMSetOffloadAttributes(
                                                                (struct _NDIS_MINIPORT_BLOCK *)NdisMiniportHandle,
                                                                DefaultOffloadConfiguration,
                                                                HardwareOffloadCapabilities,
                                                                DefaultTcpConnectionOffloadConfiguration,
                                                                TcpConnectionOffloadHardwareCapabilities);
          if ( !(_DWORD)DefaultTcpConnectionOffloadConfiguration && dword_1401247E8 )
            NdisTraceLoggingOffloads(
              (struct _NDIS_MINIPORT_BLOCK *)NdisMiniportHandle,
              HardwareOffloadCapabilities,
              DefaultOffloadConfiguration);
          break;
        case 161:
          LODWORD(DefaultTcpConnectionOffloadConfiguration) = ndisMSetNative802_11Attributes(
                                                                (struct _NDIS_MINIPORT_BLOCK *)NdisMiniportHandle,
                                                                (struct _NDIS_MINIPORT_ADAPTER_NATIVE_802_11_ATTRIBUTES *)MiniportAttributes);
          break;
        case 164:
          *((_QWORD *)NdisMiniportHandle + 514) = MiniportAttributes->AddDeviceRegistrationAttributes.MiniportAddDeviceContext;
          break;
        case 179:
          LODWORD(DefaultTcpConnectionOffloadConfiguration) = ndisMSetNDKAttributes(
                                                                NdisMiniportHandle,
                                                                MiniportAttributes);
          if ( !(_DWORD)DefaultTcpConnectionOffloadConfiguration && dword_1401247E8 )
            NdisTraceLoggingNDKCapabilities((struct _NDIS_MINIPORT_BLOCK *)NdisMiniportHandle, MiniportAttributes);
          break;
        case 197:
          LODWORD(DefaultTcpConnectionOffloadConfiguration) = ndisMSetPacketDirectAttributes(
                                                                NdisMiniportHandle,
                                                                MiniportAttributes);
          break;
        default:
          goto LABEL_6;
      }
    }
    goto LABEL_7;
  }
  Revision = MiniportAttributes->Header.Revision;
  if ( !Revision )
    goto LABEL_6;
  Size = MiniportAttributes->Header.Size;
  if ( Size < 0x10u )
    goto LABEL_6;
  if ( Revision == 2 )
  {
    if ( Size >= 0x30u )
    {
      p_Revision = &MiniportAttributes->Header.Revision;
      goto LABEL_14;
    }
LABEL_6:
    LODWORD(DefaultTcpConnectionOffloadConfiguration) = -1073741811;
    goto LABEL_7;
  }
  p_Revision = &MiniportAttributes->Header.Revision;
  if ( Size < 0x50u && Revision >= 3u )
    goto LABEL_6;
LABEL_14:
  if ( *((_BYTE *)NdisMiniportHandle + 32) <= 6u
    && (*((_BYTE *)NdisMiniportHandle + 32) != 6 || !*((_BYTE *)NdisMiniportHandle + 33)) )
  {
    goto LABEL_22;
  }
  LODWORD(DefaultTcpConnectionOffloadConfiguration) = ndisMSetHDSplitAttributes(
                                                        (struct _NDIS_MINIPORT_BLOCK *)NdisMiniportHandle,
                                                        MiniportAttributes->HardwareAssistAttributes.HDSplitAttributes);
  if ( (int)DefaultTcpConnectionOffloadConfiguration < 0 )
    goto LABEL_7;
  if ( *p_Revision >= 2u )
  {
    if ( *((_BYTE *)NdisMiniportHandle + 32) <= 6u )
    {
      if ( *((_BYTE *)NdisMiniportHandle + 32) != 6 )
        goto LABEL_22;
      if ( *((_BYTE *)NdisMiniportHandle + 33) < 0x14u )
      {
        LODWORD(DefaultTcpConnectionOffloadConfiguration) = -1073741637;
        goto LABEL_7;
      }
    }
    if ( MiniportAttributes->OffloadAttributes.HardwareOffloadCapabilities )
    {
      if ( MiniportAttributes->GeneralAttributes.MaxXmitLinkSpeed )
      {
        LODWORD(DefaultTcpConnectionOffloadConfiguration) = ndisMSetReceiveFilterAttributes(
                                                              (struct _NDIS_MINIPORT_BLOCK *)NdisMiniportHandle,
                                                              (struct _NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES *)MiniportAttributes);
        if ( (int)DefaultTcpConnectionOffloadConfiguration < 0 )
          goto LABEL_7;
      }
    }
  }
  if ( MiniportAttributes->Header.Revision >= 2u )
  {
    if ( *((_BYTE *)NdisMiniportHandle + 32) <= 6u )
    {
      if ( *((_BYTE *)NdisMiniportHandle + 32) != 6 )
      {
LABEL_22:
        LODWORD(DefaultTcpConnectionOffloadConfiguration) = -1073741637;
        goto LABEL_7;
      }
      if ( *((_BYTE *)NdisMiniportHandle + 33) < 0x14u )
      {
        LODWORD(DefaultTcpConnectionOffloadConfiguration) = -1073741637;
        goto LABEL_7;
      }
    }
    if ( MiniportAttributes->GeneralAttributes.XmitLinkSpeed )
    {
      if ( MiniportAttributes->GeneralAttributes.MaxRcvLinkSpeed )
      {
        LODWORD(DefaultTcpConnectionOffloadConfiguration) = ndisMSetNicSwitchAttributes(
                                                              (struct _NDIS_MINIPORT_BLOCK *)NdisMiniportHandle,
                                                              (struct _NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES *)MiniportAttributes);
        if ( (int)DefaultTcpConnectionOffloadConfiguration < 0 )
          goto LABEL_7;
      }
    }
  }
  if ( MiniportAttributes->Header.Revision < 3u )
    goto LABEL_7;
  if ( *((_BYTE *)NdisMiniportHandle + 32) <= 6u )
  {
    if ( *((_BYTE *)NdisMiniportHandle + 32) != 6 )
      goto LABEL_22;
    if ( *((_BYTE *)NdisMiniportHandle + 33) < 0x1Eu )
    {
      LODWORD(DefaultTcpConnectionOffloadConfiguration) = -1073741637;
      goto LABEL_7;
    }
  }
  if ( !MiniportAttributes->GeneralAttributes.RcvLinkSpeed
    || !MiniportAttributes->Native_802_11_Attributes.WFDAttributes
    || (LODWORD(DefaultTcpConnectionOffloadConfiguration) = ndisMSetSriovAttributes(
                                                              (struct _NDIS_MINIPORT_BLOCK *)NdisMiniportHandle,
                                                              (struct _NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES *)MiniportAttributes),
        (int)DefaultTcpConnectionOffloadConfiguration >= 0) )
  {
    if ( MiniportAttributes->HardwareAssistAttributes.HardwareQosCapabilities )
    {
      if ( MiniportAttributes->GeneralAttributes.PowerManagementCapabilities )
      {
        LODWORD(DefaultTcpConnectionOffloadConfiguration) = ndisMSetQosAttributes(
                                                              (struct _NDIS_MINIPORT_BLOCK *)NdisMiniportHandle,
                                                              (struct _NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES *)MiniportAttributes);
        if ( (int)DefaultTcpConnectionOffloadConfiguration >= 0 )
        {
          NdisTraceLoggingQosHardwareOffloads((struct _NDIS_MINIPORT_BLOCK *)NdisMiniportHandle, MiniportAttributes);
          NdisTraceLoggingQosConfigOffloads((struct _NDIS_MINIPORT_BLOCK *)NdisMiniportHandle, MiniportAttributes);
        }
      }
    }
  }
LABEL_7:
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qLL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v6,
      1u,
      0x76u,
      (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
      (char)NdisMiniportHandle,
      Type,
      (_DWORD)DefaultTcpConnectionOffloadConfiguration);
  return (int)DefaultTcpConnectionOffloadConfiguration;
}
