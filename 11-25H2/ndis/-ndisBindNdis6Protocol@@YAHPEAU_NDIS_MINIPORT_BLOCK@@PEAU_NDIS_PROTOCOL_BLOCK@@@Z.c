/*
 * XREFs of ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x14015FDF0
 * Callers:
 *     ?ndisBindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x140160FD0 (-ndisBindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1400129A0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisReferenceOpenByHandle@@YAEPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x140012F50 (-ndisReferenceOpenByHandle@@YAEPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisNotifyWmiBindUnbind@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z @ 0x140054D20 (-ndisNotifyWmiBindUnbind@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z.c)
 *     ?ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140056B60 (-ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIndicateInitialStateToBinding@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x140059470 (-ndisIndicateInitialStateToBinding@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x14005A6A0 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?MiniportSupportsReceiveThrottle@@YA_NPEBU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140067E60 (-MiniportSupportsReceiveThrottle@@YA_NPEBU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z @ 0x140071400 (-ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z.c)
 *     ?ndisReferenceProtocol@@YAEPEAU_NDIS_PROTOCOL_BLOCK@@W4_NDIS_PT_REFTAG@@@Z @ 0x140071B10 (-ndisReferenceProtocol@@YAEPEAU_NDIS_PROTOCOL_BLOCK@@W4_NDIS_PT_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_ZZL @ 0x140074690 (WPP_RECORDER_SF_ZZL.c)
 *     ?ndisGetPortList@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_NDIS_PORT@@@Z @ 0x1400762C0 (-ndisGetPortList@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_NDIS_PORT@@@Z.c)
 *     McTemplateK0jqxzd_EtwWriteTransfer @ 0x140077980 (McTemplateK0jqxzd_EtwWriteTransfer.c)
 *     ?ndisGetNDKBlock@@YAPEAU_NDIS_NDK_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140089520 (-ndisGetNDKBlock@@YAPEAU_NDIS_NDK_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisNotifyBindFailure@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x140090DB0 (-ndisNotifyBindFailure@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?ndisBindUnbindPeriodicReceives@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_M_PERIODIC_RECEIVE_ACTION@@@Z @ 0x140098C40 (-ndisBindUnbindPeriodicReceives@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_M_PERIODIC_RECEIVE_ACTION@.c)
 *     ?ndisIovGetNicSwitchList@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_NIC_SWITCH_CAPABILITIES@@PEAU_NDIS_SRIOV_CAPABILITIES@@PEAPEAU_NDIS_NIC_SWITCH_INFO_ARRAY@@@Z @ 0x1400E5E5C (-ndisIovGetNicSwitchList@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_NIC_SWITCH_CAPABILITIES@@PEAU_N.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     memmove @ 0x1400EE080 (memmove.c)
 *     memset @ 0x1400EE380 (memset.c)
 *     ?ndisInvokeBindAdapter@@YAHPEAU_NDIS_PROTOCOL_BLOCK@@PEAXPEAU_NDIS_BIND_PARAMETERS@@@Z @ 0x14015F1A0 (-ndisInvokeBindAdapter@@YAHPEAU_NDIS_PROTOCOL_BLOCK@@PEAXPEAU_NDIS_BIND_PARAMETERS@@@Z.c)
 *     ?RELEASE_PROT_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x140160710 (-RELEASE_PROT_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?WAIT_FOR_PROTO_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x140160750 (-WAIT_FOR_PROTO_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140160790 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 *     ?ndisIfQueryBindingMiniportIfIndex@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAKPEAT_NET_LUID_LH@@12@Z @ 0x1401607E0 (-ndisIfQueryBindingMiniportIfIndex@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAKPEAT_NET_LUID_LH@@12@Z.c)
 *     ?ndisMDoMiniportOp@@YAJPEAU_NDIS_MINIPORT_BLOCK@@EKPEAXJJE@Z @ 0x140174760 (-ndisMDoMiniportOp@@YAJPEAU_NDIS_MINIPORT_BLOCK@@EKPEAXJJE@Z.c)
 */

