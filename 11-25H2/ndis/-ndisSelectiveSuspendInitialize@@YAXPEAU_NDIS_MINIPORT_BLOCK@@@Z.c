/*
 * XREFs of ?ndisSelectiveSuspendInitialize@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14014BFA4
 * Callers:
 *     ?ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1401846F0 (-ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x140186B80 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     ?ndisNicAutoPowerSaverResetTelemetryData@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140066680 (-ndisNicAutoPowerSaverResetTelemetryData@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NdisNblTrackerRegisterComponent @ 0x14006E120 (NdisNblTrackerRegisterComponent.c)
 *     NdisInitializeTimer @ 0x140088F90 (NdisInitializeTimer.c)
 *     ?ndisReadNicAutoPowerSaverTimeoutKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14014BC30 (-ndisReadNicAutoPowerSaverTimeoutKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisReadSSTimeoutKeywords@@_Y2PAGE@@AXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14014BD30 (-ndisReadSSTimeoutKeywords@@_Y2PAGE@@AXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisSelectiveSuspendFree@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14014BEBC (-ndisSelectiveSuspendFree@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisSelectiveSuspendInitialize(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rax
  struct _NDIS_SELECTIVE_SUSPEND *Pool2; // rax
  int v4; // edx
  struct _NDIS_SELECTIVE_SUSPEND *v5; // rdi
  __int64 v6; // rax
  int v7; // edx
  __int64 v8; // rax

  if ( (a1->Flags & 0x80u) != 0
    || (DriverHandle = a1->DriverHandle, DriverHandle->IdleNotificationHandler)
    && DriverHandle->CancelIdleNotificationHandler )
  {
    Pool2 = (struct _NDIS_SELECTIVE_SUSPEND *)ExAllocatePool2(64LL, 1616LL, 1936933966);
    a1->SelectiveSuspend = Pool2;
    v5 = Pool2;
    if ( Pool2 )
    {
      ndisNicAutoPowerSaverResetTelemetryData(a1);
      v6 = ExAllocatePool2(66LL, 120LL, 1936933966);
      *((_QWORD *)v5 + 75) = v6;
      if ( v6 )
      {
        *(_OWORD *)v6 = xmmword_1400FEF30;
        *(_OWORD *)(v6 + 16) = xmmword_1400FEF40;
        *(_OWORD *)(v6 + 32) = xmmword_1400FEF50;
        *(_OWORD *)(v6 + 48) = xmmword_1400FEF60;
        *(_OWORD *)(v6 + 64) = xmmword_1400FEF70;
        *(_OWORD *)(v6 + 80) = xmmword_1400FEF80;
        *(_OWORD *)(v6 + 96) = xmmword_1400FEF90;
        *(_QWORD *)(v6 + 112) = 0LL;
        *((_QWORD *)v5 + 68) = 0LL;
        *((_QWORD *)v5 + 69) = (char *)v5 + 544;
        *((_QWORD *)v5 + 70) = 0LL;
        *((_QWORD *)v5 + 71) = (char *)v5 + 560;
        *((_QWORD *)v5 + 74) = (char *)v5 + 584;
        *((_QWORD *)v5 + 73) = (char *)v5 + 584;
        ndisReadSSTimeoutKeywords(a1);
        if ( (a1->PMHardwareCapabilities.Flags & 2) == 0 && (a1->PMAdminConfig.Value & 0xC000) != 0 )
          ndisReadNicAutoPowerSaverTimeoutKeywords(a1);
        KeInitializeSpinLock((PKSPIN_LOCK)v5);
        NdisInitializeTimer((PNDIS_TIMER)((char *)v5 + 16), (PNDIS_TIMER_FUNCTION)ndisSSIdleTimerDpc, a1);
        *((_QWORD *)v5 + 37) = a1;
        *((_QWORD *)v5 + 38) = ndisSSIdleTimerWorkItem;
        *((_QWORD *)v5 + 47) = a1;
        *((_QWORD *)v5 + 48) = ndisIdleCancelWorkItem;
        *((_QWORD *)v5 + 57) = 0LL;
        *((_QWORD *)v5 + 59) = ndisSetPowerResumeCompleteWorkItem;
        *((_QWORD *)v5 + 60) = (char *)v5 + 456;
        KeInitializeEvent((PRKEVENT)((char *)v5 + 152), NotificationEvent, 1u);
        KeInitializeEvent((PRKEVENT)((char *)v5 + 200), NotificationEvent, 1u);
        KeInitializeEvent((PRKEVENT)((char *)v5 + 248), NotificationEvent, 1u);
        KeInitializeEvent((PRKEVENT)((char *)v5 + 176), NotificationEvent, 1u);
        KeInitializeEvent((PRKEVENT)((char *)v5 + 224), NotificationEvent, 1u);
        KeInitializeEvent((PRKEVENT)((char *)v5 + 272), NotificationEvent, 1u);
        *((_QWORD *)v5 + 76) = NdisNblTrackerRegisterComponent(4, (__int64)a1, (__int64)a1->pAdapterInstanceName);
        *((_QWORD *)v5 + 77) = NdisNblTrackerRegisterComponent(5, (__int64)a1, (__int64)a1->pAdapterInstanceName);
        v8 = MEMORY[0xFFFFF78000000014];
        *((_DWORD *)v5 + 126) |= 0x200u;
        *((_DWORD *)v5 + 127) |= 0x100u;
        *((_QWORD *)v5 + 82) = v8;
      }
      else
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v7) = 2;
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v7,
            15,
            11,
            (struct _GUID *)&WPP_0da1f7415b08391dc91ed9194dfe6793_Traceguids,
            (char)a1);
        }
        ndisSelectiveSuspendFree(a1);
      }
    }
    else if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v4) = 2;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v4,
        15,
        10,
        (struct _GUID *)&WPP_0da1f7415b08391dc91ed9194dfe6793_Traceguids,
        (char)a1);
    }
  }
}
