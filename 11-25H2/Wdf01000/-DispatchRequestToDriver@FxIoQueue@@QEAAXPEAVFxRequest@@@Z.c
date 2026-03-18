/*
 * XREFs of ?DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x14000FB50
 * Callers:
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x14000E050 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 * Callees:
 *     ?Complete@FxRequest@@QEAAJJ@Z @ 0x14000CFD0 (-Complete@FxRequest@@QEAAJJ@Z.c)
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x14000D190 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     WPP_IFR_SF_qq @ 0x140011A74 (WPP_IFR_SF_qq.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1400135F0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x140013630 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     WPP_IFR_SF_q @ 0x14001FA38 (WPP_IFR_SF_q.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x140022CC8 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x140044728 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     WPP_IFR_SF_qiid @ 0x1400560A4 (WPP_IFR_SF_qiid.c)
 *     ?VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140059E28 (-VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?GetVerifierFlags@FxRequestBase@@QEAAFXZ @ 0x14007EBB8 (-GetVerifierFlags@FxRequestBase@@QEAAFXZ.c)
 *     WPP_IFR_SF_Lqd @ 0x140082BB8 (WPP_IFR_SF_Lqd.c)
 *     ?ClearVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x140083000 (-ClearVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832E8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

void __fastcall FxIoQueue::DispatchRequestToDriver(FxIoQueue *this, FxRequest *pRequest, unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  unsigned __int8 m_CompletionState; // al
  unsigned __int8 v7; // dl
  unsigned int v8; // r8d
  WDFREQUEST__ *v9; // r14
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  unsigned int MajorFunction; // esi
  FxCallbackLock **p_m_CallbackLock; // rsi
  _IO_STACK_LOCATION *v13; // rcx
  unsigned __int16 v14; // ax
  unsigned __int64 v15; // rdi
  unsigned int LowPart; // r15d
  __int64 Options; // r12
  __int64 v18; // r13
  FxCallbackLock *v19; // rcx
  FxIoQueueIoDefault *p_m_IoDefault; // rsi
  unsigned __int16 v21; // ax
  unsigned __int64 v22; // rdi
  FxCallbackLock *v23; // rcx
  FxCallbackLock *v24; // rcx
  _IO_STACK_LOCATION *v25; // rcx
  unsigned __int16 v26; // ax
  char v27; // al
  FxVerifierLock **p_m_ForwardProgressList; // rsi
  unsigned __int64 *p_m_Lock; // r14
  unsigned __int8 v30; // al
  unsigned __int8 v31; // r8
  unsigned int RefCount; // edx
  _LIST_ENTRY *Blink; // rcx
  unsigned __int64 Length; // rsi
  FxDeviceBase *m_DeviceBase; // rdi
  _FX_DRIVER_GLOBALS *v36; // rcx
  char m_Globals_high; // al
  __int64 v38; // r8
  unsigned __int8 v39; // r8
  FxDeviceBase *v40; // rdi
  _FX_DRIVER_GLOBALS *v41; // rcx
  char v42; // al
  unsigned __int16 m_ObjectSize; // ax
  FxIoQueueIoRead *p_m_IoRead; // r15
  unsigned __int64 v45; // rdi
  FxCallbackLock *m_CallbackLock; // rcx
  unsigned __int64 v47; // r12
  unsigned __int16 v48; // ax
  FxIoQueueIoWrite *p_m_IoWrite; // rsi
  unsigned __int64 v50; // rdi
  FxCallbackLock *v51; // rcx
  unsigned __int16 v52; // ax
  const void *v53; // rdi
  char m_ObjectFlags; // al
  unsigned __int8 v55; // r14
  const void *v56; // rcx
  _LIST_ENTRY *Flink; // rcx
  unsigned __int16 v58; // ax
  const void *v59; // rdi
  const void *v60; // rdx
  unsigned __int16 v61; // ax
  const void *v62; // rdi
  unsigned __int16 v63; // ax
  const void *v64; // rdi
  const void *v65; // rdx
  unsigned __int8 PreviousIrql; // [rsp+80h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  if ( pRequest->m_Globals->FxVerifierIO )
  {
    m_ObjectFlags = pRequest->m_ObjectFlags;
    PreviousIrql = 0;
    if ( m_ObjectFlags < 0 && (Flink = pRequest[-1].m_ForwardProgressList.Flink) != 0LL )
    {
      FxVerifierLock::Lock((FxVerifierLock *)Flink, &PreviousIrql, a3);
      v55 = PreviousIrql;
    }
    else
    {
      v55 = KeAcquireSpinLockRaiseToDpc(&pRequest->m_NPLock.m_Lock);
      PreviousIrql = v55;
    }
    FxRequest::VerifyRequestIsNotCompleted(pRequest, pRequest->m_Globals);
    FxNonPagedObject::Unlock(pRequest, v55);
  }
  if ( pRequest->m_Completed )
  {
    v56 = (const void *)((unsigned __int64)pRequest ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !pRequest->m_ObjectSize )
      v56 = 0LL;
    WPP_IFR_SF_q(pRequest->m_Globals, 2u, 0x10u, 0x27u, WPP_FxRequest_cpp_Traceguids, v56);
    FxVerifierDbgBreakPoint(pRequest->m_Globals);
  }
  else
  {
    m_CompletionState = pRequest->m_CompletionState;
    pRequest->m_CompletionState = 1;
    if ( !m_CompletionState )
    {
      RefCount = _InterlockedIncrement(&pRequest->m_Refcnt);
      if ( SLOBYTE(pRequest->m_ObjectFlags) < 0 )
      {
        Blink = pRequest[-1].m_OwnerListEntry2.Blink;
        if ( Blink )
          FxTagTracker::UpdateTagHistory(
            (FxTagTracker *)Blink,
            (void *)0x74617453,
            1820,
            "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp",
            TagAddRef,
            RefCount);
      }
    }
  }
  if ( m_Globals->FxVerifierOn )
  {
    v27 = pRequest->m_ObjectFlags;
    p_m_ForwardProgressList = (FxVerifierLock **)&pRequest[-1].m_ForwardProgressList;
    PreviousIrql = 0;
    if ( v27 < 0 && *p_m_ForwardProgressList )
    {
      FxVerifierLock::Lock(*p_m_ForwardProgressList, &PreviousIrql, a3);
      v30 = PreviousIrql;
      p_m_Lock = &pRequest->m_NPLock.m_Lock;
    }
    else
    {
      p_m_Lock = &pRequest->m_NPLock.m_Lock;
      v30 = KeAcquireSpinLockRaiseToDpc(&pRequest->m_NPLock.m_Lock);
    }
    pRequest->m_VerifierFlags |= 9u;
    if ( SLOBYTE(pRequest->m_ObjectFlags) < 0 && *p_m_ForwardProgressList )
      FxVerifierLock::Unlock(*p_m_ForwardProgressList, v30, v31);
    else
      KeReleaseSpinLock(p_m_Lock, v30);
  }
  else
  {
    pRequest->Release(
      pRequest,
      (void *)1952543827,
      3219,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
  }
  v9 = (WDFREQUEST__ *)((unsigned __int64)pRequest ^ 0xFFFFFFFFFFFFFFF8uLL);
  CurrentStackLocation = pRequest->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation;
  if ( !pRequest->m_ObjectSize )
    v9 = 0LL;
  MajorFunction = CurrentStackLocation->MajorFunction;
  switch ( (_BYTE)MajorFunction )
  {
    case 3:
      if ( this->m_IoRead.Method )
      {
        Length = CurrentStackLocation->Parameters.Read.Length;
        if ( (_DWORD)Length || this->m_AllowZeroLengthRequests )
        {
          pRequest->m_Presented = 1;
          if ( m_Globals->FxVerboseOn )
            WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x33u, WPP_FxIoQueue_cpp_Traceguids, v9);
          m_ObjectSize = this->m_ObjectSize;
          p_m_IoRead = &this->m_IoRead;
          v45 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
          if ( !m_ObjectSize )
            v45 = 0LL;
          if ( !p_m_IoRead->Method )
            goto LABEL_41;
          m_CallbackLock = p_m_IoRead->m_CallbackLock;
          PreviousIrql = 0;
          if ( m_CallbackLock )
            m_CallbackLock->Lock(m_CallbackLock, &PreviousIrql);
          p_m_IoRead->Method((WDFQUEUE__ *)v45, v9, Length);
          v24 = p_m_IoRead->m_CallbackLock;
          if ( !p_m_IoRead->m_CallbackLock )
            goto LABEL_41;
          goto LABEL_88;
        }
        if ( m_Globals->FxVerboseOn )
        {
          v58 = this->m_ObjectSize;
          v59 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !v58 )
            v59 = 0LL;
          WPP_IFR_SF_qq(m_Globals, 5u, 0xDu, 0x32u, WPP_FxIoQueue_cpp_Traceguids, v9, v59);
        }
        m_DeviceBase = pRequest->m_DeviceBase;
        v36 = pRequest->m_Globals;
        if ( v36->FxVerboseOn )
        {
          v60 = (const void *)((unsigned __int64)pRequest ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !pRequest->m_ObjectSize )
            v60 = 0LL;
          WPP_IFR_SF_qiid(
            v36,
            5u,
            0x10u,
            0xBu,
            WPP_FxRequest_hpp_Traceguids,
            v60,
            pRequest->m_Irp.m_Irp,
            pRequest->m_Irp.m_Irp->IoStatus.Information,
            0);
        }
        if ( m_DeviceBase )
          m_Globals_high = HIBYTE(m_DeviceBase[1].m_Globals);
        else
          m_Globals_high = 0;
        pRequest->m_PriorityBoost = m_Globals_high;
        FxRequest::CompleteInternal(pRequest, 0, v8);
        if ( m_Globals->FxVerifierOn )
        {
          v38 = 3261LL;
          goto LABEL_59;
        }
        return;
      }
      break;
    case 4:
      if ( this->m_IoWrite.Method )
      {
        v47 = CurrentStackLocation->Parameters.Read.Length;
        if ( (_DWORD)v47 || this->m_AllowZeroLengthRequests )
        {
          pRequest->m_Presented = 1;
          if ( m_Globals->FxVerboseOn )
            WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x35u, WPP_FxIoQueue_cpp_Traceguids, v9);
          v48 = this->m_ObjectSize;
          p_m_IoWrite = &this->m_IoWrite;
          v50 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
          if ( !v48 )
            v50 = 0LL;
          if ( !p_m_IoWrite->Method )
            goto LABEL_41;
          v51 = p_m_IoWrite->m_CallbackLock;
          PreviousIrql = 0;
          if ( v51 )
            v51->Lock(v51, &PreviousIrql);
          p_m_IoWrite->Method((WDFQUEUE__ *)v50, v9, v47);
          v24 = p_m_IoWrite->m_CallbackLock;
          if ( !p_m_IoWrite->m_CallbackLock )
            goto LABEL_41;
          goto LABEL_88;
        }
        if ( m_Globals->FxVerboseOn )
        {
          v61 = this->m_ObjectSize;
          v62 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !v61 )
            v62 = 0LL;
          WPP_IFR_SF_qq(m_Globals, 5u, 0xDu, 0x34u, WPP_FxIoQueue_cpp_Traceguids, v9, v62);
        }
        FxRequest::Complete(pRequest, 0);
        if ( m_Globals->FxVerifierOn )
        {
          v38 = 3300LL;
          goto LABEL_59;
        }
        return;
      }
      break;
    case 0xE:
      if ( this->m_IoDeviceControl.Method )
      {
        pRequest->m_Presented = 1;
        if ( m_Globals->FxVerboseOn )
          WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x36u, WPP_FxIoQueue_cpp_Traceguids, v9);
        p_m_CallbackLock = &this->m_IoDeviceControl.m_CallbackLock;
        v25 = pRequest->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation;
        v26 = this->m_ObjectSize;
        v15 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
        LowPart = v25->Parameters.Read.ByteOffset.LowPart;
        if ( !v26 )
          v15 = 0LL;
        Options = v25->Parameters.Create.Options;
        v18 = v25->Parameters.Read.Length;
        if ( !p_m_CallbackLock[1] )
          goto LABEL_41;
        v19 = *p_m_CallbackLock;
        PreviousIrql = 0;
        if ( v19 )
LABEL_19:
          v19->Lock(v19, &PreviousIrql);
LABEL_40:
        ((void (__fastcall *)(unsigned __int64, WDFREQUEST__ *, __int64, __int64, unsigned int))p_m_CallbackLock[1])(
          v15,
          v9,
          v18,
          Options,
          LowPart);
        v24 = *p_m_CallbackLock;
        if ( !*p_m_CallbackLock )
        {
LABEL_41:
          if ( !m_Globals->FxVerifierOn )
            return;
          if ( (FxRequestBase::GetVerifierFlags(pRequest) & 4) == 0 )
            FxRequestBase::ClearVerifierFlags(pRequest, 8);
          v38 = 3465LL;
LABEL_59:
          pRequest->Release(
            pRequest,
            (void *)1952543827,
            v38,
            "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
          return;
        }
LABEL_88:
        v24->Unlock(v24, PreviousIrql);
        goto LABEL_41;
      }
      break;
    default:
      if ( (_BYTE)MajorFunction == 15 && this->m_IoInternalDeviceControl.Method )
      {
        pRequest->m_Presented = 1;
        if ( m_Globals->FxVerboseOn )
          WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x37u, WPP_FxIoQueue_cpp_Traceguids, v9);
        p_m_CallbackLock = &this->m_IoInternalDeviceControl.m_CallbackLock;
        v13 = pRequest->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation;
        v14 = this->m_ObjectSize;
        v15 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
        LowPart = v13->Parameters.Read.ByteOffset.LowPart;
        if ( !v14 )
          v15 = 0LL;
        Options = v13->Parameters.Create.Options;
        v18 = v13->Parameters.Read.Length;
        if ( !p_m_CallbackLock[1] )
          goto LABEL_41;
        v19 = *p_m_CallbackLock;
        PreviousIrql = 0;
        if ( v19 )
          goto LABEL_19;
        goto LABEL_40;
      }
      break;
  }
  if ( this->m_IoDefault.Method )
  {
    if ( m_Globals->FxVerboseOn )
      WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x38u, WPP_FxIoQueue_cpp_Traceguids, v9);
    if ( this->m_AllowZeroLengthRequests )
      goto LABEL_26;
    if ( (_BYTE)MajorFunction != 3 )
    {
      if ( (_BYTE)MajorFunction == 4
        && !pRequest->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length )
      {
        FxRequest::Complete(pRequest, 0);
        if ( m_Globals->FxVerboseOn )
        {
          v52 = this->m_ObjectSize;
          v53 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !v52 )
            v53 = 0LL;
          WPP_IFR_SF_qq(m_Globals, 5u, 0xDu, 0x3Au, WPP_FxIoQueue_cpp_Traceguids, v9, v53);
        }
        if ( m_Globals->FxVerifierOn )
        {
          v38 = 3405LL;
          goto LABEL_59;
        }
        return;
      }
LABEL_26:
      p_m_IoDefault = &this->m_IoDefault;
      pRequest->m_Presented = 1;
      v21 = this->m_ObjectSize;
      v22 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
      if ( !v21 )
        v22 = 0LL;
      if ( !p_m_IoDefault->Method )
        goto LABEL_41;
      v23 = p_m_IoDefault->m_CallbackLock;
      PreviousIrql = 0;
      if ( v23 )
        v23->Lock(v23, &PreviousIrql);
      p_m_IoDefault->Method((WDFQUEUE__ *)v22, v9);
      v24 = p_m_IoDefault->m_CallbackLock;
      if ( !p_m_IoDefault->m_CallbackLock )
        goto LABEL_41;
      goto LABEL_88;
    }
    if ( pRequest->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length )
      goto LABEL_26;
    if ( m_Globals->FxVerboseOn )
    {
      v63 = this->m_ObjectSize;
      v64 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v63 )
        v64 = 0LL;
      WPP_IFR_SF_qq(m_Globals, 5u, 0xDu, 0x39u, WPP_FxIoQueue_cpp_Traceguids, v9, v64);
    }
    FxRequest::Complete(pRequest, 0);
    if ( m_Globals->FxVerifierOn )
    {
      v38 = 3384LL;
      goto LABEL_59;
    }
  }
  else
  {
    WPP_IFR_SF_Lqd(m_Globals, v7, v8, 0x3Bu, WPP_FxIoQueue_cpp_Traceguids, MajorFunction, pRequest, -1073741808);
    v40 = pRequest->m_DeviceBase;
    v41 = pRequest->m_Globals;
    if ( v41->FxVerboseOn )
    {
      v65 = (const void *)((unsigned __int64)pRequest ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !pRequest->m_ObjectSize )
        v65 = 0LL;
      WPP_IFR_SF_qiid(
        v41,
        5u,
        0x10u,
        0xBu,
        WPP_FxRequest_hpp_Traceguids,
        v65,
        pRequest->m_Irp.m_Irp,
        pRequest->m_Irp.m_Irp->IoStatus.Information,
        -1073741808);
    }
    if ( v40 )
      v42 = HIBYTE(v40[1].m_Globals);
    else
      v42 = 0;
    pRequest->m_PriorityBoost = v42;
    FxRequest::CompleteInternal(pRequest, 0xC0000010, v39);
    if ( m_Globals->FxVerifierOn )
    {
      v38 = 3436LL;
      goto LABEL_59;
    }
  }
}