__int64 __fastcall ndisBindNdis6Protocol(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_PROTOCOL_BLOCK *a2)
{
  unsigned int v4; // esi
  char v5; // r13
  int v6; // r9d
  char v7; // r15
  _NDIS_PNP_DEVICE_STATE PnPDeviceState; // ecx
  _UNICODE_STRING *Paths; // r12
  UNICODE_STRING v10; // xmm0
  __int16 v11; // ax
  unsigned __int8 MajorNdisVersion; // dl
  UCHAR v13; // r9
  USHORT v14; // ax
  _NDIS_FILTER_BLOCK *HighestFilter; // rcx
  _NDIS_IF_BLOCK *IfBlock; // rcx
  _NET_IF_MEDIA_DUPLEX_STATE MediaDuplexStateIndicateUp; // eax
  _NDIS_MINIPORT_OFFLOAD *Offload; // rcx
  _NDIS_HD_SPLIT_CURRENT_CONFIG *HDSplitCurrentConfig; // rax
  struct _NDIS_NIC_SWITCH_CAPABILITIES *TopNicSwitchCurrentCapabilities; // r10
  _NDIS_RECEIVE_FILTER_CAPABILITIES *TopReceiveFilterCurrentCapabilities; // rcx
  _NDIS_RECEIVE_FILTER_CAPABILITIES *ReceiveFilterCapabilities; // rax
  _NDIS_NIC_SWITCH_CAPABILITIES *NicSwitchCapabilities; // rax
  _NDIS_IF_BLOCK *v24; // rdx
  _NDIS_IF_BLOCK *v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  struct _NDIS_SRIOV_CAPABILITIES *TopSriovCurrentCapabilities; // r8
  struct _NDIS_NDK_BLOCK *NDKBlock; // rax
  __int64 v32; // rcx
  unsigned __int8 v33; // cl
  int v34; // edx
  int BugCheckParameter4; // [rsp+20h] [rbp-E0h]
  _UNICODE_STRING Destination; // [rsp+40h] [rbp-C0h] BYREF
  int v37; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING Source; // [rsp+58h] [rbp-A8h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+80h] [rbp-80h] BYREF
  ULONG_PTR v41[2]; // [rsp+90h] [rbp-70h]
  _UNICODE_STRING v42; // [rsp+A0h] [rbp-60h]
  __int128 v43; // [rsp+B0h] [rbp-50h]
  __int128 v44; // [rsp+C0h] [rbp-40h]
  __int128 v45; // [rsp+D0h] [rbp-30h]
  struct _KEVENT Event[2]; // [rsp+E0h] [rbp-20h] BYREF
  struct _NDIS_BIND_PARAMETERS v47; // [rsp+110h] [rbp+10h] BYREF

  memset(&v47, 0, sizeof(v47));
  v37 = 0;
  *(_OWORD *)BugCheckParameter3 = 0LL;
  v4 = 0;
  v5 = 0;
  *(_OWORD *)v41 = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  v45 = 0LL;
  memset(Event, 0, sizeof(Event));
  Destination = 0LL;
  Source = 0LL;
  DestinationString = 0LL;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x1Au,
      (struct _GUID *)&WPP_a3a0dfe1e6d739a64d48f097d248e118_Traceguids,
      (char)a1,
      a2);
  if ( a1->MajorNdisVersion < 6u && (a1->LinkStateIndicationFlags & 1) == 0 )
    ndisMDoMiniportOp(a1, 1u, 0x10114u, &v37, 4, 1, 1u);
  if ( ndisReferenceProtocol(a2, 8u) )
  {
    if ( !a1->EthDB )
    {
      v4 = -1073741823;
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          6u,
          0x1Bu,
          (struct _GUID *)&WPP_a3a0dfe1e6d739a64d48f097d248e118_Traceguids,
          (char)a1,
          a2);
      goto LABEL_46;
    }
    v7 = 1;
    WAIT_FOR_PROTO_MUTEX(a2);
    if ( a2->Ref.Closing )
      goto LABEL_43;
    if ( !ndisIsMiniportStarted(a1) )
      goto LABEL_62;
    PnPDeviceState = a1->PnPDeviceState;
    if ( ((PnPDeviceState - 1) & 0xFFFFFFFC) != 0 || PnPDeviceState == NdisPnPDeviceStopped )
      goto LABEL_62;
    Paths = a1->BindPaths->Paths;
    a2->BindDeviceName = &a1->MiniportName;
    a2->RootDeviceName = Paths;
    RtlInitUnicodeString(&DestinationString, L"\\Parameters\\Adapters\\");
    Source = *Paths;
    v10 = Source;
    Source.MaximumLength -= ndisDeviceStr.Length;
    Source.Length = _mm_cvtsi128_si32((__m128i)v10) - ndisDeviceStr.Length;
    v11 = a2->Name.Length - ndisDeviceStr.Length;
    Source.Buffer += (unsigned __int64)ndisDeviceStr.Length >> 1;
    Destination.MaximumLength = Paths->Length + DestinationString.Length + v11 + 2;
    Destination.Length = 0;
    Destination.Buffer = (wchar_t *)ExAllocatePool2(64LL, Destination.MaximumLength, 538985550);
    if ( !Destination.Buffer )
    {
LABEL_43:
      RELEASE_PROT_MUTEX(a2);
      if ( v5 )
      {
        ndisMDereferenceOpenUnlocked(v41[0], 2u);
        v41[0] = 0LL;
      }
      if ( v7 && v4 )
        ndisNotifyBindFailure(a1, a2);
      goto LABEL_46;
    }
    RtlCopyUnicodeString(&Destination, &a2->Name);
    RtlAppendUnicodeStringToString(&Destination, &DestinationString);
    RtlAppendUnicodeStringToString(&Destination, &Source);
    MajorNdisVersion = a2->MajorNdisVersion;
    v47.Header.Type = -122;
    if ( MajorNdisVersion > 6u )
      goto LABEL_14;
    if ( MajorNdisVersion == 6 )
    {
      if ( a2->MinorNdisVersion >= 0x1Eu )
      {
LABEL_14:
        v13 = 4;
        v14 = 312;
LABEL_15:
        v47.Header.Revision = v13;
LABEL_16:
        v47.Header.Size = v14;
        v47.AdapterName = Paths;
        v47.ProtocolSection = &Destination;
        v47.PhysicalDeviceObject = a1->PhysicalDeviceObject;
        v47.BoundAdapterName = &a1->MiniportName;
        if ( (a1->MacOptions & 0x80000001) == 0x80000001 )
          v47.MediaType = NdisMediumWan;
        else
          v47.MediaType = a1->MediaType;
        HighestFilter = a1->HighestFilter;
        if ( HighestFilter )
        {
          v47.XmitLinkSpeed = HighestFilter->XmitLinkSpeedIndicateUp;
          v47.RcvLinkSpeed = HighestFilter->RcvLinkSpeedIndicateUp;
          v47.MediaConnectState = HighestFilter->MediaConnectStateIndicateUp;
          MediaDuplexStateIndicateUp = HighestFilter->MediaDuplexStateIndicateUp;
        }
        else
        {
          IfBlock = a1->IfBlock;
          v47.XmitLinkSpeed = a1->XmitLinkSpeed;
          v47.RcvLinkSpeed = a1->RcvLinkSpeed;
          v47.MediaConnectState = IfBlock->MediaConnectState;
          MediaDuplexStateIndicateUp = IfBlock->MediaDuplexState;
        }
        v47.MediaDuplexState = MediaDuplexStateIndicateUp;
        v47.MtuSize = a1->TopFilterRestartAttributes.MtuSize;
        v47.MaxXmitLinkSpeed = a1->TopFilterRestartAttributes.MaxXmitLinkSpeed;
        v47.MaxRcvLinkSpeed = a1->TopFilterRestartAttributes.MaxRcvLinkSpeed;
        v47.LookaheadSize = a1->TopFilterRestartAttributes.LookaheadSize;
        v47.SupportedPacketFilters = a1->TopFilterRestartAttributes.SupportedPacketFilters;
        v47.MaxMulticastListSize = a1->TopFilterRestartAttributes.MaxMulticastListSize;
        v47.PhysicalMediumType = a1->PhysicalMediumType;
        v47.RcvScaleCapabilities = &a1->TopRecvScaleCapabilities;
        if ( MajorNdisVersion > 6u || MajorNdisVersion == 6 && a2->MinorNdisVersion >= 0x14u )
          v47.PowerManagementCapabilitiesEx = &a1->PMAdvertisedCapabilities;
        else
          v47.PowerManagementCapabilities = &a1->PMCapabilities61;
        Offload = a1->Offload;
        if ( Offload )
        {
          if ( Offload->SupportsTopOffload == 1 )
            v47.DefaultOffloadConfiguration = &Offload->TopCapabilities;
          if ( Offload->SupportsTopTcpConnectionOffload == 1 )
            v47.TcpConnectionOffloadCapabilities = &Offload->TopTcpConnectionOffloadCapabilities;
        }
        HDSplitCurrentConfig = v47.HDSplitCurrentConfig;
        TopNicSwitchCurrentCapabilities = a1->TopNicSwitchCurrentCapabilities;
        if ( a1->HDSplitCurrentConfig )
          HDSplitCurrentConfig = a1->HDSplitCurrentConfig;
        TopReceiveFilterCurrentCapabilities = a1->TopReceiveFilterCurrentCapabilities;
        v47.HDSplitCurrentConfig = HDSplitCurrentConfig;
        ReceiveFilterCapabilities = v47.ReceiveFilterCapabilities;
        if ( TopReceiveFilterCurrentCapabilities )
          ReceiveFilterCapabilities = TopReceiveFilterCurrentCapabilities;
        v47.ReceiveFilterCapabilities = ReceiveFilterCapabilities;
        NicSwitchCapabilities = v47.NicSwitchCapabilities;
        if ( TopNicSwitchCurrentCapabilities )
          NicSwitchCapabilities = TopNicSwitchCurrentCapabilities;
        v47.NicSwitchCapabilities = NicSwitchCapabilities;
        if ( MajorNdisVersion > 6u || MajorNdisVersion == 6 && a2->MinorNdisVersion >= 0x1Eu )
        {
          NDKBlock = ndisGetNDKBlock(a1);
          if ( NDKBlock )
          {
            v33 = *((_BYTE *)NDKBlock + 24);
            v47.NDKCapabilities = (_NDIS_NDK_CAPABILITIES *)((char *)NDKBlock + 32);
            v47.NDKEnabled = v33;
          }
          else
          {
            v47.NDKEnabled = 0;
            v47.NDKCapabilities = 0LL;
          }
        }
        if ( v13 >= 4u )
        {
          TopSriovCurrentCapabilities = a1->TopSriovCurrentCapabilities;
          if ( TopSriovCurrentCapabilities )
          {
            v47.SriovCapabilities = a1->TopSriovCurrentCapabilities;
            if ( (unsigned int)ndisIovGetNicSwitchList(
                                 a1,
                                 TopNicSwitchCurrentCapabilities,
                                 TopSriovCurrentCapabilities,
                                 &v47.NicSwitchArray) )
              goto LABEL_43;
          }
        }
        v24 = a1->IfBlock;
        v47.MacAddressLength = v24->ifPhysAddress.Length;
        memmove(v47.CurrentMacAddress, v24->ifPhysAddress.Address, v47.MacAddressLength);
        ndisIfQueryBindingMiniportIfIndex(
          a1,
          &v47.BoundIfIndex,
          &v47.BoundIfNetluid,
          &v47.LowestIfIndex,
          &v47.LowestIfNetluid);
        v25 = a1->IfBlock;
        v47.AccessType = a1->TopFilterRestartAttributes.AccessType;
        v47.DirectionType = v25->DirectionType;
        v47.ConnectionType = a1->TopFilterRestartAttributes.ConnectionType;
        v47.IfType = v25->ifType;
        v47.IfConnectorPresent = v25->ifConnectorPresent;
        v47.DataBackFillSize = a1->TopFilterRestartAttributes.DataBackFillSize;
        v47.ContextBackFillSize = a1->TopFilterRestartAttributes.ContextBackFillSize;
        v47.MacOptions = a1->TopFilterRestartAttributes.MacOptions;
        v47.CompartmentId = v25->CompartmentId;
        if ( !(unsigned int)ndisGetPortList(a1, &v47.ActivePorts) )
        {
          BugCheckParameter3[1] = (ULONG_PTR)a2;
          v41[1] = (ULONG_PTR)a1;
          v42 = Destination;
          *(_QWORD *)&v43 = Paths;
          v41[0] = 0LL;
          KeInitializeEvent(Event, NotificationEvent, 0);
          a2->BindingAdapter = a1;
          v7 = 0;
          v4 = ndisInvokeBindAdapter(a2, BugCheckParameter3, &v47);
          if ( v4 == 259 )
          {
            ndisWaitForKernelObject(Event);
            v4 = DWORD2(v45);
          }
          if ( v4 )
            goto LABEL_37;
          if ( v41[0] )
          {
            if ( !(unsigned __int8)ndisReferenceOpenByHandle((struct _NDIS_OPEN_BLOCK *)v41[0], 2u) )
              KeBugCheckEx(0x7Cu, 0x16uLL, (ULONG_PTR)a2, (ULONG_PTR)BugCheckParameter3, v41[0]);
            v5 = 1;
            ndisIndicateInitialStateToBinding((struct _NDIS_OPEN_BLOCK *)v41[0]);
          }
          if ( MiniportSupportsReceiveThrottle(a1) )
          {
LABEL_65:
            ndisNotifyWmiBindUnbind(a1, a2, 1u);
LABEL_37:
            ExFreePoolWithTag(Destination.Buffer, 0);
            if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_ZZL(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v26,
                v28,
                0x1Cu,
                BugCheckParameter4,
                &a2->Name.Length,
                &a1->pAdapterInstanceName->Length);
            if ( (byte_140125101 & 2) != 0 )
              McTemplateK0jqxzd_EtwWriteTransfer(
                v27,
                v26,
                &a1->InterfaceGuid,
                (__int64)&a1->InterfaceGuid,
                a1->IfIndex,
                a1->NetLuid.Value,
                a2->Name.Buffer,
                v4);
            goto LABEL_43;
          }
          if ( a2->IsIPv4 == 1 )
          {
            v34 = 0;
          }
          else if ( a2->IsIPv6 == 1 )
          {
            v34 = 1;
          }
          else
          {
            if ( a2->IsNdisTest6 != 1 )
              goto LABEL_65;
            v34 = 2;
          }
          ndisBindUnbindPeriodicReceives(v32, v34);
          goto LABEL_65;
        }
        ExFreePoolWithTag(Destination.Buffer, 0);
LABEL_62:
        RELEASE_PROT_MUTEX(a2);
LABEL_46:
        ndisDereferenceProtocol(a2, 0, 8u, v6);
        goto LABEL_47;
      }
      if ( a2->MinorNdisVersion >= 0x14u )
      {
        v13 = 3;
        v14 = 280;
        goto LABEL_15;
      }
      if ( a2->MinorNdisVersion )
      {
        v13 = 2;
        v14 = 256;
        goto LABEL_15;
      }
    }
    v13 = 1;
    v47.Header.Revision = 1;
    v14 = 248;
    goto LABEL_16;
  }
  v4 = -1073741823;
LABEL_47:
  if ( v47.ActivePorts )
    ExFreePoolWithTag(v47.ActivePorts, 0);
  if ( v47.NicSwitchArray )
    ExFreePoolWithTag(v47.NicSwitchArray, 0);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x1Du,
      (struct _GUID *)&WPP_a3a0dfe1e6d739a64d48f097d248e118_Traceguids,
      (char)a1,
      a2);
  return v4;
}
