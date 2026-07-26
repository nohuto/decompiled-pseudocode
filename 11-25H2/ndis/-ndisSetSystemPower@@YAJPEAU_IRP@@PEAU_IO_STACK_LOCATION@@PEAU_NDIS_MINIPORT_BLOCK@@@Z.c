/*
 * XREFs of ?ndisSetSystemPower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140055D80
 * Callers:
 *     ?ndisSetPower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140055C40 (-ndisSetPower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x14000EA50 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     ?ndisCancelWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140018100 (-ndisCancelWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisRequestDeviceLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@P6AXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z4W4_NDIS_MINIPORT_EVENT@@@Z @ 0x140025790 (-ndisRequestDeviceLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@P6AXPEAU_DEVICE_.c)
 *     WPP_RECORDER_SF_qDD @ 0x140028580 (WPP_RECORDER_SF_qDD_ea_140028580.c)
 *     ?ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1400549A0 (-ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     WPP_RECORDER_SF_LqZ @ 0x140056200 (WPP_RECORDER_SF_LqZ.c)
 *     McTemplateK0jqxqq_EtwWriteTransfer @ 0x1400568E0 (McTemplateK0jqxqq_EtwWriteTransfer.c)
 *     ?ndisInvokeMiniportSysPowerNotify@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@1@Z @ 0x140057BC0 (-ndisInvokeMiniportSysPowerNotify@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@1@Z.c)
 *     ?ndisRequestedDevicePowerIrpComplete@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x14007C860 (-ndisRequestedDevicePowerIrpComplete@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_.c)
 *     ?ndisPowerSaveStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1400848A0 (-ndisPowerSaveStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?ndisSendSystemPowerStateIndication@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@@Z @ 0x1400B0D88 (-ndisSendSystemPowerStateIndication@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@@Z.c)
 *     ?ndisCancelInitModeTimeoutTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x14015EC20 (-ndisCancelInitModeTimeoutTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140160790 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 *     ?ndisMShutdownMiniport@@_Y2PAGENPNP@@AJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14017D2DC (-ndisMShutdownMiniport@@_Y2PAGENPNP@@AJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMPowerPolicy@@_Y2PAGENPNP@@AJPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@1PEAW4_DEVICE_POWER_STATE@@E@Z @ 0x140180350 (-ndisMPowerPolicy@@_Y2PAGENPNP@@AJPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@1PEAW4_DEVICE.c)
 */

