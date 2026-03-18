/*
 * XREFs of ?SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@@Z @ 0x1402BA4F8
 * Callers:
 *     DxgkSignalSynchronizationObjectFromCpu @ 0x1402B97E0 (DxgkSignalSynchronizationObjectFromCpu.c)
 *     ?VmBusSignalSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140426D90 (-VmBusSignalSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0pqPR1XR1_EtwWriteTransfer @ 0x1400113D0 (McTemplateK0pqPR1XR1_EtwWriteTransfer.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140012300 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1?AcquireSyncObjectMutex@@YAXPEAV1@@Z$1?ReleaseSyncObjectMutex@@YAX0@Z$01@@QEAA@PEAPEAVDXGSYNCOBJECT@@IEE@Z @ 0x140026480 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1-AcquireSyncObjectMutex@@YAXPEAV1@@Z$1-Rele.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1?AcquireSyncObjectMutex@@YAXPEAV1@@Z$1?ReleaseSyncObjectMutex@@YAX0@Z$01@@QEAA@XZ @ 0x140026A50 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1-AcquireSyncObjectMutex@@YAXPEAV1@@Z$1-Rele.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x14002B8F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsSyncObjectLockSharedOwner@DXGGLOBAL@@QEBAEXZ @ 0x140031400 (-IsSyncObjectLockSharedOwner@DXGGLOBAL@@QEBAEXZ.c)
 *     ?VidSchSignalSyncObjectsFromCpu@VIDSCH_EXPORT@@QEAAJIPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGNALFLAGS@@PEB_K@Z @ 0x14004F184 (-VidSchSignalSyncObjectsFromCpu@VIDSCH_EXPORT@@QEAAJIPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGN.c)
 *     ?VmBusSendSignalSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBIU_D3DDDICB_SIGNALFLAGS@@K1PEB_K_KPEBQEAX_N6PEAVDXGDEVICE@@@Z @ 0x14022E4C8 (-VmBusSendSignalSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBIU_D3DDDICB_SIGN.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1402B3760 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGSYNCOBJECT@@$03@@QEAAPEAPEAVDXGSYNCOBJECT@@I@Z @ 0x140330AE0 (-AllocateElements@-$PagedPoolZeroedArray@PEAVDXGSYNCOBJECT@@$03@@QEAAPEAPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAU_VIDSCH_SYNC_OBJECT@@$03@@QEAAPEAPEAU_VIDSCH_SYNC_OBJECT@@I@Z @ 0x14035EE74 (-AllocateElements@-$PagedPoolZeroedArray@PEAU_VIDSCH_SYNC_OBJECT@@$03@@QEAAPEAPEAU_VIDSCH_SYNC_O.c)
 */

__int64 __fastcall SignalSynchronizationObjectFromCpu(
        struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU *a1,
        struct DXGPROCESS *a2,
        struct DXGDEVICE *a3)
{
  PERESOURCE *Global; // rax
  __int64 ObjectCount; // rdx
  const void *v8; // r12
  struct _VIDSCH_SYNC_OBJECT **v9; // r15
  UINT v10; // r8d
  UINT v11; // eax
  DXGPUSHLOCK *v12; // rcx
  __int64 v13; // rsi
  D3DKMT_HANDLE v14; // r14d
  unsigned int v15; // eax
  __int64 v16; // r8
  int v17; // ecx
  __int64 v18; // r14
  struct DXGDEVICE *v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  bool v22; // zf
  const D3DKMT_HANDLE *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r8
  const D3DKMT_HANDLE *v27; // rax
  __int64 v28; // rcx
  __int64 v29; // r8
  unsigned int v30; // ebx
  __int64 v31; // rcx
  __int64 v32; // r8
  UINT v33; // edx
  UINT v34; // r9d
  __int64 v35; // rsi
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  int v37; // r9d
  int v38; // eax
  __int64 v39; // r8
  __int64 v40; // rsi
  const D3DKMT_HANDLE *ObjectHandleArray; // rax
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // [rsp+28h] [rbp-E0h]
  struct _D3DDDICB_SIGNALFLAGS v45[2]; // [rsp+28h] [rbp-E0h]
  _QWORD v46[2]; // [rsp+78h] [rbp-90h] BYREF
  char v47; // [rsp+88h] [rbp-80h]
  PVOID P; // [rsp+90h] [rbp-78h] BYREF
  _BYTE v49[32]; // [rsp+98h] [rbp-70h] BYREF
  int v50; // [rsp+B8h] [rbp-50h]
  PVOID v51; // [rsp+C0h] [rbp-48h] BYREF
  _BYTE v52[32]; // [rsp+C8h] [rbp-40h] BYREF
  int v53; // [rsp+E8h] [rbp-20h]
  _QWORD v54[4]; // [rsp+F0h] [rbp-18h] BYREF
  char v55; // [rsp+110h] [rbp+8h]
  UINT v56; // [rsp+148h] [rbp+40h]

