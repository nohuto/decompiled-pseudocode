/*
 * XREFs of ?ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x14017F560
 * Callers:
 *     ?ndisUnbindEachProtocolOpenOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x14015ECA0 (-ndisUnbindEachProtocolOpenOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14002B910 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x140036F70 (WPP_RECORDER_SF_.c)
 *     ?ndisNotifyWmiBindUnbind@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z @ 0x140054D20 (-ndisNotifyWmiBindUnbind@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z.c)
 *     ?MiniportSupportsReceiveThrottle@@YA_NPEBU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140067E60 (-MiniportSupportsReceiveThrottle@@YA_NPEBU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x140068440 (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1?ndisFreeWatchdog@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@_J$0?0$$T@details@wil@@@details@wil@@QEAAXPEAUNDISWATCHDOG__@@@Z @ 0x14006E0E0 (-reset@-$unique_storage@U-$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1-ndisFreeWatchdog@@.c)
 *     ?ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z @ 0x140071400 (-ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z.c)
 *     ?ndisReferenceProtocol@@YAEPEAU_NDIS_PROTOCOL_BLOCK@@W4_NDIS_PT_REFTAG@@@Z @ 0x140071B10 (-ndisReferenceProtocol@@YAEPEAU_NDIS_PROTOCOL_BLOCK@@W4_NDIS_PT_REFTAG@@@Z.c)
 *     ?ndisBindUnbindPeriodicReceives@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_M_PERIODIC_RECEIVE_ACTION@@@Z @ 0x140098C40 (-ndisBindUnbindPeriodicReceives@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_M_PERIODIC_RECEIVE_ACTION@.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 *     ?ndisWaitForEventThenDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAU_KEVENT@@@Z @ 0x14015E750 (-ndisWaitForEventThenDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAU_KEVENT@@@Z.c)
 *     ?ndisMakeWatchdog@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1?ndisFreeWatchdog@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@_J$0?0$$T@details@wil@@@details@wil@@@wil@@PEAXK0K_K@Z @ 0x14015F620 (-ndisMakeWatchdog@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUNDISWATCHDOG__@@.c)
 *     ?ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x14015FB90 (-ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 *     ?RELEASE_PROT_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x140160710 (-RELEASE_PROT_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?WAIT_FOR_PROTO_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x140160750 (-WAIT_FOR_PROTO_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140160790 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 *     ?ndisInvokeUnbindAdapter@@YAHPEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_BIND_CONTEXT@@@Z @ 0x140171010 (-ndisInvokeUnbindAdapter@@YAHPEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_BIND_CONT.c)
 *     NdisCloseAdapter @ 0x14017F9C0 (NdisCloseAdapter.c)
 */

