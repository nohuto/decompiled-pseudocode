/*
 * XREFs of ?ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@@IPEAU_STRING@@0@Z @ 0x140084490
 * Callers:
 *     ?ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x14016BDD0 (-ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PR.c)
 *     NdisOpenAdapter @ 0x140172840 (NdisOpenAdapter.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x140010F90 (NdisReferenceWithTag.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400129C0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z @ 0x1400132F0 (-ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14002E9A0 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_qqq @ 0x14003E6D0 (WPP_RECORDER_SF_qqq.c)
 *     WPP_RECORDER_SF_qqqL @ 0x140045670 (WPP_RECORDER_SF_qqqL.c)
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x140051CB0 (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisNotifyWmiBindUnbind@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z @ 0x140051FC0 (-ndisNotifyWmiBindUnbind@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z.c)
 *     ?ndisMSwapOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x140052500 (-ndisMSwapOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z @ 0x1400565A0 (-ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_Dql @ 0x140056690 (WPP_RECORDER_SF_Dql_ea_140056690.c)
 *     WPP_RECORDER_SF_DqlD @ 0x140056F30 (WPP_RECORDER_SF_DqlD.c)
 *     WPP_RECORDER_SF_Zq @ 0x1400598A0 (WPP_RECORDER_SF_Zq.c)
 *     WPP_RECORDER_SF_qZZ @ 0x14005D4B0 (WPP_RECORDER_SF_qZZ.c)
 *     ?ndisRemoveOpenFromGlobalList@@YAEPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x140060A00 (-ndisRemoveOpenFromGlobalList@@YAEPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisAllocateOpenBlock@@YAPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z @ 0x14007BBB0 (-ndisAllocateOpenBlock@@YAPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLO.c)
 *     ?ndisFreeOpenBlock@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x14007BD10 (-ndisFreeOpenBlock@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x14008FFEC (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1400901EC (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 *     memset @ 0x1400E7500 (memset.c)
 *     ?ndisInvokeOpenAdapterComplete@@_Y2PAGE@@AXPEAU_NDIS_OPEN_BLOCK@@H@Z @ 0x1401400F4 (-ndisInvokeOpenAdapterComplete@@_Y2PAGE@@AXPEAU_NDIS_OPEN_BLOCK@@H@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x140143E18 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x140155F00 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1401593A0 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?CreateDynamicBinding@BindStack@Ndis@@QEAAPEAUNDIS_BIND_PROTOCOL_LINK@@AEAV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_NDIS_MINIPORT_BLOCK@@W4Flags@BindSource@2@@Z @ 0x14015DFA0 (-CreateDynamicBinding@BindStack@Ndis@@QEAAPEAUNDIS_BIND_PROTOCOL_LINK@@AEAV-$KRef@UNDIS_BIND_PRO.c)
 *     ?unref@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXXZ @ 0x14015E250 (-unref@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXXZ.c)
 *     ?AddBindContext@BindState@Ndis@@QEAA_NPEAX@Z @ 0x1401603A0 (-AddBindContext@BindState@Ndis@@QEAA_NPEAX@Z.c)
 *     ndisPktMonOpenRegister @ 0x140160F70 (ndisPktMonOpenRegister.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x140161800 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x140162130 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?GetCurrentLink@BindEngine@Ndis@@QEBAPEAUNDIS_BIND_LINK_BASE@@XZ @ 0x140166770 (-GetCurrentLink@BindEngine@Ndis@@QEBAPEAUNDIS_BIND_LINK_BASE@@XZ.c)
 *     ?ndisMDoMiniportOp@@YAJPEAU_NDIS_MINIPORT_BLOCK@@EKPEAXJJE@Z @ 0x140167EF0 (-ndisMDoMiniportOp@@YAJPEAU_NDIS_MINIPORT_BLOCK@@EKPEAXJJE@Z.c)
 *     ndisFindRootDevice @ 0x140175C60 (ndisFindRootDevice.c)
 *     ?ndisMOpenAdapter@@YAXPEAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14017E480 (-ndisMOpenAdapter@@YAXPEAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisOpenAdapterLegacyProtocol(
        int *a1,
        int *a2,
        void **a3,
        unsigned int *a4,
        enum _NDIS_MEDIUM *a5,
        unsigned int a6,
        unsigned __int16 *P,
        void *a8,
        struct _UNICODE_STRING *a9,
        char a10,
        struct _NDIS_MINIPORT_BLOCK *a11,
        int *a12)
{
  struct _NDIS_MINIPORT_BLOCK *BindingAdapter; // rbx
  struct _NDIS_OPEN_BLOCK *OpenBlock; // rsi
  struct _NDIS_PROTOCOL_BLOCK *v16; // rdi
  int v17; // r14d
  KIRQL v18; // r12
  unsigned __int16 ReferenceCount; // ax
  struct _NDIS_REFCOUNT_BLOCK *RefCountTracker; // rcx
  int v21; // r8d
  int v22; // r9d
  char v23; // r14
  bool v24; // cl
  char v25; // r13
  struct _UNICODE_STRING *v26; // r14
  struct NDIS_BIND_PROTOCOL_LINK *DynamicBinding; // r14
  int v28; // edx
  char v29; // dl
  char v30; // r8
  int v31; // r9d
  char v32; // r14
  int v33; // edx
  KIRQL v34; // r14
  PVOID *p_NextProtocol; // rcx
  struct _NDIS_PROTOCOL_BLOCK *v36; // rax
  __int64 v37; // rdx
  __int64 v38; // r8
  wchar_t *Buffer; // rcx
  struct _KEVENT *DeregEvent; // rcx
  TriageData *value; // r14
  unsigned int Flags; // eax
  KIRQL v43; // al
  unsigned int v44; // ecx
  enum _NDIS_MEDIUM *v45; // rax
  KIRQL v46; // r12
  struct _NDIS_MINIPORT_BLOCK *v47; // rdx
  struct _NDIS_MINIPORT_BLOCK *i; // rbx
  struct _NDIS_MINIPORT_BLOCK *v49; // rbx
  struct _NDIS_MINIPORT_BLOCK *v50; // rbx
  int v51; // edx
  __int64 Pool2; // r13
  struct NDIS_BIND_LINK_BASE *CurrentLink; // rax
  int v54; // edx
  void (__fastcall **BusInterface)(_QWORD); // rcx
  __int64 v56; // rdx
  _X_FILTER *EthDB; // rax
  _NDIS_STATUS_UNBIND_WORKITEM *StatusUnbindWorkItem; // rcx
  int v59; // edx
  struct _GUID *v60; // [rsp+20h] [rbp-E0h]
  struct _GUID *v61; // [rsp+20h] [rbp-E0h]
  struct _NDIS_PROTOCOL_BLOCK **v62; // [rsp+30h] [rbp-D0h]
  __int64 v63; // [rsp+50h] [rbp-B0h]
  _UNICODE_STRING *BindDeviceName; // [rsp+50h] [rbp-B0h]
  __int64 v65; // [rsp+58h] [rbp-A8h] BYREF
  _UNICODE_STRING *RootDeviceName; // [rsp+60h] [rbp-A0h]
  __int64 v67; // [rsp+68h] [rbp-98h]
  struct _NDIS_PROTOCOL_BLOCK *v68; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING String1; // [rsp+78h] [rbp-88h] BYREF
  int *v70; // [rsp+90h] [rbp-70h] BYREF
  void **v71; // [rsp+98h] [rbp-68h]
  unsigned int *v72; // [rsp+A0h] [rbp-60h]
  enum _NDIS_MEDIUM *v73; // [rsp+A8h] [rbp-58h]
  unsigned int v74; // [rsp+B0h] [rbp-50h]
  int v75; // [rsp+B4h] [rbp-4Ch]
  struct _NDIS_PROTOCOL_BLOCK *v76; // [rsp+B8h] [rbp-48h]
  void *v77; // [rsp+C0h] [rbp-40h]
  struct _UNICODE_STRING *v78; // [rsp+C8h] [rbp-38h]
  char v79[224]; // [rsp+D0h] [rbp-30h] BYREF
  char v80; // [rsp+1C0h] [rbp+C0h]
  char v81; // [rsp+1C8h] [rbp+C8h]

  *(_QWORD *)&String1.Length = 2359330LL;
  BindingAdapter = 0LL;
  v67 = 0LL;
  a11 = 0LL;
  v81 = 0;
  v80 = 0;
  a10 = 0;
  OpenBlock = 0LL;
  RootDeviceName = 0LL;
  v65 = 0LL;
  String1.Buffer = L"\\??\\ROOT#VMS_VSMP";
  v16 = (struct _NDIS_PROTOCOL_BLOCK *)P;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qZZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (__int64)a2,
      (__int64)a3,
      0x19u,
      (int)v60,
      (char)P,
      P + 36,
      &a9->Length);
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  *a3 = 0LL;
  v68 = v16;
  v17 = 1;
  v18 = KeAcquireSpinLockRaiseToDpc(&v16->Ref.SpinLock);
  if ( !v16->Ref.Closing )
  {
    ReferenceCount = v16->Ref.ReferenceCount;
    if ( ReferenceCount >= 0xFFEBu )
    {
      ndisRefCountReferenceCountOverflow = 1;
      v17 = 2;
    }
    else
    {
      RefCountTracker = (struct _NDIS_REFCOUNT_BLOCK *)v16->Ref.RefCountTracker;
      v16->Ref.ReferenceCount = ReferenceCount + 1;
      NdisReferenceWithTag(RefCountTracker, 9u);
      v17 = 0;
    }
  }
  KeReleaseSpinLock(&v16->Ref.SpinLock, v18);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v62 = &v68;
    WPP_RECORDER_SF_DqlD(*((_QWORD *)WPP_GLOBAL_Control + 8), v68->Ref.ReferenceCount, v21, v22, (__int64)v60);
  }
  if ( v17 )
  {
    v23 = 0;
    *a1 = -1073676286;
    goto LABEL_116;
  }
  v81 = 1;
  v63 = (unsigned int)Feature_CheckProtocolMutexOwner__private_featureState;
  if ( (Feature_CheckProtocolMutexOwner__private_featureState & 0x10) == 0 )
  {
    LODWORD(v63) = Feature_CheckProtocolMutexOwner__private_featureState | 1;
    LODWORD(P) = 3;
    if ( (unsigned int)wil_details_FeatureReporting_ReportUsageToServiceDirect(
                         &Feature_CheckProtocolMutexOwner__private_descriptor,
                         v63,
                         2LL)
      && g_wil_details_pfnFeatureLoggingHook )
    {
      LOBYTE(v62) = 0;
      g_wil_details_pfnFeatureLoggingHook(43402173LL, &Feature_UxLabTest_logged_traits, 0LL, 1LL, &P, 0LL, v62, 1LL);
    }
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v63,
      3LL,
      &Feature_CheckProtocolMutexOwner__private_descriptor);
  }
  v24 = v16->MutexOwnerThread != KeGetCurrentThread();
  BindDeviceName = v16->BindDeviceName;
  if ( !BindDeviceName || v24 )
  {
    v26 = a9;
    ndisFindRootDevice((__int64)a9, (__int64)&a11, 44);
    BindingAdapter = a11;
    if ( a11 )
    {
      v71 = a3;
      v72 = a4;
      v73 = a5;
      v74 = a6;
      v77 = a8;
      v75 = 0;
      v70 = a1;
      v76 = v16;
      v78 = v26;
      Ndis::BindEngine::BeginPolicyUpdates(&a11->BindEngine);
      DynamicBinding = (struct NDIS_BIND_PROTOCOL_LINK *)Ndis::BindStack::CreateDynamicBinding(
                                                           &BindingAdapter->Bindings,
                                                           &v16->Bind,
                                                           BindingAdapter,
                                                           4LL);
      if ( DynamicBinding )
      {
        DynamicBinding->BindState.m_AdditionalContext = &v70;
        if ( Ndis::BindState::SetBinding(
               &DynamicBinding->BindState,
               BindingEnabled,
               Reason_DisabledByLegacyIoctl|Reason_DriverRejectedBinding|Reason_LastRestartAttemptFailed|Reason_LastBindAttemptFailed) )
        {
          memset(v79, 0, 0xA0uLL);
          if ( (unsigned __int8)byte_14011CBA3 >= 4u )
          {
            ndisGetBindLinkNameForTracing(DynamicBinding, (struct NDIS_PNPTRACE_LOCALS *)v79);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_Zq(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v28,
                0x1Cu,
                0x1Au,
                (struct _GUID *)&WPP_ae366525395e343a98801eaac4c5345b_Traceguids,
                *(unsigned __int16 **)&v79[8],
                *(_QWORD *)v79);
          }
        }
      }
      else
      {
        *a1 = -1073741670;
      }
      Ndis::BindEngine::EndPolicyUpdates(&BindingAdapter->BindEngine);
      Ndis::BindEngine::ApplyBindChanges(&BindingAdapter->BindEngine, RunSynchronous, 0);
      if ( !*v71 && !*a1 )
        *a1 = -1073676271;
      v81 = 0;
      v32 = (char)v16;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Dql(*((_QWORD *)WPP_GLOBAL_Control + 8), v29, v30, v31, (__int64)v61);
      if ( (unsigned __int8)ndisDereferenceRef(&v16->Ref.SpinLock, 9u) )
      {
        v34 = KeAcquireSpinLockRaiseToDpc(&ndisProtocolListLock);
        p_NextProtocol = &ndisProtocolList;
        v36 = (struct _NDIS_PROTOCOL_BLOCK *)ndisProtocolList;
        if ( ndisProtocolList )
        {
          while ( v36 != v16 )
          {
            p_NextProtocol = (PVOID *)&v36->NextProtocol;
            v36 = v36->NextProtocol;
            if ( !v36 )
              goto LABEL_37;
          }
          *p_NextProtocol = v16->NextProtocol;
          ObfDereferenceObject(ndisDriverObject);
        }
LABEL_37:
        KeReleaseSpinLock(&ndisProtocolListLock, v34);
        Buffer = v16->ImageName.Buffer;
        if ( Buffer )
        {
          ExFreePoolWithTag(Buffer, 0);
          v16->ImageName.Buffer = 0LL;
        }
        DeregEvent = v16->DeregEvent;
        if ( DeregEvent )
          KeSetEvent(DeregEvent, 0, 0);
        value = v16->Triage.__ptr_.__value_;
        v16->Triage.__ptr_.__value_ = 0LL;
        if ( value )
        {
          ((void (__fastcall *)(TriageData *, _QWORD))value->~TriageData)(value, 0LL);
          ExFreePoolWithTag(value, 0);
        }
        KRef<NDIS_BIND_PROTOCOL_DRIVER>::unref(&v16->Bind, v37, v38);
        ExFreePoolWithTag(v16, 0);
        v32 = 0;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v33) = 4;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v33,
          5,
          43,
          (struct _GUID *)&WPP_ae366525395e343a98801eaac4c5345b_Traceguids,
          v32);
      }
      ndisDereferenceMiniport(BindingAdapter, 0x2Cu);
      v23 = 0;
      goto LABEL_116;
    }
    v25 = 1;
    a10 = 1;
  }
  else
  {
    v25 = 0;
    BindingAdapter = v16->BindingAdapter;
    RootDeviceName = v16->RootDeviceName;
    a11 = BindingAdapter;
  }
  v16->BindDeviceName = 0LL;
  if ( !BindingAdapter || (Flags = BindingAdapter->Flags, BindingAdapter = a11, (Flags & 0x10000) == 0) )
  {
    *a1 = -1073676282;
    goto LABEL_115;
  }
  if ( RtlPrefixUnicodeString(&String1, &a11->SymbolicLinkName, 1u) )
  {
    *a1 = -1073676281;
LABEL_115:
    v23 = a10;
    goto LABEL_116;
  }
  OpenBlock = (struct _NDIS_OPEN_BLOCK *)ndisAllocateOpenBlock(BindingAdapter, v16, 0);
  if ( !OpenBlock )
  {
    *a1 = -1073741670;
    goto LABEL_115;
  }
  v43 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalOpenListLock);
  OpenBlock->NextGlobalOpen = ndisGlobalOpenList;
  ndisGlobalOpenList = OpenBlock;
  v80 = 1;
  KeReleaseSpinLock(&ndisGlobalOpenListLock, v43);
  v44 = 0;
  OpenBlock->BindDeviceName = BindDeviceName;
  OpenBlock->RootDeviceName = RootDeviceName;
  OpenBlock->ProtocolBindingContext = a8;
  OpenBlock->MiniportHandle = BindingAdapter;
  OpenBlock->ProtocolHandle = v16;
  *a3 = OpenBlock;
  if ( (BindingAdapter->MacOptions & 0x80000001) == 0x80000001 )
  {
    if ( a6 )
    {
      v45 = a5;
      do
      {
        if ( *v45 == NdisMediumWan )
          break;
        ++v44;
        ++v45;
      }
      while ( v44 < a6 );
    }
  }
  else if ( a6 )
  {
    v22 = (int)a5;
    do
    {
      if ( a5[v44] == BindingAdapter->MediaType )
        break;
      ++v44;
    }
    while ( v44 < a6 );
  }
  if ( v44 == a6 )
  {
    *a1 = -1073676263;
    goto LABEL_115;
  }
  *a4 = v44;
  if ( (BindingAdapter->PnPFlags & 0x40000000) != 0 )
  {
    v65 = 0x100080180LL;
    if ( (unsigned int)ndisMDoMiniportOp(BindingAdapter, 0, 0x1021Eu, &v65, 8, 1, 1u) )
    {
      *a1 = -1073741823;
      goto LABEL_115;
    }
  }
  v46 = KeAcquireSpinLockRaiseToDpc(&BindingAdapter->Lock);
  v47 = a11;
  a11->MiniportThread = KeGetCurrentThread();
  if ( (v47->Flags & 0x40000) == 0 )
  {
    for ( i = a11; i->LockAcquired; i->MiniportThread = KeGetCurrentThread() )
    {
      i->MiniportThread = 0LL;
      KeReleaseSpinLockFromDpcLevel(&i->Lock);
      KeStallExecutionProcessor(1u);
      KeAcquireSpinLockAtDpcLevel(&i->Lock);
    }
    i->LockAcquired = 1;
    a11->LockThread = KeGetCurrentThread();
  }
  v49 = a11;
  ndisMOpenAdapter(a1, OpenBlock, a11);
  if ( *a1 )
    goto LABEL_88;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x1Bu,
      (struct _GUID *)&WPP_ae366525395e343a98801eaac4c5345b_Traceguids,
      (char)OpenBlock,
      (char)v16,
      v49);
  if ( v25 )
    OpenBlock->OpenFlags |= 0x400000u;
  if ( (a11->Flags & 0x20000000) != 0 || (a11->Flags & 0x20000) != 0 )
  {
    v50 = a11;
  }
  else
  {
    v50 = a11;
    ndisMSwapOpenHandlers(a11, 2u);
  }
  if ( (v50->Flags & 0x20000) != 0 && OpenBlock->ProtocolHandle->CoAfRegisterNotifyHandler )
  {
    Pool2 = ExAllocatePool2(64LL, 40LL, 1769423950LL);
    if ( Pool2 )
    {
      ndisMReferenceOpen((__int64)OpenBlock, 0);
      _InterlockedIncrement(&OpenBlock->PendingAfNotifications);
      *(_QWORD *)Pool2 = OpenBlock;
      *(_QWORD *)(Pool2 + 24) = ndisMFinishQueuedPendingOpen;
      *(_QWORD *)(Pool2 + 32) = Pool2;
      *(_QWORD *)(Pool2 + 8) = 0LL;
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v51) = 2;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v51,
        19,
        28,
        (struct _GUID *)&WPP_ae366525395e343a98801eaac4c5345b_Traceguids,
        (char)OpenBlock);
    }
  }
  else
  {
LABEL_88:
    Pool2 = v67;
  }
  BindingAdapter = a11;
  if ( (a11->Flags & 0x40000) == 0 )
  {
    a11->LockAcquired = 0;
    BindingAdapter->LockThread = 0LL;
  }
  BindingAdapter->MiniportThread = 0LL;
  KeReleaseSpinLock(&BindingAdapter->Lock, v46);
  if ( *a1 )
    goto LABEL_115;
  Ndis::BindEngine::BeginPolicyUpdates(&BindingAdapter->BindEngine);
  CurrentLink = Ndis::BindEngine::GetCurrentLink(&BindingAdapter->BindEngine);
  OpenBlock->Bind = (NDIS_BIND_PROTOCOL_LINK *)CurrentLink;
  if ( !Ndis::BindState::AddBindContext(&CurrentLink->BindState, OpenBlock) )
    *a1 = -1073741670;
  Ndis::BindEngine::EndPolicyUpdates(&BindingAdapter->BindEngine);
  v54 = *a1;
  if ( *a1 )
    goto LABEL_115;
  if ( (BindingAdapter->PnPFlags & 0x2000) != 0 )
  {
    BusInterface = (void (__fastcall **)(_QWORD))BindingAdapter->BusInterface;
    if ( BusInterface )
    {
      BusInterface[4](BusInterface[1]);
      v54 = *a1;
    }
  }
  if ( a12 )
  {
    *a12 = v54;
    a12 = 0LL;
  }
  ndisPktMonOpenRegister((char)OpenBlock);
  if ( !Pool2 )
  {
    v23 = a10;
    goto LABEL_119;
  }
  v56 = (unsigned int)*a1;
  if ( v16->MajorNdisVersion < 6u )
    OpenBlock->ProtocolHandle->OpenAdapterCompleteHandler(OpenBlock->ProtocolBindingContext, v56, v56);
  else
    ndisInvokeOpenAdapterComplete(OpenBlock, v56);
  EthDB = BindingAdapter->EthDB;
  if ( EthDB && EthDB->SingleActiveOpen || !BindingAdapter->LoopbackOpens || BindingAdapter->NumOpens <= 1u )
    _InterlockedAnd((volatile signed __int32 *)&BindingAdapter->Flags, 0xFFFFBFFF);
  else
    _InterlockedOr((volatile signed __int32 *)&BindingAdapter->Flags, 0x4000u);
  v23 = a10;
  BindingAdapter = a11;
  if ( a10 )
  {
    ndisNotifyWmiBindUnbind(a11, v16, 1u);
    a10 = 0;
    v23 = 0;
  }
  ExQueueWorkItem((PWORK_QUEUE_ITEM)(Pool2 + 8), (WORK_QUEUE_TYPE)40);
  *a1 = 259;
LABEL_116:
  if ( a12 )
    *a12 = *a1;
LABEL_119:
  if ( *a1 )
  {
    if ( *a1 != 259 )
    {
      if ( v81 )
        ndisDereferenceProtocol(v16, 0, 9u, v22);
      if ( v80 )
        ndisRemoveOpenFromGlobalList(OpenBlock);
      if ( OpenBlock )
      {
        StatusUnbindWorkItem = OpenBlock->StatusUnbindWorkItem;
        if ( StatusUnbindWorkItem )
        {
          ExFreePoolWithTag(StatusUnbindWorkItem, 0);
          OpenBlock->StatusUnbindWorkItem = 0LL;
        }
        ndisFreeOpenBlock(OpenBlock);
      }
      *a3 = 0LL;
    }
  }
  else if ( v23 && BindingAdapter )
  {
    ndisNotifyWmiBindUnbind(BindingAdapter, v16, 1u);
  }
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v59,
      6u,
      0x1Du,
      (struct _GUID *)&WPP_ae366525395e343a98801eaac4c5345b_Traceguids,
      (char)v16,
      (char)a11,
      (char)OpenBlock,
      *a1);
}
