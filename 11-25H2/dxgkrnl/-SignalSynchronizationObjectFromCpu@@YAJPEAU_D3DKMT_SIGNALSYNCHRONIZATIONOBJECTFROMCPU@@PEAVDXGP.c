/*
 * XREFs of ?SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@@Z @ 0x140323610
 * Callers:
 *     DxgkSignalSynchronizationObjectFromCpu @ 0x140322BB0 (DxgkSignalSynchronizationObjectFromCpu.c)
 *     ?VmBusSignalSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140427170 (-VmBusSignalSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     McTemplateK0pqPR1XR1_EtwWriteTransfer @ 0x1400145D0 (McTemplateK0pqPR1XR1_EtwWriteTransfer.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140015500 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1?AcquireSyncObjectMutex@@YAXPEAV1@@Z$1?ReleaseSyncObjectMutex@@YAX0@Z$01@@QEAA@PEAPEAVDXGSYNCOBJECT@@IEE@Z @ 0x140025CD0 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1-AcquireSyncObjectMutex@@YAXPEAV1@@Z$1-Rele.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1?AcquireSyncObjectMutex@@YAXPEAV1@@Z$1?ReleaseSyncObjectMutex@@YAX0@Z$01@@QEAA@XZ @ 0x140026360 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1-AcquireSyncObjectMutex@@YAXPEAV1@@Z$1-Rele.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x14002B150 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsSyncObjectLockSharedOwner@DXGGLOBAL@@QEBAEXZ @ 0x1400314E0 (-IsSyncObjectLockSharedOwner@DXGGLOBAL@@QEBAEXZ.c)
 *     ?VidSchSignalSyncObjectsFromCpu@VIDSCH_EXPORT@@QEAAJIPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGNALFLAGS@@PEB_K@Z @ 0x14004F704 (-VidSchSignalSyncObjectsFromCpu@VIDSCH_EXPORT@@QEAAJIPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGN.c)
 *     Feature_1096320312__private_IsEnabledDeviceUsageNoInline @ 0x140078A88 (Feature_1096320312__private_IsEnabledDeviceUsageNoInline.c)
 *     ?VmBusSendSignalSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBIU_D3DDDICB_SIGNALFLAGS@@K1PEB_K_KPEBQEAX_N6PEAVDXGDEVICE@@@Z @ 0x140227BDC (-VmBusSendSignalSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBIU_D3DDDICB_SIGN.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1402FCB50 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGSYNCOBJECT@@$03@@QEAAPEAPEAVDXGSYNCOBJECT@@I@Z @ 0x140343A70 (-AllocateElements@-$PagedPoolZeroedArray@PEAVDXGSYNCOBJECT@@$03@@QEAAPEAPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAU_VIDSCH_SYNC_OBJECT@@$03@@QEAAPEAPEAU_VIDSCH_SYNC_OBJECT@@I@Z @ 0x14037DE5C (-AllocateElements@-$PagedPoolZeroedArray@PEAU_VIDSCH_SYNC_OBJECT@@$03@@QEAAPEAPEAU_VIDSCH_SYNC_O.c)
 */

