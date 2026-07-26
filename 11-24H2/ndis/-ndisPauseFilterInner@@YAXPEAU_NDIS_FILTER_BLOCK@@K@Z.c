/*
 * XREFs of ?ndisPauseFilterInner@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z @ 0x140175480
 * Callers:
 *     ?ndisPauseFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x140152680 (-ndisPauseFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     ?FILTER_SET_FLAG@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z @ 0x140017B10 (-FILTER_SET_FLAG@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     McTemplateK0juqjzzz_EtwWriteTransfer @ 0x140037940 (McTemplateK0juqjzzz_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_DqqZZ @ 0x14005DC60 (WPP_RECORDER_SF_DqqZZ.c)
 *     ?FILTER_CLEAR_ALL_STATE_FLAGS@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x14007A690 (-FILTER_CLEAR_ALL_STATE_FLAGS@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     ?ndisWaitForEventThenDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAU_KEVENT@@@Z @ 0x1401523D0 (-ndisWaitForEventThenDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAU_KEVENT@@@Z.c)
 *     ?ndisAllocateArmedWatchdog@@YAPEAUNDISWATCHDOG__@@PEAXK0K_K@Z @ 0x1401528A0 (-ndisAllocateArmedWatchdog@@YAPEAUNDISWATCHDOG__@@PEAXK0K_K@Z.c)
 *     ?ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x140153320 (-ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 *     ?ndisFInvokePause@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_FILTER_PAUSE_PARAMETERS@@@Z @ 0x140162410 (-ndisFInvokePause@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_FILTER_PAUSE_PARAMETERS@@@Z.c)
 */

void __fastcall ndisPauseFilterInner(struct _NDIS_FILTER_BLOCK *a1)
{
  _NDIS_MINIPORT_BLOCK *Miniport; // rbx
  struct _NDIS_FILTER_BLOCK *v3; // rcx
  KIRQL v4; // r8
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  _NDIS_FILTER_DRIVER_BLOCK *FilterDriver; // r8
  struct NDISWATCHDOG__ *ArmedWatchdog; // rbx
  struct _NDIS_FILTER_BLOCK *v10; // rcx
  KIRQL v11; // r8
  int v12; // [rsp+20h] [rbp-98h]
  int v13; // [rsp+28h] [rbp-90h]
  __int128 v14; // [rsp+50h] [rbp-68h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-58h] BYREF
  struct _NDIS_FILTER_PAUSE_PARAMETERS v16; // [rsp+78h] [rbp-40h] BYREF

  Miniport = a1->Miniport;
  v14 = 0LL;
  memset(&Event, 0, sizeof(Event));
  *(_QWORD *)&v16.Header.Type = 0LL;
  v16.PauseReason = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      10,
      (struct _GUID *)&WPP_4f475340cee13bebfed3041a3a58f669_Traceguids,
      (char)a1);
  if ( a1->State == NdisFilterRunning )
  {
    KeAcquireSpinLockRaiseToDpc(&a1->Lock);
    a1->LockThread = KeGetCurrentThread();
    FILTER_CLEAR_ALL_STATE_FLAGS(a1);
    FILTER_SET_FLAG(v3, 2);
    a1->LockThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v4);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DqqZZ(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v5,
        v6,
        v7,
        v12,
        v13,
        (char)Miniport,
        (char)a1,
        &a1->FilterDriver->DefaultFilterCharacteristics.FriendlyName.Length,
        &Miniport->pAdapterInstanceName->Length);
    a1->State = NdisFilterPausing;
    if ( (byte_14011B103 & 1) != 0 )
      McTemplateK0juqjzzz_EtwWriteTransfer(
        (__int64)&a1->Miniport->InterfaceGuid,
        (__int64)a1->FilterInstanceName.__ptr_.__value_,
        (__int64)&a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        5,
        1,
        (__int64)&a1->Miniport->InterfaceGuid,
        a1->Miniport->pAdapterInstanceName->Buffer,
        a1->FilterInstanceName.__ptr_.__value_->Buffer,
        a1->FilterFriendlyName->Buffer);
    KeInitializeEvent(&Event, NotificationEvent, 0);
    FilterDriver = a1->FilterDriver;
    a1->AsyncOpContext = (_FILTER_PAUSE_RESTART_CONTEXT *)&v14;
    v16.Header = (_NDIS_OBJECT_HEADER)786842;
    v16.PauseReason = 1;
    ArmedWatchdog = ndisAllocateArmedWatchdog(
                      a1,
                      0x11u,
                      FilterDriver->DefaultFilterCharacteristics.PauseHandler,
                      ndisWatchdogPnPTimeout,
                      0LL);
    if ( (unsigned int)ndisFInvokePause(a1, &v16) == 259 )
      ndisWaitForEventThenDisarmWatchdog(ArmedWatchdog, &Event);
    if ( ArmedWatchdog != (struct NDISWATCHDOG__ *)-1LL )
      ndisFreeWatchdog(ArmedWatchdog);
    a1->AsyncOpContext = 0LL;
    KeAcquireSpinLockRaiseToDpc(&a1->Lock);
    a1->LockThread = KeGetCurrentThread();
    FILTER_CLEAR_ALL_STATE_FLAGS(a1);
    FILTER_SET_FLAG(v10, 4);
    a1->LockThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v11);
    a1->State = NdisFilterPaused;
    if ( (byte_14011B103 & 1) != 0 )
      McTemplateK0juqjzzz_EtwWriteTransfer(
        (__int64)&a1->Miniport->InterfaceGuid,
        (__int64)a1->FilterInstanceName.__ptr_.__value_,
        (__int64)&a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        2,
        2,
        (__int64)&a1->Miniport->InterfaceGuid,
        a1->Miniport->pAdapterInstanceName->Buffer,
        a1->FilterInstanceName.__ptr_.__value_->Buffer,
        a1->FilterFriendlyName->Buffer);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      12,
      (struct _GUID *)&WPP_4f475340cee13bebfed3041a3a58f669_Traceguids,
      (char)a1);
}