void __fastcall ndisUnbindProtocolOpen(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OPEN_BLOCK *a2)
{
  _NDIS_PROTOCOL_BLOCK *ProtocolHandle; // rsi
  bool v3; // r15
  struct _NDIS_OPEN_BLOCK *v4; // rdi
  KIRQL v6; // al
  KIRQL v7; // r13
  _KEVENT *WaitNetPnpEvent; // rbx
  __int64 v9; // rbx
  __int64 v10; // rcx
  int v11; // edx
  int v12; // r9d
  bool v13; // zf
  struct NDISWATCHDOG__ **Watchdog; // r15
  int v15; // edx
  void *ProtocolBindingContext; // rdx
  char v17; // [rsp+28h] [rbp-D8h]
  __int64 v18; // [rsp+30h] [rbp-D0h] BYREF
  struct _KEVENT v19; // [rsp+38h] [rbp-C8h] BYREF
  struct _KEVENT Event; // [rsp+50h] [rbp-B0h] BYREF
  struct _KEVENT v21; // [rsp+68h] [rbp-98h] BYREF
  _OWORD v22[5]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v23; // [rsp+D0h] [rbp-30h]
  struct _KEVENT v24[4]; // [rsp+E0h] [rbp-20h] BYREF
  bool v25; // [rsp+150h] [rbp+50h]
  int v26; // [rsp+158h] [rbp+58h] BYREF
  struct NDISWATCHDOG__ *v27; // [rsp+160h] [rbp+60h] BYREF

  ProtocolHandle = a2->ProtocolHandle;
  v26 = 0;
  memset(v22, 0, sizeof(v22));
  v3 = 0;
  v4 = a2;
  v23 = 0LL;
  memset(v24, 0, 48);
  memset(&Event, 0, sizeof(Event));
  memset(&v21, 0, sizeof(v21));
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v17 = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      6,
      14,
      (struct _GUID *)&WPP_a3a0dfe1e6d739a64d48f097d248e118_Traceguids,
      v17);
  }
  KeInitializeEvent(&Event, NotificationEvent, 0);
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  v25 = ndisReferenceProtocol(ProtocolHandle, 6u);
  WAIT_FOR_PROTO_MUTEX(ProtocolHandle);
  v6 = KeAcquireSpinLockRaiseToDpc(&ProtocolHandle->Ref.SpinLock);
  KeReleaseSpinLock(&ProtocolHandle->Ref.SpinLock, v6);
  v7 = KeAcquireSpinLockRaiseToDpc(&v4->SpinLock);
  v4->OpenFlags |= 0x10000u;
  if ( (v4->OpenFlags & 0x10) != 0 )
  {
    KeInitializeEvent(&v21, NotificationEvent, 0);
    v4->WaitNetPnpEvent = &v21;
  }
  WaitNetPnpEvent = v4->WaitNetPnpEvent;
  if ( v4->ProtocolHandle->MajorNdisVersion < 6u )
    v3 = (v4->OpenFlags & 0x40000000) != 0;
  v4->CloseCompleteEvent = &Event;
  KeReleaseSpinLock(&v4->SpinLock, v7);
  if ( WaitNetPnpEvent )
    ndisWaitForKernelObject(WaitNetPnpEvent);
  if ( (a1->Flags & 0x20000) != 0 )
  {
    memset(&v19, 0, sizeof(v19));
    KeInitializeEvent(&v19, NotificationEvent, 0);
    v13 = v4->PendingAfNotifications == 0;
    v4->AfNotifyCompleteEvent = &v19;
    if ( !v13 )
      ndisWaitForKernelObject(&v19);
    v4->AfNotifyCompleteEvent = 0LL;
  }
  KeInitializeEvent(v24, NotificationEvent, 0);
  a1->ProcessingOpen = v4;
  v9 = -1LL;
  v18 = -1LL;
  if ( v3 )
  {
    DWORD2(v23) = 0;
    v4->UnsolicitedUnbindEvent = v24;
    v4->PendingLegacyUnbind = 1;
    NdisCloseAdapter(&v26, v4);
  }
  else if ( ProtocolHandle->MajorNdisVersion < 6u )
  {
    ProtocolBindingContext = v4->ProtocolBindingContext;
    v4->PendingLegacyUnbind = 1;
    ProtocolHandle->UnbindAdapterHandler(&v26, ProtocolBindingContext, v22);
  }
  else
  {
    Watchdog = ndisMakeWatchdog(&v27, v4, 4u, ProtocolHandle->UnbindAdapterHandlerEx, ndisWatchdogPnPTimeout, 0LL);
    if ( &v18 != (__int64 *)Watchdog )
    {
      wil::details::unique_storage<wil::details::resource_policy<NDISWATCHDOG__ *,void (*)(NDISWATCHDOG__ *),&void ndisFreeWatchdog(NDISWATCHDOG__ *),wistd::integral_constant<unsigned __int64,1>,NDISWATCHDOG__ *,__int64,-1,std::nullptr_t>>::reset(
        (struct NDISWATCHDOG__ **)&v18,
        *Watchdog);
      *Watchdog = (struct NDISWATCHDOG__ *)-1LL;
      v9 = v18;
    }
    if ( v27 != (struct NDISWATCHDOG__ *)-1LL )
      ndisFreeWatchdog(v27);
    v26 = ndisInvokeUnbindAdapter(ProtocolHandle, v4, (struct _NDIS_BIND_CONTEXT *)v22);
  }
  if ( v26 == 259 )
  {
    ndisWaitForEventThenDisarmWatchdog((struct NDISWATCHDOG__ *)v9, v24);
    v26 = DWORD2(v23);
  }
  a1->ProcessingOpen = 0LL;
  if ( v9 != -1 )
    ndisFreeWatchdog((struct NDISWATCHDOG__ *)v9);
  ndisNotifyWmiBindUnbind(a1, ProtocolHandle, 0);
  if ( !MiniportSupportsReceiveThrottle(a1) )
  {
    if ( ProtocolHandle->IsIPv4 )
    {
      v15 = 3;
    }
    else
    {
      if ( !ProtocolHandle->IsIPv6 && !ProtocolHandle->IsNdisTest6 )
        goto LABEL_17;
      v15 = 4;
    }
    ndisBindUnbindPeriodicReceives(v10, v15);
  }
LABEL_17:
  ndisWaitForKernelObject(&Event);
  RELEASE_PROT_MUTEX(ProtocolHandle);
  ndisDereferencePackage((PVOID *)&ndisPkgs);
  if ( v25 )
    ndisDereferenceProtocol(ProtocolHandle, 0, 6u, v12);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v11) = 4;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v11,
      6,
      15,
      (struct _GUID *)&WPP_a3a0dfe1e6d739a64d48f097d248e118_Traceguids);
  }
}
