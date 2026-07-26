/*
 * XREFs of ?ndisPnPPortActivation@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x14007D880
 * Callers:
 *     NdisMNetPnPEvent @ 0x14007D770 (NdisMNetPnPEvent.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x14000EA50 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x1400246C0 (McTemplateK0jqxd_EtwWriteTransfer.c)
 *     McTemplateK0jqxqq_EtwWriteTransfer @ 0x1400568E0 (McTemplateK0jqxqq_EtwWriteTransfer.c)
 *     ?ndisDevicePnPEventNotifyFiltersAndAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x140056990 (-ndisDevicePnPEventNotifyFiltersAndAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVEN.c)
 *     ?ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x140059960 (-ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ?ndisInitializeNetPnPEvent@@YAXPEAU_NET_PNP_EVENT_NOTIFICATION@@PEAU_KEVENT@@@Z @ 0x1400706B0 (-ndisInitializeNetPnPEvent@@YAXPEAU_NET_PNP_EVENT_NOTIFICATION@@PEAU_KEVENT@@@Z.c)
 *     ?ndisFindPortByPortNumber@@YAPEAU_NDIS_PORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1400B0050 (-ndisFindPortByPortNumber@@YAPEAU_NDIS_PORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisRollbackPortActivation@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PORT@@1@Z @ 0x1400B007C (-ndisRollbackPortActivation@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PORT@@1@Z.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     memset @ 0x1400EE380 (memset.c)
 *     ?ndisMSetMiniportReadyForBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_NW4NDIS_DO_NOT_BIND_REASON@@W4CallRunMode@@@Z @ 0x14015D7E0 (-ndisMSetMiniportReadyForBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_NW4NDIS_DO_NOT_BIND_REASON@@W4Ca.c)
 */

__int64 __fastcall ndisPnPPortActivation(struct _NDIS_MINIPORT_BLOCK *a1, struct _NET_PNP_EVENT_NOTIFICATION *a2)
{
  unsigned int v4; // edi
  int v5; // r12d
  int v6; // edx
  KIRQL v7; // bp
  struct _NDIS_PORT *Buffer; // r15
  int v9; // edx
  __int64 v10; // rcx
  int v11; // edx
  unsigned int Flags; // eax
  int v13; // edx
  int v14; // edx
  __int64 v15; // rcx
  unsigned int PortNumber; // edx
  struct _NDIS_PORT_BLOCK *PortByPortNumber; // rax
  int v18; // edx
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // edx
  __int64 v22; // rcx
  struct _GUID *v24; // [rsp+20h] [rbp-118h]
  __int64 v25; // [rsp+30h] [rbp-108h]
  __int64 v26; // [rsp+38h] [rbp-100h]
  struct _NET_PNP_EVENT_NOTIFICATION v27; // [rsp+40h] [rbp-F8h] BYREF

  v4 = 0;
  v5 = 0;
  memset(&v27, 0, sizeof(v27));
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v6,
      23,
      14,
      (struct _GUID *)&WPP_82edb36cecd534540cfb01a6d1688083_Traceguids,
      (char)a1);
  }
  v7 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  a1->MiniportThread = KeGetCurrentThread();
  Buffer = (struct _NDIS_PORT *)a2->NetPnPEvent.Buffer;
  if ( !Buffer )
  {
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v7);
    v4 = -1073741811;
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 2;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v9,
        23,
        15,
        (struct _GUID *)&WPP_82edb36cecd534540cfb01a6d1688083_Traceguids,
        (char)a1);
    }
    if ( (byte_140125103 & 0x20) == 0 )
      goto LABEL_55;
    LODWORD(v26) = 0;
    LODWORD(v25) = 0;
    goto LABEL_8;
  }
  if ( (a1->PnPFlags & 0x80u) != 0 && !Buffer->PortCharacteristics.PortNumber )
  {
    if ( Buffer->Next )
    {
      a1->MiniportThread = 0LL;
      KeReleaseSpinLock(&a1->Lock, v7);
      v4 = -1071448019;
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v11) = 2;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v11,
          23,
          16,
          (struct _GUID *)&WPP_82edb36cecd534540cfb01a6d1688083_Traceguids,
          (char)a1);
      }
      if ( (byte_140125103 & 0x20) == 0 )
        goto LABEL_55;
      LODWORD(v26) = 0;
      LODWORD(v25) = 1;
    }
    else
    {
      Flags = a1->Flags;
      if ( (Flags & 0x10000) == 0 )
      {
        a1->Flags = Flags | 0x10000;
        if ( (Buffer->PortCharacteristics.Flags & 1) == 0 )
        {
          a1->DefaultPortSendControlState = Buffer->PortCharacteristics.SendControlState;
          a1->DefaultPortRcvControlState = Buffer->PortCharacteristics.RcvControlState;
          a1->DefaultPortSendAuthorizationState = Buffer->PortCharacteristics.SendAuthorizationState;
          a1->DefaultPortRcvAuthorizationState = Buffer->PortCharacteristics.RcvAuthorizationState;
        }
        ndisIfSetInterfaceState(a1, 1, v7);
        a1->MiniportThread = 0LL;
        KeReleaseSpinLock(&a1->Lock, v7);
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v14) = 4;
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v14,
            23,
            18,
            (struct _GUID *)&WPP_82edb36cecd534540cfb01a6d1688083_Traceguids,
            (char)a1);
        }
        if ( byte_140125101 < 0 )
        {
          LODWORD(v25) = 65537;
          LODWORD(v24) = a1->IfIndex;
          McTemplateK0jqxd_EtwWriteTransfer(
            v15,
            &DefaultPortActivated,
            &a1->InterfaceGuid,
            (__int64)&a1->InterfaceGuid,
            (__int64)v24,
            a1->NetLuid.Value,
            v25);
        }
        ndisMSetMiniportReadyForBinding(a1, 1, Reason_DefaultPortNotActive, RunAsynchronous);
        goto LABEL_55;
      }
      a1->MiniportThread = 0LL;
      KeReleaseSpinLock(&a1->Lock, v7);
      v4 = -1071448018;
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v13) = 2;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v13,
          23,
          17,
          (struct _GUID *)&WPP_82edb36cecd534540cfb01a6d1688083_Traceguids,
          (char)a1);
      }
      if ( (byte_140125103 & 0x20) == 0 )
        goto LABEL_55;
      LODWORD(v26) = 0;
      LODWORD(v25) = 2;
    }
