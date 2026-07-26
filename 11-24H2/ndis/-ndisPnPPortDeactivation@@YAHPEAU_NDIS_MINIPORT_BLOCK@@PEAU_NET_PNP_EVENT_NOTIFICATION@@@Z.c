/*
 * XREFs of ?ndisPnPPortDeactivation@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x140080880
 * Callers:
 *     NdisMNetPnPEvent @ 0x140065E80 (NdisMNetPnPEvent.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x140014250 (WPP_RECORDER_SF_qL.c)
 *     ?ndisDevicePnPEventNotifyFiltersAndAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x140035B60 (-ndisDevicePnPEventNotifyFiltersAndAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVEN.c)
 *     McTemplateK0jqxqq_EtwWriteTransfer @ 0x140036BD0 (McTemplateK0jqxqq_EtwWriteTransfer.c)
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x1400388D0 (McTemplateK0jqxd_EtwWriteTransfer.c)
 *     ?ndisRollbackPortDeactivation@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAKI@Z @ 0x1400A7FE8 (-ndisRollbackPortDeactivation@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAKI@Z.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     ?ndisMSetMiniportReadyForBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_NW4NDIS_DO_NOT_BIND_REASON@@W4CallRunMode@@@Z @ 0x140161630 (-ndisMSetMiniportReadyForBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_NW4NDIS_DO_NOT_BIND_REASON@@W4Ca.c)
 */

__int64 __fastcall ndisPnPPortDeactivation(struct _NDIS_MINIPORT_BLOCK *a1, struct _NET_PNP_EVENT_NOTIFICATION *a2)
{
  __int64 v2; // rdi
  struct _NET_PNP_EVENT_NOTIFICATION *v3; // r15
  unsigned int v4; // esi
  int v5; // r13d
  _DWORD *Buffer; // r14
  unsigned int v8; // ebp
  KIRQL v9; // r12
  unsigned __int64 *p_Lock; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  unsigned int v13; // edx
  _LIST_ENTRY *Flink; // rcx
  __int64 v15; // rcx
  int v17; // edx
  struct _GUID *v18; // [rsp+20h] [rbp-128h]
  __int64 v19; // [rsp+30h] [rbp-118h]
  __int64 v20; // [rsp+38h] [rbp-110h]
  _DWORD *v21; // [rsp+40h] [rbp-108h]
  struct _NET_PNP_EVENT_NOTIFICATION v22; // [rsp+50h] [rbp-F8h] BYREF

  v2 = 0LL;
  v3 = a2;
  v4 = 0;
  v5 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      23,
      24,
      (struct _GUID *)&WPP_82edb36cecd534540cfb01a6d1688083_Traceguids,
      (char)a1);
  }
  Buffer = v3->NetPnPEvent.Buffer;
  v8 = v3->NetPnPEvent.BufferLength >> 2;
  v21 = Buffer;
  if ( Buffer && v8 )
  {
    v9 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
    a1->MiniportThread = KeGetCurrentThread();
    if ( (a1->PnPFlags & 0x80u) == 0 || *Buffer )
    {
      while ( 1 )
      {
        v13 = *Buffer;
        if ( !*Buffer )
        {
          v4 = -1071448019;
          ndisRollbackPortDeactivation(a1, (unsigned int *)v3->NetPnPEvent.Buffer, v2);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v17) = 2;
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v17,
              23,
              29,
              (struct _GUID *)&WPP_82edb36cecd534540cfb01a6d1688083_Traceguids,
              (char)a1);
          }
          if ( (byte_14011B104 & 0x40) != 0 )
          {
            LODWORD(v20) = 0;
            LODWORD(v19) = 5;
LABEL_32:
            LODWORD(v18) = a1->IfIndex;
            McTemplateK0jqxqq_EtwWriteTransfer(
              v15,
              (__int64)&PnPPortDeactivationFailed,
              (__int64)&a1->InterfaceGuid,
              (__int64)&a1->InterfaceGuid,
              (__int64)v18,
              a1->NetLuid.Value,
              v19,
              v20);
          }
LABEL_33:
          a1->MiniportThread = 0LL;
LABEL_49:
          KeReleaseSpinLock(&a1->Lock, v9);
          goto LABEL_42;
        }
        Flink = a1->PortList.Flink;
        if ( Flink == &a1->PortList )
          goto LABEL_28;
        while ( HIDWORD(Flink[1].Blink) != v13 )
        {
          if ( HIDWORD(Flink[1].Blink) <= v13 )
          {
            Flink = Flink->Flink;
            if ( Flink != &a1->PortList )
              continue;
          }
          goto LABEL_28;
        }
        if ( !Flink )
        {
LABEL_28:
          v4 = -1071448019;
          ndisRollbackPortDeactivation(a1, (unsigned int *)v3->NetPnPEvent.Buffer, v2);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v19) = v21[v2];
            WPP_RECORDER_SF_qL(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              2u,
              0x17u,
              0x1Eu,
              (struct _GUID *)&WPP_82edb36cecd534540cfb01a6d1688083_Traceguids,
              (char)a1,
              v19);
          }
          if ( (byte_14011B104 & 0x40) != 0 )
          {
            v15 = (unsigned int)v21[v2];
            LODWORD(v20) = v21[v2];
            LODWORD(v19) = 3;
            goto LABEL_32;
          }
          goto LABEL_33;
        }
        if ( LODWORD(Flink[1].Flink) != 4 )
          break;
        ++v5;
        --a1->NumberOfActivePorts;
        HIDWORD(Flink[1].Flink) = Flink[1].Flink;
        LODWORD(Flink[1].Flink) = 2;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
        {
          LODWORD(v19) = *Buffer;
          WPP_RECORDER_SF_qL(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            5u,
            0x17u,
            0x20u,
            (struct _GUID *)&WPP_82edb36cecd534540cfb01a6d1688083_Traceguids,
            (char)a1,
            v19);
        }
        v2 = (unsigned int)(v2 + 1);
        ++Buffer;
        if ( (unsigned int)v2 >= v8 )
          goto LABEL_40;
      }
      v4 = -1071448018;
      ndisRollbackPortDeactivation(a1, (unsigned int *)v3->NetPnPEvent.Buffer, v2);
      v5 = 0;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v19) = v21[v2];
        WPP_RECORDER_SF_qL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0x17u,
          0x1Fu,
          (struct _GUID *)&WPP_82edb36cecd534540cfb01a6d1688083_Traceguids,
          (char)a1,
          v19);
      }
      if ( (byte_14011B104 & 0x40) != 0 )
      {
        LODWORD(v20) = v21[v2];
        LODWORD(v19) = 7;
        LODWORD(v18) = a1->IfIndex;
        McTemplateK0jqxqq_EtwWriteTransfer(
          (unsigned int)v20,
          (__int64)&PnPPortDeactivationFailed,
          (__int64)&a1->InterfaceGuid,
          (__int64)&a1->InterfaceGuid,
          (__int64)v18,
          a1->NetLuid.Value,
          v19,
          v20);
        a1->MiniportThread = 0LL;
        goto LABEL_49;
      }
