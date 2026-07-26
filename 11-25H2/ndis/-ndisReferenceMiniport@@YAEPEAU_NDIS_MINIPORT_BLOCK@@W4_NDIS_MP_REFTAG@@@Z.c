/*
 * XREFs of ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x14000E960
 * Callers:
 *     ?ndisDoDirectOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x140027C30 (-ndisDoDirectOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BL.c)
 *     ?ndisReferenceMiniportByGuid@@YAPEAU_NDIS_MINIPORT_BLOCK@@AEBU_GUID@@W4_NDIS_MP_REFTAG@@@Z @ 0x140029710 (-ndisReferenceMiniportByGuid@@YAPEAU_NDIS_MINIPORT_BLOCK@@AEBU_GUID@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisReferenceMiniportByNetLuid@@YAPEAU_NDIS_MINIPORT_BLOCK@@T_NET_LUID_LH@@W4_NDIS_MP_REFTAG@@@Z @ 0x14004AF60 (-ndisReferenceMiniportByNetLuid@@YAPEAU_NDIS_MINIPORT_BLOCK@@T_NET_LUID_LH@@W4_NDIS_MP_REFTAG@@@.c)
 *     NdisLWMStartNetworkInterface @ 0x14004E090 (NdisLWMStartNetworkInterface.c)
 *     ?ndisAoAcScheduleWakeWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x14005B0C0 (-ndisAoAcScheduleWakeWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     NdisIMDeInitializeDeviceInstance @ 0x14005BAF0 (NdisIMDeInitializeDeviceInstance.c)
 *     ?ndisCreatePMRejectWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_SINGLE_LIST_ENTRY@@H@Z @ 0x14005C170 (-ndisCreatePMRejectWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_SINGLE_LIST_ENTRY@@H@Z.c)
 *     ?ndisRequestWaitWake@@YAJPEAU_NDIS_MINIPORT_BLOCK@@P6AXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z@Z @ 0x14005D8D0 (-ndisRequestWaitWake@@YAJPEAU_NDIS_MINIPORT_BLOCK@@P6AXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXP.c)
 *     ?ndisSetTempRefTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1400646F0 (-ndisSetTempRefTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ndisCsResiliencyCallback @ 0x140064F10 (ndisCsResiliencyCallback.c)
 *     ?ndisReferenceMiniportByHandle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z @ 0x1400653B0 (-ndisReferenceMiniportByHandle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x140068470 (-ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     NdisAllocateIoWorkItem @ 0x1400721D0 (NdisAllocateIoWorkItem.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x140072EB0 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     ?ndisPcwEnumerateInstances@@YAJPEAU_PCW_BUFFER@@@Z @ 0x1400748E0 (-ndisPcwEnumerateInstances@@YAJPEAU_PCW_BUFFER@@@Z.c)
 *     ?ndisSSIdleTimerDpc@@YAXPEAX000@Z @ 0x140078EF0 (-ndisSSIdleTimerDpc@@YAXPEAX000@Z.c)
 *     ?ndisSubmitIdleRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x14007A3D0 (-ndisSubmitIdleRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     NdisWdfMiniportTryReference @ 0x14007CB00 (NdisWdfMiniportTryReference.c)
 *     ndisWnfPdcCallback @ 0x14007D060 (ndisWnfPdcCallback.c)
 *     ?ndisPcwCollectPhysicalData@@YAJPEAU_PCW_BUFFER@@@Z @ 0x1400809F0 (-ndisPcwCollectPhysicalData@@YAJPEAU_PCW_BUFFER@@@Z.c)
 *     NdisMAllocatePort @ 0x140080BE0 (NdisMAllocatePort.c)
 *     ?ndisSetMediaDisconnectTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140081E60 (-ndisSetMediaDisconnectTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisNblTrackerReportStuckNbl@@YAXPEAU_NDIS_NBL_TRACKER@@@Z @ 0x140082380 (-ndisNblTrackerReportStuckNbl@@YAXPEAU_NDIS_NBL_TRACKER@@@Z.c)
 *     ?ndisPcwGetReferencesForConsumer@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@PEAU_NDIS_PCW_CONSUMER_BLOCK@@@Z @ 0x140085680 (-ndisPcwGetReferencesForConsumer@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@PEAU_.c)
 *     ndisNdkPcwEnumerateInstances @ 0x14008C270 (ndisNdkPcwEnumerateInstances.c)
 *     ?ndisCreatePMAddRemoveWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x14008C380 (-ndisCreatePMAddRemoveWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_O.c)
 *     McGenControlCallbackV2 @ 0x140091C20 (McGenControlCallbackV2.c)
 *     ?ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z @ 0x140093540 (-ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z.c)
 *     ?ndisScheduleD0CompleteSignalWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x140098210 (-ndisScheduleD0CompleteSignalWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 *     NdisMAllocateSharedMemoryAsync @ 0x14009D250 (NdisMAllocateSharedMemoryAsync.c)
 *     ?ndisInvokeDeviceReset@@YAJPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_INVOKE_DEVICE_RESET@@W4_NDIS_MP_REFTAG@@@Z @ 0x14009F190 (-ndisInvokeDeviceReset@@YAJPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_INVOKE_DEVICE_RESET@.c)
 *     ?ndisQueryDeviceReset@@YAJPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KKPEAIPEAU_NDIS_QUERY_DEVICE_RESET@@@Z @ 0x14009F2E0 (-ndisQueryDeviceReset@@YAJPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KKPEAIPEAU_NDIS_QUERY_DEVICE_RES.c)
 *     NdisMResetMiniport @ 0x1400A9990 (NdisMResetMiniport.c)
 *     ndisMapOpenByName @ 0x1400AB468 (ndisMapOpenByName.c)
 *     ?ndisPnPIrpStopDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1400AF6E0 (-ndisPnPIrpStopDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     NdisMReenumerateFailedAdapter @ 0x1400AFB30 (NdisMReenumerateFailedAdapter.c)
 *     ?ndisAllocateReceiveQueue@@YAEPEAU_NDIS_REQ_TRACKER@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RECEIVE_FILTER_CAPABILITIES@@@Z @ 0x1400B1638 (-ndisAllocateReceiveQueue@@YAEPEAU_NDIS_REQ_TRACKER@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RECEIVE.c)
 *     ?ndisSetReceiveFilter@@YAEPEAU_NDIS_REQ_TRACKER@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_NIC_SWITCH_CAPABILITIES@@PEAU_NDIS_SRIOV_CAPABILITIES@@@Z @ 0x1400B31D0 (-ndisSetReceiveFilter@@YAEPEAU_NDIS_REQ_TRACKER@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_NIC_SWITCH_.c)
 *     ?ndisPktMonRegisterAllMiniports@@YAXXZ @ 0x1400B9BF0 (-ndisPktMonRegisterAllMiniports@@YAXXZ.c)
 *     ?ndisCreatePMPdcTaskClientWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400BA48C (-ndisCreatePMPdcTaskClientWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisSetPdcTaskClientExpiryTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1400BD928 (-ndisSetPdcTaskClientExpiryTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ @ 0x1400BF220 (-ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ.c)
 *     ndisNdkPcwAddCounter @ 0x1400C0900 (ndisNdkPcwAddCounter.c)
 *     ?ndisQueueRestoreRequestsOnTop@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@IE@Z @ 0x1400C50C0 (-ndisQueueRestoreRequestsOnTop@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@IE@Z.c)
 *     ?ndisEnableWppTracingCallback@@YAXPEBU_GUID@@_JEKE@Z @ 0x1400CC034 (-ndisEnableWppTracingCallback@@YAXPEBU_GUID@@_JEKE@Z.c)
 *     NdisMCmRegisterAddressFamilyEx @ 0x1400D6CA0 (NdisMCmRegisterAddressFamilyEx.c)
 *     ?ndisDmaAddCpuNotify@@YAJEKJ@Z @ 0x1400E1124 (-ndisDmaAddCpuNotify@@YAJEKJ@Z.c)
 *     ?ndisOidPrePDOpenProvider@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140147DD0 (-ndisOidPrePDOpenProvider@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ForEachLink@NDIS_BIND_DRIVER_BASE@@QEAAXP6AXPEAUNDIS_BIND_LINK_BASE@@@Z@Z @ 0x14015E140 (-ForEachLink@NDIS_BIND_DRIVER_BASE@@QEAAXP6AXPEAUNDIS_BIND_LINK_BASE@@@Z@Z.c)
 *     ?ndisPcwCollectData@@YAJPEAU_PCW_BUFFER@@@Z @ 0x140166850 (-ndisPcwCollectData@@YAJPEAU_PCW_BUFFER@@@Z.c)
 *     ?ndisMStartInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1401746F0 (-ndisMStartInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisPktMonComponentNotify @ 0x140176750 (ndisPktMonComponentNotify.c)
 *     NdisMCmRegisterAddressFamily @ 0x14017D8C0 (NdisMCmRegisterAddressFamily.c)
 *     ?ndisReferenceMiniportByName@@YAXPEBU_UNICODE_STRING@@PEAPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z @ 0x14017DCF0 (-ndisReferenceMiniportByName@@YAXPEBU_UNICODE_STRING@@PEAPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_R.c)
 *     ndisReferenceNextUnprocessedMiniport @ 0x14017F420 (ndisReferenceNextUnprocessedMiniport.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x140189A40 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 *     ?ndisMOpenAdapter@@YAXPEAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14018B420 (-ndisMOpenAdapter@@YAXPEAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x14000E820 (NdisReferenceWithTag.c)
 *     WPP_RECORDER_SF_qL @ 0x14000EA50 (WPP_RECORDER_SF_qL.c)
 */

