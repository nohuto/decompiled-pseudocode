/*
 * XREFs of ?ndisScheduleD0CompleteSignalWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x14008CA60
 * Callers:
 *     ?ndisRequestDevicePowerD0@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x14003A230 (-ndisRequestDevicePowerD0@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     ?ndisSetPowerResumeComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1400C3650 (-ndisSetPowerResumeComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?ndisDevicePowerOn@@YAXPEAX@Z @ 0x140180E40 (-ndisDevicePowerOn@@YAXPEAX@Z.c)
 * Callees:
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x140011280 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisScheduleWorkItemInternal@@YAXPEAU_NDIS_WORK_ITEM@@@Z @ 0x1400371A0 (-ndisScheduleWorkItemInternal@@YAXPEAU_NDIS_WORK_ITEM@@@Z.c)
 */

void __fastcall ndisScheduleD0CompleteSignalWorkItem(struct _NDIS_MINIPORT_BLOCK *a1, int a2)
{
  KIRQL v4; // si
  bool v5; // zf

  v4 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  v5 = a1->D0CompleteSignalWorkItem.Scheduled == 0;
  a1->MiniportThread = KeGetCurrentThread();
  if ( v5 && (unsigned __int8)ndisReferenceMiniport(a1, 0x11u) )
  {
    a1->D0CompleteSignalWorkItem.Scheduled = 1;
    a1->D0CompleteSignalWorkItem.CompletionStatus = a2;
    ndisScheduleWorkItemInternal(&a1->D0CompleteSignalWorkItem.WorkItem);
  }
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v4);
}
