/*
 * XREFs of ?ndisMSetGeneralAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x140058BA0
 * Callers:
 *     NdisMSetMiniportAttributes @ 0x140057C10 (NdisMSetMiniportAttributes.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x140186B80 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x14000EA50 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     ?ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x140059960 (-ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ?ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x140059BB0 (-ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ?ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x140059C40 (-ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ndisMSetPowerManagementCapabilities @ 0x14005AC10 (ndisMSetPowerManagementCapabilities.c)
 *     ?ndisMSetRssCapabilities@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RECEIVE_SCALE_CAPABILITIES@@@Z @ 0x14008F1F0 (-ndisMSetRssCapabilities@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RECEIVE_SCALE_CAPABILITIES@@@Z.c)
 *     memmove @ 0x1400EE080 (memmove.c)
 *     ?ndisReadDataLinkLayerKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140170F00 (-ndisReadDataLinkLayerKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisConvertPnpCapabilitiesToPM@@YAXPEAU_NDIS_PNP_CAPABILITIES@@PEAU_NDIS_PM_CAPABILITIES@@@Z @ 0x1401749C0 (-ndisConvertPnpCapabilitiesToPM@@YAXPEAU_NDIS_PNP_CAPABILITIES@@PEAU_NDIS_PM_CAPABILITIES@@@Z.c)
 */

int __fastcall ndisMSetGeneralAttributes(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES *a2)
{
  _NDIS_PHYSICAL_MEDIUM PhysicalMediumType; // esi
  struct _NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES *v3; // rdi
  int v4; // r15d
  unsigned int v6; // ecx
  int result; // eax
  unsigned int InterlockedFlags; // eax
  unsigned int v9; // ett
  _NDIS_MEDIUM MediaType; // ecx
  KIRQL v11; // r14
  unsigned __int8 LinkStateIndicationFlags; // cl
  UCHAR Revision; // al
  _NDIS_PM_CAPABILITIES *PowerManagementCapabilitiesEx; // rdx
  struct _NDIS_PNP_CAPABILITIES *PowerManagementCapabilities; // rcx
  struct _NDIS_RECEIVE_SCALE_CAPABILITIES *RecvScaleCapabilities; // rdx
  bool v17; // zf
  unsigned int SupportedPacketFilters; // ecx
  __int64 v19; // rdx
  unsigned int v20; // r8d
  int v21; // eax
  _NDIS_MEDIUM v22; // ecx
  bool v23; // cf
  _NDIS_PHYSICAL_MEDIUM v24; // eax
  $4E30824A80479617F9AA9ECC46CB5756 *v25; // rbp
  unsigned int *p_SupportedOidListLength; // rsi
  __int128 v27; // xmm0
  int v28; // eax
  unsigned int v29; // ecx
  unsigned int *v30; // rax
  unsigned int *v31; // rax
  _NET_IF_MEDIA_CONNECT_STATE MediaConnectState; // eax
  unsigned int Flags; // edx
  unsigned int v34; // edx
  _DWORD *i; // rdx
  struct _NDIS_IF_BLOCK *v36; // rax
  unsigned int SupportedStatistics; // eax
  unsigned int LookaheadSize; // eax
  unsigned int *Pool2; // rax

  PhysicalMediumType = NdisPhysicalMediumUnspecified;
  v3 = a2;
  v4 = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      1,
      125,
      (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
      (char)a1);
  }
  if ( (a1->Flags & 0x80u) != 0 )
  {
    v36 = ndisMReferenceIfBlock(a1, MPIFREF_SET_ATTRIBUTES);
    if ( !v36 )
      return -1073676271;
    v3->IfType = v36->ifType;
    v3->MediaType = v36->MediaType;
    v3->PhysicalMediumType = v36->PhysicalMediumType;
    v3->IfConnectorPresent = v36->ifConnectorPresent;
    v3->AccessType = v36->AccessType;
    v3->ConnectionType = v36->ConnectionType;
    v3->DirectionType = v36->DirectionType;
    v3->LookaheadSize = 1500;
    v3->MacOptions = 581;
    ndisMDereferenceIfBlock(a1, MPIFREF_SET_ATTRIBUTES);
  }
  v6 = 0;
  if ( !(_DWORD)ndisMediumArraySize )
    return -1073676263;
  for ( i = ndisMediumArray; v3->MediaType != *i; ++i )
  {
    if ( ++v6 >= (unsigned int)ndisMediumArraySize )
      return -1073676263;
  }
  if ( v6 >= (unsigned int)ndisMediumArraySize )
    return -1073676263;
  ndisReadDataLinkLayerKeywords(a1);
  _m_prefetchw(&a1->InterlockedFlags);
  InterlockedFlags = a1->InterlockedFlags;
  do
  {
    v9 = InterlockedFlags;
    InterlockedFlags = _InterlockedCompareExchange(
                         (volatile signed __int32 *)&a1->InterlockedFlags,
                         InterlockedFlags,
                         InterlockedFlags);
  }
  while ( v9 != InterlockedFlags );
  MediaType = v3->MediaType;
  if ( (InterlockedFlags & 0x100) != 0 )
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
    a1->MiniportMediaConnectState = v3->MediaConnectState;
  if ( (LinkStateIndicationFlags & 0x10) == 0 )
  {
    a1->MiniportRcvLinkSpeed = v3->RcvLinkSpeed;
    a1->MiniportXmitLinkSpeed = v3->XmitLinkSpeed;
    a1->MiniportMediaDuplexState = v3->MediaDuplexState;
    a1->MiniportAutoNegotiationFlags = v3->AutoNegotiationFlags;
  }
  if ( (LinkStateIndicationFlags & 1) == 0 )
  {
    MediaConnectState = v3->MediaConnectState;
    Flags = a1->Flags;
    a1->MediaConnectState = MediaConnectState;
    if ( MediaConnectState == MediaConnectStateConnected )
      v34 = Flags | 0x20000000;
    else
      v34 = Flags & 0xDFFFFFFF;
    a1->Flags = v34;
  }
  if ( (LinkStateIndicationFlags & 2) == 0 )
  {
    a1->RcvLinkSpeed = v3->RcvLinkSpeed;
    a1->XmitLinkSpeed = v3->XmitLinkSpeed;
  }
  if ( (LinkStateIndicationFlags & 4) == 0 )
    a1->MediaDuplexState = v3->MediaDuplexState;
  ndisIfSetInterfaceState(a1, 0, v11);
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v11);
  a1->MP6SupportPM = 1;
  *(_QWORD *)&a1->PMCurrentParameters.EnabledWoLPacketPatterns = 0LL;
  *(_QWORD *)&a1->PMCurrentParameters.WakeUpFlags = 0LL;
  a1->PMCurrentParameters.Header = (_NDIS_OBJECT_HEADER)1311360;
  Revision = v3->Header.Revision;
  if ( Revision == 1 )
  {
    PowerManagementCapabilities = v3->PowerManagementCapabilities;
    if ( PowerManagementCapabilities )
    {
      ndisConvertPnpCapabilitiesToPM(PowerManagementCapabilities, &a1->PMHardwareCapabilities);
      goto LABEL_27;
    }
    goto LABEL_57;
  }
  if ( Revision < 2u || (PowerManagementCapabilitiesEx = v3->PowerManagementCapabilitiesEx) == 0LL )
  {
LABEL_57:
    if ( a1->MajorNdisVersion >= 6u )
      a1->MP6SupportPM = 0;
    goto LABEL_27;
  }
  result = ndisMSetPowerManagementCapabilities((char)a1, (char)PowerManagementCapabilitiesEx);
  v4 = result;
  if ( result )
    return result;