NTSTATUS __fastcall ndisSetSystemPower(_IRP *Context, struct _IO_STACK_LOCATION *a2, struct _NDIS_MINIPORT_BLOCK *a3)
{
  struct _IO_STACK_LOCATION *v4; // rbp
  enum _SYSTEM_POWER_STATE SystemState; // ebx
  int v7; // esi
  int v8; // edx
  __int64 v9; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IO_STACK_LOCATION *v11; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  POWER_STATE v15; // ebx
  int v16; // eax
  _DEVICE_OBJECT *PhysicalDeviceObject; // rcx
  char v18[8]; // [rsp+30h] [rbp-48h]
  char v19[8]; // [rsp+38h] [rbp-40h]
  struct _IO_STATUS_BLOCK IoStatus; // [rsp+40h] [rbp-38h] BYREF
  POWER_STATE PowerState; // [rsp+88h] [rbp+10h] BYREF

  v4 = a2;
  if ( (a3->Flags & 0x80u) != 0 )
    __int2c();
  SystemState = a2->Parameters.Power.State.SystemState;
  v7 = 0;
  PowerState.SystemState = PowerSystemUnspecified;
  HIDWORD(IoStatus.Pointer) = 0;
  a3->WaitWakeSystemState = SystemState;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_LqZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      (int)a3,
      95,
      (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
      SystemState,
      (char)a3,
      (__int64)a3->pAdapterInstanceName);
  if ( a3->State != NdisMiniportHalted || a3->PnPDeviceState == NdisPnPDeviceStarted )
  {
    if ( SystemState == PowerSystemWorking )
    {
      if ( (a3->PnPFlags & 0x800) == 0 )
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(a2) = 3;
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            (int)a2,
            14,
            97,
            (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
            (char)a3);
        }
        ndisPowerSaveStop(a3, 6LL);
      }
      ndisMPowerPolicy(
        a3,
        PowerSystemWorking,
        (enum _SYSTEM_POWER_STATE)((v4->Parameters.Read.Length >> 8) & 0xF),
        (enum _DEVICE_POWER_STATE *)&PowerState,
        0);
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v8) = 4;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v8,
          14,
          98,
          (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
          (char)a3);
      }
      if ( (byte_140125103 & 4) != 0 )
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _DWORD, _DWORD))McTemplateK0jqxqq_EtwWriteTransfer)(
          v9,
          &MiniportPowerStates,
          &a3->InterfaceGuid,
          &a3->InterfaceGuid,
          a3->IfIndex,
          (_NET_LUID_LH)a3->NetLuid.Value,
          1,
          (POWER_STATE)PowerState.SystemState);
      CurrentStackLocation = Context->Tail.Overlay.CurrentStackLocation;
      *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
      *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
      *(_OWORD *)&CurrentStackLocation[-1].Parameters.ReadWriteConfig.Length = *(_OWORD *)&CurrentStackLocation->Parameters.ReadWriteConfig.Length;
      CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
      CurrentStackLocation[-1].Control = 0;
      v11 = Context->Tail.Overlay.CurrentStackLocation;
      v11[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))ndisSetSystemPowerOnComplete;
      v11[-1].Context = a3;
      v11[-1].Control = -32;
      Context->Tail.Overlay.CurrentStackLocation->Control |= 1u;
      IofCallDriver(a3->NextDeviceObject, Context);
    }
    else
    {
      if ( SystemState != PowerSystemSleeping1
        && SystemState != PowerSystemSleeping2
        && SystemState != PowerSystemSleeping3 )
      {
        v13 = (unsigned int)(SystemState - 5);
        if ( SystemState != PowerSystemHibernate )
        {
          if ( SystemState == PowerSystemShutdown )
          {
            if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              *(_DWORD *)v18 = SystemState;
              WPP_RECORDER_SF_qL(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                4u,
                0xEu,
                0x60u,
                (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
                (char)a3,
                *(_QWORD *)v18);
            }
            if ( (byte_140125103 & 4) != 0 )
              ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _DWORD, _DWORD))McTemplateK0jqxqq_EtwWriteTransfer)(
                v13,
                &MiniportPowerSystemState,
                &a3->InterfaceGuid,
                &a3->InterfaceGuid,
                a3->IfIndex,
                (_NET_LUID_LH)a3->NetLuid.Value,
                0,
                SystemState);
            ndisSendSystemPowerStateIndication(a3, SystemState);
            if ( !ndisAllowWakeFromS5 )
              ndisCancelWaitWake(a3);
            ndisPowerSaveStop(a3, 6LL);
            ndisInvokeMiniportSysPowerNotify(
              a3,
              (enum _SYSTEM_POWER_STATE)((v4->Parameters.Read.Length >> 8) & 0xF),
              (enum _SYSTEM_POWER_STATE)((unsigned __int16)v4->Parameters.Read.Length >> 12));
            if ( (a3->DriverHandle->Flags & 1) == 0 )
              ndisMShutdownMiniport(a3);
            ++Context->CurrentLocation;
            ++Context->Tail.Overlay.CurrentStackLocation;
            Context->IoStatus.Status = 0;
            return IofCallDriver(a3->NextDeviceObject, Context);
          }
          return v7;
        }
      }
      ndisWaitForKernelObject(&a3->PowerD0CompleteEvent);
      ndisPowerSaveStop(a3, 6LL);
      ndisInvokeMiniportSysPowerNotify(
        a3,
        (enum _SYSTEM_POWER_STATE)((v4->Parameters.Read.Length >> 8) & 0xF),
        (enum _SYSTEM_POWER_STATE)((unsigned __int16)v4->Parameters.Read.Length >> 12));
      if ( (unsigned int)ndisMPowerPolicy(
                           a3,
                           SystemState,
                           (enum _SYSTEM_POWER_STATE)((v4->Parameters.Read.Length >> 8) & 0xF),
                           (enum _DEVICE_POWER_STATE *)&PowerState,
                           0) == -2147483633 )
      {
        Context->IoStatus.Status = 0;
        IofCompleteRequest(Context, 0);
        return v7;
      }
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        *(POWER_STATE *)v19 = PowerState;
        WPP_RECORDER_SF_qDD(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0xEu,
          0x63u,
          (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
          (char)a3,
          SystemState,
          *(_QWORD *)v19);
      }
      if ( (byte_140125103 & 4) != 0 )
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _DWORD, _DWORD))McTemplateK0jqxqq_EtwWriteTransfer)(
          v14,
          &MiniportPowerStates,
          &a3->InterfaceGuid,
          &a3->InterfaceGuid,
          a3->IfIndex,
          (_NET_LUID_LH)a3->NetLuid.Value,
          SystemState,
          (POWER_STATE)PowerState.SystemState);
      KeClearEvent(&a3->OpenReadyEvent.Event);
      ndisCancelInitModeTimeoutTimer(a3, 1u);
      ndisPrepForLowPower(a3, (enum _NDIS_DEVICE_POWER_STATE)PowerState.SystemState);
      v15.SystemState = PowerState.SystemState;
      Context->Tail.Overlay.CurrentStackLocation[-1].DeviceObject = a3->DeviceObject;
      Context->Tail.Overlay.CurrentStackLocation->Control |= 1u;
      v16 = ndisRequestDeviceLowPower(
              a3,
              PowerState,
              ndisRequestedDevicePowerIrpComplete,
              Context,
              NdisMEventDx_SystemSleep);
      if ( v16 != 259 )
      {
        PhysicalDeviceObject = a3->PhysicalDeviceObject;
        IoStatus.Status = v16;
        IoStatus.Information = 0LL;
        ndisRequestedDevicePowerIrpComplete(PhysicalDeviceObject, 2u, v15, Context, &IoStatus);
      }
    }
    return 259;
  }
  ++Context->CurrentLocation;
  ++Context->Tail.Overlay.CurrentStackLocation;
  Context->IoStatus.Status = 0;
  return IofCallDriver(a3->NextDeviceObject, Context);
}
