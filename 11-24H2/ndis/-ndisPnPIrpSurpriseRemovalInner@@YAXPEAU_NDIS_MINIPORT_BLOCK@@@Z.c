/*
 * XREFs of ?ndisPnPIrpSurpriseRemovalInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140152070
 * Callers:
 *     ?ndisPnPIrpSurpriseRemoval@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1400806E0 (-ndisPnPIrpSurpriseRemoval@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisQueuedPnPIrpSurpriseRemoval@@YAXPEAX@Z @ 0x140151F00 (-ndisQueuedPnPIrpSurpriseRemoval@@YAXPEAX@Z.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400129C0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     ?ndisDevicePnPEventNotifyFiltersAndAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x140035B60 (-ndisDevicePnPEventNotifyFiltersAndAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVEN.c)
 *     ?ndisInitializeNetPnPEvent@@YAXPEAU_NET_PNP_EVENT_NOTIFICATION@@PEAU_KEVENT@@@Z @ 0x140055540 (-ndisInitializeNetPnPEvent@@YAXPEAU_NET_PNP_EVENT_NOTIFICATION@@PEAU_KEVENT@@@Z.c)
 *     ?ndisPnPRemoveDeviceEx@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140063B10 (-ndisPnPRemoveDeviceEx@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisReturnQueuedLowPowerNbls@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1400678A0 (-ndisReturnQueuedLowPowerNbls@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisPowerSaveStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x140080F80 (-ndisPowerSaveStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     memset @ 0x1400E7500 (memset.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140153F20 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 *     ?Release@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1401543D0 (-Release@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@.c)
 *     ?ndisIssueNetEventSetPowerEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@E@Z @ 0x140161570 (-ndisIssueNetEventSetPowerEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@E@Z.c)
 */

void __fastcall ndisPnPIrpSurpriseRemovalInner(struct _NDIS_MINIPORT_BLOCK *a1)
{
  int v2; // edx
  int v3; // edx
  int v4; // edx
  struct _NET_PNP_EVENT_NOTIFICATION v5; // [rsp+30h] [rbp-C8h] BYREF

  memset(&v5, 0, sizeof(v5));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v2,
      13,
      36,
      (struct _GUID *)&WPP_c993d3286aac3856ef9e8dc1fba97826_Traceguids,
      (char)a1);
  }
  ndisPowerSaveStop(a1, 3u);
  ndisWaitForKernelObject(&a1->PowerD0CompleteEvent);
  if ( a1->CurrentDevicePowerState != PowerDeviceD0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v3) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v3,
        13,
        37,
        (struct _GUID *)&WPP_c993d3286aac3856ef9e8dc1fba97826_Traceguids,
        (char)a1);
    }
    if ( (a1->InfoFlags & 0x80000000) != 0 )
      ndisReturnQueuedLowPowerNbls(a1, 1);
    Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Release(&a1->MiniportOwner);
    ndisIssueNetEventSetPowerEvent(a1, PowerDeviceD0, 1u);
  }
  ndisInitializeNetPnPEvent(&v5, 0LL);
  v5.NetPnPEvent.NetEvent = NetEventQueryRemoveDevice;
  ndisDevicePnPEventNotifyFiltersAndAllTransports(a1, &v5);
  a1->AdminStatus = NET_IF_ADMIN_STATUS_UP;
  ndisPnPRemoveDeviceEx(a1);
  ndisDereferenceMiniport(a1, 0x1Du);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v4,
      13,
      38,
      (struct _GUID *)&WPP_c993d3286aac3856ef9e8dc1fba97826_Traceguids,
      (char)a1);
  }
}
