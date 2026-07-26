/*
 * XREFs of ?ndisScheduleWorkItemInternal@@YAXPEAU_NDIS_WORK_ITEM@@@Z @ 0x14005ABD0
 * Callers:
 *     ?ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x14003EB50 (-ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ?ndisNsiScheduleIfBlockRodChangeNotification@@YAJPEAU_NDIS_IF_BLOCK@@PEAEKK@Z @ 0x14005AAB0 (-ndisNsiScheduleIfBlockRodChangeNotification@@YAJPEAU_NDIS_IF_BLOCK@@PEAEKK@Z.c)
 *     NdisScheduleWorkItem @ 0x14005AB90 (NdisScheduleWorkItem.c)
 *     ?ndisAoAcScheduleWakeWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x14005B0C0 (-ndisAoAcScheduleWakeWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     ?ndisUpdateAndIndicatePMCapabilities@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14005B600 (-ndisUpdateAndIndicatePMCapabilities@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisTempRefTimerDpc@@YAXPEAX000@Z @ 0x14005B870 (-ndisTempRefTimerDpc@@YAXPEAX000@Z.c)
 *     ?ndisIdleWaitWakeCallback@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x14005B8E0 (-ndisIdleWaitWakeCallback@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z.c)
 *     ?ndisSSIdleTimerDpc@@YAXPEAX000@Z @ 0x140078EF0 (-ndisSSIdleTimerDpc@@YAXPEAX000@Z.c)
 *     ?ndisInitModeTimeoutDpc@@YAXPEAX000@Z @ 0x14008FA60 (-ndisInitModeTimeoutDpc@@YAXPEAX000@Z.c)
 *     ?ndisScheduleD0CompleteSignalWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x140098210 (-ndisScheduleD0CompleteSignalWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 *     NdisMResetMiniport @ 0x1400A9990 (NdisMResetMiniport.c)
 *     NdisMReenumerateFailedAdapter @ 0x1400AFB30 (NdisMReenumerateFailedAdapter.c)
 *     ?ndisPdcTaskClientDisableTimeoutDpc@@YAXPEAX000@Z @ 0x1400BBBC0 (-ndisPdcTaskClientDisableTimeoutDpc@@YAXPEAX000@Z.c)
 *     ndisNsiScheduleCompartmentBlockChangeNotification @ 0x1400D2904 (ndisNsiScheduleCompartmentBlockChangeNotification.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisScheduleWorkItemInternal(struct _NDIS_WORK_ITEM *a1)
{
  *(_QWORD *)&a1->WrapperReserved[24] = a1;
  *(_QWORD *)&a1->WrapperReserved[16] = ndisWorkItemHandler;
  *(_QWORD *)a1->WrapperReserved = 0LL;
  ExQueueWorkItem((PWORK_QUEUE_ITEM)a1->WrapperReserved, CustomPriorityWorkQueue|RealTimeWorkQueue|0x8);
}
