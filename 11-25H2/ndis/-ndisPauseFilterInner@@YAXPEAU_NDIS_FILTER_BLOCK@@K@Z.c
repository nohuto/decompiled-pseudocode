/*
 * XREFs of ?ndisPauseFilterInner@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z @ 0x140183290
 * Callers:
 *     ?ndisPauseFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x14015F380 (-ndisPauseFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     ?FILTER_SET_FLAG@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z @ 0x140022000 (-FILTER_SET_FLAG@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     McTemplateK0juqjzzz_EtwWriteTransfer @ 0x140024C70 (McTemplateK0juqjzzz_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_DqqZZ @ 0x1400795A0 (WPP_RECORDER_SF_DqqZZ.c)
 *     ?FILTER_CLEAR_ALL_STATE_FLAGS@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x140092F80 (-FILTER_CLEAR_ALL_STATE_FLAGS@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     ?ndisWaitForEventThenDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAU_KEVENT@@@Z @ 0x14015E750 (-ndisWaitForEventThenDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAU_KEVENT@@@Z.c)
 *     ?ndisAllocateArmedWatchdog@@YAPEAUNDISWATCHDOG__@@PEAXK0K_K@Z @ 0x14015F5A0 (-ndisAllocateArmedWatchdog@@YAPEAUNDISWATCHDOG__@@PEAXK0K_K@Z.c)
 *     ?ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x14015FB90 (-ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 *     ?ndisFInvokePause@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_FILTER_PAUSE_PARAMETERS@@@Z @ 0x14016DAB0 (-ndisFInvokePause@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_FILTER_PAUSE_PARAMETERS@@@Z.c)
 */

void __fastcall ndisPauseFilterInner(struct _NDIS_FILTER_BLOCK *a1)
{
  _NDIS_MINIPORT_BLOCK *Miniport; // rbp
  KIRQL v3; // bl
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  _NDIS_FILTER_DRIVER_BLOCK *FilterDriver; // r8
  struct NDISWATCHDOG__ *ArmedWatchdog; // rbx
  KIRQL v9; // al
  KIRQL v10; // bl
  int v11; // [rsp+20h] [rbp-98h]
  int v12; // [rsp+28h] [rbp-90h]
  __int128 v13; // [rsp+50h] [rbp-68h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-58h] BYREF
  struct _NDIS_FILTER_PAUSE_PARAMETERS v15; // [rsp+78h] [rbp-40h] BYREF

  Miniport = a1->Miniport;
  v13 = 0LL;
  memset(&Event, 0, sizeof(Event));
  *(_QWORD *)&v15.Header.Type = 0LL;
  v15.PauseReason = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      10,
      (struct _GUID *)&WPP_b6f031e119d53d3b975f13e0c06480b9_Traceguids,
      (char)a1);
  if ( a1->State == NdisFilterRunning )
  {
    v3 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
    a1->LockThread = KeGetCurrentThread();
    FILTER_CLEAR_ALL_STATE_FLAGS(a1);
    FILTER_SET_FLAG(a1, 2);
    a1->LockThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v3);
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DqqZZ(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v4,
        v5,
        v6,
        v11,
        v12,
        (char)Miniport,
        (char)a1,
        &a1->FilterDriver->DefaultFilterCharacteristics.FriendlyName.Length,
        &Miniport->pAdapterInstanceName->Length);
    a1->State = NdisFilterPausing;
    if ( (byte_140125103 & 1) != 0 )
      McTemplateK0juqjzzz_EtwWriteTransfer(
        (__int64)&a1->Miniport->InterfaceGuid,
        (__int64)a1->FilterInstanceName.__ptr_.__value_,
        &a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        5,
        1,
        (__int64)&a1->Miniport->InterfaceGuid,
        a1->Miniport->pAdapterInstanceName->Buffer,
        a1->FilterInstanceName.__ptr_.__value_->Buffer,
        a1->FilterFriendlyName->Buffer);
    KeInitializeEvent(&Event, NotificationEvent, 0);
    FilterDriver = a1->FilterDriver;
    a1->AsyncOpContext = (_FILTER_PAUSE_RESTART_CONTEXT *)&v13;
    v15.Header = (_NDIS_OBJECT_HEADER)786842;
    v15.PauseReason = 1;
    ArmedWatchdog = ndisAllocateArmedWatchdog(
                      a1,
                      0x11u,
                      FilterDriver->DefaultFilterCharacteristics.PauseHandler,
                      ndisWatchdogPnPTimeout,
                      0LL);
    if ( (unsigned int)ndisFInvokePause(a1, &v15) == 259 )
      ndisWaitForEventThenDisarmWatchdog(ArmedWatchdog, &Event);
    if ( ArmedWatchdog != (struct NDISWATCHDOG__ *)-1LL )
      ndisFreeWatchdog(ArmedWatchdog);
    a1->AsyncOpContext = 0LL;
    v9 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
    a1->LockThread = KeGetCurrentThread();
    v10 = v9;
    FILTER_CLEAR_ALL_STATE_FLAGS(a1);
    FILTER_SET_FLAG(a1, 4);
    a1->LockThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v10);
    a1->State = NdisFilterPaused;
    if ( (byte_140125103 & 1) != 0 )
      McTemplateK0juqjzzz_EtwWriteTransfer(
        (__int64)&a1->Miniport->InterfaceGuid,
        (__int64)a1->FilterInstanceName.__ptr_.__value_,
        &a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        2,
        2,
        (__int64)&a1->Miniport->InterfaceGuid,
        a1->Miniport->pAdapterInstanceName->Buffer,
        a1->FilterInstanceName.__ptr_.__value_->Buffer,
        a1->FilterFriendlyName->Buffer);
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      12,
      (struct _GUID *)&WPP_b6f031e119d53d3b975f13e0c06480b9_Traceguids,
      (char)a1);
}
