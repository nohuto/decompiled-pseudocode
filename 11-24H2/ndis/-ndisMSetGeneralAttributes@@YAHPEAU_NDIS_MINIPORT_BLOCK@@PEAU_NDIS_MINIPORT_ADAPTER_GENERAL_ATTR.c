/*
 * XREFs of ?ndisMSetGeneralAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x14007EC60
 * Callers:
 *     NdisMSetMiniportAttributes @ 0x14007F870 (NdisMSetMiniportAttributes.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x14017BC40 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x140014250 (WPP_RECORDER_SF_qL.c)
 *     ?ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x140034E10 (-ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ?ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x140035060 (-ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ?ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1400350F0 (-ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ndisRssPmObjectHeaderFixup @ 0x1400618E0 (ndisRssPmObjectHeaderFixup.c)
 *     memmove @ 0x1400E7200 (memmove.c)
 *     ?ndisReadDataLinkLayerKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140164940 (-ndisReadDataLinkLayerKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisConvertPnpCapabilitiesToPM@@YAXPEAU_NDIS_PNP_CAPABILITIES@@PEAU_NDIS_PM_CAPABILITIES@@@Z @ 0x140168280 (-ndisConvertPnpCapabilitiesToPM@@YAXPEAU_NDIS_PNP_CAPABILITIES@@PEAU_NDIS_PM_CAPABILITIES@@@Z.c)
 */