  LODWORD(v46[0]) = -1;
  v46[1] = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v47 = 1;
    LODWORD(v46[0]) = 2044;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter, (__int64)a3, 2044);
  }
  else
  {
    v47 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)v46, 2044);
  Global = (PERESOURCE *)DXGGLOBAL::GetGlobal();
  if ( !DXGGLOBAL::IsSyncObjectLockSharedOwner(Global) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5739;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"DXGGLOBAL::GetGlobal()->IsSyncObjectLockSharedOwner()",
      5739LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !a3 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5744;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"pDevice != NULL", 5744LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !a1->ObjectCount )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5745;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"pSignalSyncObject->ObjectCount > 0",
      5745LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !*((_QWORD *)a3 + 2) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5746;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"pDevice->GetRenderCore() != NULL",
      5746LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  ObjectCount = a1->ObjectCount;
  v51 = 0LL;
  v53 = 0;
  P = 0LL;
  v50 = 0;
  v8 = (const void *)PagedPoolZeroedArray<DXGSYNCOBJECT *,4>::AllocateElements(&v51, ObjectCount);
  if ( !v8 )
    goto LABEL_61;
  v9 = (struct _VIDSCH_SYNC_OBJECT **)PagedPoolZeroedArray<_VIDSCH_SYNC_OBJECT *,4>::AllocateElements(
                                        &P,
                                        a1->ObjectCount);
  if ( !v9 )
    goto LABEL_61;
  v10 = a1->ObjectCount;
  v11 = 0;
  v56 = 0;
  if ( !v10 )
  {
LABEL_31:
    DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>(
      (__int64)v54,
      v8,
      v10);
    if ( !v55 )
    {
      if ( (*((_BYTE *)a3 + 1917) & 1) != 0 )
      {
        v30 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSignalSyncObject(
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
        DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v54);
        if ( P != v49 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v50 = 0;
        if ( v51 != v52 && v51 )
          ExFreePoolWithTag(v51, 0);
        v51 = 0LL;
        v53 = 0;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)v46);
        if ( v47 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v31, (__int64)&EventProfilerExit, v32, v46[0]);
        return v30;
      }
      v33 = a1->ObjectCount;
      v34 = 0;
      if ( !v33 )
      {
LABEL_85:
        v38 = VIDSCH_EXPORT::VidSchSignalSyncObjectsFromCpu(
                *(VIDSCH_EXPORT **)(*((_QWORD *)a3 + 2) + 736LL),
                v33,
                v9,
                a1->Flags,
                a1->FenceValueArray);
        v40 = v38;
        if ( v38 < 0 )
        {
          WdLogSingleEntry1(2LL, v38);
          WdLogGlobalForLineNumber = 5884;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000LL,
            0xFFFFFFFFLL,
            L"VidSchSignalSyncObjectsFromCpu failed with return code 0x%I64x.",
            v40,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        else if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        {
          v45[0] = (struct _D3DDDICB_SIGNALFLAGS)a1->ObjectCount;
          McTemplateK0pqPR1XR1_EtwWriteTransfer(
            v45[0].Value,
            (__int64)&EventSignalSynchronizationObjectFromCpu,
            v39,
            a3,
            *(_QWORD *)&v45[0].0,
            v9,
            a1->FenceValueArray);
        }
        DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v54);
        if ( P != v49 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v50 = 0;
        if ( v51 != v52 && v51 )
          ExFreePoolWithTag(v51, 0);
        v51 = 0LL;
        v53 = 0;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)v46);
        if ( v47 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v42, (__int64)&EventProfilerExit, v43, v46[0]);
        return (unsigned int)v40;
      }
      while ( 1 )
      {
        v35 = v34;
        VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                             *((DXGSYNCOBJECT **)v8 + v34),
                             *((struct ADAPTER_RENDER **)a3 + 2));
        v9[v35] = VidSchSyncObject;
        if ( !VidSchSyncObject )
          break;
        v33 = a1->ObjectCount;
        v34 = v37 + 1;
        if ( v34 >= v33 )
          goto LABEL_85;
      }
      WdLogSingleEntry1(2LL, a1->ObjectHandleArray[v35]);
      ObjectHandleArray = a1->ObjectHandleArray;
      WdLogGlobalForLineNumber = 5864;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"0x%x object adapter state has been destroyed, and it cannot be signaled.",
        ObjectHandleArray[v35],
        0LL,
        0LL,
        0LL,
        0LL);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v54);
      if ( P != v49 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v50 = 0;
      if ( v51 != v52 && v51 )
        ExFreePoolWithTag(v51, 0);
LABEL_95:
      v51 = 0LL;
      v53 = 0;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)v46);
      if ( !v47 )
        return 3221225485LL;
      v22 = (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0;
LABEL_97:
      if ( !v22 )
        McTemplateK0q_EtwWriteTransfer(v20, (__int64)&EventProfilerExit, v21, v46[0]);
      return 3221225485LL;
    }
    if ( v54[0] )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 5833;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"The same sync object handle is passed twice",
        5833LL,
        0LL,
        0LL,
        0LL,
        0LL);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v54);
      if ( P != v49 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v50 = 0;
      if ( v51 != v52 && v51 )
        ExFreePoolWithTag(v51, 0);
      v51 = 0LL;
      v53 = 0;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)v46);
      if ( !v47 )
        return 3221225485LL;
      v22 = (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0;
      goto LABEL_97;
    }
    DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v54);
