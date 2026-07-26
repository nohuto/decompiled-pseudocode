/*
 * XREFs of ?ndisDevicePnPEventNotifyMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@Z @ 0x140077AB0
 * Callers:
 *     ?ndisPnPIrpSurpriseRemoval@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1400806E0 (-ndisPnPIrpSurpriseRemoval@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisNotifyMiniports@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@Z @ 0x140175810 (-ndisNotifyMiniports@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@Z.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x140010F90 (NdisReferenceWithTag.c)
 *     ?ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z @ 0x1400132F0 (-ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z.c)
 *     WPP_RECORDER_SF_qL @ 0x140014250 (WPP_RECORDER_SF_qL.c)
 *     ?NdisWdfGetCxBlockFromMiniport@@YAPEAU_NDIS_WDF_CX_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140038840 (-NdisWdfGetCxBlockFromMiniport@@YAPEAU_NDIS_WDF_CX_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisWdfSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x140086A20 (-ndisWdfSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z.c)
 *     ?ndisWdmSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x140086C40 (-ndisWdmSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140153F20 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 *     ?ndisFInvokeDevicePnPEventNotify@@_Y2PAGE@@AXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_DEVICE_PNP_EVENT@@@Z @ 0x140163120 (-ndisFInvokeDevicePnPEventNotify@@_Y2PAGE@@AXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_DEVICE_PNP_EVENT@@.c)
 *     ?ndisMInvokeDevicePnPEventNotifyHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_DEVICE_PNP_EVENT@@@Z @ 0x1401640C0 (-ndisMInvokeDevicePnPEventNotifyHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_DEVICE_PNP_EVENT@.c)
 */

void __fastcall ndisDevicePnPEventNotifyMiniport(
        struct _NDIS_MINIPORT_BLOCK *a1,
        enum _NDIS_DEVICE_PNP_EVENT a2,
        void *a3,
        unsigned int a4)
{
  enum _NDIS_DEVICE_PNP_EVENT v6; // edi
  KIRQL v8; // al
  _NDIS_FILTER_BLOCK *HighestFilter; // rbx
  KIRQL v10; // r14
  unsigned __int16 ReferenceCount; // ax
  struct _NDIS_REFCOUNT_BLOCK *RefCountTracker; // rcx
  KIRQL v13; // al
  unsigned __int8 *NdisReserved; // rdx
  KIRQL v15; // r12
  KIRQL v16; // r14
  unsigned __int16 v17; // cx
  void (__fastcall *PnPEventNotifyHandler)(void *, _NDIS_DEVICE_PNP_EVENT, void *, unsigned int); // rax
  struct _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rdi
  unsigned int Flags; // ebx
  KIRQL v21; // al
  KIRQL v22; // r14
  struct _NDIS_WDF_CX_DRIVER_BLOCK *CxBlockFromMiniport; // rax
  __int64 v24; // [rsp+30h] [rbp-79h]
  KIRQL v25; // [rsp+40h] [rbp-69h]
  struct _KEVENT Event; // [rsp+48h] [rbp-61h] BYREF
  _QWORD Parameter[4]; // [rsp+60h] [rbp-49h] BYREF
  struct _NET_DEVICE_PNP_EVENT v29; // [rsp+80h] [rbp-29h] BYREF

  v6 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x10u,
      (struct _GUID *)&WPP_9f67bee46862369e16808214337f5b41_Traceguids,
      (char)a1,
      a2);
  *(_QWORD *)&v29.Header.Type = 3146112LL;
  *((_DWORD *)&v29.DevicePnPEvent + 1) = 0;
  memset(v29.NdisReserved, 0, 20);
  v29.DevicePnPEvent = v6;
  v29.InformationBuffer = a3;
  v29.InformationBufferLength = a4;
  v8 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  HighestFilter = a1->HighestFilter;
  v25 = v8;
  a1->MiniportThread = KeGetCurrentThread();
  if ( !HighestFilter )
    goto LABEL_11;
  while ( 1 )
  {
    v10 = KeAcquireSpinLockRaiseToDpc(&HighestFilter->PnPRef.SpinLock);
    if ( !HighestFilter->PnPRef.Closing )
      break;
LABEL_7:
    KeReleaseSpinLock(&HighestFilter->PnPRef.SpinLock, v10);
    HighestFilter = HighestFilter->LowerFilter;
    if ( !HighestFilter )
      goto LABEL_10;
  }
  ReferenceCount = HighestFilter->PnPRef.ReferenceCount;
  if ( ReferenceCount >= 0xFFEBu )
  {
    ndisRefCountReferenceCountOverflow = 1;
    goto LABEL_7;
  }
  RefCountTracker = (struct _NDIS_REFCOUNT_BLOCK *)HighestFilter->PnPRef.RefCountTracker;
  HighestFilter->PnPRef.ReferenceCount = ReferenceCount + 1;
  NdisReferenceWithTag(RefCountTracker, 6u);
  KeReleaseSpinLock(&HighestFilter->PnPRef.SpinLock, v10);
