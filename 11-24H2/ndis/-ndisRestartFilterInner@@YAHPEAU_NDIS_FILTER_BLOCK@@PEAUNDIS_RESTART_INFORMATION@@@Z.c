/*
 * XREFs of ?ndisRestartFilterInner@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x140174100
 * Callers:
 *     ?ndisRestartFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1401545F0 (-ndisRestartFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_RESTART_INF.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x140014250 (WPP_RECORDER_SF_qL.c)
 *     ?FILTER_SET_FLAG@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z @ 0x140017B10 (-FILTER_SET_FLAG@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     McTemplateK0juqjzzz_EtwWriteTransfer @ 0x140037940 (McTemplateK0juqjzzz_EtwWriteTransfer.c)
 *     ?NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z @ 0x1400482F0 (-NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_qqZZ @ 0x1400555E0 (WPP_RECORDER_SF_qqZZ.c)
 *     ?FILTER_CLEAR_ALL_STATE_FLAGS@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x14007A690 (-FILTER_CLEAR_ALL_STATE_FLAGS@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140153F20 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 *     ?ndisFInvokeRestart@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_FILTER_RESTART_PARAMETERS@@@Z @ 0x140163670 (-ndisFInvokeRestart@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_FILTER_RESTART_PARAMETERS@@@Z.c)
 */

