/*
 * XREFs of ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x140153580
 * Callers:
 *     ?ndisBindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x140154760 (-ndisBindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z.c)
 * Callees:
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x140006B10 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisReferenceOpenByHandle@@YAEPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1400084F0 (-ndisReferenceOpenByHandle@@YAEPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?MiniportSupportsReceiveThrottle@@YA_NPEBU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14000C680 (-MiniportSupportsReceiveThrottle@@YA_NPEBU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisIndicateInitialStateToBinding@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x140034920 (-ndisIndicateInitialStateToBinding@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140035D30 (-ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     McTemplateK0jqxzd_EtwWriteTransfer @ 0x140036DD0 (McTemplateK0jqxzd_EtwWriteTransfer.c)
 *     ?ndisNotifyWmiBindUnbind@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z @ 0x140051FC0 (-ndisNotifyWmiBindUnbind@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z.c)
 *     ?ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z @ 0x1400565A0 (-ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z.c)
 *     ?ndisReferenceProtocol@@YAEPEAU_NDIS_PROTOCOL_BLOCK@@W4_NDIS_PT_REFTAG@@@Z @ 0x140056EA0 (-ndisReferenceProtocol@@YAEPEAU_NDIS_PROTOCOL_BLOCK@@W4_NDIS_PT_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_ZZL @ 0x140059A10 (WPP_RECORDER_SF_ZZL.c)
 *     ?ndisGetPortList@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_NDIS_PORT@@@Z @ 0x14005C1F0 (-ndisGetPortList@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_NDIS_PORT@@@Z.c)
 *     ?ndisGetNDKBlock@@YAPEAU_NDIS_NDK_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14006D2C0 (-ndisGetNDKBlock@@YAPEAU_NDIS_NDK_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisNotifyBindFailure@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x140075090 (-ndisNotifyBindFailure@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?ndisBindUnbindPeriodicReceives@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_M_PERIODIC_RECEIVE_ACTION@@@Z @ 0x14008D3A0 (-ndisBindUnbindPeriodicReceives@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_M_PERIODIC_RECEIVE_ACTION@.c)
 *     ?ndisIovGetNicSwitchList@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_NIC_SWITCH_CAPABILITIES@@PEAU_NDIS_SRIOV_CAPABILITIES@@PEAPEAU_NDIS_NIC_SWITCH_INFO_ARRAY@@@Z @ 0x1400DEC4C (-ndisIovGetNicSwitchList@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_NIC_SWITCH_CAPABILITIES@@PEAU_N.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     memmove @ 0x1400E7200 (memmove.c)
 *     memset @ 0x1400E7500 (memset.c)
 *     ?ndisInvokeBindAdapter@@YAHPEAU_NDIS_PROTOCOL_BLOCK@@PEAXPEAU_NDIS_BIND_PARAMETERS@@@Z @ 0x1401524A0 (-ndisInvokeBindAdapter@@YAHPEAU_NDIS_PROTOCOL_BLOCK@@PEAXPEAU_NDIS_BIND_PARAMETERS@@@Z.c)
 *     ?RELEASE_PROT_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x140153EA0 (-RELEASE_PROT_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?WAIT_FOR_PROTO_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x140153EE0 (-WAIT_FOR_PROTO_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140153F20 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 *     ?ndisIfQueryBindingMiniportIfIndex@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAKPEAT_NET_LUID_LH@@12@Z @ 0x140153F70 (-ndisIfQueryBindingMiniportIfIndex@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAKPEAT_NET_LUID_LH@@12@Z.c)
 *     ?ndisMDoMiniportOp@@YAJPEAU_NDIS_MINIPORT_BLOCK@@EKPEAXJJE@Z @ 0x140167EF0 (-ndisMDoMiniportOp@@YAJPEAU_NDIS_MINIPORT_BLOCK@@EKPEAXJJE@Z.c)
 */

