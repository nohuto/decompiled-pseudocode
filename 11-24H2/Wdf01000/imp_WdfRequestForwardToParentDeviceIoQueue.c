/*
 * XREFs of imp_WdfRequestForwardToParentDeviceIoQueue @ 0x14003D5B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qDqD @ 0x140016E4C (WPP_IFR_SF_qDqD.c)
 *     WPP_IFR_SF_qLsqd @ 0x1400230F0 (WPP_IFR_SF_qLsqd.c)
 *     ?SetTransitionFromEmpty@FxIoQueue@@AEAAXXZ @ 0x140024910 (-SetTransitionFromEmpty@FxIoQueue@@AEAAXXZ.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x140026780 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14002BDA8 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14002C4B0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x14002C4F0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z @ 0x14003CEFC (-CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z.c)
 *     ?GetCurrentQueue@FxRequest@@QEAAPEAVFxIoQueue@@XZ @ 0x14003DD00 (-GetCurrentQueue@FxRequest@@QEAAPEAVFxIoQueue@@XZ.c)
 *     ?ForwardRequestToParent@FxIoQueue@@QEAAJPEAV1@PEAVFxRequest@@PEAU_WDF_REQUEST_FORWARD_OPTIONS@@@Z @ 0x14003DD1C (-ForwardRequestToParent@FxIoQueue@@QEAAJPEAV1@PEAVFxRequest@@PEAU_WDF_REQUEST_FORWARD_OPTIONS@@@.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x140049FC8 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x14007BBF4 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008305C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1400830A8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     WPP_IFR_SF_qddd @ 0x1400863D4 (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_qDDd @ 0x14009289C (WPP_IFR_SF_qDDd.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 *     memset @ 0x1400AC800 (memset.c)
 *     ?Vf_VerifyQueueDriverCreatedRequest@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@PEAF@Z @ 0x1400DC24C (-Vf_VerifyQueueDriverCreatedRequest@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@PEAF@.c)
 *     ?Vf_VerifyInsertIrpQueue@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIrpQueue@@@Z @ 0x1400DCE70 (-Vf_VerifyInsertIrpQueue@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIrpQueue@@@Z.c)
 *     Vf_VerifyWdfRequestForwardToParentDeviceIoQueue @ 0x1400E49E8 (Vf_VerifyWdfRequestForwardToParentDeviceIoQueue.c)
 */

