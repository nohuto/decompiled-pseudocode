/*
 * XREFs of NdisMSetMiniportAttributes @ 0x14007F870
 * Callers:
 *     ?ndisLWMInitializeHandler@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1401357B0 (-ndisLWMInitializeHandler@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x140014250 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qql @ 0x14002BC80 (WPP_RECORDER_SF_qql.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14002E9A0 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_qLL @ 0x140035A80 (WPP_RECORDER_SF_qLL.c)
 *     ?ndisUpdateNoPauseOnSuspend@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14004EF50 (-ndisUpdateNoPauseOnSuspend@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     Duplicate802_11AttachAttributesCommon @ 0x140053140 (Duplicate802_11AttachAttributesCommon.c)
 *     ?ndisMSetOffloadAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@1PEAU_NDIS_TCP_CONNECTION_OFFLOAD@@2@Z @ 0x140063C10 (-ndisMSetOffloadAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@1PEAU_NDIS_TCP_CONNE.c)
 *     ?ndisMSetGeneralAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x14007EC60 (-ndisMSetGeneralAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTR.c)
 *     ?ndisMSetNicSwitchAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES@@@Z @ 0x14009E47C (-ndisMSetNicSwitchAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWARE_A.c)
 *     ?ndisMSetQosAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES@@@Z @ 0x14009E718 (-ndisMSetQosAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_.c)
 *     ?ndisMSetReceiveFilterAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES@@@Z @ 0x14009E98C (-ndisMSetReceiveFilterAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWA.c)
 *     ?ndisMSetSriovAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES@@@Z @ 0x14009EC94 (-ndisMSetSriovAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIS.c)
 *     ?NdisTraceLoggingNDKCapabilities@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAT_NDIS_MINIPORT_ADAPTER_ATTRIBUTES@@@Z @ 0x1400AE9CC (-NdisTraceLoggingNDKCapabilities@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAT_NDIS_MINIPORT_ADAPTER_ATTRIB.c)
 *     ?NdisTraceLoggingOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@1@Z @ 0x1400AF070 (-NdisTraceLoggingOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@1@Z.c)
 *     ?NdisTraceLoggingQosConfigOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAT_NDIS_MINIPORT_ADAPTER_ATTRIBUTES@@@Z @ 0x1400AF194 (-NdisTraceLoggingQosConfigOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAT_NDIS_MINIPORT_ADAPTER_ATTR.c)
 *     ?NdisTraceLoggingQosHardwareOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAT_NDIS_MINIPORT_ADAPTER_ATTRIBUTES@@@Z @ 0x1400AF248 (-NdisTraceLoggingQosHardwareOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAT_NDIS_MINIPORT_ADAPTER_AT.c)
 *     memmove @ 0x1400E7200 (memmove.c)
 *     ?ndisMSetPacketDirectAttributes@@YAHPEAXPEBT_NDIS_MINIPORT_ADAPTER_ATTRIBUTES@@@Z @ 0x14013C970 (-ndisMSetPacketDirectAttributes@@YAHPEAXPEBT_NDIS_MINIPORT_ADAPTER_ATTRIBUTES@@@Z.c)
 *     ?ndisMSetNDKAttributes@@YAHPEAXPEAT_NDIS_MINIPORT_ADAPTER_ATTRIBUTES@@@Z @ 0x140140260 (-ndisMSetNDKAttributes@@YAHPEAXPEAT_NDIS_MINIPORT_ADAPTER_ATTRIBUTES@@@Z.c)
 *     NdisMSetAttributesEx @ 0x14017F080 (NdisMSetAttributesEx.c)
 */

