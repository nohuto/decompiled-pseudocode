/*
 * XREFs of ?ndisPnPPortDeactivation@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x14008CE90
 * Callers:
 *     NdisMNetPnPEvent @ 0x14007D770 (NdisMNetPnPEvent.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x14000EA50 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x1400246C0 (McTemplateK0jqxd_EtwWriteTransfer.c)
 *     McTemplateK0jqxqq_EtwWriteTransfer @ 0x1400568E0 (McTemplateK0jqxqq_EtwWriteTransfer.c)
 *     ?ndisDevicePnPEventNotifyFiltersAndAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x140056990 (-ndisDevicePnPEventNotifyFiltersAndAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVEN.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x14005A650 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisInitializeNetPnPEvent@@YAXPEAU_NET_PNP_EVENT_NOTIFICATION@@PEAU_KEVENT@@@Z @ 0x1400706B0 (-ndisInitializeNetPnPEvent@@YAXPEAU_NET_PNP_EVENT_NOTIFICATION@@PEAU_KEVENT@@@Z.c)
 *     ?ndisFindPortByPortNumber@@YAPEAU_NDIS_PORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1400B0050 (-ndisFindPortByPortNumber@@YAPEAU_NDIS_PORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisRollbackPortDeactivation@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAKI@Z @ 0x1400B0158 (-ndisRollbackPortDeactivation@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAKI@Z.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     memset @ 0x1400EE380 (memset.c)
 *     ?ndisMSetMiniportReadyForBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_NW4NDIS_DO_NOT_BIND_REASON@@W4CallRunMode@@@Z @ 0x14015D7E0 (-ndisMSetMiniportReadyForBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_NW4NDIS_DO_NOT_BIND_REASON@@W4Ca.c)
 */

__int64 __fastcall ndisPnPPortDeactivation(struct _NDIS_MINIPORT_BLOCK *a1, struct _NET_PNP_EVENT_NOTIFICATION *a2)
{
  unsigned int v4; // ebx
  int v5; // ebp
  int v6; // edx
  __int64 v7; // rcx
  _DWORD *Buffer; // r14
  unsigned int v9; // edi
  unsigned __int64 *p_Lock; // rcx
  KIRQL v11; // dl
  __int64 v12; // rcx
  unsigned int Flags; // eax
  KIRQL v14; // dl
  __int64 v15; // rcx
  __int64 i; // r12
  unsigned int v17; // edx
  _DWORD *v18; // r13
  struct _NDIS_PORT_BLOCK *PortByPortNumber; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // edx
  KIRQL v23; // dl
  struct _GUID *v25; // [rsp+20h] [rbp-128h]
  __int64 v26; // [rsp+30h] [rbp-118h]
  __int64 v27; // [rsp+38h] [rbp-110h]
  unsigned __int8 v28[16]; // [rsp+40h] [rbp-108h] BYREF
  struct _NET_PNP_EVENT_NOTIFICATION v29; // [rsp+50h] [rbp-F8h] BYREF

  v4 = 0;
  v28[0] = 0;
  v5 = 0;
  memset(&v29, 0, sizeof(v29));
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v6,
      23,
      24,
      (struct _GUID *)&WPP_82edb36cecd534540cfb01a6d1688083_Traceguids,
      (char)a1);
  }
  Buffer = a2->NetPnPEvent.Buffer;
  v9 = a2->NetPnPEvent.BufferLength >> 2;
  if ( !Buffer || !v9 )
  {
    v4 = -1073741811;
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 2;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v6,
        23,
        25,
        (struct _GUID *)&WPP_82edb36cecd534540cfb01a6d1688083_Traceguids,
        (char)a1);
    }
    if ( (byte_140125104 & 0x40) == 0 )
      goto LABEL_53;
    LODWORD(v27) = 0;
    LODWORD(v26) = 0;