__int64 __fastcall ndisRestartFilterInner(struct _NDIS_FILTER_BLOCK *a1, struct NDIS_RESTART_INFORMATION *a2)
{
  _NDIS_MINIPORT_BLOCK *Miniport; // rdi
  struct NDIS_RESTART_INFORMATION *v3; // rsi
  struct _NDIS_FILTER_BLOCK *v5; // rcx
  KIRQL v6; // dl
  __int64 v7; // rdx
  __int64 v8; // r8
  _NDIS_FILTER_BLOCK *LowerFilter; // rcx
  unsigned int v10; // edi
  struct _NDIS_FILTER_BLOCK *v11; // rcx
  KIRQL v12; // dl
  _NDIS_MINIPORT_BLOCK *v14; // rcx
  struct _NDIS_FILTER_BLOCK *v15; // rcx
  KIRQL v16; // dl
  char v17[8]; // [rsp+30h] [rbp-49h]
  __int128 v18; // [rsp+50h] [rbp-29h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-19h] BYREF
  struct _NDIS_FILTER_RESTART_PARAMETERS v20; // [rsp+78h] [rbp-1h] BYREF
  unsigned __int8 v21; // [rsp+E0h] [rbp+67h] BYREF

  Miniport = a1->Miniport;
  *((_DWORD *)&v20.MiniportPhysicalMediaType + 1) = 0;
  *(&v20.LowerIfIndex + 1) = 0;
  v3 = a2;
  *(_QWORD *)&v20.Flags = 0LL;
  v18 = 0LL;
  memset(&Event, 0, sizeof(Event));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      1,
      15,
      (struct _GUID *)&WPP_4f475340cee13bebfed3041a3a58f669_Traceguids,
      (char)a1);
  }
  v21 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  a1->LockThread = KeGetCurrentThread();
  FILTER_CLEAR_ALL_STATE_FLAGS(a1);
  FILTER_SET_FLAG(v5, 32);
  v6 = v21;
  a1->LockThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v6);
  a1->State = NdisFilterRestarting;
  if ( (byte_14011B103 & 1) != 0 )
    McTemplateK0juqjzzz_EtwWriteTransfer(
      (__int64)&a1->Miniport->InterfaceGuid,
      (__int64)a1->FilterInstanceName.__ptr_.__value_,
      (__int64)&a1->InterfaceGuid,
      (__int64)&a1->InterfaceGuid,
      3,
      3,
      (__int64)&a1->Miniport->InterfaceGuid,
      a1->Miniport->pAdapterInstanceName->Buffer,
      a1->FilterInstanceName.__ptr_.__value_->Buffer,
      a1->FilterFriendlyName->Buffer);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  LowerFilter = a1->LowerFilter;
  a1->AsyncOpContext = (_FILTER_PAUSE_RESTART_CONTEXT *)&v18;
  v20.Header = (_NDIS_OBJECT_HEADER)3146139;
  v20.RestartAttributes = &v3->Attributes;
  if ( LowerFilter )
  {
    v20.MiniportMediaType = LowerFilter->MediaType;
    v20.MiniportPhysicalMediaType = LowerFilter->PhysicalMediaType;
    v20.LowerIfIndex = LowerFilter->IfIndex;
    v20.LowerIfNetLuid.Value = LowerFilter->IfBlock->NetLuid.Value;
  }
  else
  {
    v14 = a1->Miniport;
    v20.MiniportMediaType = v14->MiniportMediaType;
    v20.MiniportPhysicalMediaType = v14->MiniportPhysicalMediumType;
    v20.LowerIfIndex = v14->IfIndex;
    v20.LowerIfNetLuid.Value = v14->NetLuid.Value;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqZZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v7,
      v8,
      0x10u,
      (struct _GUID *)&WPP_4f475340cee13bebfed3041a3a58f669_Traceguids,
      (char)Miniport,
      (char)a1,
      &a1->FilterDriver->DefaultFilterCharacteristics.FriendlyName.Length,
      &Miniport->pAdapterInstanceName->Length);
  v10 = ndisFInvokeRestart(a1, &v20);
  if ( v10 == 259 )
  {
    ndisWaitForKernelObject(&Event);
    v10 = DWORD2(v18);
  }
  a1->AsyncOpContext = 0LL;
  if ( v10 )
  {
    a1->State = NdisFilterPaused;
    if ( (byte_14011B103 & 1) != 0 )
      McTemplateK0juqjzzz_EtwWriteTransfer(
        (__int64)&a1->Miniport->InterfaceGuid,
        (__int64)a1->FilterInstanceName.__ptr_.__value_,
        (__int64)&a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        2,
        4,
        (__int64)&a1->Miniport->InterfaceGuid,
        a1->Miniport->pAdapterInstanceName->Buffer,
        a1->FilterInstanceName.__ptr_.__value_->Buffer,
        a1->FilterFriendlyName->Buffer);
    NDIS_ACQUIRE_FILTER_SPIN_LOCK(a1, &v21);
    FILTER_CLEAR_ALL_STATE_FLAGS(a1);
    FILTER_SET_FLAG(v15, 4);
    v16 = v21;
    a1->LockThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v16);
  }
  else
  {
    a1->IfBlock->AccessType = v3->General.AccessType;
    a1->IfBlock->ConnectionType = v3->General.ConnectionType;
    a1->IfBlock->ifMtu = v3->General.MtuSize;
    v21 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
    a1->LockThread = KeGetCurrentThread();
    FILTER_CLEAR_ALL_STATE_FLAGS(a1);
    FILTER_SET_FLAG(v11, 16);
    v12 = v21;
    a1->LockThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v12);
    a1->State = NdisFilterRunning;
    if ( (byte_14011B103 & 1) != 0 )
      McTemplateK0juqjzzz_EtwWriteTransfer(
        (__int64)&a1->Miniport->InterfaceGuid,
        (__int64)a1->FilterInstanceName.__ptr_.__value_,
        (__int64)&a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        4,
        5,
        (__int64)&a1->Miniport->InterfaceGuid,
        a1->Miniport->pAdapterInstanceName->Buffer,
        a1->FilterInstanceName.__ptr_.__value_->Buffer,
        a1->FilterFriendlyName->Buffer);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v17 = v10;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x11u,
      (struct _GUID *)&WPP_4f475340cee13bebfed3041a3a58f669_Traceguids,
      (char)a1,
      *(_QWORD *)v17);
  }
  return v10;
}