__int64 __fastcall SignalSynchronizationObjectFromCpu(
        struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU *a1,
        struct DXGPROCESS *a2,
        struct DXGDEVICE *a3)
{
  PERESOURCE *Global; // rax
  __int64 ObjectCount; // rdx
  const void *v8; // r12
  __int64 v9; // r9
  struct _VIDSCH_SYNC_OBJECT **v10; // r15
  UINT v11; // r8d
  UINT v12; // eax
  DXGPUSHLOCK *v13; // rcx
  __int64 v14; // rsi
  D3DKMT_HANDLE v15; // r14d
  unsigned int v16; // eax
  __int64 v17; // r8
  int v18; // ecx
  __int64 v19; // r14
  struct DXGDEVICE *v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  bool v23; // zf
  const D3DKMT_HANDLE *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r8
  const D3DKMT_HANDLE *v28; // rax
  __int64 v29; // rcx
  __int64 v30; // r8
  unsigned int v31; // ebx
  __int64 v32; // rcx
  __int64 v33; // r8
  UINT v34; // edx
  UINT v35; // r9d
  __int64 v36; // rsi
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  int v38; // r9d
  int v39; // eax
  __int64 v40; // r8
  __int64 v41; // rsi
  const D3DKMT_HANDLE *ObjectHandleArray; // rax
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // [rsp+28h] [rbp-E0h]
  struct _D3DDDICB_SIGNALFLAGS v46[2]; // [rsp+28h] [rbp-E0h]
  _QWORD v47[2]; // [rsp+78h] [rbp-90h] BYREF
  char v48; // [rsp+88h] [rbp-80h]
  PVOID P; // [rsp+90h] [rbp-78h] BYREF
  _BYTE v50[32]; // [rsp+98h] [rbp-70h] BYREF
  int v51; // [rsp+B8h] [rbp-50h]
  PVOID v52; // [rsp+C0h] [rbp-48h] BYREF
  _BYTE v53[32]; // [rsp+C8h] [rbp-40h] BYREF
  int v54; // [rsp+E8h] [rbp-20h]
  _QWORD v55[4]; // [rsp+F0h] [rbp-18h] BYREF
  char v56; // [rsp+110h] [rbp+8h]
  UINT v57; // [rsp+148h] [rbp+40h]