__int64 __fastcall ndisReferenceMiniport(struct _NDIS_MINIPORT_BLOCK *a1, unsigned __int8 a2)
{
  _ULONG_REFERENCE *p_Ref; // rbx
  unsigned __int8 v5; // si
  int v6; // edx
  KIRQL v7; // r14
  NDIS_REFCOUNT_HANDLE__ *RefCountTracker; // rcx
  unsigned int ReferenceCount; // ecx

  p_Ref = &a1->Ref;
  v5 = 1;
  v7 = KeAcquireSpinLockRaiseToDpc(&a1->Ref.SpinLock);
  if ( p_Ref->Closing )
    goto LABEL_6;
  RefCountTracker = a1->RefCountTracker;
  if ( RefCountTracker )
    NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)RefCountTracker, a2);
  ReferenceCount = p_Ref->ReferenceCount;
  p_Ref->ReferenceCount = ReferenceCount + 1;
  if ( ReferenceCount == -1 )
  {
    p_Ref->ReferenceCount = -1;
LABEL_6:
    v5 = 0;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v6,
      20,
      12,
      (struct _GUID *)&WPP_72d2fa87a3a93fc51dc3e318202acea4_Traceguids,
      (char)a1,
      a1->Ref.ReferenceCount);
  }
  KeReleaseSpinLock(&p_Ref->SpinLock, v7);
  return v5;
}
