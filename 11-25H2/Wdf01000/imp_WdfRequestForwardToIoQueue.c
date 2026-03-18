/*
 * XREFs of imp_WdfRequestForwardToIoQueue @ 0x14000AE30
 * Callers:
 *     <none>
 * Callees:
 *     ?QueueDriverCreatedRequest@FxIoQueue@@QEAAJPEAVFxRequest@@E@Z @ 0x140008AC8 (-QueueDriverCreatedRequest@FxIoQueue@@QEAAJPEAVFxRequest@@E@Z.c)
 *     ?SetCompletionState@FxRequest@@QEAA?AW4FxRequestCompletionState@@W42@@Z @ 0x140008FD0 (-SetCompletionState@FxRequest@@QEAA-AW4FxRequestCompletionState@@W42@@Z.c)
 *     WPP_IFR_SF_qLsqd @ 0x14000A9C0 (WPP_IFR_SF_qLsqd.c)
 *     ?SetTransitionFromEmpty@FxIoQueue@@AEAAXXZ @ 0x14000C1E0 (-SetTransitionFromEmpty@FxIoQueue@@AEAAXXZ.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x14000E050 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1400135F0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x140013630 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     WPP_IFR_SF_q @ 0x14001FA38 (WPP_IFR_SF_q.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x140022CC8 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     WPP_IFR_SF_qDqD @ 0x14002678C (WPP_IFR_SF_qDqD.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x140044728 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z @ 0x14004861C (-CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x14007BF54 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1400830B8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832E8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 *     Vf_VerifyWdfRequestForwardToIoQueue @ 0x1400DC008 (Vf_VerifyWdfRequestForwardToIoQueue.c)
 *     ?Vf_VerifyInsertIrpQueue@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIrpQueue@@@Z @ 0x1400DCE70 (-Vf_VerifyInsertIrpQueue@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIrpQueue@@@Z.c)
 *     ?Vf_VerifyForwardRequestUpdateFlags@FxIoQueue@@QEAAFPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1400E3F64 (-Vf_VerifyForwardRequestUpdateFlags@FxIoQueue@@QEAAFPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z.c)
 *     ?Vf_VerifyForwardRequest@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAV1@PEAVFxRequest@@@Z @ 0x1400E4898 (-Vf_VerifyForwardRequest@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAV1@PEAVFxRequest@@@Z.c)
 */

