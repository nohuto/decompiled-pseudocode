/*
 * XREFs of ?ndisQueryPower@@_Y2PAGENPNP@@AJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1401744D0
 * Callers:
 *     ?ndisPowerDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x140048F20 (-ndisPowerDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ?ndisPowerIrpWorker@@YAXPEAX@Z @ 0x1400A89F0 (-ndisPowerIrpWorker@@YAXPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140014130 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_qL @ 0x140014250 (WPP_RECORDER_SF_qL.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14002E9A0 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisQuerySetMiniportDeviceState@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@KE@Z @ 0x140035510 (-ndisQuerySetMiniportDeviceState@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@KE@Z.c)
 *     WPP_RECORDER_SF_qLL @ 0x140035A80 (WPP_RECORDER_SF_qLL.c)
 *     ?ndisDevicePnPEventNotifyFiltersAndAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x140035B60 (-ndisDevicePnPEventNotifyFiltersAndAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVEN.c)
 *     ?ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140035D30 (-ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     McTemplateK0jqxqq_EtwWriteTransfer @ 0x140036BD0 (McTemplateK0jqxqq_EtwWriteTransfer.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14004B9E0 (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisInitializeNetPnPEvent@@YAXPEAU_NET_PNP_EVENT_NOTIFICATION@@PEAU_KEVENT@@@Z @ 0x140055540 (-ndisInitializeNetPnPEvent@@YAXPEAU_NET_PNP_EVENT_NOTIFICATION@@PEAU_KEVENT@@@Z.c)
 *     McTemplateK0jqxddq_EtwWriteTransfer @ 0x140073380 (McTemplateK0jqxddq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     memset @ 0x1400E7500 (memset.c)
 *     ?ndisMPowerPolicy@@_Y2PAGENPNP@@AJPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@1PEAW4_DEVICE_POWER_STATE@@E@Z @ 0x140174920 (-ndisMPowerPolicy@@_Y2PAGENPNP@@AJPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@1PEAW4_DEVICE.c)
 */