LABEL_10:
  v6 = a2;
LABEL_11:
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v25);
  if ( HighestFilter )
  {
    if ( HighestFilter->FilterDriver->DefaultFilterCharacteristics.DevicePnPEventNotifyHandler )
    {
      ndisFInvokeDevicePnPEventNotify(HighestFilter, &v29);
      ndisDereferenceRef(&HighestFilter->PnPRef.SpinLock, 6u);
    }
    else
    {
      Parameter[3] = &v29;
      Parameter[0] = 0LL;
      Parameter[2] = 0LL;
      Parameter[1] = HighestFilter;
      if ( KeExpandKernelStackAndCalloutEx(ndisFDevicePnPEventNotifyInternal, Parameter, (unsigned int)Size, 0, 0LL) < 0 )
      {
        memset(&Event, 0, sizeof(Event));
        KeInitializeEvent(&Event, SynchronizationEvent, 0);
        v13 = KeAcquireSpinLockRaiseToDpc(&HighestFilter->Lock);
        NdisReserved = v29.NdisReserved;
        HighestFilter->LockThread = KeGetCurrentThread();
        v15 = v13;
        if ( !HighestFilter->StackExpansionFallback.PendingWork.DevicePnPEvents )
          NdisReserved = (unsigned __int8 *)&HighestFilter->StackExpansionFallback.PendingWork.DevicePnPEvents;
        *(_QWORD *)NdisReserved = &v29;
        *(_QWORD *)&v29.NdisReserved[8] = &Event;
        *(_QWORD *)v29.NdisReserved = 0LL;
        if ( !HighestFilter->StackExpansionFallback.WorkItemQueued )
        {
          v16 = KeAcquireSpinLockRaiseToDpc(&HighestFilter->Ref.SpinLock);
          if ( !HighestFilter->Ref.Closing )
          {
            v17 = HighestFilter->Ref.ReferenceCount;
            if ( v17 >= 0xFFEBu )
            {
              ndisRefCountReferenceCountOverflow = 1;
            }
            else
            {
              HighestFilter->Ref.ReferenceCount = v17 + 1;
              NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)HighestFilter->Ref.RefCountTracker, 1u);
            }
          }
          KeReleaseSpinLock(&HighestFilter->Ref.SpinLock, v16);
          HighestFilter->StackExpansionFallback.WorkItemQueued = 1;
          ExQueueWorkItem(&HighestFilter->StackExpansionFallback.WorkItem, NormalWorkQueue);
        }
        HighestFilter->LockThread = 0LL;
        KeReleaseSpinLock(&HighestFilter->Lock, v15);
        ndisWaitForKernelObject(&Event);
      }
      ndisDereferenceRef(&HighestFilter->PnPRef.SpinLock, 6u);
    }
  }
  else if ( a1->MajorNdisVersion >= 6u )
  {
    if ( (a1->Flags & 0x80u) == 0 && (a1->Flags & 0x100) == 0 )
    {
      if ( a1->SelectiveSuspend )
      {
        if ( (a1->Flags & 0x80u) == 0 )
          ndisWdmSetBusySync(a1, 37LL, 0LL);
        else
          ndisWdfSetBusySync(a1, 37LL, 0LL);
      }
      ndisMInvokeDevicePnPEventNotifyHandler(a1, &v29);
      SelectiveSuspend = a1->SelectiveSuspend;
      if ( SelectiveSuspend )
      {
        Flags = a1->Flags;
        v21 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1->SelectiveSuspend);
        --*((_DWORD *)SelectiveSuspend + 129);
        v22 = v21;
        if ( (Flags & 0x80u) != 0
          && !*((_DWORD *)SelectiveSuspend + 128)
          && !*((_DWORD *)SelectiveSuspend + 129)
          && !*((_DWORD *)SelectiveSuspend + 132)
          && !*((_DWORD *)SelectiveSuspend + 133)
          && !*((_DWORD *)SelectiveSuspend + 130)
          && !*((_DWORD *)SelectiveSuspend + 131)
          && !*((_DWORD *)SelectiveSuspend + 144)
          && !*((_DWORD *)SelectiveSuspend + 127) )
        {
          CxBlockFromMiniport = NdisWdfGetCxBlockFromMiniport(a1);
          CxBlockFromMiniport->Chars.EvtCxPowerDereference(a1->MiniportAdapterContext);
        }
        KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v22);
      }
    }
  }
  else
  {
    PnPEventNotifyHandler = a1->DriverHandle->MiniportCharacteristics.PnPEventNotifyHandler;
    if ( PnPEventNotifyHandler )
      PnPEventNotifyHandler(a1->MiniportAdapterContext, v6, a3, a4);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v24) = a2;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x11u,
      (struct _GUID *)&WPP_9f67bee46862369e16808214337f5b41_Traceguids,
      (char)a1,
      v24);
  }
}