LABEL_52:
    LODWORD(v25) = a1->IfIndex;
    McTemplateK0jqxqq_EtwWriteTransfer(
      v7,
      &PnPPortDeactivationFailed,
      &a1->InterfaceGuid,
      (__int64)&a1->InterfaceGuid,
      (__int64)v25,
      a1->NetLuid.Value,
      v26,
      v27);
    goto LABEL_53;
  }
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, v28);
  if ( (a1->PnPFlags & 0x80u) != 0 && !*Buffer )
  {
    p_Lock = &a1->Lock;
    if ( v9 > 1 )
    {
      v11 = v28[0];
      a1->MiniportThread = 0LL;
      KeReleaseSpinLock(p_Lock, v11);
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v6) = 2;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v6,
          23,
          26,
          (struct _GUID *)&WPP_82edb36cecd534540cfb01a6d1688083_Traceguids,
          (char)a1);
      }
      if ( (byte_140125104 & 0x40) != 0 )
      {
        LODWORD(v27) = 0;
        LODWORD(v26) = 5;
        LODWORD(v25) = a1->IfIndex;
        McTemplateK0jqxqq_EtwWriteTransfer(
          v12,
          &PnPPortDeactivationFailed,
          &a1->InterfaceGuid,
          (__int64)&a1->InterfaceGuid,
          (__int64)v25,
          a1->NetLuid.Value,
          v26,
          v27);
      }
      v4 = -1071448019;
      goto LABEL_53;
    }
    Flags = a1->Flags;
    a1->MiniportThread = 0LL;
    v14 = v28[0];
    if ( (Flags & 0x10000) != 0 )
    {
      a1->Flags = Flags & 0xFFFEFFFF;
      KeReleaseSpinLock(p_Lock, v14);
      ndisMSetMiniportReadyForBinding(a1, 0, Reason_DefaultPortNotActive, RunSynchronous);
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v6) = 4;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v6,
          23,
          28,
          (struct _GUID *)&WPP_82edb36cecd534540cfb01a6d1688083_Traceguids,
          (char)a1);
      }
      if ( byte_140125101 < 0 )
      {
        LODWORD(v26) = 65537;
        LODWORD(v25) = a1->IfIndex;
        McTemplateK0jqxd_EtwWriteTransfer(
          v15,
          &DefaultPortDeactivated,
          &a1->InterfaceGuid,
          (__int64)&a1->InterfaceGuid,
          (__int64)v25,
          a1->NetLuid.Value,
          v26);
      }
      goto LABEL_53;
    }
    KeReleaseSpinLock(p_Lock, v28[0]);
    v4 = -1071448018;
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 2;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v6,
        23,
        27,
        (struct _GUID *)&WPP_82edb36cecd534540cfb01a6d1688083_Traceguids,
        (char)a1);
    }
    if ( (byte_140125104 & 0x40) == 0 )
      goto LABEL_53;
    LODWORD(v27) = 0;
    LODWORD(v26) = 6;
    goto LABEL_52;
  }
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= v9 )
      goto LABEL_46;
    v17 = Buffer[i];
    v18 = &Buffer[i];
    if ( !v17 )
    {
      v4 = -1071448019;
      ndisRollbackPortDeactivation(a1, (unsigned int *)a2->NetPnPEvent.Buffer, i);
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v22) = 2;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v22,
          23,
          29,
          (struct _GUID *)&WPP_82edb36cecd534540cfb01a6d1688083_Traceguids,
          (char)a1);
      }
      if ( (byte_140125104 & 0x40) == 0 )
        goto LABEL_41;
      LODWORD(v27) = 0;
      LODWORD(v26) = 5;
      goto LABEL_40;
    }
    PortByPortNumber = ndisFindPortByPortNumber(a1, v17);
    if ( !PortByPortNumber )
    {
      v4 = -1071448019;
      ndisRollbackPortDeactivation(a1, (unsigned int *)a2->NetPnPEvent.Buffer, i);
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v26) = *v18;
        WPP_RECORDER_SF_qL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0x17u,
          0x1Eu,
          (struct _GUID *)&WPP_82edb36cecd534540cfb01a6d1688083_Traceguids,
          (char)a1,
          v26);
      }
      if ( (byte_140125104 & 0x40) == 0 )
        goto LABEL_41;
      LODWORD(v27) = *v18;
      LODWORD(v26) = 3;
LABEL_40:
      LODWORD(v25) = a1->IfIndex;
      McTemplateK0jqxqq_EtwWriteTransfer(
        v21,
        &PnPPortDeactivationFailed,
        &a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        (__int64)v25,
        a1->NetLuid.Value,
        v26,
        v27);
LABEL_41:
      a1->MiniportThread = 0LL;
      goto LABEL_35;
    }
    if ( PortByPortNumber->PortPnPState != NdisPortPnPStateActivated )
      break;
    ++v5;
    --a1->NumberOfActivePorts;
    PortByPortNumber->PrevPortPnPState = PortByPortNumber->PortPnPState;
    PortByPortNumber->PortPnPState = NdisPortPnPStateAllocated;
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
    {
      LODWORD(v26) = *v18;
      WPP_RECORDER_SF_qL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        5u,
        0x17u,
        0x20u,
        (struct _GUID *)&WPP_82edb36cecd534540cfb01a6d1688083_Traceguids,
        (char)a1,
        v26);
    }
  }
  v4 = -1071448018;
  ndisRollbackPortDeactivation(a1, (unsigned int *)a2->NetPnPEvent.Buffer, i);
  v5 = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v26) = *v18;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      0x17u,
      0x1Fu,
      (struct _GUID *)&WPP_82edb36cecd534540cfb01a6d1688083_Traceguids,
      (char)a1,
      v26);
  }
  if ( (byte_140125104 & 0x40) != 0 )
  {
    LODWORD(v27) = *v18;
    LODWORD(v26) = 7;
    LODWORD(v25) = a1->IfIndex;
    McTemplateK0jqxqq_EtwWriteTransfer(
      v20,
      &PnPPortDeactivationFailed,
      &a1->InterfaceGuid,
      (__int64)&a1->InterfaceGuid,
      (__int64)v25,
      a1->NetLuid.Value,
      v26,
      v27);
    a1->MiniportThread = 0LL;
LABEL_35:
    KeReleaseSpinLock(&a1->Lock, v28[0]);
    goto LABEL_53;
  }
LABEL_46:
  v23 = v28[0];
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v23);
  if ( v5 )
  {
    ndisInitializeNetPnPEvent(&v29, 0LL);
    v29.PortNumber = a2->PortNumber;
    v29.NetPnPEvent.Buffer = a2->NetPnPEvent.Buffer;
    v29.NetPnPEvent.BufferLength = a2->NetPnPEvent.BufferLength;
    v29.NetPnPEvent.NetEvent = NetEventPortDeactivation;
    ndisDevicePnPEventNotifyFiltersAndAllTransports(a1, &v29);
  }
LABEL_53:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v6,
      23,
      33,
      (struct _GUID *)&WPP_82edb36cecd534540cfb01a6d1688083_Traceguids,
      (char)a1);
  }
  return v4;
}
