/*
 * XREFs of ?ndisSetSystemPower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140081520
 * Callers:
 *     ?ndisSetPower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140049290 (-ndisSetPower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qDD @ 0x140005270 (WPP_RECORDER_SF_qDD.c)
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x140014250 (WPP_RECORDER_SF_qL.c)
 *     McTemplateK0jqxqq_EtwWriteTransfer @ 0x140036BD0 (McTemplateK0jqxqq_EtwWriteTransfer.c)
 *     ?ndisCancelWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14003A730 (-ndisCancelWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_LqZ @ 0x140054980 (WPP_RECORDER_SF_LqZ.c)
 *     ?ndisRequestedDevicePowerIrpComplete@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x140060D90 (-ndisRequestedDevicePowerIrpComplete@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_.c)
 *     ?ndisInvokeMiniportSysPowerNotify@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@1@Z @ 0x14006AAB0 (-ndisInvokeMiniportSysPowerNotify@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@1@Z.c)
 *     ?ndisPowerSaveStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x140080F80 (-ndisPowerSaveStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x140081000 (-ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     ?ndisRequestDeviceLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@P6AXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z4W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1400810F0 (-ndisRequestDeviceLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@P6AXPEAU_DEVICE_.c)
 *     ?ndisSendSystemPowerStateIndication@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@@Z @ 0x1400A8C18 (-ndisSendSystemPowerStateIndication@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@@Z.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 *     ?ndisCancelInitModeTimeoutTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x140152420 (-ndisCancelInitModeTimeoutTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140153F20 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 *     ?ndisMShutdownMiniport@@_Y2PAGENPNP@@AJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14017230C (-ndisMShutdownMiniport@@_Y2PAGENPNP@@AJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMPowerPolicy@@_Y2PAGENPNP@@AJPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@1PEAW4_DEVICE_POWER_STATE@@E@Z @ 0x140174920 (-ndisMPowerPolicy@@_Y2PAGENPNP@@AJPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@1PEAW4_DEVICE.c)
 */

NTSTATUS __fastcall ndisSetSystemPower(
        _IO_STATUS_BLOCK *Context,
        struct _IO_STACK_LOCATION *a2,
        struct _NDIS_MINIPORT_BLOCK *a3)
{
  enum _SYSTEM_POWER_STATE SystemState; // ebx
  NTSTATUS v7; // ebp
  unsigned __int64 v9; // rdx
  int v10; // edx
  __int64 v11; // rcx
  unsigned __int64 Information; // rax
  unsigned __int64 v13; // rax
  int v14; // edx
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // r15
  unsigned int v16; // eax
  int v17; // ecx
  int v18; // edx
  __int64 v19; // rcx
  POWER_STATE v20; // ebx
  int v21; // eax
  _DEVICE_OBJECT *PhysicalDeviceObject; // rcx
  PIO_STATUS_BLOCK IoStatus; // [rsp+20h] [rbp-88h]
  PIO_STATUS_BLOCK IoStatusa; // [rsp+20h] [rbp-88h]
  PIO_STATUS_BLOCK IoStatusb; // [rsp+20h] [rbp-88h]
  __int64 v26; // [rsp+30h] [rbp-78h]
  __int64 v27; // [rsp+38h] [rbp-70h]
  POWER_STATE PowerState; // [rsp+40h] [rbp-68h] BYREF
  struct _IO_STATUS_BLOCK v29; // [rsp+48h] [rbp-60h] BYREF
  _DWORD v30[4]; // [rsp+58h] [rbp-50h] BYREF