  LODWORD(v47[0]) = -1;
  v47[1] = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v48 = 1;
    LODWORD(v47[0]) = 2044;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter, (__int64)a3, 2044);
  }
  else
  {
    v48 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)v47, 2044);
  if ( (unsigned int)Feature_1096320312__private_IsEnabledDeviceUsageNoInline() )
  {
    Global = (PERESOURCE *)DXGGLOBAL::GetGlobal();
    if ( !DXGGLOBAL::IsSyncObjectLockSharedOwner(Global) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 5736;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"DXGGLOBAL::GetGlobal()->IsSyncObjectLockSharedOwner()",
        5736LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
  if ( !a3 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5742;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"pDevice != NULL", 5742LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !a1->ObjectCount )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5743;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"pSignalSyncObject->ObjectCount > 0",
      5743LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !*((_QWORD *)a3 + 2) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5744;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"pDevice->GetRenderCore() != NULL",
      5744LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  ObjectCount = a1->ObjectCount;
  v52 = 0LL;
  v54 = 0;
  P = 0LL;
  v51 = 0;
  v8 = (const void *)PagedPoolZeroedArray<DXGSYNCOBJECT *,4>::AllocateElements(&v52, ObjectCount);
  if ( !v8 )
    goto LABEL_62;
  v10 = (struct _VIDSCH_SYNC_OBJECT **)PagedPoolZeroedArray<_VIDSCH_SYNC_OBJECT *,4>::AllocateElements(
                                         &P,
                                         a1->ObjectCount);
  if ( !v10 )
    goto LABEL_62;
  v11 = a1->ObjectCount;
  v12 = 0;
  v57 = 0;
  if ( !v11 )
  {
LABEL_32:
    DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>(
      (__int64)v55,
      v8,
      v11,
      v9);
    if ( !v56 )
    {
      if ( (*((_BYTE *)a3 + 1901) & 1) != 0 )
      {
        v31 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSignalSyncObject(
                (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)a3 + 2) + 16LL) + 4664LL),
                a2,
                a1->ObjectCount,
                (unsigned int *)a1->ObjectHandleArray,
                a1->Flags,
                0,
                0LL,
                (unsigned __int64 *)a1->FenceValueArray,
                0LL,
                0LL,
                0,
                1,
                a3);
        DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v55);
        if ( P != v50 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v51 = 0;
        if ( v52 != v53 && v52 )
          ExFreePoolWithTag(v52, 0);
        v52 = 0LL;
        v54 = 0;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)v47);
        if ( v48 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v32, (__int64)&EventProfilerExit, v33, v47[0]);
        return v31;
      }
      v34 = a1->ObjectCount;
      v35 = 0;
      if ( !v34 )
      {
LABEL_86:
        v39 = VIDSCH_EXPORT::VidSchSignalSyncObjectsFromCpu(
                *(VIDSCH_EXPORT **)(*((_QWORD *)a3 + 2) + 736LL),
                v34,
                v10,
                a1->Flags,
                a1->FenceValueArray);
        v41 = v39;
        if ( v39 < 0 )
        {
          WdLogSingleEntry1(2LL, v39);
          WdLogGlobalForLineNumber = 5882;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            0xFFFFFFFFLL,
            L"VidSchSignalSyncObjectsFromCpu failed with return code 0x%I64x.",
            v41,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        else if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        {
          v46[0] = (struct _D3DDDICB_SIGNALFLAGS)a1->ObjectCount;
          McTemplateK0pqPR1XR1_EtwWriteTransfer(
            v46[0].Value,
            (__int64)&EventSignalSynchronizationObjectFromCpu,
            v40,
            a3,
            *(_QWORD *)&v46[0].0,
            v10,
            a1->FenceValueArray);
        }
        DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v55);
        if ( P != v50 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v51 = 0;
        if ( v52 != v53 && v52 )
          ExFreePoolWithTag(v52, 0);
        v52 = 0LL;
        v54 = 0;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)v47);
        if ( v48 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v43, (__int64)&EventProfilerExit, v44, v47[0]);
        return (unsigned int)v41;
      }
      while ( 1 )
      {
        v36 = v35;
        VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                             *((DXGSYNCOBJECT **)v8 + v35),
                             *((struct ADAPTER_RENDER **)a3 + 2));
        v10[v36] = VidSchSyncObject;
        if ( !VidSchSyncObject )
          break;
        v34 = a1->ObjectCount;
        v35 = v38 + 1;
        if ( v35 >= v34 )
          goto LABEL_86;
      }
      WdLogSingleEntry1(2LL, a1->ObjectHandleArray[v36]);
      ObjectHandleArray = a1->ObjectHandleArray;
      WdLogGlobalForLineNumber = 5862;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"0x%x object adapter state has been destroyed, and it cannot be signaled.",
        ObjectHandleArray[v36],
        0LL,
        0LL,
        0LL,
        0LL);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v55);
      if ( P != v50 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v51 = 0;
      if ( v52 != v53 && v52 )
        ExFreePoolWithTag(v52, 0);
LABEL_96:
      v52 = 0LL;
      v54 = 0;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)v47);
      if ( !v48 )
        return 3221225485LL;
      v23 = (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0;
LABEL_98:
      if ( !v23 )
        McTemplateK0q_EtwWriteTransfer(v21, (__int64)&EventProfilerExit, v22, v47[0]);
      return 3221225485LL;
    }
    if ( v55[0] )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 5831;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"The same sync object handle is passed twice",
        5831LL,
        0LL,
        0LL,
        0LL,
        0LL);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v55);
      if ( P != v50 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v51 = 0;
      if ( v52 != v53 && v52 )
        ExFreePoolWithTag(v52, 0);
      v52 = 0LL;
      v54 = 0;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)v47);
      if ( !v48 )
        return 3221225485LL;
      v23 = (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0;
      goto LABEL_98;
    }
    DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v55);
