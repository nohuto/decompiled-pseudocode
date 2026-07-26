/*
 * XREFs of ?ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@@IPEAU_STRING@@0@Z @ 0x1400768C0
 * Callers:
 *     ?ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x14015E7A0 (-ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PR.c)
 *     NdisOpenAdapter @ 0x14017D810 (NdisOpenAdapter.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x14000F080 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     ?ndisFreeOpenBlock@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x140016FE0 (-ndisFreeOpenBlock@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140025750 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14002B910 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_qqqL @ 0x14004F5B0 (WPP_RECORDER_SF_qqqL.c)
 *     WPP_RECORDER_SF_qqq @ 0x140053160 (WPP_RECORDER_SF_qqq.c)
 *     ?ndisUpdateCheckForLoopbackFlag@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140053C40 (-ndisUpdateCheckForLoopbackFlag@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisNotifyWmiBindUnbind@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z @ 0x140054D20 (-ndisNotifyWmiBindUnbind@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z.c)
 *     ?ndisMSwapOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1400554F0 (-ndisMSwapOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x14005AF00 (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisAllocateOpenBlock@@YAPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z @ 0x14006E230 (-ndisAllocateOpenBlock@@YAPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLO.c)
 *     ?ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z @ 0x140071400 (-ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z.c)
 *     ?ndisReferenceProtocol@@YAEPEAU_NDIS_PROTOCOL_BLOCK@@W4_NDIS_PT_REFTAG@@@Z @ 0x140071B10 (-ndisReferenceProtocol@@YAEPEAU_NDIS_PROTOCOL_BLOCK@@W4_NDIS_PT_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_Zq @ 0x140074520 (WPP_RECORDER_SF_Zq.c)
 *     WPP_RECORDER_SF_qZZ @ 0x140078910 (WPP_RECORDER_SF_qZZ.c)
 *     ?ndisRemoveOpenFromGlobalList@@YAEPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x14007C4D0 (-ndisRemoveOpenFromGlobalList@@YAEPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x14009FB3C (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14009FD3C (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 *     memset @ 0x1400EE380 (memset.c)
 *     ?ndisInvokeOpenAdapterComplete@@_Y2PAGE@@AXPEAU_NDIS_OPEN_BLOCK@@H@Z @ 0x14014AFB4 (-ndisInvokeOpenAdapterComplete@@_Y2PAGE@@AXPEAU_NDIS_OPEN_BLOCK@@H@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x14014EAE0 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x14015D9B0 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x140162770 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x140165C10 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?CreateDynamicBinding@BindStack@Ndis@@QEAAPEAUNDIS_BIND_PROTOCOL_LINK@@AEAV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_NDIS_MINIPORT_BLOCK@@W4Flags@BindSource@2@@Z @ 0x14016AEF0 (-CreateDynamicBinding@BindStack@Ndis@@QEAAPEAUNDIS_BIND_PROTOCOL_LINK@@AEAV-$KRef@UNDIS_BIND_PRO.c)
 *     ?AddBindContext@BindState@Ndis@@QEAA_NPEAX@Z @ 0x14016C400 (-AddBindContext@BindState@Ndis@@QEAA_NPEAX@Z.c)
 *     ndisPktMonOpenRegister @ 0x14016D210 (ndisPktMonOpenRegister.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x14016D7D0 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?GetCurrentLink@BindEngine@Ndis@@QEBAPEAUNDIS_BIND_LINK_BASE@@XZ @ 0x140173070 (-GetCurrentLink@BindEngine@Ndis@@QEBAPEAUNDIS_BIND_LINK_BASE@@XZ.c)
 *     ?ndisMDoMiniportOp@@YAJPEAU_NDIS_MINIPORT_BLOCK@@EKPEAXJJE@Z @ 0x140174760 (-ndisMDoMiniportOp@@YAJPEAU_NDIS_MINIPORT_BLOCK@@EKPEAXJJE@Z.c)
 *     ndisFindRootDevice @ 0x140183630 (ndisFindRootDevice.c)
 *     ?ndisMOpenAdapter@@YAXPEAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14018B420 (-ndisMOpenAdapter@@YAXPEAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisOpenAdapterLegacyProtocol(
        int *a1,
        int *a2,
        void **a3,
        unsigned int *a4,
        enum _NDIS_MEDIUM *a5,
        unsigned int a6,
        struct _NDIS_PROTOCOL_BLOCK *a7,
        void *a8,
        struct _UNICODE_STRING *a9,
        char a10,
        struct _STRING *a11,
        int *a12)
{
  struct _NDIS_OPEN_BLOCK *OpenBlock; // rdi
  struct _NDIS_MINIPORT_BLOCK *BindingAdapter; // rbx
  struct _NDIS_PROTOCOL_BLOCK *v17; // r15
  int v18; // r9d
  _UNICODE_STRING *v19; // r12
  bool v20; // cl
  _UNICODE_STRING *RootDeviceName; // r14
  struct NDIS_BIND_PROTOCOL_LINK *DynamicBinding; // r14
  int v23; // r9d
  int v24; // edx
  KIRQL v25; // al
  __int64 v26; // rcx
  enum _NDIS_MEDIUM *v27; // rax
  KIRQL v28; // r13
  struct _NDIS_MINIPORT_BLOCK *v29; // r14
  int v30; // edx
  __int64 Pool2; // r12
  struct NDIS_BIND_LINK_BASE *CurrentLink; // rax
  int v33; // edx
  void (__fastcall **BusInterface)(_QWORD); // rcx
  __int64 v35; // rdx
  struct _NDIS_MINIPORT_BLOCK *v36; // rcx
  _NDIS_STATUS_UNBIND_WORKITEM *StatusUnbindWorkItem; // rcx
  int v38; // edx
  int v39; // [rsp+30h] [rbp-D0h]
  struct _NDIS_MINIPORT_BLOCK *v40; // [rsp+50h] [rbp-B0h] BYREF
  _UNICODE_STRING *BindDeviceName; // [rsp+58h] [rbp-A8h]
  __int64 v42; // [rsp+60h] [rbp-A0h] BYREF
  _UNICODE_STRING *v43; // [rsp+68h] [rbp-98h]
  __int64 v44; // [rsp+70h] [rbp-90h]
  UNICODE_STRING String1; // [rsp+78h] [rbp-88h] BYREF
  int *v46; // [rsp+90h] [rbp-70h] BYREF
  void **v47; // [rsp+98h] [rbp-68h]
  unsigned int *v48; // [rsp+A0h] [rbp-60h]
  enum _NDIS_MEDIUM *v49; // [rsp+A8h] [rbp-58h]
  unsigned int v50; // [rsp+B0h] [rbp-50h]
  int v51; // [rsp+B4h] [rbp-4Ch]
  struct _NDIS_PROTOCOL_BLOCK *v52; // [rsp+B8h] [rbp-48h]
  void *v53; // [rsp+C0h] [rbp-40h]
  struct _UNICODE_STRING *v54; // [rsp+C8h] [rbp-38h]
  char v55[208]; // [rsp+D0h] [rbp-30h] BYREF
  char v56; // [rsp+1B0h] [rbp+B0h]
  char v57; // [rsp+1B8h] [rbp+B8h]
  char v59; // [rsp+1F8h] [rbp+F8h]

  *(_QWORD *)&String1.Length = 2359330LL;
  OpenBlock = 0LL;
  v40 = 0LL;
  BindingAdapter = 0LL;
  v44 = 0LL;
  v43 = 0LL;
  v57 = 0;
  v56 = 0;
  v59 = 0;
  v42 = 0LL;
  String1.Buffer = L"\\??\\ROOT#VMS_VSMP";
  v17 = a7;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v39 = (_DWORD)a7 + 72;
    WPP_RECORDER_SF_qZZ(*((_QWORD *)WPP_GLOBAL_Control + 8), (_DWORD)a2, (_DWORD)a3, 23);
  }
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  *a3 = 0LL;
  if ( !ndisReferenceProtocol(a7, 9u) )
  {
    *a1 = -1073676286;
    goto LABEL_85;
  }
  v57 = 1;
  BindDeviceName = (_UNICODE_STRING *)(unsigned int)Feature_CheckProtocolMutexOwner__private_featureState;
  if ( (Feature_CheckProtocolMutexOwner__private_featureState & 0x10) == 0 )
  {
    LODWORD(BindDeviceName) = Feature_CheckProtocolMutexOwner__private_featureState | 1;
    LODWORD(a11) = 3;
    if ( (unsigned int)wil_details_FeatureReporting_ReportUsageToServiceDirect(
                         &Feature_CheckProtocolMutexOwner__private_descriptor,
                         BindDeviceName,
                         2LL)
      && g_wil_details_pfnFeatureLoggingHook )
    {
      LOBYTE(v39) = 0;
      g_wil_details_pfnFeatureLoggingHook(
        43402173LL,
        &Feature_NdisDatapathVerifier_logged_traits,
        0LL,
        1LL,
        &a11,
        0LL,
        v39,
        1LL);
    }
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      BindDeviceName,
      3LL,
      &Feature_CheckProtocolMutexOwner__private_descriptor);
  }
  v20 = a7->MutexOwnerThread != KeGetCurrentThread();
  BindDeviceName = a7->BindDeviceName;
  v19 = BindDeviceName;
  if ( !BindDeviceName || v20 )
  {
    ndisFindRootDevice((__int64)a9, (__int64)&v40, 44);
    BindingAdapter = v40;
    if ( v40 )
    {
      v47 = a3;
      v49 = a5;
      v50 = a6;
      v53 = a8;
      v51 = 0;
      v46 = a1;
      v48 = a4;
      v52 = a7;
      v54 = a9;
      Ndis::BindEngine::BeginPolicyUpdates(&v40->BindEngine);
      DynamicBinding = (struct NDIS_BIND_PROTOCOL_LINK *)Ndis::BindStack::CreateDynamicBinding(
                                                           &BindingAdapter->Bindings,
                                                           &a7->Bind,
                                                           BindingAdapter,
                                                           4LL);
      if ( DynamicBinding )
      {
        DynamicBinding->BindState.m_AdditionalContext = &v46;
        if ( Ndis::BindState::SetBinding(
               &DynamicBinding->BindState,
               BindingEnabled,
               Reason_DisabledByLegacyIoctl|Reason_DriverRejectedBinding|Reason_LastRestartAttemptFailed|Reason_LastBindAttemptFailed) )
        {
          memset(v55, 0, 0xA0uLL);
          if ( (unsigned __int8)byte_140126C63 >= 4u )
          {
            ndisGetBindLinkNameForTracing(DynamicBinding, (struct NDIS_PNPTRACE_LOCALS *)v55);
            if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_Zq(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v24,
                0x1Cu,
                0x18u,
                (struct _GUID *)&WPP_5fbf5d068c993e9b80cf56cd13d85fb9_Traceguids,
                *(unsigned __int16 **)&v55[8],
                *(_QWORD *)v55);
          }
        }
      }
      else
      {
        *a1 = -1073741670;
      }
      Ndis::BindEngine::EndPolicyUpdates(&BindingAdapter->BindEngine);
      Ndis::BindEngine::ApplyBindChanges(&BindingAdapter->BindEngine, RunSynchronous, 0);
      if ( !*v47 && !*a1 )
        *a1 = -1073676271;
      v57 = 0;
      ndisDereferenceProtocol(a7, 0, 9u, v23);
      ndisDereferenceMiniport(BindingAdapter, 0x2Cu);
      goto LABEL_85;
    }
    v19 = BindDeviceName;
    RootDeviceName = v43;
    v59 = 1;
  }
  else
  {
    RootDeviceName = a7->RootDeviceName;
    BindingAdapter = a7->BindingAdapter;
    v43 = RootDeviceName;
    v40 = BindingAdapter;
  }
  a7->BindDeviceName = 0LL;
  if ( !BindingAdapter || (BindingAdapter->Flags & 0x10000) == 0 )
  {
    *a1 = -1073676282;
LABEL_85:
    if ( a12 )
      *a12 = *a1;
    goto LABEL_87;
  }
  if ( RtlPrefixUnicodeString(&String1, &BindingAdapter->SymbolicLinkName, 1u) )
  {
    *a1 = -1073676281;
    goto LABEL_85;
  }
  OpenBlock = (struct _NDIS_OPEN_BLOCK *)ndisAllocateOpenBlock(BindingAdapter, a7, 0);
  if ( !OpenBlock )
  {
    *a1 = -1073741670;
    goto LABEL_85;
  }
  v25 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalOpenListLock);
  OpenBlock->NextGlobalOpen = ndisGlobalOpenList;
  ndisGlobalOpenList = OpenBlock;
  v56 = 1;
  KeReleaseSpinLock(&ndisGlobalOpenListLock, v25);
  v26 = 0LL;
  OpenBlock->ProtocolBindingContext = a8;
  OpenBlock->BindDeviceName = v19;
  OpenBlock->RootDeviceName = RootDeviceName;
  OpenBlock->MiniportHandle = BindingAdapter;
  OpenBlock->ProtocolHandle = a7;
  *a3 = OpenBlock;
  if ( (BindingAdapter->MacOptions & 0x80000001) == 0x80000001 )
  {
    if ( a6 )
    {
      v27 = a5;
      do
      {
        if ( *v27 == NdisMediumWan )
          break;
        LODWORD(v26) = v26 + 1;
        ++v27;
      }
      while ( (unsigned int)v26 < a6 );
    }
  }
  else if ( a6 )
  {
    v18 = (int)a5;
    do
    {
      if ( a5[v26] == BindingAdapter->MediaType )
        break;
      v26 = (unsigned int)(v26 + 1);
    }
    while ( (unsigned int)v26 < a6 );
  }
  if ( (_DWORD)v26 == a6 )
  {
    *a1 = -1073676263;
    goto LABEL_85;
  }
  *a4 = v26;
  if ( (BindingAdapter->PnPFlags & 0x40000000) != 0 )
  {
    v42 = 0x100080180LL;
    if ( (unsigned int)ndisMDoMiniportOp(BindingAdapter, 0, 0x1021Eu, &v42, 8, 1, 1u) )
    {
      *a1 = -1073741823;
      goto LABEL_85;
    }
  }
  v28 = KeAcquireSpinLockRaiseToDpc(&BindingAdapter->Lock);
  BindingAdapter->MiniportThread = KeGetCurrentThread();
  if ( (BindingAdapter->Flags & 0x40000) != 0 )
  {
    BindingAdapter = v40;
  }
  else
  {
    v29 = v40;
    if ( v40->LockAcquired )
    {
      do
      {
        BindingAdapter->MiniportThread = 0LL;
        KeReleaseSpinLockFromDpcLevel(&BindingAdapter->Lock);
        KeStallExecutionProcessor(1u);
        NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC(v29);
      }
      while ( v29->LockAcquired );
      v17 = a7;
    }
    v29->LockAcquired = 1;
    BindingAdapter = v40;
    v40->LockThread = KeGetCurrentThread();
  }
  ndisMOpenAdapter(a1, OpenBlock, BindingAdapter);
  if ( *a1 )
    goto LABEL_65;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x19u,
      (struct _GUID *)&WPP_5fbf5d068c993e9b80cf56cd13d85fb9_Traceguids,
      (char)OpenBlock,
      (char)v17,
      BindingAdapter);
  if ( v59 )
  {
    BindingAdapter = v40;
    OpenBlock->OpenFlags |= 0x400000u;
  }
  if ( (BindingAdapter->Flags & 0x20020000) == 0 )
    ndisMSwapOpenHandlers(BindingAdapter, 2u);
  if ( (BindingAdapter->Flags & 0x20000) != 0 && OpenBlock->ProtocolHandle->CoAfRegisterNotifyHandler )
  {
    Pool2 = ExAllocatePool2(64LL, 40LL, 1769423950);
    if ( Pool2 )
    {
      ndisMReferenceOpen((__int64)OpenBlock, 0);
      _InterlockedIncrement(&OpenBlock->PendingAfNotifications);
      BindingAdapter = v40;
      *(_QWORD *)(Pool2 + 24) = ndisMFinishQueuedPendingOpen;
      *(_QWORD *)Pool2 = OpenBlock;
      *(_QWORD *)(Pool2 + 32) = Pool2;
      *(_QWORD *)(Pool2 + 8) = 0LL;
    }
    else if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v30) = 2;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v30,
        19,
        26,
        (struct _GUID *)&WPP_5fbf5d068c993e9b80cf56cd13d85fb9_Traceguids,
        (char)OpenBlock);
    }
  }
  else
  {
LABEL_65:
    Pool2 = v44;
  }
  if ( (BindingAdapter->Flags & 0x40000) == 0 )
  {
    BindingAdapter->LockAcquired = 0;
    BindingAdapter->LockThread = 0LL;
  }
  BindingAdapter->MiniportThread = 0LL;
  KeReleaseSpinLock(&BindingAdapter->Lock, v28);
  if ( *a1 )
    goto LABEL_85;
  Ndis::BindEngine::BeginPolicyUpdates(&BindingAdapter->BindEngine);
  CurrentLink = Ndis::BindEngine::GetCurrentLink(&BindingAdapter->BindEngine);
  OpenBlock->Bind = (NDIS_BIND_PROTOCOL_LINK *)CurrentLink;
  if ( !Ndis::BindState::AddBindContext(&CurrentLink->BindState, OpenBlock) )
    *a1 = -1073741670;
  Ndis::BindEngine::EndPolicyUpdates(&BindingAdapter->BindEngine);
  v33 = *a1;
  if ( *a1 )
    goto LABEL_85;
  if ( (BindingAdapter->PnPFlags & 0x2000) != 0 )
  {
    BusInterface = (void (__fastcall **)(_QWORD))BindingAdapter->BusInterface;
    if ( BusInterface )
    {
      BusInterface[4](BusInterface[1]);
      v33 = *a1;
    }
  }
  if ( a12 )
  {
    *a12 = v33;
    a12 = 0LL;
  }
  ndisPktMonOpenRegister((char)OpenBlock);
  if ( Pool2 )
  {
    v35 = (unsigned int)*a1;
    if ( v17->MajorNdisVersion < 6u )
      OpenBlock->ProtocolHandle->OpenAdapterCompleteHandler(OpenBlock->ProtocolBindingContext, v35, v35);
    else
      ndisInvokeOpenAdapterComplete(OpenBlock, v35);
    ndisUpdateCheckForLoopbackFlag(BindingAdapter);
    if ( v59 )
    {
      ndisNotifyWmiBindUnbind(v36, v17, 1u);
      v59 = 0;
    }
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(Pool2 + 8), (WORK_QUEUE_TYPE)40);
    *a1 = 259;
    goto LABEL_85;
  }
LABEL_87:
  if ( *a1 )
  {
    if ( *a1 != 259 )
    {
      if ( v57 )
        ndisDereferenceProtocol(v17, 0, 9u, v18);
      if ( v56 )
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
  else if ( v59 && BindingAdapter )
  {
    ndisNotifyWmiBindUnbind(BindingAdapter, v17, 1u);
  }
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v38,
      6u,
      0x1Bu,
      (struct _GUID *)&WPP_5fbf5d068c993e9b80cf56cd13d85fb9_Traceguids,
      (char)v17,
      (char)v40,
      (char)OpenBlock,
      *a1);
}