LABEL_61:
    if ( P != v49 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v50 = 0;
    if ( v51 != v52 && v51 )
      ExFreePoolWithTag(v51, 0);
    v51 = 0LL;
    v53 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)v46);
    if ( v47 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v28, (__int64)&EventProfilerExit, v29, v46[0]);
    return 3221225495LL;
  }
  v12 = (struct DXGPROCESS *)((char *)a2 + 248);
  while ( 1 )
  {
    v13 = v11;
    v14 = a1->ObjectHandleArray[v11];
    DXGPUSHLOCK::AcquireShared(v12);
    v15 = (v14 >> 6) & 0xFFFFFF;
    if ( v15 < *((_DWORD *)a2 + 74)
      && (v16 = *((_QWORD *)a2 + 35), ((v14 >> 25) & 0x60) == (*(_BYTE *)(v16 + 16LL * v15 + 8) & 0x60))
      && (*(_DWORD *)(v16 + 16LL * v15 + 8) & 0x2000) == 0
      && (v17 = *(_DWORD *)(v16 + 16LL * v15 + 8) & 0x1F) != 0 )
    {
      if ( v17 == 11 )
      {
        v18 = *(_QWORD *)(v16 + 16LL * v15);
      }
      else
      {
        WdLogSingleEntry0(2LL);
        v18 = 0LL;
        WdLogGlobalForLineNumber = 318;
        DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    else
    {
      v18 = 0LL;
    }
    _InterlockedDecrement((volatile signed __int32 *)a2 + 66);
    ExReleasePushLockSharedEx((char *)a2 + 248, 0LL);
    KeLeaveCriticalRegion();
    if ( !v18 )
    {
      WdLogSingleEntry4(2LL, a2, a1->ObjectHandleArray[v13], v13, -1073741811LL);
      v27 = a1->ObjectHandleArray;
      WdLogGlobalForLineNumber = 5783;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"0x%I64x failed to signal with invalid hSyncObject 0x%I64x at index %I64d returning 0x%I64x",
        (__int64)a2,
        v27[v13],
        v13,
        -1073741811LL,
        0LL);
LABEL_42:
      if ( P != v49 && P )
        ExFreePoolWithTag(P, 0);
      v50 = 0;
      P = 0LL;
      if ( v51 != v52 && v51 )
        ExFreePoolWithTag(v51, 0);
      goto LABEL_95;
    }
    if ( (*(_DWORD *)(v18 + 72) & 0x10) != 0 )
      break;
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(v18 + 16) + 16LL) + 16LL)) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 5796;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"pSyncObject->GetDevice()->GetRenderAdapter()->IsCoreResourceSharedOwner()",
        5796LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    *((_QWORD *)v8 + v13) = *(_QWORD *)(v18 + 32);
    v19 = *(struct DXGDEVICE **)(v18 + 16);
    if ( v19 != a3 )
    {
      WdLogSingleEntry5(2LL, v19, v18, v13, a3, -1073741811LL);
      v44 = *(_QWORD *)(v18 + 16);
      WdLogGlobalForLineNumber = 5807;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"DXGDEVICE 0x%I64x for DXGDEVICESYNCOBJECT 0x%I64x at index 0x%I64d does not match expected DXGDEVICE 0x%I64x, re"
         "turning 0x%I64x.",
        v44,
        v18,
        v13,
        (__int64)a3,
        -1073741811LL);
      goto LABEL_42;
    }
    v12 = (struct DXGPROCESS *)((char *)a2 + 248);
    v10 = a1->ObjectCount;
    v11 = v56 + 1;
    v56 = v11;
    if ( v11 >= v10 )
      goto LABEL_31;
  }
  WdLogSingleEntry1(2LL, a1->ObjectHandleArray[v13]);
  v23 = a1->ObjectHandleArray;
  WdLogGlobalForLineNumber = 5791;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000LL,
    0xFFFFFFFFLL,
    L"0x%I64x object is opened as wait only and thus cannot be signaled.",
    v23[v13],
    0LL,
    0LL,
    0LL,
    0LL);
  if ( P != v49 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v50 = 0;
  if ( v51 != v52 && v51 )
    ExFreePoolWithTag(v51, 0);
  v51 = 0LL;
  v53 = 0;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)v46);
  if ( v47 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v24, (__int64)&EventProfilerExit, v25, v46[0]);
  return 3221225506LL;
}