LABEL_40:
      a1->MiniportThread = 0LL;
      KeReleaseSpinLock(&a1->Lock, v9);
      if ( v5 )
      {
        *(_QWORD *)&v22.NetPnPEvent.NetEvent = 11LL;
        v22.Header = (_NDIS_OBJECT_HEADER)11272832;
        v22.PortNumber = v3->PortNumber;
        v22.NetPnPEvent.Buffer = v3->NetPnPEvent.Buffer;
        v22.NetPnPEvent.BufferLength = v3->NetPnPEvent.BufferLength;
        memset(&v22.NetPnPEvent.BufferLength + 1, 0, 148);
        ndisDevicePnPEventNotifyFiltersAndAllTransports(a1, &v22);
      }
    }
    else
    {
      p_Lock = &a1->Lock;
      if ( v8 > 1 )
      {
        a1->MiniportThread = 0LL;
        KeReleaseSpinLock(p_Lock, v9);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(a2) = 2;
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            (int)a2,
            23,
            26,
            (struct _GUID *)&WPP_82edb36cecd534540cfb01a6d1688083_Traceguids,
            (char)a1);
        }
        if ( (byte_14011B104 & 0x40) != 0 )
        {
          LODWORD(v20) = 0;
          LODWORD(v19) = 5;
          LODWORD(v18) = a1->IfIndex;
          McTemplateK0jqxqq_EtwWriteTransfer(
            v11,
            (__int64)&PnPPortDeactivationFailed,
            (__int64)&a1->InterfaceGuid,
            (__int64)&a1->InterfaceGuid,
            (__int64)v18,
            a1->NetLuid.Value,
            v19,
            v20);
        }
        v4 = -1071448019;
        goto LABEL_42;
      }
      if ( (a1->Flags & 0x10000) != 0 )
      {
        _InterlockedAnd((volatile signed __int32 *)&a1->Flags, 0xFFFEFFFF);
        a1->MiniportThread = 0LL;
        KeReleaseSpinLock(p_Lock, v9);
        ndisMSetMiniportReadyForBinding(a1, 0, Reason_DefaultPortNotActive, RunSynchronous);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(a2) = 4;
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            (int)a2,
            23,
            28,
            (struct _GUID *)&WPP_82edb36cecd534540cfb01a6d1688083_Traceguids,
            (char)a1);
        }
        if ( byte_14011B101 < 0 )
        {
          LODWORD(v19) = 65537;
          LODWORD(v18) = a1->IfIndex;
          McTemplateK0jqxd_EtwWriteTransfer(
            v12,
            (__int64)&DefaultPortDeactivated,
            (__int64)&a1->InterfaceGuid,
            (__int64)&a1->InterfaceGuid,
            (__int64)v18,
            a1->NetLuid.Value,
            v19);
        }
        goto LABEL_42;
      }
      a1->MiniportThread = 0LL;
      KeReleaseSpinLock(p_Lock, v9);
      v4 = -1071448018;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(a2) = 2;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)a2,
          23,
          27,
          (struct _GUID *)&WPP_82edb36cecd534540cfb01a6d1688083_Traceguids,
          (char)a1);
      }
      if ( (byte_14011B104 & 0x40) != 0 )
      {
        LODWORD(v20) = 0;
        LODWORD(v19) = 6;
LABEL_22:
        LODWORD(v18) = a1->IfIndex;
        McTemplateK0jqxqq_EtwWriteTransfer(
          (__int64)a1,
          (__int64)&PnPPortDeactivationFailed,
          (__int64)&a1->InterfaceGuid,
          (__int64)&a1->InterfaceGuid,
          (__int64)v18,
          a1->NetLuid.Value,
          v19,
          v20);
      }
    }
  }
  else
  {
    v4 = -1073741811;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 2;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)a2,
        23,
        25,
        (struct _GUID *)&WPP_82edb36cecd534540cfb01a6d1688083_Traceguids,
        (char)a1);
    }
    if ( (byte_14011B104 & 0x40) != 0 )
    {
      LODWORD(v20) = 0;
      LODWORD(v19) = 0;
      goto LABEL_22;
    }
  }
LABEL_42:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      23,
      33,
      (struct _GUID *)&WPP_82edb36cecd534540cfb01a6d1688083_Traceguids,
      (char)a1);
  }
  return v4;
}
