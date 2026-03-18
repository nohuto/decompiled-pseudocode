/*
 * XREFs of VidMmWorkerThreadProc @ 0x1400EE3E0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ??3@YAXPEAX@Z @ 0x14001D2D0 (--3@YAXPEAX@Z.c)
 *     VidSchMarkDeviceAsError @ 0x14001F860 (VidSchMarkDeviceAsError.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140035860 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140035A00 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsPenaltyBoxEmpty@VIDMM_GLOBAL@@QEAA_NW4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x140035C74 (-IsPenaltyBoxEmpty@VIDMM_GLOBAL@@QEAA_NW4VIDMM_PENALTY_BOX_BAND@@@Z.c)
 *     ?VidMmiQuerySystemTime@@YA_JXZ @ 0x1400365E4 (-VidMmiQuerySystemTime@@YA_JXZ.c)
 *     McTemplateK0qqtqttp_EtwWriteTransfer @ 0x14003C7B0 (McTemplateK0qqtqttp_EtwWriteTransfer.c)
 *     McTemplateK0ppp_EtwWriteTransfer @ 0x14003D274 (McTemplateK0ppp_EtwWriteTransfer.c)
 *     McTemplateK0iq_EtwWriteTransfer @ 0x14003DE34 (McTemplateK0iq_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 *     ?UnderCleanupLimit@VIDMM_GLOBAL@@QEAA_NXZ @ 0x1400AD620 (-UnderCleanupLimit@VIDMM_GLOBAL@@QEAA_NXZ.c)
 *     ?CleanupMarkedForEvictionAllocations@VIDMM_GLOBAL@@QEAAXXZ @ 0x1400B1BBC (-CleanupMarkedForEvictionAllocations@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?ProcessSegmentOfferLists@VIDMM_GLOBAL@@QEAAXXZ @ 0x1400CF570 (-ProcessSegmentOfferLists@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?HandleTrimWnf@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1400D1800 (-HandleTrimWnf@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 *     ?Suspend@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1400D5988 (-Suspend@VIDMM_DEVICE@@QEAAX_N@Z.c)
 *     ?Resume@VIDMM_DEVICE@@QEAAJ_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400D5D58 (-Resume@VIDMM_DEVICE@@QEAAJ_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?Init@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@@Z @ 0x1400D61F4 (-Init@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@@Z.c)
 *     ?Yield@VIDMM_DEVICE@@QEAAXPEAV1@@Z @ 0x1400D6BC4 (-Yield@VIDMM_DEVICE@@QEAAXPEAV1@@Z.c)
 *     ?CheckForMemoryBudgetThresholdChanges@VIDMM_GLOBAL@@QEAA_NXZ @ 0x1400DE9A0 (-CheckForMemoryBudgetThresholdChanges@VIDMM_GLOBAL@@QEAA_NXZ.c)
 *     ?RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1400DF530 (-RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 *     ?RecalculateBudget@VIDMM_GLOBAL@@QEAAXPEA_N@Z @ 0x1400DF728 (-RecalculateBudget@VIDMM_GLOBAL@@QEAAXPEA_N@Z.c)
 *     ?VidMmReclaimPagingQueuePacket@@YAXPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@@Z @ 0x1400E0A5C (-VidMmReclaimPagingQueuePacket@@YAXPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_PA.c)
 *     VidMmSubmitPacket @ 0x1400E0D40 (VidMmSubmitPacket.c)
 *     VidMmProcessPendingTerminations @ 0x1400E1108 (VidMmProcessPendingTerminations.c)
 *     ?CheckMemorySegmentsFState@VIDMM_GLOBAL@@QEAAXXZ @ 0x1400E6508 (-CheckMemorySegmentsFState@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     VidMmSelectPagingOperation @ 0x1400E7AF0 (VidMmSelectPagingOperation.c)
 *     VidMmHandleRecoverablePageInFailure @ 0x1400E9904 (VidMmHandleRecoverablePageInFailure.c)
 *     ?ProcessPendingOfferList@VIDMM_GLOBAL@@QEAAXXZ @ 0x1400EB160 (-ProcessPendingOfferList@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?CleanFragmentation@VIDMM_GLOBAL@@QEAAXXZ @ 0x1400EB61C (-CleanFragmentation@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ @ 0x1400ECFEC (-ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?GetBudgetAndVisibilityState@VIDMM_DEVICE@@QEAAXPEA_NPEAW4VIDMM_BUDGET_PRIORITY_BAND@@@Z @ 0x1400EF5D8 (-GetBudgetAndVisibilityState@VIDMM_DEVICE@@QEAAXPEA_NPEAW4VIDMM_BUDGET_PRIORITY_BAND@@@Z.c)
 *     ?LogUnderBudgetButCantCommitEvent@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z @ 0x1400EF8C8 (-LogUnderBudgetButCantCommitEvent@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z.c)
 *     ?LogLongPagingPacket@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z @ 0x1400EFB30 (-LogLongPagingPacket@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z.c)
 *     VidMmEndOperation @ 0x1400F137C (VidMmEndOperation.c)
 *     ?VidMmSetWorkerThreadTimeout@@YAXPEAUVIDMM_WORKER_THREAD@@_JW4VIDMM_WORKER_THREAD_WAKE_REASON@@@Z @ 0x1400F18DC (-VidMmSetWorkerThreadTimeout@@YAXPEAUVIDMM_WORKER_THREAD@@_JW4VIDMM_WORKER_THREAD_WAKE_REASON@@@.c)
 *     ?ResetCleanupCounters@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1400F4050 (-ResetCleanupCounters@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 *     VidMmBeginOperation @ 0x1400FB9CC (VidMmBeginOperation.c)
 *     VidMmDefragmentSegment @ 0x1400FF220 (VidMmDefragmentSegment.c)
 *     VidMmSetWorkerThreadStatus @ 0x1401007AC (VidMmSetWorkerThreadStatus.c)
 *     ?VidMmRewindPagingQueuePacket@@YAXPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@@Z @ 0x140104290 (-VidMmRewindPagingQueuePacket@@YAXPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAG.c)
 *     ?IsBetterYieldCandidate@VIDMM_DEVICE@@QEAA_NPEAV1@@Z @ 0x140104480 (-IsBetterYieldCandidate@VIDMM_DEVICE@@QEAA_NPEAV1@@Z.c)
 *     ?LogNoCandidatesToSuspendFound@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z @ 0x14011141C (-LogNoCandidatesToSuspendFound@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z.c)
 *     ?HandlePromotionCandidates@VIDMM_GLOBAL@@QEAAXPEA_N@Z @ 0x140114F00 (-HandlePromotionCandidates@VIDMM_GLOBAL@@QEAAXPEA_N@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VidMmWorkerThreadProc(char *StartContext)
{
  _QWORD *v1; // r14
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned __int8 v6; // r15
  unsigned __int8 v7; // r13
  char *v8; // rsi
  _BYTE *v9; // rcx
  union _LARGE_INTEGER *v10; // rdi
  _QWORD *v11; // rax
  NTSTATUS v12; // edi
  _QWORD *v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r12
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 *v19; // rsi
  __int64 *v20; // rdi
  __int64 v21; // rax
  __int64 *v22; // rsi
  __int64 *v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  bool v27; // al
  __int64 v28; // rcx
  __int64 v29; // r8
  struct VIDMM_DEVICE *v30; // r13
  struct VIDMM_PAGING_QUEUE *v31; // r15
  struct VIDMM_PAGING_QUEUE_PACKET *v32; // rdi
  bool v33; // al
  char *v34; // rdx
  __int64 v35; // rcx
  char *v36; // rsi
  int v37; // eax
  int v38; // esi
  __int64 SystemTime; // rax
  VIDMM_COMMIT_TELEMETRY *v40; // rcx
  VIDMM_COMMIT_TELEMETRY *v41; // rcx
  char *v42; // rsi
  int v43; // eax
  __int64 v44; // rcx
  unsigned int v45; // edx
  __int64 v46; // r8
  __int64 v47; // rcx
  __int64 v48; // rsi
  __int64 v49; // rcx
  _QWORD *v50; // rdi
  char IsProcessCommitRelinquished; // al
  const CHAR *v52; // r8
  struct VIDMM_DEVICE *v53; // rax
  __int64 v54; // rcx
  __int64 v55; // r9
  VIDMM_DEVICE *v56; // r14
  struct VIDMM_DEVICE *v57; // rsi
  struct VIDMM_DEVICE *v58; // r12
  unsigned __int8 v59; // al
  char v60; // dl
  __int64 v61; // rcx
  VIDMM_GLOBAL *v62; // rcx
  _BYTE *v63; // rdi
  char v64; // al
  _QWORD **v65; // r14
  _QWORD *v66; // rsi
  VIDMM_DEVICE *v67; // rcx
  char v68; // [rsp+50h] [rbp-69h]
  bool v69; // [rsp+51h] [rbp-68h] BYREF
  unsigned __int8 v70; // [rsp+52h] [rbp-67h]
  bool v71; // [rsp+53h] [rbp-66h] BYREF
  bool v72; // [rsp+54h] [rbp-65h]
  unsigned int v73; // [rsp+58h] [rbp-61h]
  char v74; // [rsp+5Ch] [rbp-5Dh]
  bool v75; // [rsp+5Dh] [rbp-5Ch] BYREF
  bool v76; // [rsp+5Eh] [rbp-5Bh] BYREF
  unsigned int v77; // [rsp+60h] [rbp-59h]
  struct VIDMM_ALLOC *v78; // [rsp+68h] [rbp-51h] BYREF
  struct VIDMM_PAGING_QUEUE *v79; // [rsp+70h] [rbp-49h] BYREF
  struct VIDMM_PAGING_QUEUE_PACKET *v80; // [rsp+78h] [rbp-41h] BYREF
  struct VIDMM_DEVICE *v81; // [rsp+80h] [rbp-39h] BYREF
  struct VIDMM_PAGING_QUEUE *v82; // [rsp+88h] [rbp-31h]
  _QWORD *v83; // [rsp+90h] [rbp-29h]
  _DWORD ThreadInformation[2]; // [rsp+98h] [rbp-21h] BYREF
  char *v85; // [rsp+A0h] [rbp-19h]
  struct VIDMM_DEVICE *v86; // [rsp+A8h] [rbp-11h]
  union _LARGE_INTEGER v87; // [rsp+B0h] [rbp-9h] BYREF
  PVOID Object; // [rsp+B8h] [rbp-1h] BYREF
  __int64 v89; // [rsp+C0h] [rbp+7h]
  char v90; // [rsp+120h] [rbp+67h]
  bool v91; // [rsp+128h] [rbp+6Fh] BYREF
  char v92; // [rsp+130h] [rbp+77h]
  char v93; // [rsp+138h] [rbp+7Fh] BYREF

  v1 = *(_QWORD **)StartContext;
  CurrentThread = KeGetCurrentThread();
  v83 = v1;
  *((_QWORD *)StartContext + 1) = CurrentThread;
  KeSetActualBasePriorityThread(CurrentThread, 15LL);
  ThreadInformation[0] = 1;
  ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadBreakOnTermination|0x20, ThreadInformation, 4u);
  KeWaitForSingleObject((PVOID)(*((_QWORD *)StartContext + 3) + 24LL), Executive, 0, 0, 0LL);
  LOBYTE(v4) = 1;
  VidMmSetWorkerThreadStatus(StartContext, v4);
  v89 = *((_QWORD *)StartContext + 3);
  v5 = v89;
  v6 = 0;
  *((_QWORD *)StartContext + 16) = 0x8000000000000000uLL;
  v7 = 0;
  v72 = 0;
  v90 = 0;
  Object = (PVOID)(v5 + 24);
  v75 = 0;
  v71 = 0;
  KeEnterCriticalRegion();
  v8 = StartContext + 160;
  ExAcquirePushLockExclusiveEx(StartContext + 160, 0LL);
  *((_QWORD *)StartContext + 21) = KeGetCurrentThread();
  do
  {
LABEL_2:
    *((_QWORD *)StartContext + 2) = 0LL;
    if ( v6 || v71 || v7 )
      *((_QWORD *)StartContext + 16) = 0LL;
    v87 = *(union _LARGE_INTEGER *)(StartContext + 128);
    if ( v87.QuadPart == 0x8000000000000000uLL )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        v11 = (_QWORD *)WdLogNewEntry5_WdTrace(v9);
        v11[3] = v6;
        v11[4] = v71;
        v11[5] = v7;
        WdLogGlobalForLineNumber = 2239;
      }
      v10 = 0LL;
    }
    else
    {
      v10 = &v87;
    }
    *((_QWORD *)StartContext + 21) = 0LL;
    ExReleasePushLockExclusiveEx(v8, 0LL);
    KeLeaveCriticalRegion();
    ++*((_QWORD *)StartContext + 14);
    v12 = KeWaitForMultipleObjects(2u, &Object, WaitAny, Executive, 0, 0, v10, 0LL);
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v8, 0LL);
    *((_QWORD *)StartContext + 21) = KeGetCurrentThread();
    v1[570] = VidMmiQuerySystemTime();
    VIDMM_GLOBAL::ResetCleanupCounters((VIDMM_GLOBAL *)v1, 0);
    v71 = 0;
    v7 = 0;
    v70 = 0;
    v74 = 0;
    v81 = 0LL;
    v79 = 0LL;
    v80 = 0LL;
    v73 = 0;
    v77 = 0;
    v16 = 0LL;
    v68 = 0;
    if ( !v12 )
    {
      if ( StartContext[213] == StartContext[212] )
      {
LABEL_29:
        if ( g_IsInternalReleaseOrDbg )
        {
          v14 = WdLogNewEntry5_WdTrace(v14);
          *(_QWORD *)(v14 + 24) = (unsigned __int8)StartContext[212];
          WdLogGlobalForLineNumber = 2312;
        }
        StartContext[214] = 0;
      }
      else
      {
        if ( g_IsInternalReleaseOrDbg )
        {
          v17 = WdLogNewEntry5_WdTrace(v14);
          v14 = 0LL;
          v13 = (_QWORD *)(v17 + 24);
          do
          {
            v18 = (unsigned __int8)StartContext[v14 + 212];
            ++v14;
            *v13++ = v18;
          }
          while ( v14 < 2 );
          WdLogGlobalForLineNumber = 2282;
        }
        LOBYTE(v14) = StartContext[213];
        StartContext[214] = 1;
        if ( (unsigned __int8)(v14 - 2) <= 3u )
        {
          KeWaitForSingleObject(v1 + 5149, Executive, 0, 0, 0LL);
          DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v1 + 4998));
          v19 = v1 + 4996;
          while ( 1 )
          {
            v20 = (__int64 *)*v19;
            if ( *(__int64 **)(*v19 + 8) != v19 || (v21 = *v20, *(__int64 **)(*v20 + 8) != v20) )
LABEL_211:
              __fastfail(3u);
            *v19 = v21;
            *(_QWORD *)(v21 + 8) = v19;
            if ( v20 == v19 )
              break;
            (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64))(*(_QWORD *)v20[2] + 24LL))(
              v20[2],
              0LL,
              v20[3],
              v20[4],
              v20[5]);
            operator delete(v20);
          }
          v1[4999] = 0LL;
          ExReleasePushLockExclusiveEx(v1 + 4998, 0LL);
          KeLeaveCriticalRegion();
        }
        else if ( (_BYTE)v14 == 1 )
        {
          LOBYTE(v13) = 1;
          VidMmSetWorkerThreadStatus(StartContext, v13);
        }
      }
      v6 = 1;
      v90 = 1;
      goto LABEL_33;
    }
    if ( v12 != 258 )
      goto LABEL_29;
    if ( g_IsInternalReleaseOrDbg )
    {
      v14 = WdLogNewEntry5_WdTrace(v14);
      *(_QWORD *)(v14 + 24) = *((_QWORD *)StartContext + 16);
      WdLogGlobalForLineNumber = 2308;
    }
LABEL_33:
    if ( *((_QWORD *)StartContext + 16) && (byte_140081243 & 1) != 0 )
      McTemplateK0iq_EtwWriteTransfer(v14, (__int64)v13, v15);
    *((_QWORD *)StartContext + 16) = 0x8000000000000000uLL;
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v1 + 4998));
    v22 = v1 + 4996;
    while ( 1 )
    {
      v23 = (__int64 *)*v22;
      if ( *(__int64 **)(*v22 + 8) != v22 )
        goto LABEL_211;
      v24 = *v23;
      if ( *(__int64 **)(*v23 + 8) != v23 )
        goto LABEL_211;
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
    v1[4999] = 0LL;
    ExReleasePushLockExclusiveEx(v1 + 4998, 0LL);
    KeLeaveCriticalRegion();
    if ( !v6 && !v72 && !v75 )
      goto LABEL_177;
    v27 = VidMmSelectPagingOperation((__int64)StartContext, (__int64 *)&v79, &v80, &v81);
    v30 = v81;
    v31 = v79;
    v32 = v80;
    v72 = v27;
    v82 = v79;
    if ( v81 )
    {
      if ( (byte_140081243 & 1) != 0 )
        McTemplateK0ppp_EtwWriteTransfer(v28, &EventVidMmSelectOperation, v29, *((_QWORD *)v81 + 3), v79, v80);
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
LABEL_56:
    while ( 2 )
    {
      while ( 2 )
      {
        ++*((_DWORD *)StartContext + 88);
        *((_QWORD *)StartContext + 28) = 0LL;
        *((_QWORD *)StartContext + 29) = 0LL;
        *((_QWORD *)StartContext + 27) = 0LL;
        StartContext[240] = 0;
        v78 = 0LL;
        v91 = 0;
        if ( g_IsInternalReleaseOrDbg )
        {
          WdLogNewEntry5_WdTrace(v28);
          WdLogGlobalForLineNumber = 2372;
        }
        v33 = 0;
        LOBYTE(v16) = 2;
        v93 = 2;
        v92 = 0;
        v69 = 0;
        if ( !v30
          || (VIDMM_DEVICE::GetBudgetAndVisibilityState(v30, &v69, (enum VIDMM_BUDGET_PRIORITY_BAND *)&v93),
              LOBYTE(v16) = v93,
              v34 = (char *)&unk_14005E3AC,
              v33 = v69,
              v92 = v69,
              v93 == 2) )
        {
          v34 = (char *)&unk_14005E3A0;
        }
        v35 = v33 + 2LL * (int)v73;
        v36 = &v34[24 * v35];
        v85 = v36;
        if ( v31 )
        {
          if ( g_IsInternalReleaseOrDbg )
          {
            WdLogNewEntry5_WdTrace(v35);
            WdLogGlobalForLineNumber = 2388;
          }
          v37 = VidMmSubmitPacket((VIDMM_GLOBAL **)StartContext, (__int64)v31, (__int64)v32, v36[8], &v91, &v78);
          v38 = v37;
          if ( v37 == -1071775232 )
          {
            v38 = 0;
LABEL_73:
            if ( !*((_BYTE *)v32 + 24) )
            {
LABEL_77:
              VidMmReclaimPagingQueuePacket((struct VIDMM_WORKER_THREAD *)StartContext, v31, v32);
              if ( (*((_BYTE *)v30 + 312) & 7) == 1 )
              {
                v16 = 0LL;
                v31 = 0LL;
                v82 = 0LL;
                v79 = 0LL;
                v32 = 0LL;
                v80 = 0LL;
                v68 = 0;
                continue;
              }
              break;
            }
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
                VIDMM_COMMIT_TELEMETRY::LogLongPagingPacket(v40, v32);
                *((_QWORD *)StartContext + 28) = 0LL;
                *((_QWORD *)StartContext + 29) = 0LL;
                *((_QWORD *)StartContext + 27) = 0LL;
                StartContext[240] = 0;
              }
            }
            goto LABEL_77;
          }
          if ( v32 && *((_BYTE *)v32 + 24) && (!v91 || *((_BYTE *)v32 + 128)) && *((_QWORD *)v32 + 9) )
          {
            v38 = 0;
            goto LABEL_74;
          }
          if ( v37 >= 0 )
            goto LABEL_73;
        }
        else
        {
          if ( v30 )
          {
            if ( g_IsInternalReleaseOrDbg )
            {
              WdLogNewEntry5_WdTrace(v35);
              WdLogGlobalForLineNumber = 2465;
            }
            v38 = VIDMM_DEVICE::Resume(v30, v36[8], &v91, &v78);
            if ( v72 || *((_DWORD *)StartContext + 52) )
            {
              v90 = 1;
              break;
            }
          }
          else
          {
            if ( g_IsInternalReleaseOrDbg )
            {
              WdLogNewEntry5_WdTrace(v35);
              WdLogGlobalForLineNumber = 2481;
            }
            v38 = 0;
          }
          v90 = 0;
        }
        break;
      }
      if ( v30 && (byte_140081243 & 1) != 0 )
        McTemplateK0qqtqttp_EtwWriteTransfer(
          v91,
          (unsigned __int8)v85[8],
          (unsigned __int8)v16,
          v38,
          v73,
          v92,
          v16,
          v85[8],
          v91,
          (char)v78);
      if ( v38 >= 0 )
      {
        v16 = 0LL;
        goto LABEL_168;
      }
      if ( v68 )
      {
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 54LL, v30, v31, v32);
        WdLogGlobalForLineNumber = 195;
        goto LABEL_210;
      }
      WdLogSingleEntry4(3LL, v32, v30);
      WdLogGlobalForLineNumber = 2521;
      v74 = 1;
      while ( 1 )
      {
        if ( !v91 )
        {
          v16 = 0LL;
          goto LABEL_129;
        }
        if ( g_IsInternalReleaseOrDbg )
        {
          WdLogNewEntry5_WdTrace(v28);
          WdLogGlobalForLineNumber = 2529;
        }
        VIDMM_COMMIT_TELEMETRY::Init(
          (VIDMM_COMMIT_TELEMETRY *)(StartContext + 216),
          (struct VIDMM_GLOBAL *)v1,
          v30,
          v78);
        v42 = v85;
        if ( !v92 )
          VIDMM_COMMIT_TELEMETRY::LogUnderBudgetButCantCommitEvent(v41, v85[8]);
        v86 = 0LL;
        v43 = VidMmHandleRecoverablePageInFailure((struct VIDMM_WORKER_THREAD *)StartContext, (int)v30, (__int64 **)v78);
        v29 = 0LL;
        if ( !v43 )
        {
          v16 = 0LL;
          if ( g_IsInternalReleaseOrDbg )
          {
            WdLogNewEntry5_WdTrace(v44);
            v73 = v77;
            WdLogGlobalForLineNumber = 2552;
          }
          else
          {
            v28 = v77;
            v73 = v77;
          }
          goto LABEL_56;
        }
        if ( v43 == -1071775484 )
        {
          if ( g_IsInternalReleaseOrDbg )
          {
            WdLogNewEntry5_WdTrace(v44);
            WdLogGlobalForLineNumber = 2559;
          }
          v56 = v30;
          v57 = v86;
          v58 = v86;
          if ( (*((_BYTE *)v30 + 312) & 7) == 0 && VIDMM_DEVICE::IsBetterYieldCandidate(v30, v86) )
          {
            v57 = v30;
            v56 = v58;
          }
          VIDMM_DEVICE::Yield(v56, v57);
          if ( v57 == v30 )
          {
            v28 = v77;
            v1 = v83;
            v31 = v82;
            v73 = v77;
            goto LABEL_145;
          }
          if ( v82 )
            VidMmRewindPagingQueuePacket((struct VIDMM_WORKER_THREAD *)StartContext, v82, v32);
          v1 = v83;
          LOBYTE(v29) = 8;
          VidMmSetWorkerThreadTimeout(StartContext, v83[570] - *((_QWORD *)v57 + 28), v29);
          v6 = v90;
          v7 = v70;
LABEL_164:
          v8 = StartContext + 160;
          goto LABEL_2;
        }
        if ( (**((_DWORD **)v78 + 12) & 0x20000) != 0 )
        {
          if ( *((_BYTE *)v32 + 24) )
          {
            if ( *((_DWORD *)v32 + 12) == 203 && *((_DWORD *)v32 + 20) == 5 )
            {
              v28 = *(_QWORD *)(v1[5029] + 8LL * ((*((_DWORD *)v78 + 8) >> 2) & 0x3F));
              if ( (*(_BYTE *)(v28 + 477) & 0x20) == 0 )
              {
                if ( g_IsInternalReleaseOrDbg )
                {
                  WdLogNewEntry5_WdTrace(v28);
                  WdLogGlobalForLineNumber = 2648;
                }
                *((_DWORD *)v32 + 20) = 6;
                goto LABEL_144;
              }
            }
          }
        }
        VIDMM_COMMIT_TELEMETRY::LogNoCandidatesToSuspendFound((VIDMM_COMMIT_TELEMETRY *)(StartContext + 216), v42[8]);
        if ( (_BYTE)v16 )
        {
          if ( g_IsInternalReleaseOrDbg )
          {
            WdLogNewEntry5_WdTrace(v28);
            WdLogGlobalForLineNumber = 2664;
          }
          LOBYTE(v16) = v16 - 1;
          v93 = v16;
          goto LABEL_126;
        }
        v45 = *(_DWORD *)(***(_QWORD ***)v78 + 40LL);
        if ( v45 )
        {
          v46 = *(_QWORD *)(*(_QWORD *)(v1[5029] + 8LL * ((*((_DWORD *)v78 + 8) >> 2) & 0x3F)) + 1648LL);
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
              goto LABEL_117;
          }
          if ( v48 )
          {
            WdLogSingleEntry1(4LL, v48);
            WdLogGlobalForLineNumber = 2679;
            VidMmDefragmentSegment(StartContext, v48);
            v93 = -1;
            goto LABEL_144;
          }
        }
LABEL_117:
        WdLogSingleEntry2(1LL, v30, v32);
        v16 = 0LL;
        WdLogGlobalForLineNumber = 2689;
        DxgkLogInternalTriageEvent(v49, 0x40000LL);
        if ( !dword_140081638 || KdRefreshDebuggerNotPresent() )
          goto LABEL_129;
        v50 = *(_QWORD **)(*(_QWORD *)v78 + 8LL);
        IsProcessCommitRelinquished = PsIsProcessCommitRelinquished(*v50);
        if ( g_UnrecoverablePagingFailureDebugMode )
          break;
        if ( IsProcessCommitRelinquished )
          goto LABEL_147;
        v52 = "\n"
              "Video memory manager cannot ensure forward progress on this paging operation, and the device\n"
              "\"?? ((dxgmms2!VIDMM_DEVICE*)0x%p)\" will be placed in error.\n"
              "Paging operation type: Failure to process paging packet \"?? ((dxgmms2!VIDMM_PAGING_QUEUE_PACKET*)0x%p)\"\n"
              "from paging queue \"?? ((dxgmms2!VIDMM_PAGING_QUEUE*)0x%p)\".\n";
        if ( !v80 )
          v52 = "\n"
                "Video memory manager cannot ensure forward progress on this paging operation, and the device\n"
                "\"?? ((dxgmms2!VIDMM_DEVICE*)0x%p)\" will be placed in error.\n"
                "Paging operation type: Failure to resume device\n";
        DbgPrintEx(0x65u, 0, v52, v81, v80, v79, 0LL, 0LL);
        DbgPrintEx(
          0x65u,
          0,
          "\n"
          "We broke into the debugger to allow a chance for debugging this issue.\n"
          "\n"
          "To disable debug breaks on unrecoverable paging packet failures, run \"?? dxgmms2!g_UnrecoverablePagingFailure"
          "DebugMode=1\"\n"
          "or \"ed 0x%p 1\"\n"
          "To re-attempt the failed paging packet execution for debugging purposes, run \"?? dxgmms2!g_UnrecoverablePagin"
          "gFailureDebugMode=2\"\n"
          "or \"ed 0x%p 2\"\n"
          "To re-attempt the suspend attempt for debugging purposes, run \"?? dxgmms2!g_UnrecoverablePagingFailureDebugMo"
          "de=3\"\n"
          "or \"ed 0x%p 3\"\n"
          "!!! Note that option 2 will result in an unrecoverable machine state that should be rebooted after stepping th"
          "rough the code is done.!!!\n"
          "\n",
          (const void *)&g_UnrecoverablePagingFailureDebugMode,
          (const void *)&g_UnrecoverablePagingFailureDebugMode,
          (const void *)&g_UnrecoverablePagingFailureDebugMode);
        __debugbreak();
        if ( g_UnrecoverablePagingFailureDebugMode == 2 )
        {
          v31 = v79;
          v30 = v81;
          v32 = v80;
          v82 = v79;
LABEL_144:
          v77 = v73;
LABEL_145:
          v16 = 0LL;
          goto LABEL_56;
        }
        if ( g_UnrecoverablePagingFailureDebugMode != 3 )
          goto LABEL_150;
        v31 = v79;
        v30 = v81;
        v32 = v80;
        LOBYTE(v16) = v93;
        v82 = v79;
        v92 = v69;
LABEL_126:
        v77 = v73;
      }
      if ( IsProcessCommitRelinquished )
      {
LABEL_147:
        v55 = v50[4];
        if ( v55 && !*(_BYTE *)(v55 + 572) )
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
LABEL_150:
      v31 = v79;
      v32 = v80;
      v30 = v81;
      v82 = v79;
LABEL_129:
      v68 = 1;
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
          v54 = *((_QWORD *)v53 + 4);
          if ( v54 )
            VidSchMarkDeviceAsError(v54, 12LL);
        }
      }
      else
      {
LABEL_134:
        if ( v53 )
          goto LABEL_135;
      }
      if ( v91 )
      {
        v28 = 0LL;
        v73 = 0;
        v77 = 0;
        continue;
      }
      break;
    }
    if ( v31 )
      VidMmReclaimPagingQueuePacket((struct VIDMM_WORKER_THREAD *)StartContext, v31, v32);
LABEL_168:
    LOBYTE(v29) = v68;
    LOBYTE(v34) = 1;
    VidMmEndOperation(StartContext, v34, v29);
    if ( StartContext[213] != 1 )
      goto LABEL_175;
    v59 = VIDMM_GLOBAL::CheckForMemoryBudgetThresholdChanges((VIDMM_GLOBAL *)v1);
    if ( (unsigned __int8)v74 | v59 )
      VIDMM_GLOBAL::RequestNewBudget((VIDMM_GLOBAL *)v1, 0);
    VIDMM_GLOBAL::HandlePromotionCandidates((VIDMM_GLOBAL *)v1, &v75);
    if ( VIDMM_GLOBAL::IsPenaltyBoxEmpty((__int64)v1) )
    {
LABEL_175:
      v6 = v90;
    }
    else
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        WdLogNewEntry5_WdTrace(v26);
        WdLogGlobalForLineNumber = 2889;
      }
      v6 = 1;
      v90 = 1;
    }
    v7 = v70;
LABEL_177:
    if ( g_IsInternalReleaseOrDbg )
    {
      WdLogNewEntry5_WdTrace(v26);
      WdLogGlobalForLineNumber = 2895;
    }
    v60 = StartContext[212];
    v9 = StartContext + 212;
    if ( v60 != 4 && v60 != 3 && v60 != 5 )
    {
      if ( dword_140081524 && !*((_DWORD *)DXGGLOBAL::GetGlobal() + 522) )
      {
        if ( g_IsInternalReleaseOrDbg )
        {
          WdLogNewEntry5_WdTrace(v9);
          WdLogGlobalForLineNumber = 2903;
        }
        v76 = 0;
        VIDMM_GLOBAL::RecalculateBudget((VIDMM_GLOBAL *)v1, &v76);
        VIDMM_GLOBAL::HandleTrimWnf((VIDMM_GLOBAL *)v1, v76);
      }
      if ( g_IsInternalReleaseOrDbg )
      {
        WdLogNewEntry5_WdTrace(v9);
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
      if ( !v6 && !VIDMM_GLOBAL::UnderCleanupLimit((VIDMM_GLOBAL *)v1) )
      {
        VIDMM_GLOBAL::ResetCleanupCounters(v62, 1);
        v7 = 1;
      }
      VidMmProcessPendingTerminations((KSPIN_LOCK **)StartContext, 0, &v71);
      VIDMM_GLOBAL::CheckMemorySegmentsFState((VIDMM_GLOBAL *)v1);
      v9 = StartContext + 212;
    }
    v8 = StartContext + 160;
  }
  while ( v6 );
  v63 = StartContext + 213;
  v64 = StartContext[213];
  if ( v64 == *v9 )
    goto LABEL_208;
  if ( v64 == 5 )
  {
    v65 = (_QWORD **)(v1 + 5581);
    v66 = *v65;
    if ( *v65 != v65 )
    {
      do
      {
        v67 = (VIDMM_DEVICE *)(v66 - 25);
        if ( !*(v66 - 2) && *((_QWORD *)v67 + 3) )
          VIDMM_DEVICE::Suspend(v67, 1);
        v66 = (_QWORD *)*v66;
      }
      while ( v66 != v65 );
      v63 = StartContext + 213;
    }
    v1 = v83;
  }
  LOBYTE(v25) = *v63;
  VidMmSetWorkerThreadStatus(StartContext, v25);
  if ( *v63 != 2 )
  {
LABEL_208:
    VIDMM_GLOBAL::CleanFragmentation((VIDMM_GLOBAL *)v1);
    goto LABEL_164;
  }
LABEL_210:
  *((_QWORD *)StartContext + 21) = v16;
  ExReleasePushLockExclusiveEx(StartContext + 160, 0LL);
  KeLeaveCriticalRegion();
  ObfDereferenceObject(*((PVOID *)StartContext + 1));
  PsTerminateSystemThread(0);
}