LABEL_27:
  RecvScaleCapabilities = v3->RecvScaleCapabilities;
  if ( RecvScaleCapabilities )
  {
    result = ndisMSetRssCapabilities(a1, RecvScaleCapabilities);
    v4 = result;
    if ( result )
      return result;
  }
  v17 = (a1->DeviceFlags & 1) == 0;
  SupportedPacketFilters = v3->SupportedPacketFilters;
  a1->SupportedPacketFilters = SupportedPacketFilters;
  if ( !v17 )
    a1->SupportedPacketFilters = SupportedPacketFilters | 0x20;
  v19 = a1->MediaType;
  a1->MaxXmitLinkSpeed = v3->MaxXmitLinkSpeed;
  a1->MaxRcvLinkSpeed = v3->MaxRcvLinkSpeed;
  v20 = a1->MacOptions | v3->MacOptions;
  a1->MacOptions = v20;
  if ( (_DWORD)v19 == 3 )
  {
    a1->MiniportMaximumLookahead = 512;
LABEL_32:
    if ( (ndisMediaTypeCl[v19] || (_DWORD)v19 == 3) && (v20 & 0x80000001) == 0x80000001 )
      a1->MiniportMaximumLookahead = 512;
LABEL_34:
    v21 = v19;
    if ( (_DWORD)v19 == 17 )
      goto LABEL_35;
    goto LABEL_88;
  }
  switch ( (int)v19 )
  {
    case 0:
      LookaheadSize = v3->LookaheadSize;
      if ( LookaheadSize > 0x200 )
        LookaheadSize = 512;
      a1->MiniportMaximumLookahead = LookaheadSize;
      goto LABEL_32;
    case 4:
    case 9:
    case 10:
    case 15:
    case 16:
    case 18:
    case 19:
      a1->MiniportMaximumLookahead = v3->LookaheadSize;
      break;
    default:
      break;
  }
  if ( (int)v19 < 20 )
  {
    if ( (int)v19 < 0 )
      goto LABEL_34;
    goto LABEL_32;
  }
  a1->MiniportMaximumLookahead = v3->LookaheadSize;
  v21 = v19;
LABEL_88:
  switch ( v21 )
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
      break;
    default:
      if ( (int)v19 < 20 )
        PhysicalMediumType = v3->PhysicalMediumType;
      break;
  }
