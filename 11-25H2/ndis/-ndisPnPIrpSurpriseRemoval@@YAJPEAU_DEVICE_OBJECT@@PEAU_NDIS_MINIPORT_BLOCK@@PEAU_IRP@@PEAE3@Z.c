/*
 * XREFs of ?ndisPnPIrpSurpriseRemoval@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1400899C0
 * Callers:
 *     NdisWdfPnpPowerEventHandler @ 0x14004E5A0 (NdisWdfPnpPowerEventHandler.c)
 *     ?ndisPnPDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x140057300 (-ndisPnPDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     ?ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x140016490 (-ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x140016910 (-ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     WPP_RECORDER_SF_qZ @ 0x1400291D0 (WPP_RECORDER_SF_qZ.c)
 *     ?ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140056B60 (-ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisDevicePnPEventNotifyMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@Z @ 0x140068C70 (-ndisDevicePnPEventNotifyMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@.c)
 *     ?NdisTraceLoggingDeviceRemoved@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_REMOVAL_REASON@@@Z @ 0x1400993C0 (-NdisTraceLoggingDeviceRemoved@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_REMOVAL_REASON@.c)
 *     ?ndisPnPIrpSurpriseRemovalInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140171C40 (-ndisPnPIrpSurpriseRemovalInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisPnPIrpSurpriseRemoval(
        struct _DEVICE_OBJECT *a1,
        struct _NDIS_MINIPORT_BLOCK *a2,
        struct _IRP *a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5)
{
  bool v8; // zf
  bool v9; // cc
  unsigned __int8 v10; // cl

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (__int64)a2,
      9u,
      0x27u,
      (struct _GUID *)&WPP_9bb8ec1ef83f308ecc9e50971342ac55_Traceguids,
      (char)a2,
      &a2->pAdapterInstanceName->Length);
  NdisTraceLoggingDeviceRemoved(a2, 3LL);
  ndisLogMiniportEvent(a2, NdisMEvent_DeviceSurpriseRemoval);
  _InterlockedOr((volatile signed __int32 *)&a2->InterlockedFlags, 0x200u);
  a2->PnPFlags = a2->PnPFlags & 0xFFFEFFEF | 0x10;
  if ( a3 )
    a3->IoStatus.Status = 0;
  if ( ndisIsMiniportStarted(a2) && a2->PnPDeviceState == NdisPnPDeviceStarted && (a2->PnPFlags & 0x4000) == 0 )
    ndisDevicePnPEventNotifyMiniport(a2, NdisDevicePnPEventSurpriseRemoved, 0LL, 0);
  ndisReferenceMiniportNoCheck(a2, 0x1Eu);
  ndisReferenceMiniportNoCheck(a2, 0x1Du);
  v8 = a2->MajorNdisVersion == 6;
  v9 = a2->MajorNdisVersion <= 6u;
  a2->PnPDeviceState = NdisPnPDeviceRemoved;
  if ( v9 && (!v8 || a2->MinorNdisVersion < 0x28u) || (a2->Flags & 0x80u) != 0 )
  {
    ndisPnPIrpSurpriseRemovalInner(a2);
    v10 = 1;
  }
  else
  {
    if ( a3 )
      a3->Tail.Overlay.CurrentStackLocation->Control |= 1u;
    a2->SurpriseRemovalWorkItem.Workitem.Parameter = &a2->SurpriseRemovalWorkItem;
    a2->SurpriseRemovalWorkItem.Workitem.WorkerRoutine = ndisQueuedPnPIrpSurpriseRemoval;
    a2->SurpriseRemovalWorkItem.Workitem.List.Flink = 0LL;
    a2->SurpriseRemovalWorkItem.Irp = a3;
    ExQueueWorkItem(&a2->SurpriseRemovalWorkItem.Workitem, CustomPriorityWorkQueue|RealTimeWorkQueue|0x8);
    v10 = 0;
  }
  *a5 = v10;
  *a4 = 0;
  if ( *a5 || (a2->Flags & 0x80u) != 0 )
    return 0LL;
  else
    return 259LL;
}