NDIS_STATUS __stdcall NdisMSetMiniportAttributes(
        NDIS_HANDLE NdisMiniportHandle,
        PNDIS_MINIPORT_ADAPTER_ATTRIBUTES MiniportAttributes)
{
  int Type; // r15d
  struct _NDIS_TCP_CONNECTION_OFFLOAD *DefaultTcpConnectionOffloadConfiguration; // rsi
  unsigned __int64 v6; // rdx
  int v7; // edx
  _NDIS_OFFLOAD **p_HardwareOffloadCapabilities; // rbx
  unsigned int Flags; // r8d
  int v10; // ecx
  int v11; // edx
  int v12; // ecx
  ULONG v13; // r14d
  _NDIS_OFFLOAD **v14; // rcx
  void *Pool2; // rax
  struct _NDIS_TCP_CONNECTION_OFFLOAD *TcpConnectionOffloadHardwareCapabilities; // rax
  struct _NDIS_OFFLOAD *DefaultOffloadConfiguration; // rbx
  struct _NDIS_OFFLOAD *HardwareOffloadCapabilities; // r14
  int v19; // edx
  UCHAR Revision; // al
  USHORT Size; // cx
  int v22; // edx
  _DWORD *MiniportAddDeviceContext; // r14
  int v25; // ebx
  __int64 v26; // rax
  int v32; // r9d
  int v33; // r8d
  unsigned int AdapterType; // [rsp+20h] [rbp-68h]
  int v45; // [rsp+30h] [rbp-58h]
  size_t v46; // [rsp+38h] [rbp-50h]
  __int64 v47; // [rsp+90h] [rbp+8h] BYREF

  Type = MiniportAttributes->Header.Type;
  DefaultTcpConnectionOffloadConfiguration = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x75u,
      (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
      (char)NdisMiniportHandle,
      MiniportAttributes->Header.Type);
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  v6 = 0x140000000uLL;
  switch ( Type )
  {
    case 158:
      v7 = 16 * ((*(_WORD *)(*((_QWORD *)NdisMiniportHandle + 470) + 26LL) & 1) + 34);
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
        v7 |= 0x80u;
      v10 = v7 | 0x100;
      if ( (Flags & 8) == 0 )
        v10 = v7;
      v11 = v10 | 0x400;
      if ( (Flags & 0x10) == 0 )
        v11 = v10;
      v12 = v11 | 0x40;
      if ( (Flags & 0x20) == 0 )
        v12 = v11;
      v13 = v12 | 8;
      if ( (Flags & 0x40) == 0 )
        v13 = v12;
      if ( (Flags & 0x100) != 0 )
      {
        *((_DWORD *)NdisMiniportHandle + 468) |= 0x80000000;
        ndisUpdateNoPauseOnSuspend((struct _NDIS_MINIPORT_BLOCK *)NdisMiniportHandle);
        v14 = &MiniportAttributes->OffloadAttributes.HardwareOffloadCapabilities;
      }
      else
      {
        v14 = p_HardwareOffloadCapabilities;
      }
      if ( (*(_DWORD *)p_HardwareOffloadCapabilities & 0x200) != 0 )
      {
        *((_DWORD *)NdisMiniportHandle + 468) |= 0x200u;
        p_HardwareOffloadCapabilities = v14;
      }
      if ( (*(_DWORD *)p_HardwareOffloadCapabilities & 0x400) != 0
        || *((_BYTE *)NdisMiniportHandle + 32) <= 6u
        && (*((_BYTE *)NdisMiniportHandle + 32) != 6 || *((_BYTE *)NdisMiniportHandle + 33) < 0x1Eu) )
      {
        _InterlockedOr((volatile signed __int32 *)NdisMiniportHandle + 30, 0x400u);
      }
      NdisMSetAttributesEx(
        NdisMiniportHandle,
        MiniportAttributes->AddDeviceRegistrationAttributes.MiniportAddDeviceContext,
        MiniportAttributes->RegistrationAttributes.CheckForHangTimeInSeconds,
        v13,
        MiniportAttributes->RegistrationAttributes.InterfaceType);
      if ( (*(_DWORD *)p_HardwareOffloadCapabilities & 0x80u) == 0 )
      {
        _InterlockedOr((volatile signed __int32 *)NdisMiniportHandle + 30, 0x10000u);
      }
      else
      {
        *((_DWORD *)NdisMiniportHandle + 31) |= 0x80u;
        _InterlockedAnd((volatile signed __int32 *)NdisMiniportHandle + 30, 0xFFFEFFFF);
      }
      goto LABEL_53;
    case 159:
      Pool2 = (void *)ExAllocatePool2(66LL, MiniportAttributes->Header.Size, 538985550LL);
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
      goto LABEL_53;
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
      if ( !(_DWORD)DefaultTcpConnectionOffloadConfiguration && dword_14011A7E8 )
        NdisTraceLoggingOffloads(
          (struct _NDIS_MINIPORT_BLOCK *)NdisMiniportHandle,
          HardwareOffloadCapabilities,
          DefaultOffloadConfiguration);
      goto LABEL_53;
    case 161:
      v47 = 0LL;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v6) = 4;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v6,
          1,
          127,
          (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
          (char)NdisMiniportHandle);
      }
      if ( *((_QWORD *)NdisMiniportHandle + 96) )
      {
        LODWORD(DefaultTcpConnectionOffloadConfiguration) = -1073676267;
      }
      else
      {
        LOBYTE(v45) = 0;
        LOBYTE(AdapterType) = 0;
        LODWORD(DefaultTcpConnectionOffloadConfiguration) = Duplicate802_11AttachAttributesCommon(
                                                              _byteswap_ushort(*(_WORD *)(*((_QWORD *)NdisMiniportHandle
                                                                                          + 470)
                                                                                        + 24LL)),
                                                              (__int128 *)MiniportAttributes,
                                                              (__int64)NdisAllocateMemoryWithTag,
                                                              1835091022LL,
                                                              AdapterType,
                                                              0LL,
                                                              v45,
                                                              0LL,
                                                              &v47);
        if ( (_DWORD)DefaultTcpConnectionOffloadConfiguration )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v19) = 4;
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v19,
              1,
              128,
              (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
              (char)NdisMiniportHandle);
          }
        }
        else
        {
          *((_QWORD *)NdisMiniportHandle + 96) = v47;
        }
      }
      goto LABEL_53;
    case 164:
      *((_QWORD *)NdisMiniportHandle + 514) = MiniportAttributes->AddDeviceRegistrationAttributes.MiniportAddDeviceContext;
      goto LABEL_53;
    case 175:
      Revision = MiniportAttributes->Header.Revision;
      if ( !Revision )
        goto LABEL_52;
      Size = MiniportAttributes->Header.Size;
      if ( Size < 0x10u )
        goto LABEL_52;
      if ( Revision == 2 )
      {
        if ( Size < 0x30u )
          goto LABEL_52;
      }
      else if ( Revision >= 3u && Size < 0x50u )
      {
        goto LABEL_52;
      }
      if ( *((_BYTE *)NdisMiniportHandle + 32) <= 6u
        && (*((_BYTE *)NdisMiniportHandle + 32) != 6 || !*((_BYTE *)NdisMiniportHandle + 33)) )
      {
        goto LABEL_61;
      }
      MiniportAddDeviceContext = MiniportAttributes->AddDeviceRegistrationAttributes.MiniportAddDeviceContext;
      v25 = 0;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v6) = 4;
        WPP_RECORDER_SF_qq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v6,
          13,
          129,
          (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
          (char)NdisMiniportHandle,
          (char)MiniportAttributes->AddDeviceRegistrationAttributes.MiniportAddDeviceContext);
      }
      *((_DWORD *)NdisMiniportHandle + 31) &= ~0x40000000u;
      if ( MiniportAddDeviceContext )
      {
        if ( *(_BYTE *)MiniportAddDeviceContext == 0xAB
          && *((_BYTE *)MiniportAddDeviceContext + 1)
          && *((_WORD *)MiniportAddDeviceContext + 1) >= 0x18u )
        {
          v26 = ExAllocatePool2(64LL, 28LL, 1718568014LL);
          *((_QWORD *)NdisMiniportHandle + 533) = v26;
          if ( v26 )
          {
            _RAX = 1LL;
            __asm { cpuid }
            v32 = 0;
            v33 = 0;
            if ( (int)_RCX < 0 )
            {
              _RAX = 1073741825LL;
              v32 = 1;
              __asm { cpuid }
              if ( (_DWORD)_RAX == 824407624 )
              {
                _RAX = 1073741827LL;
                __asm { cpuid }
                v33 = 2 - ((__PAIR64__(_RBX, _RAX) & 0x100000000000LL) != 0);
              }
            }
            v25 = 0;
            if ( (!v32 || v33 != 1) && (MiniportAddDeviceContext[2] & 1) != 0 )
            {
              MiniportAddDeviceContext[3] = 1;
              MiniportAddDeviceContext[4] = 128;
              MiniportAddDeviceContext[5] = 128;
              *((_DWORD *)NdisMiniportHandle + 31) |= 0x40000000u;
            }
            **((_BYTE **)NdisMiniportHandle + 533) = 0x80;
            *(_BYTE *)(*((_QWORD *)NdisMiniportHandle + 533) + 1LL) = 1;
            *(_WORD *)(*((_QWORD *)NdisMiniportHandle + 533) + 2LL) = 28;
            *(_DWORD *)(*((_QWORD *)NdisMiniportHandle + 533) + 4LL) = MiniportAddDeviceContext[1];
            *(_DWORD *)(*((_QWORD *)NdisMiniportHandle + 533) + 8LL) = MiniportAddDeviceContext[2];
            *(_DWORD *)(*((_QWORD *)NdisMiniportHandle + 533) + 12LL) = MiniportAddDeviceContext[3];
            *(_DWORD *)(*((_QWORD *)NdisMiniportHandle + 533) + 16LL) = 0;
            *(_DWORD *)(*((_QWORD *)NdisMiniportHandle + 533) + 20LL) = MiniportAddDeviceContext[4];
            *(_DWORD *)(*((_QWORD *)NdisMiniportHandle + 533) + 24LL) = MiniportAddDeviceContext[5];
          }
          else
          {
            v25 = -1073741670;
          }
        }
        else
        {
          v25 = -1073741811;
        }
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qql(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0xDu,
          0x82u,
          (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
          (char)NdisMiniportHandle,
          (char)MiniportAddDeviceContext,
          v25);
      LODWORD(DefaultTcpConnectionOffloadConfiguration) = v25;
      if ( v25 < 0 )
        goto LABEL_53;
      if ( MiniportAttributes->Header.Revision < 2u )
        goto LABEL_98;
      if ( *((_BYTE *)NdisMiniportHandle + 32) > 6u )
        goto LABEL_87;
      if ( *((_BYTE *)NdisMiniportHandle + 32) != 6 )
        goto LABEL_61;
      if ( *((_BYTE *)NdisMiniportHandle + 33) < 0x14u )
      {
        LODWORD(DefaultTcpConnectionOffloadConfiguration) = -1073741637;
        goto LABEL_53;
      }
LABEL_87:
      if ( MiniportAttributes->OffloadAttributes.HardwareOffloadCapabilities )
      {
        if ( MiniportAttributes->GeneralAttributes.MaxXmitLinkSpeed )
        {
          LODWORD(DefaultTcpConnectionOffloadConfiguration) = ndisMSetReceiveFilterAttributes(
                                                                (struct _NDIS_MINIPORT_BLOCK *)NdisMiniportHandle,
                                                                (struct _NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES *)MiniportAttributes);
          if ( (int)DefaultTcpConnectionOffloadConfiguration < 0 )
            goto LABEL_53;
        }
      }
      if ( MiniportAttributes->Header.Revision < 2u )
        goto LABEL_98;
      if ( *((_BYTE *)NdisMiniportHandle + 32) > 6u )
        goto LABEL_95;
      if ( *((_BYTE *)NdisMiniportHandle + 32) != 6 )
        goto LABEL_61;
      if ( *((_BYTE *)NdisMiniportHandle + 33) >= 0x14u )
      {
LABEL_95:
        if ( !MiniportAttributes->GeneralAttributes.XmitLinkSpeed
          || !MiniportAttributes->GeneralAttributes.MaxRcvLinkSpeed
          || (LODWORD(DefaultTcpConnectionOffloadConfiguration) = ndisMSetNicSwitchAttributes(
                                                                    (struct _NDIS_MINIPORT_BLOCK *)NdisMiniportHandle,
                                                                    (struct _NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES *)MiniportAttributes),
              (int)DefaultTcpConnectionOffloadConfiguration >= 0) )
        {
LABEL_98:
          if ( MiniportAttributes->Header.Revision >= 3u )
          {
            if ( *((_BYTE *)NdisMiniportHandle + 32) > 6u )
              goto LABEL_116;
            if ( *((_BYTE *)NdisMiniportHandle + 32) != 6 )
            {
LABEL_61:
              LODWORD(DefaultTcpConnectionOffloadConfiguration) = -1073741637;
              goto LABEL_53;
            }
            if ( *((_BYTE *)NdisMiniportHandle + 33) >= 0x1Eu )
            {
LABEL_116:
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
                      NdisTraceLoggingQosHardwareOffloads(
                        (struct _NDIS_MINIPORT_BLOCK *)NdisMiniportHandle,
                        MiniportAttributes);
                      NdisTraceLoggingQosConfigOffloads(
                        (struct _NDIS_MINIPORT_BLOCK *)NdisMiniportHandle,
                        MiniportAttributes);
                    }
                  }
                }
              }
            }
            else
            {
              LODWORD(DefaultTcpConnectionOffloadConfiguration) = -1073741637;
            }
          }
        }
      }
      else
      {
        LODWORD(DefaultTcpConnectionOffloadConfiguration) = -1073741637;
      }
LABEL_53:
      MmUnlockPagableImageSection(ImageSectionHandle);
      _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v46) = (_DWORD)DefaultTcpConnectionOffloadConfiguration;
        WPP_RECORDER_SF_qLL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v22,
          1u,
          0x76u,
          (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
          (char)NdisMiniportHandle,
          Type,
          v46);
      }
      return (int)DefaultTcpConnectionOffloadConfiguration;
    case 179:
      LODWORD(DefaultTcpConnectionOffloadConfiguration) = ndisMSetNDKAttributes(NdisMiniportHandle, MiniportAttributes);
      if ( !(_DWORD)DefaultTcpConnectionOffloadConfiguration && dword_14011A7E8 )
        NdisTraceLoggingNDKCapabilities((struct _NDIS_MINIPORT_BLOCK *)NdisMiniportHandle, MiniportAttributes);
      goto LABEL_53;
    case 197:
      LODWORD(DefaultTcpConnectionOffloadConfiguration) = ndisMSetPacketDirectAttributes(
                                                            NdisMiniportHandle,
                                                            MiniportAttributes);
      goto LABEL_53;
    default:
LABEL_52:
      LODWORD(DefaultTcpConnectionOffloadConfiguration) = -1073741811;
      goto LABEL_53;
  }
}