LABEL_62:
    if ( P != v50 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v51 = 0;
    if ( v52 != v53 && v52 )
      ExFreePoolWithTag(v52, 0);
    v52 = 0LL;
    v54 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)v47);
    if ( v48 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v29, (__int64)&EventProfilerExit, v30, v47[0]);
    return 3221225495LL;
  }
  v13 = (struct DXGPROCESS *)((char *)a2 + 248);
  while ( 1 )
  {
    v14 = v12;
    v15 = a1->ObjectHandleArray[v12];
    DXGPUSHLOCK::AcquireShared(v13);
    v16 = (v15 >> 6) & 0xFFFFFF;
    if ( v16 < *((_DWORD *)a2 + 74)
      && (v17 = *((_QWORD *)a2 + 35), ((v15 >> 25) & 0x60) == (*(_BYTE *)(v17 + 16LL * v16 + 8) & 0x60))
      && (*(_DWORD *)(v17 + 16LL * v16 + 8) & 0x2000) == 0
      && (v18 = *(_DWORD *)(v17 + 16LL * v16 + 8) & 0x1F) != 0 )
    {
      if ( v18 == 11 )
      {
        v19 = *(_QWORD *)(v17 + 16LL * v16);
      }
      else
      {
        WdLogSingleEntry0(2LL);
        v19 = 0LL;
        WdLogGlobalForLineNumber = 318;
        DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    else
    {
      v19 = 0LL;
    }
    _InterlockedDecrement((volatile signed __int32 *)a2 + 66);
    ExReleasePushLockSharedEx((char *)a2 + 248, 0LL);
    KeLeaveCriticalRegion();
    if ( !v19 )
    {
      WdLogSingleEntry4(2LL, a2, a1->ObjectHandleArray[v14], v14, -1073741811LL);
      v28 = a1->ObjectHandleArray;
      WdLogGlobalForLineNumber = 5781;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"0x%I64x failed to signal with invalid hSyncObject 0x%I64x at index %I64d returning 0x%I64x",
        (__int64)a2,
        v28[v14],
        v14,
        -1073741811LL,
        0LL);
LABEL_43:
      if ( P != v50 && P )
        ExFreePoolWithTag(P, 0);
      v51 = 0;
      P = 0LL;
      if ( v52 != v53 && v52 )
        ExFreePoolWithTag(v52, 0);
      goto LABEL_96;
    }
    if ( (*(_DWORD *)(v19 + 72) & 0x10) != 0 )
      break;
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(v19 + 16) + 16LL) + 16LL)) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 5794;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"pSyncObject->GetDevice()->GetRenderAdapter()->IsCoreResourceSharedOwner()",
        5794LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    *((_QWORD *)v8 + v14) = *(_QWORD *)(v19 + 32);
    v20 = *(struct DXGDEVICE **)(v19 + 16);
    if ( v20 != a3 )
    {
      WdLogSingleEntry5(2LL, v20, v19, v14, a3, -1073741811LL);
      v45 = *(_QWORD *)(v19 + 16);
      WdLogGlobalForLineNumber = 5805;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"DXGDEVICE 0x%I64x for DXGDEVICESYNCOBJECT 0x%I64x at index 0x%I64d does not match expected DXGDEVICE 0x%I64x, re"
         "turning 0x%I64x.",
        v45,
        v19,
        v14,
        (__int64)a3,
        -1073741811LL);
      goto LABEL_43;
    }
    v13 = (struct DXGPROCESS *)((char *)a2 + 248);
    v11 = a1->ObjectCount;
    v12 = v57 + 1;
    v57 = v12;
    if ( v12 >= v11 )
      goto LABEL_32;
  }
  WdLogSingleEntry1(2LL, a1->ObjectHandleArray[v14]);
  v24 = a1->ObjectHandleArray;
  WdLogGlobalForLineNumber = 5789;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    0xFFFFFFFFLL,
    L"0x%I64x object is opened as wait only and thus cannot be signaled.",
    v24[v14],
    0LL,
    0LL,
    0LL,
    0LL);
  if ( P != v50 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v51 = 0;
  if ( v52 != v53 && v52 )
    ExFreePoolWithTag(v52, 0);
  v52 = 0LL;
  v54 = 0;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)v47);
  if ( v48 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v25, (__int64)&EventProfilerExit, v26, v47[0]);
  return 3221225506LL;
}