__int64 __fastcall ndisBindNdis6Protocol(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_PROTOCOL_BLOCK *a2)
{
  struct _NDIS_PROTOCOL_BLOCK *v2; // rdi
  unsigned int v4; // esi
  char v5; // r13
  int v6; // edx
  int v7; // r9d
  char v8; // r15
  _NDIS_PNP_DEVICE_STATE PnPDeviceState; // ecx
  _UNICODE_STRING *Paths; // r12
  UNICODE_STRING v11; // xmm0
  __int16 v12; // ax
  unsigned __int8 MajorNdisVersion; // dl
  UCHAR v14; // r9
  USHORT v15; // ax
  _NDIS_FILTER_BLOCK *HighestFilter; // rcx
  _NDIS_IF_BLOCK *IfBlock; // rcx
  _NET_IF_MEDIA_DUPLEX_STATE MediaDuplexStateIndicateUp; // eax
  _NDIS_MINIPORT_OFFLOAD *Offload; // rcx
  _NDIS_HD_SPLIT_CURRENT_CONFIG *HDSplitCurrentConfig; // rax
  struct _NDIS_NIC_SWITCH_CAPABILITIES *TopNicSwitchCurrentCapabilities; // r10
  _NDIS_RECEIVE_FILTER_CAPABILITIES *TopReceiveFilterCurrentCapabilities; // rcx
  _NDIS_RECEIVE_FILTER_CAPABILITIES *ReceiveFilterCapabilities; // rax
  _NDIS_NIC_SWITCH_CAPABILITIES *NicSwitchCapabilities; // rax
  _NDIS_IF_BLOCK *v25; // rdx
  _NDIS_IF_BLOCK *v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  struct _NDIS_SRIOV_CAPABILITIES *TopSriovCurrentCapabilities; // r8
  struct _NDIS_NDK_BLOCK *NDKBlock; // rax
  __int64 v33; // rcx
  unsigned __int8 v34; // cl
  int v35; // edx
  int BugCheckParameter4; // [rsp+20h] [rbp-E0h]
  _UNICODE_STRING Destination; // [rsp+40h] [rbp-C0h] BYREF
  int v38; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING Source; // [rsp+58h] [rbp-A8h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+80h] [rbp-80h] BYREF
  ULONG_PTR v42[2]; // [rsp+90h] [rbp-70h]
  _UNICODE_STRING v43; // [rsp+A0h] [rbp-60h]
  __int128 v44; // [rsp+B0h] [rbp-50h]
  __int128 v45; // [rsp+C0h] [rbp-40h]
  __int128 v46; // [rsp+D0h] [rbp-30h]
  struct _KEVENT Event[2]; // [rsp+E0h] [rbp-20h] BYREF
  struct _NDIS_BIND_PARAMETERS v48; // [rsp+110h] [rbp+10h] BYREF

  v2 = a2;
  memset(&v48, 0, sizeof(v48));
  v38 = 0;
  *(_OWORD *)BugCheckParameter3 = 0LL;
  v4 = 0;
  v5 = 0;
  *(_OWORD *)v42 = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  memset(Event, 0, sizeof(Event));
  Destination = 0LL;
  Source = 0LL;
  DestinationString = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      6,
      26,
      (struct _GUID *)&WPP_253e38cb1efe38fa547bfa360b554d29_Traceguids,
      (char)a1,
      (char)v2);
  }
  if ( a1->MajorNdisVersion < 6u && (a1->LinkStateIndicationFlags & 1) == 0 )
    ndisMDoMiniportOp(a1, 1u, 0x10114u, &v38, 4, 1, 1u);
  if ( ndisReferenceProtocol(v2, 8u) )
  {
    if ( !a1->EthDB )
    {
      v4 = -1073741823;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v6) = 2;
        WPP_RECORDER_SF_qq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v6,
          6,
          27,
          (struct _GUID *)&WPP_253e38cb1efe38fa547bfa360b554d29_Traceguids,
          (char)a1,
          (char)v2);
      }
      goto LABEL_46;
    }
    v8 = 1;
    WAIT_FOR_PROTO_MUTEX(v2);
    if ( v2->Ref.Closing )
      goto LABEL_43;
    if ( !ndisIsMiniportStarted(a1) )
      goto LABEL_62;
    PnPDeviceState = a1->PnPDeviceState;
    if ( ((PnPDeviceState - 1) & 0xFFFFFFFC) != 0 || PnPDeviceState == NdisPnPDeviceStopped )
      goto LABEL_62;
    Paths = a1->BindPaths->Paths;
    v2->BindDeviceName = &a1->MiniportName;
    v2->RootDeviceName = Paths;
    RtlInitUnicodeString(&DestinationString, L"\\Parameters\\Adapters\\");
    Source = *Paths;
    v11 = Source;
    Source.MaximumLength -= ndisDeviceStr.Length;
    Source.Length = _mm_cvtsi128_si32((__m128i)v11) - ndisDeviceStr.Length;
    v12 = v2->Name.Length - ndisDeviceStr.Length;
    Source.Buffer += (unsigned __int64)ndisDeviceStr.Length >> 1;
    Destination.MaximumLength = Paths->Length + DestinationString.Length + v12 + 2;
    Destination.Length = 0;
    Destination.Buffer = (wchar_t *)ExAllocatePool2(64LL, Destination.MaximumLength, 538985550LL);
    if ( !Destination.Buffer )
    {
LABEL_43:
      RELEASE_PROT_MUTEX(v2);
      if ( v5 )
      {
        ndisMDereferenceOpenUnlocked(v42[0], 2u);
        v42[0] = 0LL;
      }
      if ( v8 && v4 )
        ndisNotifyBindFailure(a1, v2);
      goto LABEL_46;
    }
    RtlCopyUnicodeString(&Destination, &v2->Name);
    RtlAppendUnicodeStringToString(&Destination, &DestinationString);
    RtlAppendUnicodeStringToString(&Destination, &Source);
    MajorNdisVersion = v2->MajorNdisVersion;
    v48.Header.Type = -122;
    if ( MajorNdisVersion > 6u )
      goto LABEL_14;
    if ( MajorNdisVersion == 6 )
    {
      if ( v2->MinorNdisVersion >= 0x1Eu )
      {
LABEL_14:
        v14 = 4;
        v15 = 312;
LABEL_15:
        v48.Header.Revision = v14;
LABEL_16:
        v48.Header.Size = v15;
        v48.AdapterName = Paths;
        v48.ProtocolSection = &Destination;
        v48.PhysicalDeviceObject = a1->PhysicalDeviceObject;
        v48.BoundAdapterName = &a1->MiniportName;
        if ( (a1->MacOptions & 0x80000001) == 0x80000001 )
          v48.MediaType = NdisMediumWan;
        else
          v48.MediaType = a1->MediaType;
        HighestFilter = a1->HighestFilter;
        if ( HighestFilter )
        {
          v48.XmitLinkSpeed = HighestFilter->XmitLinkSpeedIndicateUp;
          v48.RcvLinkSpeed = HighestFilter->RcvLinkSpeedIndicateUp;
          v48.MediaConnectState = HighestFilter->MediaConnectStateIndicateUp;
          MediaDuplexStateIndicateUp = HighestFilter->MediaDuplexStateIndicateUp;
        }
        else
        {
          IfBlock = a1->IfBlock;
          v48.XmitLinkSpeed = a1->XmitLinkSpeed;
          v48.RcvLinkSpeed = a1->RcvLinkSpeed;
          v48.MediaConnectState = IfBlock->MediaConnectState;
          MediaDuplexStateIndicateUp = IfBlock->MediaDuplexState;
        }
        v48.MediaDuplexState = MediaDuplexStateIndicateUp;
        v48.MtuSize = a1->TopFilterRestartAttributes.MtuSize;
        v48.MaxXmitLinkSpeed = a1->TopFilterRestartAttributes.MaxXmitLinkSpeed;
        v48.MaxRcvLinkSpeed = a1->TopFilterRestartAttributes.MaxRcvLinkSpeed;
        v48.LookaheadSize = a1->TopFilterRestartAttributes.LookaheadSize;
        v48.SupportedPacketFilters = a1->TopFilterRestartAttributes.SupportedPacketFilters;
        v48.MaxMulticastListSize = a1->TopFilterRestartAttributes.MaxMulticastListSize;
        v48.PhysicalMediumType = a1->PhysicalMediumType;
        v48.RcvScaleCapabilities = &a1->TopRecvScaleCapabilities;
        if ( MajorNdisVersion > 6u || MajorNdisVersion == 6 && v2->MinorNdisVersion >= 0x14u )
          v48.PowerManagementCapabilitiesEx = &a1->PMAdvertisedCapabilities;
        else
          v48.PowerManagementCapabilities = &a1->PMCapabilities61;
        Offload = a1->Offload;
        if ( Offload )
        {
          if ( Offload->SupportsTopOffload == 1 )
            v48.DefaultOffloadConfiguration = &Offload->TopCapabilities;
          if ( Offload->SupportsTopTcpConnectionOffload == 1 )
            v48.TcpConnectionOffloadCapabilities = &Offload->TopTcpConnectionOffloadCapabilities;
        }
        HDSplitCurrentConfig = v48.HDSplitCurrentConfig;
        TopNicSwitchCurrentCapabilities = a1->TopNicSwitchCurrentCapabilities;
        if ( a1->HDSplitCurrentConfig )
          HDSplitCurrentConfig = a1->HDSplitCurrentConfig;
        TopReceiveFilterCurrentCapabilities = a1->TopReceiveFilterCurrentCapabilities;
        v48.HDSplitCurrentConfig = HDSplitCurrentConfig;
        ReceiveFilterCapabilities = v48.ReceiveFilterCapabilities;
        if ( TopReceiveFilterCurrentCapabilities )
          ReceiveFilterCapabilities = TopReceiveFilterCurrentCapabilities;
        v48.ReceiveFilterCapabilities = ReceiveFilterCapabilities;
        NicSwitchCapabilities = v48.NicSwitchCapabilities;
        if ( TopNicSwitchCurrentCapabilities )
          NicSwitchCapabilities = TopNicSwitchCurrentCapabilities;
        v48.NicSwitchCapabilities = NicSwitchCapabilities;
        if ( MajorNdisVersion > 6u || MajorNdisVersion == 6 && v2->MinorNdisVersion >= 0x1Eu )
        {
          NDKBlock = ndisGetNDKBlock(a1);
          if ( NDKBlock )
          {
            v34 = *((_BYTE *)NDKBlock + 24);
            v48.NDKCapabilities = (_NDIS_NDK_CAPABILITIES *)((char *)NDKBlock + 32);
            v48.NDKEnabled = v34;
          }
          else
          {
            v48.NDKEnabled = 0;
            v48.NDKCapabilities = 0LL;
          }
        }
        if ( v14 >= 4u )
        {
          TopSriovCurrentCapabilities = a1->TopSriovCurrentCapabilities;
          if ( TopSriovCurrentCapabilities )
          {
            v48.SriovCapabilities = a1->TopSriovCurrentCapabilities;
            if ( (unsigned int)ndisIovGetNicSwitchList(
                                 a1,
                                 TopNicSwitchCurrentCapabilities,
                                 TopSriovCurrentCapabilities,
                                 &v48.NicSwitchArray) )
              goto LABEL_43;
          }
        }
        v25 = a1->IfBlock;
        v48.MacAddressLength = v25->ifPhysAddress.Length;
        memmove(v48.CurrentMacAddress, v25->ifPhysAddress.Address, v48.MacAddressLength);
        ndisIfQueryBindingMiniportIfIndex(
          a1,
          &v48.BoundIfIndex,
          &v48.BoundIfNetluid,
          &v48.LowestIfIndex,
          &v48.LowestIfNetluid);
        v26 = a1->IfBlock;
        v48.AccessType = a1->TopFilterRestartAttributes.AccessType;
        v48.DirectionType = v26->DirectionType;
        v48.ConnectionType = a1->TopFilterRestartAttributes.ConnectionType;
        v48.IfType = v26->ifType;
        v48.IfConnectorPresent = v26->ifConnectorPresent;
        v48.DataBackFillSize = a1->TopFilterRestartAttributes.DataBackFillSize;
        v48.ContextBackFillSize = a1->TopFilterRestartAttributes.ContextBackFillSize;
        v48.MacOptions = a1->TopFilterRestartAttributes.MacOptions;
        v48.CompartmentId = v26->CompartmentId;
        if ( !(unsigned int)ndisGetPortList(a1, &v48.ActivePorts) )
        {
          BugCheckParameter3[1] = (ULONG_PTR)v2;
          v42[1] = (ULONG_PTR)a1;
          v43 = Destination;
          *(_QWORD *)&v44 = Paths;
          v42[0] = 0LL;
          KeInitializeEvent(Event, NotificationEvent, 0);
          v2->BindingAdapter = a1;
          v8 = 0;
          v4 = ndisInvokeBindAdapter(v2, BugCheckParameter3, &v48);
          if ( v4 == 259 )
          {
            ndisWaitForKernelObject(Event);
            v4 = DWORD2(v46);
          }
          if ( v4 )
            goto LABEL_37;
          if ( v42[0] )
          {
            if ( !(unsigned __int8)ndisReferenceOpenByHandle((struct _NDIS_OPEN_BLOCK *)v42[0], 2u) )
              KeBugCheckEx(0x7Cu, 0x16uLL, (ULONG_PTR)v2, (ULONG_PTR)BugCheckParameter3, v42[0]);
            v5 = 1;
            ndisIndicateInitialStateToBinding((struct _NDIS_OPEN_BLOCK *)v42[0]);
          }
          if ( MiniportSupportsReceiveThrottle(a1) )
          {
LABEL_65:
            ndisNotifyWmiBindUnbind(a1, v2, 1u);
LABEL_37:
            ExFreePoolWithTag(Destination.Buffer, 0);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_ZZL(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v27,
                v29,
                0x1Cu,
                BugCheckParameter4,
                &v2->Name.Length,
                &a1->pAdapterInstanceName->Length);
            if ( (byte_14011B101 & 2) != 0 )
              McTemplateK0jqxzd_EtwWriteTransfer(
                v28,
                v27,
                (__int64)&a1->InterfaceGuid,
                (__int64)&a1->InterfaceGuid,
                a1->IfIndex,
                a1->NetLuid.Value,
                v2->Name.Buffer,
                v4);
            goto LABEL_43;
          }
          if ( v2->IsIPv4 == 1 )
          {
            v35 = 0;
          }
          else if ( v2->IsIPv6 == 1 )
          {
            v35 = 1;
          }
          else
          {
            if ( v2->IsNdisTest6 != 1 )
              goto LABEL_65;
            v35 = 2;
          }
          ndisBindUnbindPeriodicReceives(v33, v35);
          goto LABEL_65;
        }
        ExFreePoolWithTag(Destination.Buffer, 0);
LABEL_62:
        RELEASE_PROT_MUTEX(v2);
LABEL_46:
        ndisDereferenceProtocol(v2, 0, 8u, v7);
        goto LABEL_47;
      }
      if ( v2->MinorNdisVersion >= 0x14u )
      {
        v14 = 3;
        v15 = 280;
        goto LABEL_15;
      }
      if ( v2->MinorNdisVersion )
      {
        v14 = 2;
        v15 = 256;
        goto LABEL_15;
      }
    }
    v14 = 1;
    v48.Header.Revision = 1;
    v15 = 248;
    goto LABEL_16;
  }
  v4 = -1073741823;
LABEL_47:
  if ( v48.ActivePorts )
    ExFreePoolWithTag(v48.ActivePorts, 0);
  if ( v48.NicSwitchArray )
    ExFreePoolWithTag(v48.NicSwitchArray, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v6,
      6,
      29,
      (struct _GUID *)&WPP_253e38cb1efe38fa547bfa360b554d29_Traceguids,
      (char)a1,
      (char)v2);
  }
  return v4;
}