__int64 __fastcall ndisMSetGeneralAttributes(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES *a2)
{
  struct _NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES *v2; // rdi
  struct _NDIS_IF_BLOCK *v4; // rax
  __int64 result; // rax
  unsigned int v6; // edx
  unsigned int InterlockedFlags; // eax
  unsigned int v8; // ett
  bool v9; // zf
  _NDIS_MEDIUM MediaType; // eax
  KIRQL v11; // bp
  unsigned __int8 LinkStateIndicationFlags; // dl
  _NET_IF_MEDIA_CONNECT_STATE MediaConnectState; // eax
  unsigned __int8 v14; // dl
  int v15; // edx
  UCHAR Revision; // al
  struct _NDIS_PNP_CAPABILITIES *PowerManagementCapabilities; // rcx
  _NDIS_PM_CAPABILITIES *PowerManagementCapabilitiesEx; // rsi
  size_t Size; // r14
  unsigned __int8 v20; // r9
  unsigned __int16 v21; // ax
  _NDIS_RECEIVE_SCALE_CAPABILITIES *RecvScaleCapabilities; // rsi
  unsigned __int8 v23; // r9
  unsigned __int16 v24; // dx
  unsigned int SupportedPacketFilters; // ecx
  __int64 v26; // rdx
  unsigned int v27; // r8d
  unsigned int LookaheadSize; // eax
  _NDIS_PHYSICAL_MEDIUM PhysicalMediumType; // eax
  _NDIS_MEDIUM v30; // eax
  bool v31; // cf
  _NDIS_PHYSICAL_MEDIUM v32; // eax
  $6A74A2D77AECD4C8EC53F6C92D95B01A *v33; // rsi
  unsigned int SupportedStatistics; // eax
  unsigned int *p_SupportedOidListLength; // r14
  unsigned int SupportedOidListLength; // eax
  unsigned int *Pool2; // rax
  __int128 v38; // xmm0
  int v39; // eax
  unsigned int v40; // ecx
  unsigned int *v41; // rax
  unsigned int *v42; // rax

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      1,
      125,
      (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
      (char)a1);
  }
  if ( (a1->Flags & 0x80u) != 0 )
  {
    v4 = ndisMReferenceIfBlock(a1, 0x17u);
    if ( !v4 )
      return 3221291025LL;
    v2->IfType = v4->ifType;
    v2->MediaType = v4->MediaType;
    v2->PhysicalMediumType = v4->PhysicalMediumType;
    v2->IfConnectorPresent = v4->ifConnectorPresent;
    v2->AccessType = v4->AccessType;
    v2->ConnectionType = v4->ConnectionType;
    v2->DirectionType = v4->DirectionType;
    v2->LookaheadSize = 1500;
    v2->MacOptions = 581;
    ndisMDereferenceIfBlock(a1, 0x17u);
  }
  v6 = 0;
  if ( !(_DWORD)ndisMediumArraySize )
    return 3221291033LL;
  while ( v2->MediaType != *((_DWORD *)ndisMediumArray + v6) )
  {
    if ( ++v6 >= (unsigned int)ndisMediumArraySize )
      return 3221291033LL;
  }
  if ( v6 >= (unsigned int)ndisMediumArraySize )
    return 3221291033LL;
  ndisReadDataLinkLayerKeywords(a1);
  _m_prefetchw(&a1->InterlockedFlags);
  InterlockedFlags = a1->InterlockedFlags;
  do
  {
    v8 = InterlockedFlags;
    InterlockedFlags = _InterlockedCompareExchange(
                         (volatile signed __int32 *)&a1->InterlockedFlags,
                         InterlockedFlags,
                         InterlockedFlags);
  }
  while ( v8 != InterlockedFlags );
  v9 = (InterlockedFlags & 0x100) == 0;
  MediaType = v2->MediaType;
  if ( !v9 )
  {
    a1->MpSpecifiedMediaType = MediaType;
    MediaType = a1->DataLinkLayerType;
  }
  a1->MediaType = MediaType;
  a1->MiniportMediaType = MediaType;
  v11 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  LinkStateIndicationFlags = a1->LinkStateIndicationFlags;
  a1->MiniportThread = KeGetCurrentThread();
  if ( (LinkStateIndicationFlags & 8) == 0 )
    a1->MiniportMediaConnectState = v2->MediaConnectState;
  if ( (LinkStateIndicationFlags & 0x10) == 0 )
  {
    a1->MiniportRcvLinkSpeed = v2->RcvLinkSpeed;
    a1->MiniportXmitLinkSpeed = v2->XmitLinkSpeed;
    a1->MiniportMediaDuplexState = v2->MediaDuplexState;
    a1->MiniportAutoNegotiationFlags = v2->AutoNegotiationFlags;
  }
  if ( (LinkStateIndicationFlags & 1) == 0 )
  {
    MediaConnectState = v2->MediaConnectState;
    a1->MediaConnectState = MediaConnectState;
    if ( MediaConnectState == MediaConnectStateConnected )
      _InterlockedOr((volatile signed __int32 *)&a1->Flags, 0x20000000u);
    else
      _InterlockedAnd((volatile signed __int32 *)&a1->Flags, 0xDFFFFFFF);
  }
  v14 = a1->LinkStateIndicationFlags;
  if ( (v14 & 2) == 0 )
  {
    a1->RcvLinkSpeed = v2->RcvLinkSpeed;
    a1->XmitLinkSpeed = v2->XmitLinkSpeed;
  }
  if ( (v14 & 4) == 0 )
    a1->MediaDuplexState = v2->MediaDuplexState;
  ndisIfSetInterfaceState(a1, 0, v11);
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v11);
  a1->MP6SupportPM = 1;
  *(_QWORD *)&a1->PMCurrentParameters.EnabledWoLPacketPatterns = 0LL;
  *(_QWORD *)&a1->PMCurrentParameters.WakeUpFlags = 0LL;
  a1->PMCurrentParameters.Header = (_NDIS_OBJECT_HEADER)1311360;
  Revision = v2->Header.Revision;
  if ( Revision == 1 )
  {
    PowerManagementCapabilities = v2->PowerManagementCapabilities;
    if ( PowerManagementCapabilities )
    {
      ndisConvertPnpCapabilitiesToPM(PowerManagementCapabilities, &a1->PMHardwareCapabilities);
      goto LABEL_50;
    }
    goto LABEL_48;
  }
  if ( Revision < 2u || (PowerManagementCapabilitiesEx = v2->PowerManagementCapabilitiesEx) == 0LL )
  {
LABEL_48:
    if ( a1->MajorNdisVersion >= 6u )
      a1->MP6SupportPM = 0;
    goto LABEL_50;
  }
  *(_OWORD *)&a1->PMHardwareCapabilities.Header.Type = 0LL;
  *(_OWORD *)&a1->PMHardwareCapabilities.MaxWoLPatternSize = 0LL;
  Size = 60LL;
  *(_OWORD *)&a1->PMHardwareCapabilities.NumArpOffloadIPv4Addresses = 0LL;
  *(_QWORD *)&a1->PMHardwareCapabilities.MinLinkChangeWakeUp = 0LL;
  a1->PMHardwareCapabilities.MediaSpecificWakeUpEvents = 0;
  if ( PowerManagementCapabilitiesEx->Header.Revision >= 2u )
  {
    v20 = 2;
    v21 = 60;
  }
  else
  {
    if ( a1->MajorNdisVersion > 6u || a1->MajorNdisVersion == 6 && a1->MinorNdisVersion >= 0x50u )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v15) = 2;
        WPP_RECORDER_SF_qq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v15,
          1,
          124,
          (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
          (char)a1,
          (char)PowerManagementCapabilitiesEx);
      }
      return 3223519276LL;
    }
    v20 = 1;
    v21 = 52;
  }
  if ( ndisRssPmObjectHeaderFixup(
         (__int64)"PowerManagementCapabilities",
         &PowerManagementCapabilitiesEx->Header.Type,
         0x80u,
         v20,
         v21)
    && (a1->MajorNdisVersion > 6u || a1->MajorNdisVersion == 6 && a1->MinorNdisVersion >= 0x50u) )
  {
    return 3223519276LL;
  }
  if ( PowerManagementCapabilitiesEx->Header.Size < 0x3Cu )
    Size = PowerManagementCapabilitiesEx->Header.Size;
  memmove(&a1->PMHardwareCapabilities, PowerManagementCapabilitiesEx, Size);