NTSTATUS __fastcall ndisQueryPower(PIRP Irp, struct _IO_STACK_LOCATION *a2, struct _NDIS_MINIPORT_BLOCK *a3)
{
  int v6; // edx
  int v7; // edx
  __int64 Options; // rcx
  int v9; // r14d
  __int64 v10; // rcx
  int v11; // edx
  int SetMiniportDeviceState; // eax
  int v13; // edx
  __int64 v14; // rcx
  char v15; // di
  _IO_STACK_LOCATION *v16; // rax
  _IO_STACK_LOCATION *v17; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 RemlockSize; // [rsp+20h] [rbp-138h]
  __int64 v21; // [rsp+30h] [rbp-128h]
  char v22[4]; // [rsp+30h] [rbp-128h]
  __int64 v23; // [rsp+38h] [rbp-120h]
  char v24[4]; // [rsp+38h] [rbp-120h]
  enum _DEVICE_POWER_STATE v25[4]; // [rsp+50h] [rbp-108h] BYREF
  struct _NET_PNP_EVENT_NOTIFICATION v26; // [rsp+60h] [rbp-F8h] BYREF

  v25[0] = PowerDeviceUnspecified;
  memset(&v26, 0, sizeof(v26));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v6,
      14,
      38,
      (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
      (char)a3);
  }
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  Options = a2->Parameters.Create.Options;
  if ( (_DWORD)Options == 1 )
  {
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.ReadWriteConfig.Length = *(_OWORD *)&CurrentStackLocation->Parameters.ReadWriteConfig.Length;
    CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
    CurrentStackLocation[-1].Control = 0;
    return IofCallDriver(a3->NextDeviceObject, Irp);
  }
  if ( (_DWORD)Options )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v24 = a2->Parameters.Read.ByteOffset.LowPart;
      WPP_RECORDER_SF_qLL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v7,
        0xEu,
        0x27u,
        (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
        (char)a3,
        Options,
        *(_DWORD *)v24);
    }
    if ( (byte_14011B102 & 0x40) != 0 )
    {
      LODWORD(v23) = a2->Parameters.Read.ByteOffset.LowPart;
      LODWORD(v21) = a2->Parameters.Create.Options;
      LODWORD(RemlockSize) = a3->IfIndex;
      McTemplateK0jqxqq_EtwWriteTransfer(
        Options,
        (__int64)&InvalidSystemPowerState,
        (__int64)&a3->InterfaceGuid,
        (__int64)&a3->InterfaceGuid,
        RemlockSize,
        a3->NetLuid.Value,
        v21,
        v23);
    }
    v9 = -1073741808;
  }
  else
  {
    v9 = ndisMPowerPolicy(
           a3,
           a2->Parameters.Power.State.SystemState,
           (enum _SYSTEM_POWER_STATE)((a2->Parameters.Read.Length >> 8) & 0xF),
           v25,
           1u);
    if ( !ndisIsMiniportStarted(a3) || a3->PnPDeviceState != NdisPnPDeviceStarted || v9 == -2147483633 )
    {
      Irp->IoStatus.Status = 0;
      IofCompleteRequest(Irp, 0);
      return 0;
    }
    if ( v9 >= 0 )
    {
      ndisInitializeNetPnPEvent(&v26, 0LL);
      v26.NetPnPEvent.NetEvent = NetEventQueryPower;
      v26.NetPnPEvent.Buffer = v25;
      v26.NetPnPEvent.BufferLength = 4;
      if ( (unsigned int)ndisDevicePnPEventNotifyFiltersAndAllTransports(a3, &v26)
        && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v11) = 2;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v11,
          14,
          41,
          (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
          (char)a3);
      }
      if ( (a3->PnPFlags & 0x20) != 0 )
      {
        SetMiniportDeviceState = ndisQuerySetMiniportDeviceState(a3, v25[0], -50265854, 0);
        v15 = SetMiniportDeviceState;
        if ( SetMiniportDeviceState )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v13) = 4;
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v13,
              14,
              42,
              (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
              (char)a3);
          }
          if ( (byte_14011B101 & 8) != 0 )
            McTemplateK0jqxddq_EtwWriteTransfer(
              v14,
              &QueryPowerFailed,
              &a3->InterfaceGuid,
              (__int64)&a3->InterfaceGuid,
              a3->IfIndex,
              a3->NetLuid.Value,
              v15,
              2,
              0);
        }
      }
      Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
      v16 = Irp->Tail.Overlay.CurrentStackLocation;
      *(_OWORD *)&v16[-1].MajorFunction = *(_OWORD *)&v16->MajorFunction;
      *(_OWORD *)&v16[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v16->Parameters.NotifyDirectoryEx.CompletionFilter;
      *(_OWORD *)&v16[-1].Parameters.ReadWriteConfig.Length = *(_OWORD *)&v16->Parameters.ReadWriteConfig.Length;
      v16[-1].FileObject = v16->FileObject;
      v16[-1].Control = 0;
      a3->QueryPowerDeviceState = v25[0];
      a3->PendingQueryPowerIrp = Irp;
      IoAcquireRemoveLockEx(&a3->RemoveLock, Irp, File, 1u, 0x20u);
      v17 = Irp->Tail.Overlay.CurrentStackLocation;
      v17[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))ndisQueryPowerCompleteSystemState;
      v17[-1].Context = a3;
      v17[-1].Control = -32;
      IofCallDriver(a3->NextDeviceObject, Irp);
      v9 = 259;
      ndisDereferencePackage((PVOID *)&ndisPkgs);
      goto LABEL_13;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v22 = a2->Parameters.Read.ByteOffset.LowPart;
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xEu,
        0x28u,
        (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
        (char)a3,
        *(_DWORD *)v22);
    }
    if ( (byte_14011B101 & 8) != 0 )
      McTemplateK0jqxddq_EtwWriteTransfer(
        v10,
        &QueryPowerFailed,
        &a3->InterfaceGuid,
        (__int64)&a3->InterfaceGuid,
        a3->IfIndex,
        a3->NetLuid.Value,
        v9,
        1,
        a2->Parameters.Read.ByteOffset.LowPart);
  }
  ndisDereferencePackage((PVOID *)&ndisPkgs);
  Irp->IoStatus.Status = v9;
  IofCompleteRequest(Irp, 0);
LABEL_13:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v21) = v9;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x2Bu,
      (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
      (char)a3,
      v21);
  }
  return v9;
}
