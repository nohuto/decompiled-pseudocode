/*
 * XREFs of VidMmWorkerThreadProc @ 0x1400F23A0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ??3@YAXPEAX@Z @ 0x140028730 (--3@YAXPEAX@Z.c)
 *     VidSchMarkDeviceAsError @ 0x14002BEA0 (VidSchMarkDeviceAsError.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14002D9EC (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140036BF0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?IsPenaltyBoxEmpty@VIDMM_GLOBAL@@QEAA_NW4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x140036C74 (-IsPenaltyBoxEmpty@VIDMM_GLOBAL@@QEAA_NW4VIDMM_PENALTY_BOX_BAND@@@Z.c)
 *     ?VidMmiQuerySystemTime@@YA_JXZ @ 0x140037BC4 (-VidMmiQuerySystemTime@@YA_JXZ.c)
 *     McTemplateK0qqtqttp_EtwWriteTransfer @ 0x14003E800 (McTemplateK0qqtqttp_EtwWriteTransfer.c)
 *     McTemplateK0ppp_EtwWriteTransfer @ 0x14003F30C (McTemplateK0ppp_EtwWriteTransfer.c)
 *     McTemplateK0iq_EtwWriteTransfer @ 0x14003FEC4 (McTemplateK0iq_EtwWriteTransfer.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14004CCF0 (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 *     ?CheckMemorySegmentsFState@VIDMM_GLOBAL@@QEAAXXZ @ 0x1400A75A0 (-CheckMemorySegmentsFState@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?UnderCleanupLimit@VIDMM_GLOBAL@@QEAA_NXZ @ 0x1400BBC50 (-UnderCleanupLimit@VIDMM_GLOBAL@@QEAA_NXZ.c)
 *     ?ProcessSegmentOfferLists@VIDMM_GLOBAL@@QEAAXXZ @ 0x1400D3930 (-ProcessSegmentOfferLists@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?HandleTrimWnf@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1400D5BC0 (-HandleTrimWnf@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 *     ?CheckForMemoryBudgetThresholdChanges@VIDMM_GLOBAL@@QEAA_NXZ @ 0x1400D9D00 (-CheckForMemoryBudgetThresholdChanges@VIDMM_GLOBAL@@QEAA_NXZ.c)
 *     ?LogUnderBudgetButCantCommitEvent@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z @ 0x1400DA010 (-LogUnderBudgetButCantCommitEvent@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z.c)
 *     ?LogLongPagingPacket@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z @ 0x1400DA278 (-LogLongPagingPacket@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z.c)
 *     ?RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1400DB1D0 (-RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 *     ?RecalculateBudget@VIDMM_GLOBAL@@QEAAXPEA_N@Z @ 0x1400DB3C8 (-RecalculateBudget@VIDMM_GLOBAL@@QEAAXPEA_N@Z.c)
 *     ?VidMmReclaimPagingQueuePacket@@YAXPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@@Z @ 0x1400DC894 (-VidMmReclaimPagingQueuePacket@@YAXPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_PA.c)
 *     VidMmSubmitPacket @ 0x1400DCB90 (VidMmSubmitPacket.c)
 *     VidMmProcessPendingTerminations @ 0x1400DCF74 (VidMmProcessPendingTerminations.c)
 *     VidMmHandleRecoverablePageInFailure @ 0x1400DED10 (VidMmHandleRecoverablePageInFailure.c)
 *     ?Suspend@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1400E03E8 (-Suspend@VIDMM_DEVICE@@QEAAX_N@Z.c)
 *     ?Yield@VIDMM_DEVICE@@QEAAXPEAV1@@Z @ 0x1400E0E38 (-Yield@VIDMM_DEVICE@@QEAAXPEAV1@@Z.c)
 *     ?Resume@VIDMM_DEVICE@@QEAAJ_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400E1C28 (-Resume@VIDMM_DEVICE@@QEAAJ_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?Init@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@@Z @ 0x1400E3264 (-Init@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@@Z.c)
 *     VidMmSelectPagingOperation @ 0x1400EBA30 (VidMmSelectPagingOperation.c)
 *     ?ProcessPendingOfferList@VIDMM_GLOBAL@@QEAAXXZ @ 0x1400EF230 (-ProcessPendingOfferList@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?CleanFragmentation@VIDMM_GLOBAL@@QEAAXXZ @ 0x1400F02AC (-CleanFragmentation@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?CleanupMarkedForEvictionAllocations@VIDMM_GLOBAL@@QEAAXXZ @ 0x1400F0CC8 (-CleanupMarkedForEvictionAllocations@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ @ 0x1400F1E14 (-ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?GetBudgetAndVisibilityState@VIDMM_DEVICE@@QEAAXPEA_NPEAW4VIDMM_BUDGET_PRIORITY_BAND@@@Z @ 0x1400F4458 (-GetBudgetAndVisibilityState@VIDMM_DEVICE@@QEAAXPEA_NPEAW4VIDMM_BUDGET_PRIORITY_BAND@@@Z.c)
 *     VidMmEndOperation @ 0x1400F5FFC (VidMmEndOperation.c)
 *     ?VidMmSetWorkerThreadTimeout@@YAXPEAUVIDMM_WORKER_THREAD@@_JW4VIDMM_WORKER_THREAD_WAKE_REASON@@@Z @ 0x1400F6570 (-VidMmSetWorkerThreadTimeout@@YAXPEAUVIDMM_WORKER_THREAD@@_JW4VIDMM_WORKER_THREAD_WAKE_REASON@@@.c)
 *     ?ResetCleanupCounters@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1400F6B00 (-ResetCleanupCounters@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 *     VidMmBeginOperation @ 0x1400FC43C (VidMmBeginOperation.c)
 *     VidMmDefragmentSegment @ 0x1400FF568 (VidMmDefragmentSegment.c)
 *     VidMmSetWorkerThreadStatus @ 0x140101A84 (VidMmSetWorkerThreadStatus.c)
 *     ?VidMmRewindPagingQueuePacket@@YAXPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@@Z @ 0x1401062A4 (-VidMmRewindPagingQueuePacket@@YAXPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAG.c)
 *     ?IsBetterYieldCandidate@VIDMM_DEVICE@@QEAA_NPEAV1@@Z @ 0x1401064AC (-IsBetterYieldCandidate@VIDMM_DEVICE@@QEAA_NPEAV1@@Z.c)
 *     ?LogNoCandidatesToSuspendFound@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z @ 0x140112634 (-LogNoCandidatesToSuspendFound@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z.c)
 *     ?HandlePromotionCandidates@VIDMM_GLOBAL@@QEAAXPEA_N@Z @ 0x140114C70 (-HandlePromotionCandidates@VIDMM_GLOBAL@@QEAAXPEA_N@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VidMmWorkerThreadProc(char *StartContext)
{
  _QWORD *v1; // r15
  struct _KTHREAD *CurrentThread; // rcx
  union _LARGE_INTEGER *v4; // rbx
  __int64 v5; // rdx
  char *v6; // rsi
  bool v7; // r13
  unsigned __int8 v8; // r14
  unsigned __int8 v9; // r12
  _QWORD *v10; // rax
  NTSTATUS v11; // ebx
  _QWORD *v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 *v17; // rsi
  __int64 *v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 *v22; // rsi
  __int64 *v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  bool v27; // al
  __int64 v28; // rcx
  __int64 v29; // r8
  struct VIDMM_DEVICE *v30; // r13
  struct VIDMM_PAGING_QUEUE *v31; // r14
  struct VIDMM_PAGING_QUEUE_PACKET *v32; // rbx
  int v33; // esi
  bool v34; // al
  unsigned __int8 v35; // r12
  char *v36; // rdx
  __int64 v37; // rcx
  char *v38; // rsi
  int v39; // eax
  int v40; // esi
  __int64 SystemTime; // rax
  VIDMM_COMMIT_TELEMETRY *v42; // rcx
  struct VIDMM_ALLOC **v43; // rcx
  int v44; // eax
  unsigned int v45; // edx
  __int64 v46; // r8
  __int64 v47; // rcx
  __int64 v48; // rsi
  __int64 v49; // rcx
  _QWORD *v50; // rbx
  char IsProcessCommitRelinquished; // al
  const CHAR *v52; // r8
  struct VIDMM_DEVICE *v53; // rax
  __int64 v54; // r9
  VIDMM_DEVICE *v55; // r14
  struct VIDMM_DEVICE *v56; // rsi
  struct VIDMM_DEVICE *v57; // r12
  unsigned __int8 v58; // al
  char v59; // dl
  _BYTE *v60; // rcx
  __int64 v61; // rcx
  VIDMM_GLOBAL *v62; // rcx
  _BYTE *v63; // rbx
  char v64; // al
  _QWORD *v65; // rsi
  VIDMM_DEVICE *v66; // rcx
  char v67; // [rsp+50h] [rbp-69h]
  bool v68; // [rsp+51h] [rbp-68h]
  bool v69; // [rsp+52h] [rbp-67h] BYREF
  unsigned __int8 v70; // [rsp+53h] [rbp-66h]
  bool v71; // [rsp+54h] [rbp-65h] BYREF
  int v72; // [rsp+58h] [rbp-61h]
  char v73; // [rsp+5Ch] [rbp-5Dh]
  bool v74; // [rsp+5Dh] [rbp-5Ch] BYREF
  bool v75; // [rsp+5Eh] [rbp-5Bh] BYREF
  int v76; // [rsp+60h] [rbp-59h]
  struct VIDMM_ALLOC *v77; // [rsp+68h] [rbp-51h] BYREF
  struct VIDMM_PAGING_QUEUE *v78; // [rsp+70h] [rbp-49h] BYREF
  struct VIDMM_PAGING_QUEUE_PACKET *v79; // [rsp+78h] [rbp-41h] BYREF
  struct VIDMM_DEVICE *v80; // [rsp+80h] [rbp-39h] BYREF
  struct VIDMM_PAGING_QUEUE *v81; // [rsp+88h] [rbp-31h]
  char *v82; // [rsp+90h] [rbp-29h]
  _DWORD ThreadInformation[2]; // [rsp+98h] [rbp-21h] BYREF
  struct VIDMM_DEVICE *v84; // [rsp+A0h] [rbp-19h]
  _QWORD *v85; // [rsp+A8h] [rbp-11h]
  union _LARGE_INTEGER v86; // [rsp+B0h] [rbp-9h] BYREF
  PVOID Object; // [rsp+B8h] [rbp-1h] BYREF
  __int64 v88; // [rsp+C0h] [rbp+7h]
  char v89; // [rsp+120h] [rbp+67h]
  bool v90; // [rsp+128h] [rbp+6Fh] BYREF
  char v91; // [rsp+130h] [rbp+77h]
  char v92; // [rsp+138h] [rbp+7Fh] BYREF

  v1 = *(_QWORD **)StartContext;
  CurrentThread = KeGetCurrentThread();
  v85 = v1;
  *((_QWORD *)StartContext + 1) = CurrentThread;
  KeSetActualBasePriorityThread(CurrentThread, 15LL);
  ThreadInformation[0] = 1;
  ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadBreakOnTermination|0x20, ThreadInformation, 4u);
  v4 = 0LL;
  KeWaitForSingleObject((PVOID)(*((_QWORD *)StartContext + 3) + 24LL), Executive, 0, 0, 0LL);
  LOBYTE(v5) = 1;
  VidMmSetWorkerThreadStatus(StartContext, v5);
  v6 = StartContext + 160;
  v88 = *((_QWORD *)StartContext + 3);
  v7 = 0;
  v8 = 0;
  v89 = 0;
  v74 = 0;
  v9 = 0;
  v71 = 0;
  Object = (PVOID)(v88 + 24);
  *((_QWORD *)StartContext + 16) = 0x8000000000000000uLL;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(StartContext + 160, 0LL);
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  *((_QWORD *)StartContext + 21) = KeGetCurrentThread();
  do
  {
LABEL_2:
    *((_QWORD *)StartContext + 2) = 0LL;
    if ( v8 || v71 || v9 )
      *((_QWORD *)StartContext + 16) = 0LL;
    v86 = *(union _LARGE_INTEGER *)(StartContext + 128);
    if ( v86.QuadPart == 0x8000000000000000uLL )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        v10 = (_QWORD *)WdLogNewEntry5_WdTrace(0x8000000000000000uLL);
        v10[3] = v8;
        v10[4] = v71;
        v10[5] = v9;
        WdLogGlobalForLineNumber = 2239;
      }
    }
    else
    {
      v4 = &v86;
    }
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    v9 = 0;
    *((_QWORD *)v6 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v6, 0LL);
    KeLeaveCriticalRegion();
    ++*((_QWORD *)StartContext + 14);
    v11 = KeWaitForMultipleObjects(2u, &Object, WaitAny, Executive, 0, 0, v4, 0LL);
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v6, 0LL);
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    *((_QWORD *)v6 + 1) = KeGetCurrentThread();
    v1[570] = VidMmiQuerySystemTime();
    VIDMM_GLOBAL::ResetCleanupCounters((VIDMM_GLOBAL *)v1, 0);
    v71 = 0;
    v72 = 0;
    v76 = 0;
    v70 = 0;
    v73 = 0;
    v80 = 0LL;
    v78 = 0LL;
    v79 = 0LL;
    v67 = 0;
    if ( !v11 )
    {
      if ( StartContext[213] == StartContext[212] )
      {
LABEL_28:
        if ( g_IsInternalReleaseOrDbg )
        {
          v21 = WdLogNewEntry5_WdTrace(v13);
          v13 = (unsigned __int8)StartContext[212];
          *(_QWORD *)(v21 + 24) = v13;
          WdLogGlobalForLineNumber = 2312;
        }
        StartContext[214] = 0;
      }
      else
      {
        if ( g_IsInternalReleaseOrDbg )
        {
          v15 = WdLogNewEntry5_WdTrace(v13);
          v13 = 0LL;
          v12 = (_QWORD *)(v15 + 24);
          do
          {
            v16 = (unsigned __int8)StartContext[v13 + 212];
            ++v13;
            *v12++ = v16;
          }
          while ( v13 < 2 );
          WdLogGlobalForLineNumber = 2282;
        }
        LOBYTE(v13) = StartContext[213];
        StartContext[214] = 1;
        if ( (unsigned __int8)(v13 - 2) <= 3u )
        {
          KeWaitForSingleObject(v1 + 5149, Executive, 0, 0, 0LL);
          DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v1 + 4998));
          v17 = v1 + 4996;
          while ( 1 )
          {
            v18 = (__int64 *)*v17;
            if ( *(__int64 **)(*v17 + 8) != v17 || (v19 = *v18, *(__int64 **)(*v18 + 8) != v18) )
LABEL_209:
              __fastfail(3u);
            *v17 = v19;
            *(_QWORD *)(v19 + 8) = v17;
            if ( v18 == v17 )
              break;
            (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64))(*(_QWORD *)v18[2] + 24LL))(
              v18[2],
              0LL,
              v18[3],
              v18[4],
              v18[5]);
            operator delete(v18);
          }
          Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
          v1[4999] = 0LL;
          ExReleasePushLockExclusiveEx(v1 + 4998, 0LL);
          KeLeaveCriticalRegion();
        }
        else if ( (_BYTE)v13 == 1 )
        {
          LOBYTE(v12) = 1;
          VidMmSetWorkerThreadStatus(StartContext, v12);
        }
      }
      v8 = 1;
      v89 = 1;
      goto LABEL_32;
    }
    if ( v11 != 258 )
      goto LABEL_28;
    if ( g_IsInternalReleaseOrDbg )
    {
      v20 = WdLogNewEntry5_WdTrace(v13);
      v13 = *((_QWORD *)StartContext + 16);
      *(_QWORD *)(v20 + 24) = v13;
      WdLogGlobalForLineNumber = 2308;
    }
LABEL_32:
    if ( *((_QWORD *)StartContext + 16) && (byte_140081243 & 1) != 0 )
      McTemplateK0iq_EtwWriteTransfer(v13, (__int64)v12, v14);
    *((_QWORD *)StartContext + 16) = 0x8000000000000000uLL;
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v1 + 4998));
    v22 = v1 + 4996;
    while ( 1 )
    {
      v23 = (__int64 *)*v22;
      if ( *(__int64 **)(*v22 + 8) != v22 )
        goto LABEL_209;
      v24 = *v23;
      if ( *(__int64 **)(*v23 + 8) != v23 )
        goto LABEL_209;
      *v22 = v24;
      *(_QWORD *)(v24 + 8) = v22;
      if ( v23 == v22 )
        break;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64))(*(_QWORD *)v23[2] + 24LL))(
        v23[2],
        0LL,
        v23[3],
        v23[4],
        v23[5]);
      operator delete(v23);
    }
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    v1[4999] = 0LL;
    ExReleasePushLockExclusiveEx(v1 + 4998, 0LL);
    KeLeaveCriticalRegion();
    v4 = 0LL;
    if ( !v8 && !v7 && !v74 )
      goto LABEL_175;
    v27 = VidMmSelectPagingOperation((__int64)StartContext, (__int64 *)&v78, &v79, &v80);
    v30 = v80;
    v31 = v78;
    v32 = v79;
    v68 = v27;
    v81 = v78;
    if ( v80 )
    {
      if ( (byte_140081243 & 1) != 0 )
        McTemplateK0ppp_EtwWriteTransfer(v28, &EventVidMmSelectOperation, v29, *((_QWORD *)v80 + 3), v78, v79);
      if ( v31 )
      {
        if ( g_IsInternalReleaseOrDbg )
        {
          *(_QWORD *)(WdLogNewEntry5_WdTrace(v28) + 24) = v31;
          WdLogGlobalForLineNumber = 2349;
        }
        if ( *((_BYTE *)v32 + 24) && *((_DWORD *)v32 + 12) == 206 )
          *((_QWORD *)v32 + 18) = VidMmiQuerySystemTime();
      }
      else if ( g_IsInternalReleaseOrDbg )
      {
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v28) + 24) = v30;
        WdLogGlobalForLineNumber = 2359;
      }
      VidMmBeginOperation(StartContext, v30, v31, v32);
    }
    while ( 1 )
    {
      v33 = v72;
LABEL_56:
      ++*((_DWORD *)StartContext + 88);
      *((_QWORD *)StartContext + 28) = 0LL;
      *((_QWORD *)StartContext + 29) = 0LL;
      *((_QWORD *)StartContext + 27) = 0LL;
      StartContext[240] = 0;
      v77 = 0LL;
      v90 = 0;
      if ( g_IsInternalReleaseOrDbg )
      {
        WdLogNewEntry5_WdTrace(v28);
        WdLogGlobalForLineNumber = 2372;
      }
      v34 = 0;
      v35 = 2;
      v92 = 2;
      v91 = 0;
      v69 = 0;
      if ( !v30
        || (VIDMM_DEVICE::GetBudgetAndVisibilityState(v30, &v69, (enum VIDMM_BUDGET_PRIORITY_BAND *)&v92),
            v35 = v92,
            v36 = (char *)&unk_14005E26C,
            v34 = v69,
            v91 = v69,
            v92 == 2) )
      {
        v36 = (char *)&unk_14005E260;
      }
      v37 = v34 + 2LL * v33;
      v38 = &v36[24 * v37];
      v82 = v38;
      if ( !v31 )
        break;
      if ( g_IsInternalReleaseOrDbg )
      {
        WdLogNewEntry5_WdTrace(v37);
        WdLogGlobalForLineNumber = 2388;
      }
      v39 = VidMmSubmitPacket((VIDMM_GLOBAL **)StartContext, (__int64)v31, (__int64)v32, v38[8], &v90, &v77);
      v40 = v39;
      if ( v39 == -1071775232 )
      {
        v40 = 0;
        goto LABEL_73;
      }
      if ( !v32 || !*((_BYTE *)v32 + 24) || v90 && !*((_BYTE *)v32 + 128) || !*((_QWORD *)v32 + 9) )
      {
        if ( v39 < 0 )
          goto LABEL_89;
LABEL_73:
        if ( !*((_BYTE *)v32 + 24) )
          goto LABEL_77;
        goto LABEL_74;
      }
      v40 = 0;
LABEL_74:
      if ( *((_DWORD *)v32 + 12) == 206 )
      {
        SystemTime = VidMmiQuerySystemTime();
        *((_QWORD *)v32 + 19) = SystemTime;
        if ( SystemTime - *((_QWORD *)v32 + 17) > 1000000 )
        {
          VIDMM_COMMIT_TELEMETRY::Init(
            (VIDMM_COMMIT_TELEMETRY *)(StartContext + 216),
            (struct VIDMM_GLOBAL *)v1,
            v30,
            0LL);
          VIDMM_COMMIT_TELEMETRY::LogLongPagingPacket(v42, v32);
          *((_QWORD *)StartContext + 28) = 0LL;
          *((_QWORD *)StartContext + 29) = 0LL;
          *((_QWORD *)StartContext + 27) = 0LL;
          StartContext[240] = 0;
        }
      }
LABEL_77:
      VidMmReclaimPagingQueuePacket((struct VIDMM_WORKER_THREAD *)StartContext, v31, v32);
      if ( (*((_BYTE *)v30 + 312) & 7) != 1 )
        goto LABEL_89;
      v32 = 0LL;
      v81 = 0LL;
      v79 = 0LL;
      v31 = 0LL;
      v78 = 0LL;
      v67 = 0;
    }
    if ( v30 )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        WdLogNewEntry5_WdTrace(v37);
        WdLogGlobalForLineNumber = 2465;
      }
      v40 = VIDMM_DEVICE::Resume(v30, v38[8], &v90, &v77);
      if ( v68 || *((_DWORD *)StartContext + 52) )
      {
        v89 = 1;
        goto LABEL_89;
      }
    }
    else
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        WdLogNewEntry5_WdTrace(v37);
        WdLogGlobalForLineNumber = 2481;
      }
      v40 = 0;
    }
    v89 = 0;
LABEL_89:
    if ( v30 && (byte_140081243 & 1) != 0 )
      McTemplateK0qqtqttp_EtwWriteTransfer(
        v90,
        (unsigned __int8)v82[8],
        v35,
        v40,
        v72,
        v91,
        v35,
        v82[8],
        v90,
        (char)v77);
    if ( v40 >= 0 )
      goto LABEL_166;
    if ( v67 )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 54LL, v30, v31, v32);
      WdLogGlobalForLineNumber = 195;
      goto LABEL_208;
    }
    WdLogSingleEntry4(3LL, v32, v30);
    WdLogGlobalForLineNumber = 2521;
    v73 = 1;
    if ( !v90 )
      goto LABEL_129;
    v33 = v72;
    while ( 1 )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        WdLogNewEntry5_WdTrace(v28);
        WdLogGlobalForLineNumber = 2529;
      }
      VIDMM_COMMIT_TELEMETRY::Init((VIDMM_COMMIT_TELEMETRY *)(StartContext + 216), (struct VIDMM_GLOBAL *)v1, v30, v77);
      if ( !v91 )
        VIDMM_COMMIT_TELEMETRY::LogUnderBudgetButCantCommitEvent(v43, v82[8]);
      v84 = 0LL;
      v72 = v33;
      v44 = VidMmHandleRecoverablePageInFailure((struct VIDMM_WORKER_THREAD *)StartContext, (int)v30, (__int64 **)v77);
      if ( !v44 )
      {
        if ( g_IsInternalReleaseOrDbg )
        {
          WdLogNewEntry5_WdTrace(v28);
          WdLogGlobalForLineNumber = 2552;
        }
        v33 = v76;
        v72 = v76;
        goto LABEL_56;
      }
      if ( v44 == -1071775484 )
      {
        if ( g_IsInternalReleaseOrDbg )
        {
          WdLogNewEntry5_WdTrace(v28);
          WdLogGlobalForLineNumber = 2559;
        }
        v55 = v30;
        v56 = v84;
        v57 = v84;
        if ( (*((_BYTE *)v30 + 312) & 7) == 0 && VIDMM_DEVICE::IsBetterYieldCandidate(v30, v84) )
        {
          v56 = v30;
          v55 = v57;
        }
        VIDMM_DEVICE::Yield(v55, v56);
        if ( v56 == v30 )
        {
          v33 = v76;
          v31 = v81;
          v1 = v85;
          goto LABEL_143;
        }
        if ( v81 )
          VidMmRewindPagingQueuePacket((struct VIDMM_WORKER_THREAD *)StartContext, v81, v32);
        v1 = v85;
        LOBYTE(v29) = 8;
        VidMmSetWorkerThreadTimeout(StartContext, v85[570] - *((_QWORD *)v56 + 28), v29);
        v8 = v89;
        v9 = v70;
        v7 = v68;
LABEL_163:
        v6 = StartContext + 160;
        v4 = 0LL;
        goto LABEL_2;
      }
      if ( (**((_DWORD **)v77 + 12) & 0x20000) != 0 )
      {
        if ( *((_BYTE *)v32 + 24) )
        {
          if ( *((_DWORD *)v32 + 12) == 203 && *((_DWORD *)v32 + 20) == 5 )
          {
            v28 = *(_QWORD *)(v1[5029] + 8LL * ((*((_DWORD *)v77 + 8) >> 2) & 0x3F));
            if ( (*(_BYTE *)(v28 + 477) & 0x20) == 0 )
            {
              if ( g_IsInternalReleaseOrDbg )
              {
                WdLogNewEntry5_WdTrace(v28);
                WdLogGlobalForLineNumber = 2648;
              }
              *((_DWORD *)v32 + 20) = 6;
              v72 = v33;
              v76 = v33;
              goto LABEL_56;
            }
          }
        }
      }
      VIDMM_COMMIT_TELEMETRY::LogNoCandidatesToSuspendFound((VIDMM_COMMIT_TELEMETRY *)(StartContext + 216), v82[8]);
      if ( !v35 )
        break;
      if ( g_IsInternalReleaseOrDbg )
      {
        WdLogNewEntry5_WdTrace(v28);
        WdLogGlobalForLineNumber = 2664;
      }
      v92 = --v35;
LABEL_128:
      v76 = v33;
      if ( !v90 )
        goto LABEL_129;
    }
    v45 = *(_DWORD *)(***(_QWORD ***)v77 + 40LL);
    if ( v45 )
    {
      v46 = *(_QWORD *)(*(_QWORD *)(v1[5029] + 8LL * ((*((_DWORD *)v77 + 8) >> 2) & 0x3F)) + 1648LL);
      while ( 1 )
      {
        _BitScanReverse((unsigned int *)&v47, v45);
        ThreadInformation[1] = v47;
        v45 &= (1 << v47) - 1;
        v48 = *(_QWORD *)(v46 + 8 * v47);
        if ( *(_BYTE *)(v48 + 513) )
        {
          if ( *(_QWORD *)(v48 + 544) != *(_QWORD *)(*v1 + 112LL) )
            break;
        }
        if ( !v45 )
          goto LABEL_118;
      }
      if ( !v48 )
      {
LABEL_118:
        v33 = v72;
        goto LABEL_119;
      }
      WdLogSingleEntry1(4LL, v48);
      WdLogGlobalForLineNumber = 2679;
      VidMmDefragmentSegment(StartContext, v48);
      v33 = v72;
      v92 = -1;
      v76 = v72;
LABEL_143:
      v72 = v33;
      goto LABEL_56;
    }
LABEL_119:
    WdLogSingleEntry2(1LL, v30, v32);
    WdLogGlobalForLineNumber = 2689;
    DxgkLogInternalTriageEvent(v49, 0x40000LL);
    if ( !dword_140081618 || KdRefreshDebuggerNotPresent() )
      goto LABEL_129;
    v50 = *(_QWORD **)(*(_QWORD *)v77 + 8LL);
    IsProcessCommitRelinquished = PsIsProcessCommitRelinquished(*v50);
    v28 = (unsigned int)g_UnrecoverablePagingFailureDebugMode;
    if ( !g_UnrecoverablePagingFailureDebugMode )
    {
      if ( IsProcessCommitRelinquished )
        goto LABEL_146;
      v52 = "\n"
            "Video memory manager cannot ensure forward progress on this paging operation, and the device\n"
            "\"?? ((dxgmms2!VIDMM_DEVICE*)0x%p)\" will be placed in error.\n"
            "Paging operation type: Failure to process paging packet \"?? ((dxgmms2!VIDMM_PAGING_QUEUE_PACKET*)0x%p)\"\n"
            "from paging queue \"?? ((dxgmms2!VIDMM_PAGING_QUEUE*)0x%p)\".\n";
      if ( !v79 )
        v52 = "\n"
              "Video memory manager cannot ensure forward progress on this paging operation, and the device\n"
              "\"?? ((dxgmms2!VIDMM_DEVICE*)0x%p)\" will be placed in error.\n"
              "Paging operation type: Failure to resume device\n";
      DbgPrintEx(0x65u, 0, v52, v80, v79, v78, 0LL, 0LL);
      DbgPrintEx(
        0x65u,
        0,
        "\n"
        "We broke into the debugger to allow a chance for debugging this issue.\n"
        "\n"
        "To disable debug breaks on unrecoverable paging packet failures, run \"?? dxgmms2!g_UnrecoverablePagingFailureDe"
        "bugMode=1\"\n"
        "or \"ed 0x%p 1\"\n"
        "To re-attempt the failed paging packet execution for debugging purposes, run \"?? dxgmms2!g_UnrecoverablePagingF"
        "ailureDebugMode=2\"\n"
        "or \"ed 0x%p 2\"\n"
        "To re-attempt the suspend attempt for debugging purposes, run \"?? dxgmms2!g_UnrecoverablePagingFailureDebugMode"
        "=3\"\n"
        "or \"ed 0x%p 3\"\n"
        "!!! Note that option 2 will result in an unrecoverable machine state that should be rebooted after stepping thro"
        "ugh the code is done.!!!\n"
        "\n",
        (const void *)&g_UnrecoverablePagingFailureDebugMode,
        (const void *)&g_UnrecoverablePagingFailureDebugMode,
        (const void *)&g_UnrecoverablePagingFailureDebugMode);
      __debugbreak();
      if ( g_UnrecoverablePagingFailureDebugMode != 2 )
      {
        if ( g_UnrecoverablePagingFailureDebugMode != 3 )
          goto LABEL_149;
        v31 = v78;
        v30 = v80;
        v32 = v79;
        v35 = v92;
        v81 = v78;
        v91 = v69;
        goto LABEL_128;
      }
      v31 = v78;
      v30 = v80;
      v32 = v79;
      v81 = v78;
      v72 = v33;
      v76 = v33;
      goto LABEL_56;
    }
    if ( IsProcessCommitRelinquished )
    {
LABEL_146:
      v54 = v50[4];
      if ( v54 && !*(_BYTE *)(v54 + 572) )
      {
        DbgPrintEx(
          0x65u,
          0,
          "\n"
          "We broke in to the debugger as a unrecoverable paging failure occurred after a process had its\n"
          "virtual address space torn down, yet we do not detect ourselves in the frozen state for that process.\n"
          "DXGPROCESS 0x%I64p and Mm should be inspected for how we reached this state.\n");
        __debugbreak();
      }
    }
LABEL_149:
    v31 = v78;
    v32 = v79;
    v30 = v80;
    v81 = v78;
LABEL_129:
    v67 = 1;
    v53 = v30;
    if ( v31 && *((_BYTE *)v32 + 24) )
    {
      *((_BYTE *)v32 + 128) = 1;
      if ( !*((_QWORD *)v32 + 9) )
      {
        v53 = (struct VIDMM_DEVICE *)*((_QWORD *)v32 + 7);
        if ( !v53 )
        {
          v53 = *(struct VIDMM_DEVICE **)(*((_QWORD *)v32 + 8) + 8LL);
          goto LABEL_134;
        }
LABEL_135:
        v28 = *((_QWORD *)v53 + 4);
        if ( v28 )
          VidSchMarkDeviceAsError(v28, 12);
      }
    }
    else
    {
LABEL_134:
      if ( v53 )
        goto LABEL_135;
    }
    if ( v90 )
    {
      v33 = 0;
      v72 = 0;
      v76 = 0;
      goto LABEL_56;
    }
    if ( v31 )
      VidMmReclaimPagingQueuePacket((struct VIDMM_WORKER_THREAD *)StartContext, v31, v32);
LABEL_166:
    LOBYTE(v29) = v67;
    LOBYTE(v36) = 1;
    VidMmEndOperation(StartContext, v36, v29);
    if ( StartContext[213] != 1 )
      goto LABEL_173;
    v58 = VIDMM_GLOBAL::CheckForMemoryBudgetThresholdChanges((VIDMM_GLOBAL *)v1);
    if ( (unsigned __int8)v73 | v58 )
      VIDMM_GLOBAL::RequestNewBudget((VIDMM_GLOBAL *)v1, 0);
    VIDMM_GLOBAL::HandlePromotionCandidates((VIDMM_GLOBAL *)v1, &v74);
    if ( VIDMM_GLOBAL::IsPenaltyBoxEmpty((__int64)v1) )
    {
LABEL_173:
      v8 = v89;
    }
    else
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        WdLogNewEntry5_WdTrace(v26);
        WdLogGlobalForLineNumber = 2889;
      }
      v8 = 1;
      v89 = 1;
    }
    v9 = v70;
    v4 = 0LL;
    v7 = v68;
LABEL_175:
    if ( g_IsInternalReleaseOrDbg )
    {
      WdLogNewEntry5_WdTrace(v26);
      WdLogGlobalForLineNumber = 2895;
    }
    v59 = StartContext[212];
    v60 = StartContext + 212;
    if ( v59 != 4 && v59 != 3 && v59 != 5 )
    {
      if ( dword_140081504 && !*((_DWORD *)DXGGLOBAL::GetGlobal() + 514) )
      {
        if ( g_IsInternalReleaseOrDbg )
        {
          WdLogNewEntry5_WdTrace(v60);
          WdLogGlobalForLineNumber = 2903;
        }
        v75 = 0;
        VIDMM_GLOBAL::RecalculateBudget((VIDMM_GLOBAL *)v1, &v75);
        VIDMM_GLOBAL::HandleTrimWnf((VIDMM_GLOBAL *)v1, v75);
      }
      if ( g_IsInternalReleaseOrDbg )
      {
        WdLogNewEntry5_WdTrace(v60);
        WdLogGlobalForLineNumber = 2915;
      }
      VIDMM_GLOBAL::ProcessPendingOfferList((VIDMM_GLOBAL *)v1);
      if ( VIDMM_GLOBAL::UnderCleanupLimit((VIDMM_GLOBAL *)v1) )
      {
        if ( g_IsInternalReleaseOrDbg )
        {
          WdLogNewEntry5_WdTrace(v61);
          WdLogGlobalForLineNumber = 2920;
        }
        VIDMM_GLOBAL::ProcessSystemMemoryOfferList((VIDMM_GLOBAL *)v1);
        VIDMM_GLOBAL::ProcessSegmentOfferLists((VIDMM_GLOBAL *)v1);
        v1[465] = v1 + 464;
        v1[464] = v1 + 464;
        VIDMM_GLOBAL::CleanupMarkedForEvictionAllocations((VIDMM_GLOBAL *)v1);
      }
      if ( !v8 && !VIDMM_GLOBAL::UnderCleanupLimit((VIDMM_GLOBAL *)v1) )
      {
        VIDMM_GLOBAL::ResetCleanupCounters(v62, 1);
        v9 = 1;
      }
      VidMmProcessPendingTerminations((KSPIN_LOCK **)StartContext, 0, &v71);
      VIDMM_GLOBAL::CheckMemorySegmentsFState((VIDMM_GLOBAL *)v1);
      v60 = StartContext + 212;
    }
    v6 = StartContext + 160;
  }
  while ( v8 );
  v63 = StartContext + 213;
  v64 = StartContext[213];
  if ( v64 == *v60 )
    goto LABEL_206;
  if ( v64 == 5 )
  {
    v65 = (_QWORD *)v1[5581];
    if ( v65 != v1 + 5581 )
    {
      do
      {
        v66 = (VIDMM_DEVICE *)(v65 - 25);
        if ( !*(v65 - 2) && *((_QWORD *)v66 + 3) )
          VIDMM_DEVICE::Suspend(v66, 1);
        v65 = (_QWORD *)*v65;
      }
      while ( v65 != v1 + 5581 );
      v63 = StartContext + 213;
    }
    v8 = v89;
  }
  LOBYTE(v25) = *v63;
  VidMmSetWorkerThreadStatus(StartContext, v25);
  if ( *v63 != 2 )
  {
LABEL_206:
    VIDMM_GLOBAL::CleanFragmentation((VIDMM_GLOBAL *)v1);
    goto LABEL_163;
  }
LABEL_208:
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  *((_QWORD *)StartContext + 21) = 0LL;
  ExReleasePushLockExclusiveEx(StartContext + 160, 0LL);
  KeLeaveCriticalRegion();
  ObfDereferenceObject(*((PVOID *)StartContext + 1));
  PsTerminateSystemThread(0);
}