LABEL_50:
  RecvScaleCapabilities = v2->RecvScaleCapabilities;
  if ( RecvScaleCapabilities )
  {
    *(_OWORD *)&a1->RecvScaleCapabilities.Header.Type = 0LL;
    *(_DWORD *)&a1->RecvScaleCapabilities.NumberOfIndirectionTableEntries = 0;
    v23 = 3;
    v24 = 18;
    if ( RecvScaleCapabilities->Header.Revision == 1 )
    {
      v23 = 1;
      v24 = 16;
    }
    else if ( RecvScaleCapabilities->Header.Revision == 2 )
    {
      v23 = 2;
    }
    if ( ndisRssPmObjectHeaderFixup(
           (__int64)"RecvScaleCapabilities",
           &RecvScaleCapabilities->Header.Type,
           0x88u,
           v23,
           v24)
      && (a1->MajorNdisVersion > 6u || a1->MajorNdisVersion == 6 && a1->MinorNdisVersion >= 0x50u) )
    {
      return 3223519276LL;
    }
    memmove(&a1->RecvScaleCapabilities, RecvScaleCapabilities, RecvScaleCapabilities->Header.Size);
  }
  v9 = (a1->DeviceFlags & 1) == 0;
  SupportedPacketFilters = v2->SupportedPacketFilters;
  a1->SupportedPacketFilters = SupportedPacketFilters;
  if ( !v9 )
    a1->SupportedPacketFilters = SupportedPacketFilters | 0x20;
  v26 = a1->MediaType;
  a1->MaxXmitLinkSpeed = v2->MaxXmitLinkSpeed;
  a1->MaxRcvLinkSpeed = v2->MaxRcvLinkSpeed;
  v27 = a1->MacOptions | v2->MacOptions;
  a1->MacOptions = v27;
  switch ( (int)v26 )
  {
    case 0:
      LookaheadSize = v2->LookaheadSize;
      if ( LookaheadSize > 0x200 )
        LookaheadSize = 512;
      a1->MiniportMaximumLookahead = LookaheadSize;
      goto LABEL_72;
    case 3:
      a1->MiniportMaximumLookahead = 512;
      goto LABEL_72;
    case 4:
    case 9:
    case 10:
    case 15:
    case 16:
    case 18:
    case 19:
      a1->MiniportMaximumLookahead = v2->LookaheadSize;
      goto LABEL_69;
    default:
LABEL_69:
      if ( (int)v26 >= 20 )
        a1->MiniportMaximumLookahead = v2->LookaheadSize;
      if ( (unsigned int)v26 > 0x13 )
        goto LABEL_73;
LABEL_72:
      if ( ndisMediaTypeCl[v26] )
        goto LABEL_74;
LABEL_73:
      if ( (_DWORD)v26 == 3 )
      {
LABEL_74:
        if ( (v27 & 0x80000001) == 0x80000001 )
          a1->MiniportMaximumLookahead = 512;
      }
      switch ( (int)v26 )
      {
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
        case 17:
          PhysicalMediumType = NdisPhysicalMediumUnspecified;
          break;
        default:
          PhysicalMediumType = NdisPhysicalMediumUnspecified;
          if ( (int)v26 < 20 )
            PhysicalMediumType = v2->PhysicalMediumType;
          break;
      }
      a1->PhysicalMediumType = PhysicalMediumType;
      if ( (a1->MacOptions & 8) != 0 )
        _InterlockedOr((volatile signed __int32 *)&a1->Flags, 0x8000000u);
      v30 = a1->MediaType;
      if ( v30 )
      {
        if ( v30 == NdisMediumNative802_11 )
          a1->MaximumLongAddresses = v2->MaxMulticastListSize;
      }
      else
      {
        v31 = a1->MajorNdisVersion < 6u;
        a1->MaximumLongAddresses = v2->MaxMulticastListSize;
        if ( !v31 && a1->PhysicalMediumType == NdisPhysicalMediumWirelessLan )
          return 3221225659LL;
      }
      v32 = a1->PhysicalMediumType;
      if ( v32 == NdisPhysicalMediumUnspecified && a1->PhysicalMediumInInf == 14 )
      {
        v32 = NdisPhysicalMedium802_3;
        a1->PhysicalMediumType = NdisPhysicalMedium802_3;
      }
      v31 = a1->MajorNdisVersion < 6u;
      v33 = &a1->32;
      a1->MiniportPhysicalMediumType = v32;
      if ( v31 && (SupportedStatistics = a1->SupportedStatistics) != 0 )
        v2->SupportedStatistics = SupportedStatistics;
      else
        a1->SupportedStatistics = v2->SupportedStatistics;
      p_SupportedOidListLength = &v2->SupportedOidListLength;
      a1->DataBackFillSize = v2->DataBackFillSize;
      a1->ContextBackFillSize = v2->ContextBackFillSize;
      SupportedOidListLength = v2->SupportedOidListLength;
      if ( SupportedOidListLength )
      {
        Pool2 = (unsigned int *)ExAllocatePool2(66LL, SupportedOidListLength, 1835091022LL);
        a1->SupportedOidList = Pool2;
        if ( Pool2 )
        {
          memmove(Pool2, v2->SupportedOidList, *p_SupportedOidListLength);
          v33 = &a1->32;
          a1->SupportedOidListLength = *p_SupportedOidListLength;
        }
      }
      v38 = *(_OWORD *)&a1->RecvScaleCapabilities.Header.Type;
      a1->TopFilterRestartAttributes.AccessType = v2->AccessType;
      a1->TopFilterRestartAttributes.ConnectionType = v2->ConnectionType;
      a1->TopFilterRestartAttributes.ContextBackFillSize = v2->ContextBackFillSize;
      a1->TopFilterRestartAttributes.DataBackFillSize = v2->DataBackFillSize;
      a1->TopFilterRestartAttributes.Header = v2->Header;
      a1->TopFilterRestartAttributes.LookaheadSize = v2->LookaheadSize;
      a1->TopFilterRestartAttributes.MacOptions = a1->MacOptions;
      a1->TopFilterRestartAttributes.MaxMulticastListSize = v2->MaxMulticastListSize;
      a1->TopFilterRestartAttributes.MtuSize = v2->MtuSize;
      v39 = *(_DWORD *)&a1->RecvScaleCapabilities.NumberOfIndirectionTableEntries;
      *(_OWORD *)&a1->TopRecvScaleCapabilities.Header.Type = v38;
      *(_DWORD *)&a1->TopRecvScaleCapabilities.NumberOfIndirectionTableEntries = v39;
      a1->TopFilterRestartAttributes.RecvScaleCapabilities = &a1->TopRecvScaleCapabilities;
      a1->TopFilterRestartAttributes.SupportedPacketFilters = v2->SupportedPacketFilters;
      a1->TopFilterRestartAttributes.SupportedStatistics = v2->SupportedStatistics;
      a1->TopFilterRestartAttributes.MaxXmitLinkSpeed = v2->MaxXmitLinkSpeed;
      a1->TopFilterRestartAttributes.MaxRcvLinkSpeed = v2->MaxRcvLinkSpeed;
      v40 = *p_SupportedOidListLength;
      if ( *p_SupportedOidListLength )
      {
        v41 = &a1->SupportedOidListLength;
        if ( v33->MajorNdisVersion >= 6u )
          goto LABEL_104;
      }
      else
      {
        if ( v33->MajorNdisVersion >= 6u )
          goto LABEL_106;
        v41 = &a1->SupportedOidListLength;
        if ( !a1->SupportedOidListLength )
          goto LABEL_106;
        p_SupportedOidListLength = &v2->SupportedOidListLength;
      }
      v40 = *v41;
      *p_SupportedOidListLength = *v41;
      v2->SupportedOidList = a1->SupportedOidList;
LABEL_104:
      v42 = (unsigned int *)ExAllocatePool2(66LL, v40, 1835091022LL);
      a1->TopFilterRestartAttributes.SupportedOidList = v42;
      if ( v42 )
      {
        memmove(v42, v2->SupportedOidList, *p_SupportedOidListLength);
        a1->TopFilterRestartAttributes.SupportedOidListLength = *p_SupportedOidListLength;
      }
LABEL_106:
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          1u,
          0x7Eu,
          (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
          (char)a1,
          0);
      result = 0LL;
      break;
  }
  return result;
}