LABEL_35:
  a1->PhysicalMediumType = PhysicalMediumType;
  if ( (a1->MacOptions & 8) != 0 )
    a1->Flags |= 0x8000000u;
  v22 = a1->MediaType;
  if ( v22 )
  {
    v24 = PhysicalMediumType;
    if ( v22 == NdisMediumNative802_11 )
    {
      a1->MaximumLongAddresses = v3->MaxMulticastListSize;
      v24 = PhysicalMediumType;
    }
  }
  else
  {
    v23 = a1->MajorNdisVersion < 6u;
    a1->MaximumLongAddresses = v3->MaxMulticastListSize;
    v24 = PhysicalMediumType;
    if ( !v23 && PhysicalMediumType == NdisPhysicalMediumWirelessLan )
      return -1073741637;
  }
  if ( v24 == NdisPhysicalMediumUnspecified && a1->PhysicalMediumInInf == 14 )
  {
    v24 = NdisPhysicalMedium802_3;
    a1->PhysicalMediumType = NdisPhysicalMedium802_3;
  }
  v23 = a1->MajorNdisVersion < 6u;
  v25 = &a1->32;
  a1->MiniportPhysicalMediumType = v24;
  if ( v23 && (SupportedStatistics = a1->SupportedStatistics) != 0 )
    v3->SupportedStatistics = SupportedStatistics;
  else
    a1->SupportedStatistics = v3->SupportedStatistics;
  p_SupportedOidListLength = &v3->SupportedOidListLength;
  a1->DataBackFillSize = v3->DataBackFillSize;
  a1->ContextBackFillSize = v3->ContextBackFillSize;
  if ( v3->SupportedOidListLength )
  {
    Pool2 = (unsigned int *)ExAllocatePool2(66LL, v3->SupportedOidListLength, 1835091022);
    a1->SupportedOidList = Pool2;
    if ( Pool2 )
    {
      memmove(Pool2, v3->SupportedOidList, *p_SupportedOidListLength);
      v25 = &a1->32;
      a1->SupportedOidListLength = *p_SupportedOidListLength;
    }
  }
  v27 = *(_OWORD *)&a1->RecvScaleCapabilities.Header.Type;
  a1->TopFilterRestartAttributes.AccessType = v3->AccessType;
  a1->TopFilterRestartAttributes.ConnectionType = v3->ConnectionType;
  a1->TopFilterRestartAttributes.ContextBackFillSize = v3->ContextBackFillSize;
  a1->TopFilterRestartAttributes.DataBackFillSize = v3->DataBackFillSize;
  a1->TopFilterRestartAttributes.Header = v3->Header;
  a1->TopFilterRestartAttributes.LookaheadSize = v3->LookaheadSize;
  a1->TopFilterRestartAttributes.MacOptions = a1->MacOptions;
  a1->TopFilterRestartAttributes.MaxMulticastListSize = v3->MaxMulticastListSize;
  a1->TopFilterRestartAttributes.MtuSize = v3->MtuSize;
  v28 = *(_DWORD *)&a1->RecvScaleCapabilities.NumberOfIndirectionTableEntries;
  *(_OWORD *)&a1->TopRecvScaleCapabilities.Header.Type = v27;
  *(_DWORD *)&a1->TopRecvScaleCapabilities.NumberOfIndirectionTableEntries = v28;
  a1->TopFilterRestartAttributes.RecvScaleCapabilities = &a1->TopRecvScaleCapabilities;
  a1->TopFilterRestartAttributes.SupportedPacketFilters = v3->SupportedPacketFilters;
  a1->TopFilterRestartAttributes.SupportedStatistics = v3->SupportedStatistics;
  a1->TopFilterRestartAttributes.MaxXmitLinkSpeed = v3->MaxXmitLinkSpeed;
  a1->TopFilterRestartAttributes.MaxRcvLinkSpeed = v3->MaxRcvLinkSpeed;
  v29 = *p_SupportedOidListLength;
  if ( *p_SupportedOidListLength )
  {
    v30 = &a1->SupportedOidListLength;
    if ( v25->MajorNdisVersion >= 6u )
      goto LABEL_45;
    goto LABEL_79;
  }
  if ( v25->MajorNdisVersion < 6u )
  {
    v30 = &a1->SupportedOidListLength;
    if ( a1->SupportedOidListLength )
    {
      p_SupportedOidListLength = &v3->SupportedOidListLength;
LABEL_79:
      v29 = *v30;
      *p_SupportedOidListLength = *v30;
      v3->SupportedOidList = a1->SupportedOidList;
LABEL_45:
      v31 = (unsigned int *)ExAllocatePool2(66LL, v29, 1835091022);
      a1->TopFilterRestartAttributes.SupportedOidList = v31;
      if ( v31 )
      {
        memmove(v31, v3->SupportedOidList, *p_SupportedOidListLength);
        a1->TopFilterRestartAttributes.SupportedOidListLength = *p_SupportedOidListLength;
      }
    }
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x7Eu,
      (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
      (char)a1,
      v4);
  return 0;
}