LABEL_8:
    LODWORD(v24) = a1->IfIndex;
    McTemplateK0jqxqq_EtwWriteTransfer(
      v10,
      &PnPPortActivationFailed,
      &a1->InterfaceGuid,
      (__int64)&a1->InterfaceGuid,
      (__int64)v24,
      a1->NetLuid.Value,
      v25,
      v26);
    goto LABEL_55;
  }
  while ( 1 )
  {
    if ( !Buffer )
      goto LABEL_53;
    PortNumber = Buffer->PortCharacteristics.PortNumber;
    if ( !PortNumber )
    {
      v4 = -1071448019;
      ndisRollbackPortActivation(a1, (struct _NDIS_PORT *)a2->NetPnPEvent.Buffer, Buffer);
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v21) = 2;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v21,
          23,
          19,
          (struct _GUID *)&WPP_82edb36cecd534540cfb01a6d1688083_Traceguids,
          (char)a1);
      }
      if ( (byte_140125103 & 0x20) != 0 )
      {
        LODWORD(v26) = 0;
        LODWORD(v25) = 1;
        LODWORD(v24) = a1->IfIndex;
        McTemplateK0jqxqq_EtwWriteTransfer(
          v22,
          &PnPPortActivationFailed,
          &a1->InterfaceGuid,
          (__int64)&a1->InterfaceGuid,
          (__int64)v24,
          a1->NetLuid.Value,
          v25,
          v26);
      }
      goto LABEL_51;
    }
    PortByPortNumber = ndisFindPortByPortNumber(a1, PortNumber);
    v19 = (__int64)PortByPortNumber;
    if ( !PortByPortNumber )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v25) = v18;
        WPP_RECORDER_SF_qL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0x17u,
          0x14u,
          (struct _GUID *)&WPP_82edb36cecd534540cfb01a6d1688083_Traceguids,
          (char)a1,
          v25);
      }
      if ( (byte_140125103 & 0x20) != 0 )
      {
        LODWORD(v26) = Buffer->PortCharacteristics.PortNumber;
        LODWORD(v25) = 3;
        LODWORD(v24) = a1->IfIndex;
        McTemplateK0jqxqq_EtwWriteTransfer(
          v19,
          &PnPPortActivationFailed,
          &a1->InterfaceGuid,
          (__int64)&a1->InterfaceGuid,
          (__int64)v24,
          a1->NetLuid.Value,
          v25,
          v26);
      }
      v4 = -1071448019;
      ndisRollbackPortActivation(a1, (struct _NDIS_PORT *)a2->NetPnPEvent.Buffer, Buffer);