__int64 __fastcall imp_WdfRequestForwardToIoQueue(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Request,
        unsigned __int64 DestinationQueue)
{
  const void *v5; // r15
  unsigned __int64 v6; // rdi
  __int64 v7; // rcx
  _FX_DRIVER_GLOBALS *v8; // r12
  FxTagTracker *v9; // rcx
  unsigned __int64 v10; // rbx
  _FX_DRIVER_GLOBALS *v11; // rsi
  _FX_DRIVER_GLOBALS *v12; // rdx
  int v13; // r12d
  __int64 v14; // r14
  _FX_DRIVER_GLOBALS *v15; // rdx
  FxRequestCompletionState v16; // r12d
  const void *_a1; // rax
  unsigned __int8 v18; // r8
  _LIST_ENTRY *v19; // r14
  _FX_DRIVER_GLOBALS *v20; // rcx
  _FX_DRIVER_GLOBALS *v21; // rdx
  unsigned __int8 v22; // r8
  char v23; // al
  unsigned __int8 v24; // r13
  unsigned int _a4; // ecx
  _FX_DRIVER_GLOBALS *v26; // rdx
  _FX_DRIVER_GLOBALS *v27; // r14
  char v28; // r12
  unsigned int v29; // edx
  _FX_DRIVER_GLOBALS *v30; // rdx
  _DWORD *v31; // rcx
  _FX_DRIVER_GLOBALS **v32; // rax
  unsigned int *p_Contention; // r8
  int v34; // r14d
  unsigned __int8 v35; // r8
  unsigned __int8 v36; // r8
  const void *v38; // rax
  __int64 v39; // rax
  unsigned __int8 v40; // dl
  unsigned __int16 v41; // r9
  _FX_DRIVER_GLOBALS *v42; // rax
  unsigned __int8 v43; // dl
  unsigned __int16 v44; // r9
  const char *_a5; // rdx
  unsigned __int8 v46; // r8
  unsigned __int8 v47; // r8
  unsigned __int8 v48; // al
  _FX_DRIVER_GLOBALS *ImageAddress; // rdx
  FxVerifierLock *v50; // rcx
  FxVerifierLock *v51; // rcx
  FxVerifierLock *v52; // rcx
  FxVerifierLock *v53; // rcx
  FxTagTracker *v54; // rcx
  FxVerifierLock *v55; // rcx
  FxVerifierLock *v56; // rcx
  unsigned int v57; // r13d
  unsigned __int8 v58; // r8
  __int64 v59; // r9
  unsigned int **v60; // rax
  _FX_DRIVER_GLOBALS *v61; // rax
  FxVerifierLock *v62; // rcx
  FxVerifierLock *v63; // rcx
  FxTagTracker *v64; // rcx
  const _GUID *traceGuid; // [rsp+28h] [rbp-49h]
  __int16 queue; // [rsp+58h] [rbp-19h]
  unsigned __int64 v67; // [rsp+60h] [rbp-11h] BYREF
  _FX_DRIVER_GLOBALS **v68; // [rsp+68h] [rbp-9h] BYREF
  __int64 v69; // [rsp+70h] [rbp-1h]
  unsigned __int64 *v70; // [rsp+78h] [rbp+7h] BYREF
  __int16 v71; // [rsp+80h] [rbp+Fh]
  __int16 v72; // [rsp+82h] [rbp+11h]
  int v73; // [rsp+84h] [rbp+13h]
  _FX_DRIVER_GLOBALS ***v74; // [rsp+88h] [rbp+17h] BYREF
  __int16 v75; // [rsp+90h] [rbp+1Fh]
  __int16 v76; // [rsp+92h] [rbp+21h]
  int v77; // [rsp+94h] [rbp+23h]
  unsigned __int8 PreviousIrql; // [rsp+D8h] [rbp+67h] BYREF
  unsigned __int8 v79; // [rsp+E8h] [rbp+77h] BYREF
  FxRequestCompletionState NewState; // [rsp+F0h] [rbp+7Fh]

  if ( !DestinationQueue )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1003uLL);
  v5 = 0LL;
  v6 = ~DestinationQueue & 0xFFFFFFFFFFFFFFF8uLL;
  LOWORD(v7) = 0;
  if ( (DestinationQueue & 1) != 0 )
  {
    v7 = *(unsigned __int16 *)v6;
    v6 -= v7;
  }
  if ( *(_WORD *)(v6 + 8) == 4099 )
  {
    v67 = v6;
  }
  else
  {
    v67 = 0LL;
    v70 = &v67;
    v72 = v7;
    v73 = 0;
    v39 = *(_QWORD *)v6;
    v71 = 4099;
    if ( (*(int (__fastcall **)(unsigned __int64, unsigned __int64 **))(v39 + 40))(v6, &v70) < 0 )
    {
      WPP_IFR_SF_qDqD(
        *(_FX_DRIVER_GLOBALS **)(v6 + 16),
        v40,
        DestinationQueue,
        v41,
        traceGuid,
        (const void *)DestinationQueue,
        0x1003u,
        (const void *)v6,
        *(unsigned __int16 *)(v6 + 8));
      FxVerifierBugCheckWorker(*(_FX_DRIVER_GLOBALS **)(v6 + 16), WDF_INVALID_HANDLE, DestinationQueue, 0x1003uLL);
    }
    v6 = v67;
  }
  v8 = *(_FX_DRIVER_GLOBALS **)(v6 + 16);
  if ( !Request )
    FxVerifierBugCheckWorker(*(_FX_DRIVER_GLOBALS **)(v6 + 16), WDF_INVALID_HANDLE, 0LL, 0x1008uLL);
  v9 = 0LL;
  v10 = ~Request & 0xFFFFFFFFFFFFFFF8uLL;
  if ( (Request & 1) != 0 )
  {
    v9 = (FxTagTracker *)*(unsigned __int16 *)v10;
    v10 -= (unsigned __int64)v9;
  }
  if ( *(_WORD *)(v10 + 8) == 4104 )
  {
    v68 = (_FX_DRIVER_GLOBALS **)v10;
  }
  else
  {
    v68 = 0LL;
    v74 = &v68;
    v76 = (__int16)v9;
    v77 = 0;
    v42 = *(_FX_DRIVER_GLOBALS **)v10;
    v75 = 4104;
    if ( ((int (__fastcall *)(unsigned __int64, _FX_DRIVER_GLOBALS ****))v42->DestroyEvent.m_Event.Header.WaitListHead.Blink)(
           v10,
           &v74) < 0 )
    {
      WPP_IFR_SF_qDqD(
        *(_FX_DRIVER_GLOBALS **)(v10 + 16),
        v43,
        DestinationQueue,
        v44,
        traceGuid,
        (const void *)Request,
        0x1008u,
        (const void *)v10,
        *(unsigned __int16 *)(v10 + 8));
      FxVerifierBugCheckWorker(*(_FX_DRIVER_GLOBALS **)(v10 + 16), WDF_INVALID_HANDLE, Request, 0x1008uLL);
    }
    v10 = (unsigned __int64)v68;
    v6 = v67;
  }
  if ( *(_BYTE *)(v10 + 214) || (v11 = *(_FX_DRIVER_GLOBALS **)(v10 + 248)) == 0LL )
  {
    if ( v8->FxVerifierOn )
    {
      v13 = Vf_VerifyWdfRequestForwardToIoQueue(v8, (FxRequest *)v10);
      if ( v13 < 0 )
        return (unsigned int)v13;
      v10 = (unsigned __int64)v68;
      v6 = v67;
    }
    return (unsigned int)FxIoQueue::QueueDriverCreatedRequest((FxIoQueue *)v6, (FxRequest *)v10, 0);
  }
  v12 = *(_FX_DRIVER_GLOBALS **)&v11->Refcnt;
  if ( !v12->FxVerifierOn
    || (v13 = FxIoQueue::Vf_VerifyForwardRequest(*(FxIoQueue **)(v10 + 248), v12, (FxIoQueue *)v6, (FxRequest *)v10),
        v13 >= 0) )
  {
    v14 = *(_QWORD *)&v11->Refcnt;
    v69 = v14;
    PreviousIrql = 0;
    v15 = (_FX_DRIVER_GLOBALS *)(unsigned int)_InterlockedIncrement((volatile signed __int32 *)(v10 + 12));
    if ( *(char *)(v10 + 24) < 0 )
    {
      v9 = *(FxTagTracker **)(v10 - 48);
      if ( v9 )
        FxTagTracker::UpdateTagHistory(
          v9,
          (void *)0x74617453,
          1399,
          "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp",
          TagAddRef,
          (unsigned int)v15);
    }
    if ( *(_BYTE *)(v10 + 214) )
    {
      NewState = FxRequestCompletionStateNone;
      if ( *(_WORD *)(v10 + 10) )
        _a1 = (const void *)(v10 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        _a1 = 0LL;
      WPP_IFR_SF_q(*(_FX_DRIVER_GLOBALS **)(v10 + 16), 2u, 0x10u, 0x27u, WPP_FxRequest_cpp_Traceguids, _a1);
      FxVerifierDbgBreakPoint(*(_FX_DRIVER_GLOBALS **)(v10 + 16));
    }
    else
    {
      v16 = *(unsigned __int8 *)(v10 + 237);
      NewState = v16;
      *(_BYTE *)(v10 + 237) = 0;
      if ( v16 )
        (*(void (__fastcall **)(unsigned __int64, __int64, __int64, const char *))(*(_QWORD *)v10 + 16LL))(
          v10,
          1952543827LL,
          1813LL,
          "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
    }
    if ( *(_BYTE *)(v14 + 324) )
      queue = FxIoQueue::Vf_VerifyForwardRequestUpdateFlags((FxIoQueue *)v9, v15, (FxRequest *)v10);
    else
      queue = 0;
    if ( (char)v11->DestroyEvent.m_Event.Header.gap0 < 0
      && (v50 = *(FxVerifierLock **)&v11[-1].Public.DriverName[8]) != 0LL )
    {
      FxVerifierLock::Lock(v50, &PreviousIrql, DestinationQueue);
      v18 = PreviousIrql;
    }
    else
    {
      v18 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&v11->FxPoolFrameworks.NonPagedLock.m_DbgFlagIsInitialized);
      PreviousIrql = v18;
    }
    v19 = (_LIST_ENTRY *)(v10 + 304);
    v20 = *(_FX_DRIVER_GLOBALS **)(v10 + 304);
    if ( v20->Linkage.Blink == (_LIST_ENTRY *)(v10 + 304) )
    {
      v21 = *(_FX_DRIVER_GLOBALS **)(v10 + 312);
      if ( v21->Linkage.Flink == v19 )
      {
        v21->Linkage.Flink = &v20->Linkage;
        v20->Linkage.Blink = &v21->Linkage;
        *(_QWORD *)(v10 + 312) = v10 + 304;
        v19->Flink = v19;
        if ( (char)v11->DestroyEvent.m_Event.Header.gap0 < 0
          && (v53 = *(FxVerifierLock **)&v11[-1].Public.DriverName[8]) != 0LL )
        {
          FxVerifierLock::Unlock(v53, v18, v18);
        }
        else
        {
          KeReleaseSpinLock((PKSPIN_LOCK)&v11->FxPoolFrameworks.NonPagedLock.m_DbgFlagIsInitialized, v18);
        }
        v23 = *(_BYTE *)(v6 + 24);
        v79 = 0;
        if ( v23 < 0 && (v51 = *(FxVerifierLock **)(v6 - 40)) != 0LL )
        {
          FxVerifierLock::Lock(v51, &v79, v22);
          v24 = v79;
        }
        else
        {
          v24 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 112));
          v79 = v24;
        }
        _a4 = *(_DWORD *)(v6 + 188);
        if ( (_a4 & 1) != 0 )
        {
          v26 = *(_FX_DRIVER_GLOBALS **)(v10 + 16);
          v27 = (_FX_DRIVER_GLOBALS *)(v6 + 192);
          v28 = *(_BYTE *)(v10 + 213);
          if ( v26->FxVerifierOn
            && FxRequest::Vf_VerifyInsertIrpQueue((FxRequest *)v10, v26, (FxIrpQueue *)(v6 + 192)) < 0 )
          {
            *(_QWORD *)(v10 + 248) = v6;
            goto LABEL_98;
          }
          v29 = _InterlockedIncrement((volatile signed __int32 *)(v10 + 12));
          if ( *(char *)(v10 + 24) < 0 )
          {
            v54 = *(FxTagTracker **)(v10 - 48);
            if ( v54 )
              FxTagTracker::UpdateTagHistory(
                v54,
                (void *)0x75657551,
                1900,
                "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp",
                TagAddRef,
                v29);
          }
          v30 = *(_FX_DRIVER_GLOBALS **)(v10 + 152);
          v31 = (_DWORD *)(v10 + 120);
          *(_QWORD *)(v10 + 224) = v27;
          if ( v10 == -120LL )
          {
            *(_QWORD *)&v30->FxPoolFrameworks.PagedLock.m_DbgFlagIsInitialized = v27;
          }
          else
          {
            *(_QWORD *)&v30->FxPoolFrameworks.PagedLock.m_DbgFlagIsInitialized = v31;
            *(_QWORD *)(v10 + 128) = v30;
            *(_QWORD *)(v10 + 136) = v27;
            *v31 = 1;
          }
          v32 = *(_FX_DRIVER_GLOBALS ***)(v6 + 200);
          p_Contention = &v30->FxPoolFrameworks.PagedLock.m_Lock.Contention;
          if ( *v32 == v27 )
          {
            *(_QWORD *)&v30->FxPoolFrameworks.PagedLock.m_Lock.Event.Header.Lock = v32;
            *(_QWORD *)p_Contention = v27;
            *v32 = (_FX_DRIVER_GLOBALS *)p_Contention;
            *(_QWORD *)(v6 + 200) = p_Contention;
            ++*(_DWORD *)(v6 + 224);
            BYTE3(v30->FxPoolFrameworks.PagedLock.m_Lock.Event.Header.WaitListHead.Flink->Flink) |= 1u;
            _InterlockedExchange64(
              (volatile __int64 *)&v30->WdfLogHeader,
              (__int64)FxIrpQueue::_WdmCancelRoutineInternal);
            if ( !LOBYTE(v30->Tag) || !_InterlockedExchange64((volatile __int64 *)&v30->WdfLogHeader, 0LL) )
            {
              v34 = 0;
              goto LABEL_40;
            }
            v59 = *(_QWORD *)p_Contention;
            if ( *(unsigned int **)(*(_QWORD *)p_Contention + 8LL) == p_Contention )
            {
              v60 = *(unsigned int ***)&v30->FxPoolFrameworks.PagedLock.m_Lock.Event.Header.Lock;
              if ( *v60 == p_Contention )
              {
                *v60 = (unsigned int *)v59;
                *(_QWORD *)(v59 + 8) = v60;
                *(_QWORD *)&v30->FxPoolFrameworks.PagedLock.m_Lock.Event.Header.Lock = &v30->FxPoolFrameworks.PagedLock.m_Lock.Contention;
                *(_QWORD *)p_Contention = p_Contention;
                --*(_DWORD *)(v6 + 224);
                if ( v10 != -120LL )
                  *(_QWORD *)(v10 + 128) = 0LL;
                *(_QWORD *)&v30->FxPoolFrameworks.PagedLock.m_DbgFlagIsInitialized = 0LL;
                v61 = *(_FX_DRIVER_GLOBALS **)v10;
                *(_QWORD *)(v10 + 224) = 0LL;
                v34 = -1073741536;
                (*(void (__fastcall **)(unsigned __int64, __int64, __int64, const char *))&v61->Refcnt)(
                  v10,
                  1969583441LL,
                  1916LL,
                  "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
LABEL_40:
                *(_QWORD *)(v10 + 248) = v6;
                if ( v34 >= 0 )
                {
                  if ( *(_DWORD *)(v6 + 224) == 1 || *(_BYTE *)(v6 + 373) )
                    FxIoQueue::SetTransitionFromEmpty((FxIoQueue *)v6);
LABEL_43:
                  if ( v28 && *(_DWORD *)(v6 + 368) )
                    FxNonPagedObject::Unlock((FxNonPagedObject *)v6, v79);
                  else
                    FxIoQueue::DispatchEvents((FxIoQueue *)v6, v79, 0LL);
                  v13 = 0;
                  if ( (char)v11->DestroyEvent.m_Event.Header.gap0 < 0
                    && (v52 = *(FxVerifierLock **)&v11[-1].Public.DriverName[8]) != 0LL )
                  {
                    FxVerifierLock::Lock(v52, &PreviousIrql, v35);
                  }
                  else
                  {
                    PreviousIrql = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&v11->FxPoolFrameworks.NonPagedLock.m_DbgFlagIsInitialized);
                  }
                  --LODWORD(v11->BugCheckCallbackRecord.CallbackRoutine);
                  if ( LODWORD(v11->BugCheckCallbackRecord.Entry.Blink) )
                  {
                    if ( (char)v11->DestroyEvent.m_Event.Header.gap0 < 0
                      && (v55 = *(FxVerifierLock **)&v11[-1].Public.DriverName[8]) != 0LL )
                    {
                      FxVerifierLock::Unlock(v55, PreviousIrql, v36);
                    }
                    else
                    {
                      KeReleaseSpinLock(
                        (PKSPIN_LOCK)&v11->FxPoolFrameworks.NonPagedLock.m_DbgFlagIsInitialized,
                        PreviousIrql);
                    }
                  }
                  else
                  {
                    FxIoQueue::DispatchEvents((FxIoQueue *)v11, PreviousIrql, 0LL);
                  }
                  return (unsigned int)v13;
                }
LABEL_98:
                v57 = _InterlockedIncrement((volatile signed __int32 *)(v10 + 12));
                if ( *(char *)(v10 + 24) < 0 )
                {
                  v64 = *(FxTagTracker **)(v10 - 48);
                  if ( v64 )
                    FxTagTracker::UpdateTagHistory(
                      v64,
                      (void *)0x75657551,
                      2459,
                      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp",
                      TagAddRef,
                      v57);
                }
                FxIoQueue::CancelForQueue((FxIoQueue *)v6, (FxRequest *)v10, v79);
                if ( *(char *)(v6 + 24) < 0 && (v63 = *(FxVerifierLock **)(v6 - 40)) != 0LL )
                  FxVerifierLock::Lock(v63, &v79, v58);
                else
                  v79 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 112));
                goto LABEL_43;
              }
            }
          }
        }
        else
        {
          if ( *(_WORD *)(v10 + 10) )
            v38 = (const void *)(v10 ^ 0xFFFFFFFFFFFFFFF8uLL);
          else
            v38 = 0LL;
          _a5 = "power stopping (Drain) in progress,";
          if ( (_a4 & 0x10000) == 0 )
            _a5 = a5;
          if ( *(_WORD *)(v6 + 10) )
            v5 = (const void *)(v6 ^ 0xFFFFFFFFFFFFFFF8uLL);
          v13 = -1071644156;
          WPP_IFR_SF_qLsqd(
            *(_FX_DRIVER_GLOBALS **)(v6 + 16),
            3u,
            (unsigned int)a5,
            0x2Bu,
            traceGuid,
            v5,
            _a4,
            _a5,
            v38,
            -1071644156);
          if ( *(char *)(v6 + 24) < 0 && (v56 = *(FxVerifierLock **)(v6 - 40)) != 0LL )
            FxVerifierLock::Unlock(v56, v24, v46);
          else
            KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 112), v24);
          FxRequest::SetCompletionState((FxRequest *)v10, NewState);
          if ( *(_BYTE *)(v69 + 324) )
            FxRequestBase::SetVerifierFlags((FxRequestBase *)v10, queue);
          (*(void (__fastcall **)(unsigned __int64, __int64, __int64, const char *))(*(_QWORD *)v10 + 16LL))(
            v10,
            1952543827LL,
            1461LL,
            "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
          if ( (char)v11->DestroyEvent.m_Event.Header.gap0 < 0
            && (v62 = *(FxVerifierLock **)&v11[-1].Public.DriverName[8]) != 0LL )
          {
            FxVerifierLock::Lock(v62, &PreviousIrql, v47);
            v48 = PreviousIrql;
          }
          else
          {
            v48 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&v11->FxPoolFrameworks.NonPagedLock.m_DbgFlagIsInitialized);
          }
          ImageAddress = (_FX_DRIVER_GLOBALS *)v11->ImageAddress;
          if ( (_WDF_BIND_INFO **)ImageAddress->Linkage.Flink == &v11->WdfBindInfo )
          {
            v19->Flink = (_LIST_ENTRY *)&v11->WdfBindInfo;
            *(_QWORD *)(v10 + 312) = ImageAddress;
            ImageAddress->Linkage.Flink = v19;
            v11->ImageAddress = v19;
            FxNonPagedObject::Unlock((FxNonPagedObject *)v11, v48);
            return (unsigned int)v13;
          }
        }
      }
    }
    __fastfail(3u);
  }
  return (unsigned int)v13;
}