  if ( (a3->Flags & 0x80u) != 0 )
    NT_ASSERT("(!(MINIPORT_TEST_FLAG(Miniport, 0x00000080)))");
  SystemState = a2->Parameters.Power.State.SystemState;
  v7 = 0;
  PowerState.SystemState = PowerSystemUnspecified;
  HIDWORD(v29.Pointer) = 0;
  a3->WaitWakeSystemState = SystemState;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_LqZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (__int64)a2,
      (__int64)a3,
      0x5Fu,
      (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
      SystemState,
      (char)a3,
      &a3->pAdapterInstanceName->Length);
  if ( a3->State != NdisMiniportHalted || a3->PnPDeviceState == NdisPnPDeviceStarted )
  {
    v9 = 0x140000000uLL;
    switch ( SystemState )
    {
      case PowerSystemWorking:
        if ( (a3->PnPFlags & 0x800) == 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v9) = 3;
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v9,
              14,
              97,
              (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
              (char)a3);
          }
          ndisPowerSaveStop(a3, 6u);
        }
        ndisMPowerPolicy(
          a3,
          SystemState,
          (enum _SYSTEM_POWER_STATE)((a2->Parameters.Read.Length >> 8) & 0xF),
          (enum _DEVICE_POWER_STATE *)&PowerState,
          0);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v10) = 4;
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v10,
            14,
            98,
            (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
            (char)a3);
        }
        if ( (byte_14011B103 & 4) != 0 )
        {
          LODWORD(v27) = PowerState;
          LODWORD(v26) = SystemState;
          LODWORD(IoStatusa) = a3->IfIndex;
          McTemplateK0jqxqq_EtwWriteTransfer(
            v11,
            (__int64)&MiniportPowerStates,
            (__int64)&a3->InterfaceGuid,
            (__int64)&a3->InterfaceGuid,
            (__int64)IoStatusa,
            a3->NetLuid.Value,
            v26,
            v27);
        }
        Information = Context[11].Information;
        *(_OWORD *)(Information - 72) = *(_OWORD *)Information;
        *(_OWORD *)(Information - 56) = *(_OWORD *)(Information + 16);
        *(_OWORD *)(Information - 40) = *(_OWORD *)(Information + 32);
        *(_QWORD *)(Information - 24) = *(_QWORD *)(Information + 48);
        *(_BYTE *)(Information - 69) = 0;
        v13 = Context[11].Information;
        *(_QWORD *)(v13 - 16) = ndisSetSystemPowerOnComplete;
        *(_QWORD *)(v13 - 8) = a3;
        *(_BYTE *)(v13 - 69) = -32;
        *(_BYTE *)(Context[11].Information + 3) |= 1u;
        IofCallDriver(a3->NextDeviceObject, (PIRP)Context);
        goto LABEL_41;
      case PowerSystemSleeping1:
      case PowerSystemSleeping2:
      case PowerSystemSleeping3:
      case PowerSystemHibernate:
        ndisWaitForKernelObject(&a3->PowerD0CompleteEvent);
        ndisPowerSaveStop(a3, 6u);
        DriverHandle = a3->DriverHandle;
        if ( DriverHandle->SysPowerNotifyHandler && (a3->PnPFlags & 0x4000) == 0 )
        {
          v16 = (a2->Parameters.Read.Length >> 8) & 0xF;
          v17 = (unsigned __int8)HIBYTE(LOWORD(a2->Parameters.Create.SecurityContext)) >> 4;
          v30[0] = 786816;
          v30[2] = v17;
          v30[1] = v16;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v14) = 4;
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v14,
              14,
              11,
              (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
              (char)a3);
          }
          DriverHandle->SysPowerNotifyHandler(a3->MiniportAdapterContext, (const _NDIS_MINIPORT_SYSPOWER_NOTIFY *)v30);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v18) = 4;
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v18,
              14,
              12,
              (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
              (char)a3);
          }
        }
        if ( (unsigned int)ndisMPowerPolicy(
                             a3,
                             SystemState,
                             (enum _SYSTEM_POWER_STATE)((a2->Parameters.Read.Length >> 8) & 0xF),
                             (enum _DEVICE_POWER_STATE *)&PowerState,
                             0) == -2147483633 )
        {
          Context[3].Status = 0;
          IofCompleteRequest((PIRP)Context, 0);
        }
        else
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v27) = PowerState;
            WPP_RECORDER_SF_qDD(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              4u,
              0xEu,
              0x63u,
              (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
              (char)a3,
              SystemState,
              v27);
          }
          if ( (byte_14011B103 & 4) != 0 )
          {
            LODWORD(v27) = PowerState;
            LODWORD(v26) = SystemState;
            LODWORD(IoStatusb) = a3->IfIndex;
            McTemplateK0jqxqq_EtwWriteTransfer(
              v19,
              (__int64)&MiniportPowerStates,
              (__int64)&a3->InterfaceGuid,
              (__int64)&a3->InterfaceGuid,
              (__int64)IoStatusb,
              a3->NetLuid.Value,
              v26,
              v27);
          }
          KeClearEvent(&a3->OpenReadyEvent.Event);
          ndisCancelInitModeTimeoutTimer(a3, 1u);
          ndisPrepForLowPower(a3, (enum _NDIS_DEVICE_POWER_STATE)PowerState.SystemState);
          v20.SystemState = PowerState.SystemState;
          *(_QWORD *)(Context[11].Information - 32) = a3->DeviceObject;
          *(_BYTE *)(Context[11].Information + 3) |= 1u;
          v21 = ndisRequestDeviceLowPower(
                  a3,
                  PowerState,
                  (PREQUEST_POWER_COMPLETE)ndisRequestedDevicePowerIrpComplete,
                  Context,
                  NdisMEventDx_SystemSleep);
          if ( v21 != 259 )
          {
            PhysicalDeviceObject = a3->PhysicalDeviceObject;
            v29.Status = v21;
            v29.Information = 0LL;
            ndisRequestedDevicePowerIrpComplete((__int64)PhysicalDeviceObject, 2u, v20, Context, &v29);
          }
LABEL_41:
          v7 = 259;
        }
        break;
      case PowerSystemShutdown:
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v26) = SystemState;
          WPP_RECORDER_SF_qL(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4u,
            0xEu,
            0x60u,
            (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
            (char)a3,
            v26);
        }
        if ( (byte_14011B103 & 4) != 0 )
        {
          LODWORD(v27) = SystemState;
          LODWORD(v26) = 0;
          LODWORD(IoStatus) = a3->IfIndex;
          McTemplateK0jqxqq_EtwWriteTransfer(
            (__int64)Context,
            (__int64)&MiniportPowerSystemState,
            (__int64)&a3->InterfaceGuid,
            (__int64)&a3->InterfaceGuid,
            (__int64)IoStatus,
            a3->NetLuid.Value,
            v26,
            v27);
        }
        ndisSendSystemPowerStateIndication(a3, SystemState);
        if ( !ndisAllowWakeFromS5 )
          ndisCancelWaitWake(a3);
        ndisPowerSaveStop(a3, 6u);
        ndisInvokeMiniportSysPowerNotify(
          a3,
          (a2->Parameters.Read.Length >> 8) & 0xF,
          (enum _SYSTEM_POWER_STATE)((unsigned __int16)a2->Parameters.Read.Length >> 12));
        if ( (a3->DriverHandle->Flags & 1) == 0 )
          ndisMShutdownMiniport(a3);
        ++BYTE3(Context[4].Pointer);
        Context[11].Information += 72LL;
        Context[3].Status = 0;
        v7 = IofCallDriver(a3->NextDeviceObject, (PIRP)Context);
        break;
      default:
        return v7;
    }
    return v7;
  }
  else
  {
    ++BYTE3(Context[4].Pointer);
    Context[11].Information += 72LL;
    Context[3].Status = 0;
    return IofCallDriver(a3->NextDeviceObject, (PIRP)Context);
  }
}