LABEL_51:
      a1->MiniportThread = 0LL;
      goto LABEL_52;
    }
    if ( PortByPortNumber->PortPnPState != NdisPortPnPStateAllocated )
      break;
    ++a1->NumberOfActivePorts;
    PortByPortNumber->PrevPortPnPState = PortByPortNumber->PortPnPState;
    Buffer->NdisReserved = PortByPortNumber;
    PortByPortNumber->PortPnPState = NdisPortPnPStateActivated;
    *(_OWORD *)&PortByPortNumber->PortCharacteristics.Header.Type = *(_OWORD *)&Buffer->PortCharacteristics.Header.Type;
    *(_OWORD *)&PortByPortNumber->PortCharacteristics.MediaConnectState = *(_OWORD *)&Buffer->PortCharacteristics.MediaConnectState;
    *(_OWORD *)&PortByPortNumber->PortCharacteristics.RcvLinkSpeed = *(_OWORD *)&Buffer->PortCharacteristics.RcvLinkSpeed;
    *(_OWORD *)&PortByPortNumber->PortCharacteristics.RcvControlState = *(_OWORD *)&Buffer->PortCharacteristics.RcvControlState;
    if ( (Buffer->PortCharacteristics.Flags & 1) != 0 )
    {
      PortByPortNumber->PortCharacteristics.SendControlState = a1->DefaultSendControlState;
      PortByPortNumber->PortCharacteristics.RcvControlState = a1->DefaultRcvControlState;
      PortByPortNumber->PortCharacteristics.SendAuthorizationState = a1->DefaultSendAuthorizationState;
      PortByPortNumber->PortCharacteristics.RcvAuthorizationState = a1->DefaultRcvAuthorizationState;
    }
    ++v5;
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
    {
      LODWORD(v25) = Buffer->PortCharacteristics.PortNumber;
      WPP_RECORDER_SF_qL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        5u,
        0x17u,
        0x16u,
        (struct _GUID *)&WPP_82edb36cecd534540cfb01a6d1688083_Traceguids,
        (char)a1,
        v25);
    }
    Buffer = Buffer->Next;
  }
  v4 = -1071448018;
  ndisRollbackPortActivation(a1, (struct _NDIS_PORT *)a2->NetPnPEvent.Buffer, Buffer);
  v5 = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v25) = Buffer->PortCharacteristics.PortNumber;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      0x17u,
      0x15u,
      (struct _GUID *)&WPP_82edb36cecd534540cfb01a6d1688083_Traceguids,
      (char)a1,
      v25);
  }
  if ( (byte_140125103 & 0x20) != 0 )
  {
    LODWORD(v26) = Buffer->PortCharacteristics.PortNumber;
    LODWORD(v25) = 4;
    LODWORD(v24) = a1->IfIndex;
    McTemplateK0jqxqq_EtwWriteTransfer(
      v20,
      &PnPPortActivationFailed,
      &a1->InterfaceGuid,
      (__int64)&a1->InterfaceGuid,
      (__int64)v24,
      a1->NetLuid.Value,
      v25,
      v26);
    a1->MiniportThread = 0LL;
LABEL_52:
    KeReleaseSpinLock(&a1->Lock, v7);
    goto LABEL_55;
  }
LABEL_53:
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v7);
  if ( v5 )
  {
    ndisInitializeNetPnPEvent(&v27, 0LL);
    v27.PortNumber = a2->PortNumber;
    v27.NetPnPEvent.Buffer = a2->NetPnPEvent.Buffer;
    v27.NetPnPEvent.BufferLength = a2->NetPnPEvent.BufferLength;
    v27.NetPnPEvent.NetEvent = NetEventPortActivation;
    ndisDevicePnPEventNotifyFiltersAndAllTransports(a1, &v27);
  }
LABEL_55:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v25) = v4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x17u,
      0x17u,
      (struct _GUID *)&WPP_82edb36cecd534540cfb01a6d1688083_Traceguids,
      (char)a1,
      v25);
  }
  return v4;
}