__int64 __fastcall imp_WdfRequestForwardToParentDeviceIoQueue(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Request,
        unsigned __int64 ParentDeviceQueue,
        _WDF_REQUEST_FORWARD_OPTIONS *ForwardOptions)
{
  __int64 v7; // rcx
  unsigned __int64 v8; // rdi
  _FX_DRIVER_GLOBALS *v9; // r14
  FxIoQueue *v10; // rcx
  unsigned __int64 v11; // rbx
  unsigned int Flags; // eax
  unsigned int v13; // esi
  _FX_DRIVER_GLOBALS *v14; // r15
  __int16 v15; // r14
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // r12
  unsigned __int16 v20; // r9
  unsigned int _a4; // r10d
  _FX_DRIVER_GLOBALS *v22; // rdx
  unsigned __int64 v23; // rsi
  char v24; // r12
  volatile signed __int32 *v25; // r14
  _DWORD *v26; // r8
  int inserted; // r15d
  unsigned int v28; // edx
  FxTagTracker *v29; // rcx
  __int64 v30; // rdx
  __int64 **v31; // rax
  __int64 *v32; // rcx
  const void *v34; // r8
  const char *_a5; // rdx
  const void *_a3; // rcx
  unsigned __int8 v37; // r8
  __int64 v38; // rax
  __int64 v39; // rax
  unsigned __int16 v40; // r9
  __int64 v41; // rax
  unsigned __int16 v42; // r9
  FxIoQueue *CurrentQueue; // rax
  _WDF_REQUEST_FORWARD_OPTIONS *v44; // r9
  FxVerifierLock *v45; // rcx
  FxVerifierLock *v46; // rcx
  unsigned int v47; // r8d
  unsigned __int8 v48; // r8
  __int64 *v49; // r9
  __int64 **v50; // rax
  __int64 v51; // rax
  FxVerifierLock *v52; // rcx
  FxTagTracker *v53; // rcx
  const _GUID *RefType; // [rsp+28h] [rbp-39h]
  int globals; // [rsp+48h] [rbp-19h]
  FxIoQueue *queue; // [rsp+58h] [rbp-9h] BYREF
  unsigned __int64 v57; // [rsp+60h] [rbp-1h] BYREF
  unsigned __int64 v58; // [rsp+68h] [rbp+7h] BYREF
  unsigned __int64 *v59; // [rsp+70h] [rbp+Fh] BYREF
  __int16 v60; // [rsp+78h] [rbp+17h]
  __int16 v61; // [rsp+7Ah] [rbp+19h]
  int v62; // [rsp+7Ch] [rbp+1Bh]
  unsigned __int64 *v63; // [rsp+80h] [rbp+1Fh] BYREF
  __int16 v64; // [rsp+88h] [rbp+27h]
  __int16 v65; // [rsp+8Ah] [rbp+29h]
  int v66; // [rsp+8Ch] [rbp+2Bh]
  void *retaddr; // [rsp+C0h] [rbp+5Fh]
  unsigned __int8 PreviousIrql; // [rsp+D8h] [rbp+77h] BYREF

  if ( !ParentDeviceQueue )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1003uLL);
  LOWORD(v7) = 0;
  v8 = ~ParentDeviceQueue & 0xFFFFFFFFFFFFFFF8uLL;
  if ( (ParentDeviceQueue & 1) != 0 )
  {
    v7 = *(unsigned __int16 *)v8;
    v8 -= v7;
  }
  if ( *(_WORD *)(v8 + 8) == 4099 )
  {
    v57 = v8;
  }
  else
  {
    v57 = 0LL;
    v59 = &v57;
    v61 = v7;
    v62 = 0;
    v39 = *(_QWORD *)v8;
    v60 = 4099;
    if ( (*(int (__fastcall **)(unsigned __int64, unsigned __int64 **))(v39 + 40))(v8, &v59) < 0 )
    {
      WPP_IFR_SF_qDqD(
        *(_FX_DRIVER_GLOBALS **)(v8 + 16),
        Request,
        ParentDeviceQueue,
        v40,
        RefType,
        (const void *)ParentDeviceQueue,
        0x1003u,
        (const void *)v8,
        *(unsigned __int16 *)(v8 + 8));
      FxVerifierBugCheckWorker(*(_FX_DRIVER_GLOBALS **)(v8 + 16), WDF_INVALID_HANDLE, ParentDeviceQueue, 0x1003uLL);
    }
    v8 = v57;
  }
  v9 = *(_FX_DRIVER_GLOBALS **)(v8 + 16);
  if ( !Request )
    FxVerifierBugCheckWorker(*(_FX_DRIVER_GLOBALS **)(v8 + 16), WDF_INVALID_HANDLE, 0LL, 0x1008uLL);
  v10 = 0LL;
  v11 = ~Request & 0xFFFFFFFFFFFFFFF8uLL;
  if ( (Request & 1) != 0 )
  {
    v10 = (FxIoQueue *)*(unsigned __int16 *)v11;
    v11 -= (unsigned __int64)v10;
  }
  if ( *(_WORD *)(v11 + 8) == 4104 )
  {
    v58 = v11;
  }
  else
  {
    v58 = 0LL;
    v63 = &v58;
    v65 = (__int16)v10;
    v66 = 0;
    v41 = *(_QWORD *)v11;
    v64 = 4104;
    if ( (*(int (__fastcall **)(unsigned __int64, unsigned __int64 **))(v41 + 40))(v11, &v63) < 0 )
    {
      WPP_IFR_SF_qDqD(
        *(_FX_DRIVER_GLOBALS **)(v11 + 16),
        Request,
        ParentDeviceQueue,
        v42,
        RefType,
        (const void *)Request,
        0x1008u,
        (const void *)v11,
        *(unsigned __int16 *)(v11 + 8));
      FxVerifierBugCheckWorker(*(_FX_DRIVER_GLOBALS **)(v11 + 16), WDF_INVALID_HANDLE, Request, 0x1008uLL);
    }
    v11 = v58;
    v8 = v57;
  }
  if ( !ForwardOptions )
    FxVerifierNullBugCheck(v9, retaddr);
  if ( ForwardOptions->Size != 8 )
  {
    v13 = -1073741820;
    WPP_IFR_SF_qddd(
      v9,
      Request,
      6u,
      0x4Au,
      WPP_FxRequestApi_cpp_Traceguids,
      ForwardOptions,
      8,
      ForwardOptions->Size,
      -1073741820);
    return v13;
  }
  Flags = ForwardOptions->Flags;
  if ( (Flags & 0xFFFFFFFE) != 0 )
  {
    v13 = -1073741811;
    WPP_IFR_SF_qDDd(v9, Request, 6u, 0x4Bu, WPP_FxRequestApi_cpp_Traceguids, ForwardOptions, Flags, 1u, globals);
    return v13;
  }
  if ( !*(_BYTE *)(v11 + 214) && *(_QWORD *)(v11 + 248) )
  {
    CurrentQueue = FxRequest::GetCurrentQueue((FxRequest *)v11);
    return (unsigned int)FxIoQueue::ForwardRequestToParent(CurrentQueue, (FxIoQueue *)v8, (FxRequest *)v11, v44);
  }
  if ( v9->FxVerifierOn )
  {
    v13 = Vf_VerifyWdfRequestForwardToParentDeviceIoQueue(v9, (FxRequest *)v11);
    if ( (v13 & 0x80000000) != 0 )
      return v13;
    v11 = v58;
    v8 = v57;
  }
  v14 = *(_FX_DRIVER_GLOBALS **)(v8 + 16);
  v15 = 0;
  LOWORD(queue) = 0;
  if ( v14->FxVerifierOn )
  {
    v13 = FxIoQueue::Vf_VerifyQueueDriverCreatedRequest(v10, v14, (FxRequest *)v11, (__int16 *)&queue);
    if ( (v13 & 0x80000000) != 0 )
      return v13;
    v15 = (__int16)queue;
  }
  v16 = *(_QWORD *)(v11 + 152);
  PreviousIrql = 0;
  v17 = *(_QWORD *)(v16 + 184);
  *(_OWORD *)(v17 - 72) = *(_OWORD *)v17;
  *(_OWORD *)(v17 - 56) = *(_OWORD *)(v17 + 16);
  *(_OWORD *)(v17 - 40) = *(_OWORD *)(v17 + 32);
  *(_QWORD *)(v17 - 24) = *(_QWORD *)(v17 + 48);
  *(_BYTE *)(v17 - 69) = 0;
  v18 = *(_QWORD *)(v11 + 152);
  --*(_BYTE *)(v18 + 67);
  *(_QWORD *)(v18 + 184) -= 72LL;
  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 152) + 184LL) + 40LL) = *(_QWORD *)(*(_QWORD *)(v8 + 96) + 144LL);
  v19 = *(_QWORD *)(v11 + 96);
  *(_QWORD *)(v11 + 96) = *(_QWORD *)(v8 + 96);
  if ( *(char *)(v8 + 24) < 0 && (v45 = *(FxVerifierLock **)(v8 - 40)) != 0LL )
    FxVerifierLock::Lock(v45, &PreviousIrql, ParentDeviceQueue);
  else
    PreviousIrql = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v8 + 112));
  _a4 = *(_DWORD *)(v8 + 188);
  if ( (_a4 & 1) != 0 )
  {
    v22 = *(_FX_DRIVER_GLOBALS **)(v11 + 16);
    v23 = v8 + 192;
    v24 = *(_BYTE *)(v11 + 213);
    if ( v22->FxVerifierOn )
    {
      v25 = (volatile signed __int32 *)(v11 + 12);
      inserted = FxRequest::Vf_VerifyInsertIrpQueue((FxRequest *)v11, v22, (FxIrpQueue *)(v8 + 192));
      if ( inserted < 0 )
        goto LABEL_35;
    }
    else
    {
      v25 = (volatile signed __int32 *)(v11 + 12);
    }
    v28 = _InterlockedIncrement(v25);
    if ( *(char *)(v11 + 24) < 0 )
    {
      v29 = *(FxTagTracker **)(v11 - 48);
      if ( v29 )
        FxTagTracker::UpdateTagHistory(
          v29,
          (void *)0x75657551,
          1900,
          "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp",
          TagAddRef,
          v28);
    }
    v30 = *(_QWORD *)(v11 + 152);
    v26 = (_DWORD *)(v11 + 120);
    *(_QWORD *)(v11 + 224) = v23;
    if ( v11 == -120LL )
    {
      *(_QWORD *)(v30 + 144) = v23;
    }
    else
    {
      *(_QWORD *)(v30 + 144) = v26;
      *(_QWORD *)(v11 + 128) = v30;
      *(_QWORD *)(v11 + 136) = v23;
      *v26 = 1;
    }
    v31 = *(__int64 ***)(v8 + 200);
    v32 = (__int64 *)(v30 + 168);
    if ( *v31 != (__int64 *)v23 )
      goto LABEL_78;
    *(_QWORD *)(v30 + 176) = v31;
    *v32 = v23;
    *v31 = v32;
    *(_QWORD *)(v8 + 200) = v32;
    ++*(_DWORD *)(v8 + 224);
    *(_BYTE *)(*(_QWORD *)(v30 + 184) + 3LL) |= 1u;
    _InterlockedExchange64((volatile __int64 *)(v30 + 104), (__int64)FxIrpQueue::_WdmCancelRoutineInternal);
    if ( *(_BYTE *)(v30 + 68) && _InterlockedExchange64((volatile __int64 *)(v30 + 104), 0LL) )
    {
      v49 = (__int64 *)*v32;
      if ( *(__int64 **)(*v32 + 8) == v32 )
      {
        v50 = *(__int64 ***)(v30 + 176);
        if ( *v50 == v32 )
        {
          *v50 = v49;
          v49[1] = (__int64)v50;
          *(_QWORD *)(v30 + 176) = v30 + 168;
          *v32 = (__int64)v32;
          --*(_DWORD *)(v8 + 224);
          if ( v11 != -120LL )
            *(_QWORD *)(v11 + 128) = 0LL;
          *(_QWORD *)(v30 + 144) = 0LL;
          v51 = *(_QWORD *)v11;
          *(_QWORD *)(v11 + 224) = 0LL;
          inserted = -1073741536;
          (*(void (__fastcall **)(unsigned __int64, __int64, __int64, const char *))(v51 + 16))(
            v11,
            1969583441LL,
            1916LL,
            "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
          goto LABEL_35;
        }
      }
LABEL_78:
      __fastfail(3u);
    }
    inserted = 0;
LABEL_35:
    *(_QWORD *)(v11 + 248) = v8;
    if ( inserted < 0 )
    {
      v47 = _InterlockedIncrement(v25);
      if ( *(char *)(v11 + 24) < 0 )
      {
        v53 = *(FxTagTracker **)(v11 - 48);
        if ( v53 )
          FxTagTracker::UpdateTagHistory(
            v53,
            (void *)0x75657551,
            2459,
            "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp",
            TagAddRef,
            v47);
      }
      FxIoQueue::CancelForQueue((FxIoQueue *)v8, (FxRequest *)v11, PreviousIrql);
      if ( *(char *)(v8 + 24) < 0 && (v52 = *(FxVerifierLock **)(v8 - 40)) != 0LL )
        FxVerifierLock::Lock(v52, &PreviousIrql, v48);
      else
        PreviousIrql = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v8 + 112));
    }
    else if ( *(_DWORD *)(v8 + 224) == 1 || *(_BYTE *)(v8 + 373) )
    {
      FxIoQueue::SetTransitionFromEmpty((FxIoQueue *)v8);
    }
    if ( v24 && *(_DWORD *)(v8 + 368) )
      FxNonPagedObject::Unlock((FxNonPagedObject *)v8, PreviousIrql, (unsigned __int8)v26);
    else
      FxIoQueue::DispatchEvents((FxIoQueue *)v8, PreviousIrql, 0LL, v20);
    return 0;
  }
  v34 = (const void *)(v11 ^ 0xFFFFFFFFFFFFFFF8uLL);
  _a5 = "power stopping (Drain) in progress,";
  v13 = -1071644156;
  if ( !*(_WORD *)(v11 + 10) )
    v34 = 0LL;
  if ( (_a4 & 0x10000) == 0 )
    _a5 = a5;
  _a3 = (const void *)(v8 ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !*(_WORD *)(v8 + 10) )
    _a3 = 0LL;
  WPP_IFR_SF_qLsqd(
    *(_FX_DRIVER_GLOBALS **)(v8 + 16),
    3u,
    (unsigned int)v34,
    0x2Bu,
    RefType,
    _a3,
    _a4,
    _a5,
    v34,
    -1071644156);
  if ( *(char *)(v8 + 24) < 0 && (v46 = *(FxVerifierLock **)(v8 - 40)) != 0LL )
    FxVerifierLock::Unlock(v46, PreviousIrql, v37);
  else
    KeReleaseSpinLock((PKSPIN_LOCK)(v8 + 112), PreviousIrql);
  *(_QWORD *)(v11 + 96) = v19;
  if ( v14->FxVerifierOn )
    FxRequestBase::SetVerifierFlags((FxRequestBase *)v11, v15);
  v38 = *(_QWORD *)(v11 + 152);
  ++*(_BYTE *)(v38 + 67);
  *(_QWORD *)(v38 + 184) += 72LL;
  memset((void *)(*(_QWORD *)(*(_QWORD *)(v11 + 152) + 184LL) - 72LL), 0, 0x48uLL);
  return v13;
}
