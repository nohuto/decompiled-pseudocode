/*
 * XREFs of ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1400258C0
 * Callers:
 *     ?DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z @ 0x140017EF0 (-DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z.c)
 *     ?DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z @ 0x140019480 (-DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z.c)
 *     imp_WdfDeviceWdmDispatchIrpToIoQueue @ 0x14001AD70 (imp_WdfDeviceWdmDispatchIrpToIoQueue.c)
 *     ?Complete@FxRequest@@QEAAJJ@Z @ 0x140025700 (-Complete@FxRequest@@QEAAJJ@Z.c)
 *     ?QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x140026430 (-QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x140028280 (-DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     ?CompleteWithInformation@FxRequest@@QEAAJJ_K@Z @ 0x14003D0CC (-CompleteWithInformation@FxRequest@@QEAAJJ_K@Z.c)
 *     imp_WdfRequestComplete @ 0x140054600 (imp_WdfRequestComplete.c)
 *     imp_WdfRequestCompleteWithInformation @ 0x140056820 (imp_WdfRequestCompleteWithInformation.c)
 *     imp_WdfRequestCompleteWithPriorityBoost @ 0x140064C20 (imp_WdfRequestCompleteWithPriorityBoost.c)
 * Callees:
 *     WPP_IFR_SF_D @ 0x14001177C (WPP_IFR_SF_D.c)
 *     WPP_IFR_SF_qqLL @ 0x1400251E0 (WPP_IFR_SF_qqLL.c)
 *     ?DestroyChildren@FxObject@@IEAAXXZ @ 0x140026330 (-DestroyChildren@FxObject@@IEAAXXZ.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x140026780 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     WPP_IFR_SF_qq @ 0x14002A1A4 (WPP_IFR_SF_qq.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14002BDA8 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x14002C4F0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?_DestroyFileObject@FxFileObject@@SAXPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@@Z @ 0x140039648 (-_DestroyFileObject@FxFileObject@@SAXPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@@Z.c)
 *     ?DecrementOpenHandleCount@FxPkgGeneral@@AEAAXXZ @ 0x140039820 (-DecrementOpenHandleCount@FxPkgGeneral@@AEAAXXZ.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x140049F80 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x140049FC8 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?EarlyDispose@FxObject@@QEAAEXZ @ 0x14004B220 (-EarlyDispose@FxObject@@QEAAEXZ.c)
 *     ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x14004BB00 (-SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     ?RemoveChildObjectInternal@FxObject@@AEAAJPEAV1@@Z @ 0x14004C15C (-RemoveChildObjectInternal@FxObject@@AEAAJPEAV1@@Z.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x14007009C (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     WPP_IFR_SF_qqDqq @ 0x14008092C (WPP_IFR_SF_qqDqq.c)
 *     WPP_IFR_SF_qqqi @ 0x140080B40 (WPP_IFR_SF_qqqi.c)
 *     ?PostProcessCompletionForReserved@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z @ 0x140082D5C (-PostProcessCompletionForReserved@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1400830A8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832D8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 *     ?Vf_VerifyValidateCompletedRequest@FxIoQueue@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1400DC7D8 (-Vf_VerifyValidateCompletedRequest@FxIoQueue@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z.c)
 *     ?Vf_VerifierBreakpoint_RequestEarlyDisposeDeferred@FxRequest@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400DCEF0 (-Vf_VerifierBreakpoint_RequestEarlyDisposeDeferred@FxRequest@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyCompleteInternal@FxRequest@@AEAAXPEAU_FX_DRIVER_GLOBALS@@J@Z @ 0x1400E4618 (-Vf_VerifyCompleteInternal@FxRequest@@AEAAXPEAU_FX_DRIVER_GLOBALS@@J@Z.c)
 */

__int64 __fastcall FxRequest::CompleteInternal(FxRequest *this, unsigned int Status, unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r12
  _IRP *_a2; // rdi
  _IRP *m_Irp; // rdx
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  FxRequestCompletionState m_CompletionState; // r15d
  FxIoQueue *m_IoQueue; // r14
  FxRequestContext *m_RequestContext; // rcx
  unsigned __int8 *p_m_Reserved; // rbp
  _IRP *v13; // rcx
  FxDeviceBase *m_DeviceBase; // r12
  unsigned __int8 v15; // r8
  _FX_DRIVER_GLOBALS *v16; // rdx
  unsigned __int8 v17; // r8
  _LIST_ENTRY *v18; // rax
  _LIST_ENTRY *v19; // rcx
  _LIST_ENTRY *v20; // rdx
  $6669C56F21CC8E165773D928B9B8D396 *v21; // r14
  const void *_a1; // rcx
  FxRequest_vtbl *v24; // rax
  __int64 p_irp; // rdx
  __int64 v26; // r8
  FxRequest *v27; // rcx
  $4323D4DF7434BC16B1A5302962397529 *v28; // r14
  WDFMEMORY__ *id; // rdi
  FxRequestSystemBuffer *p_m_SystemBuffer; // r13
  WDFMEMORY__ *flags; // rax
  unsigned __int16 *p_m_ObjectSize; // r15
  const void *v33; // r8
  bool v34; // zf
  unsigned __int16 *v35; // r13
  unsigned __int64 m_IrpReferenceCount; // r9
  unsigned __int64 v37; // rbx
  _FX_DRIVER_GLOBALS *v38; // rdx
  unsigned __int8 v39; // r8
  _LIST_ENTRY *p_m_OwnerListEntry2; // rax
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *Blink; // rdx
  unsigned int v43; // edx
  FxPkgGeneral *m_Lock; // rdi
  unsigned int v45; // r13d
  FxVerifierLock *v46; // rcx
  FxVerifierLock *v47; // rcx
  FxVerifierLock *v48; // rcx
  FxVerifierLock *v49; // rcx
  KIRQL v50; // al
  FxObject *m_ParentObject; // rcx
  KIRQL v52; // r15
  _FX_DRIVER_GLOBALS *v53; // rdx
  _FX_DRIVER_GLOBALS *v54; // rcx
  const void *v55; // rdx
  FxTagTracker *m_DeviceObject; // rcx
  __int64 v57; // rbp
  _MDL *level; // rsi
  const void *v59; // rdi
  WDFMEMORY__ *v60; // rax
  unsigned __int8 v61; // dl
  unsigned int v62; // r8d
  _LIST_ENTRY *v63; // rcx
  __int64 v64; // rbp
  _MDL *v65; // rsi
  const void *v66; // rdi
  WDFMEMORY__ *v67; // rax
  unsigned __int8 v68; // dl
  unsigned int v69; // r8d
  const _GUID *traceGuid; // [rsp+20h] [rbp-68h]
  const _GUID *traceGuida; // [rsp+20h] [rbp-68h]
  unsigned __int16 *v72; // [rsp+90h] [rbp+8h] BYREF
  unsigned __int8 PreviousIrql; // [rsp+98h] [rbp+10h] BYREF
  FxIrp irp; // [rsp+A0h] [rbp+18h] BYREF

  m_Globals = this->m_Globals;
  _a2 = this->m_Irp.m_Irp;
  m_Irp = _a2;
  if ( !m_Globals->FxVerifierOn
    || (FxRequest::Vf_VerifyCompleteInternal(this, (_FX_DRIVER_GLOBALS *)_a2, Status),
        m_Irp = this->m_Irp.m_Irp,
        !m_Globals->FxVerifierOn) )
  {
    this->m_Completed = 1;
  }
  CurrentStackLocation = m_Irp->Tail.Overlay.CurrentStackLocation;
  if ( CurrentStackLocation->MajorFunction == 14
    && (CurrentStackLocation->Parameters.Read.ByteOffset.LowPart & 3) == 0
    && m_Irp->RequestorMode == 1
    && !CurrentStackLocation->Parameters.Read.Length
    && (m_Irp->Flags & 0x40) != 0 )
  {
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qq(m_Globals, 2u, 0x10u, 0x10u, WPP_FxRequest_cpp_Traceguids, _a1, _a2);
    if ( this->m_Irp.m_Irp->IoStatus.Information )
      FxVerifierDbgBreakPoint(m_Globals);
    this->m_Irp.m_Irp->Flags &= ~0x40u;
  }
  if ( (Status & 0xFFF0000) == 0x200000 )
  {
    WPP_IFR_SF_D(m_Globals, 2u, 0x10u, 0x11u, WPP_FxRequest_cpp_Traceguids, Status);
    if ( Status != -1071644156 )
    {
      if ( Status == -1071644159 )
      {
        Status = -1073741595;
        goto LABEL_99;
      }
      if ( Status == -1071644140 )
      {
        Status = -1073741670;
LABEL_99:
        WPP_IFR_SF_D(m_Globals, 2u, 0x10u, 0x13u, WPP_FxRequest_cpp_Traceguids, Status);
        goto LABEL_5;
      }
      if ( Status != -1071644157 )
      {
        if ( Status != -1071644150 && Status != -1071644141 )
          WPP_IFR_SF_D(m_Globals, 2u, 0x10u, 0x12u, WPP_FxRequest_cpp_Traceguids, Status);
        Status = -1073741808;
        goto LABEL_99;
      }
    }
    Status = -2147483631;
    goto LABEL_99;
  }
LABEL_5:
  if ( this->m_IrpAllocation && !this->m_CanComplete )
    FxVerifierDbgBreakPoint(m_Globals);
  m_CompletionState = this->m_CompletionState;
  m_IoQueue = this->m_IoQueue;
  if ( !this->m_IrpAllocation )
  {
    this->m_CompletionState = 0;
    if ( !this->m_Reserved )
      this->m_IoQueue = 0LL;
  }
  m_RequestContext = this->m_RequestContext;
  if ( m_RequestContext )
    m_RequestContext->ReleaseAndRestore(m_RequestContext, this);
  if ( !this->m_Presented )
    FxObject::ClearEvtCallbacks(this);
  p_m_Reserved = &this->m_Reserved;
  if ( !this->m_Reserved && !this->m_IrpAllocation )
  {
    if ( !FxObject::EarlyDispose(this) )
    {
      v53 = this->m_Globals;
      if ( v53->FxVerifierOn )
        FxRequest::Vf_VerifierBreakpoint_RequestEarlyDisposeDeferred(this, v53);
    }
    FxObject::DestroyChildren(this);
    p_m_Reserved = &this->m_Reserved;
  }
  if ( this->m_IrpReferenceCount )
  {
    v28 = &this->235;
    if ( (this->m_RequestBaseFlags & 2) != 0 || (v28->m_RequestBaseStaticFlags & 2) != 0 )
      id = this->m_OutputBuffer.GetHandle(&this->m_OutputBuffer);
    else
      id = 0LL;
    if ( (this->m_RequestBaseFlags & 1) != 0 || (v28->m_RequestBaseStaticFlags & 1) != 0 )
    {
      p_m_SystemBuffer = &this->m_SystemBuffer;
      flags = this->m_SystemBuffer.GetHandle(&this->m_SystemBuffer);
    }
    else
    {
      flags = 0LL;
      p_m_SystemBuffer = &this->m_SystemBuffer;
    }
    p_m_ObjectSize = &this->m_ObjectSize;
    v33 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v33 = 0LL;
    WPP_IFR_SF_qqDqq(
      m_Globals,
      this->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->MajorFunction,
      (unsigned int)v33,
      (unsigned __int16)this->m_Irp.m_Irp,
      traceGuid,
      v33,
      this->m_Irp.m_Irp,
      this->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->MajorFunction,
      flags,
      id);
    v34 = (this->m_RequestBaseFlags & 1) == 0;
    v72 = &this->m_ObjectSize;
    if ( v34 )
    {
      if ( (v28->m_RequestBaseStaticFlags & 1) == 0 )
      {
LABEL_58:
        v35 = &this->m_ObjectSize;
        if ( (this->m_RequestBaseFlags & 2) != 0 || (v35 = v72, (v28->m_RequestBaseStaticFlags & 2) != 0) )
        {
          v57 = this->m_OutputBuffer.GetBufferSize(&this->m_OutputBuffer);
          level = this->m_OutputBuffer.GetMdl(&this->m_OutputBuffer);
          v59 = (const void *)this->m_OutputBuffer.GetBuffer(&this->m_OutputBuffer);
          v60 = this->m_OutputBuffer.GetHandle(&this->m_OutputBuffer);
          WPP_IFR_SF_qqqi(m_Globals, v61, v62, 0x16u, traceGuida, v60, v59, level, v57);
          p_m_ObjectSize = v35;
        }
        m_IrpReferenceCount = this->m_IrpReferenceCount;
        v37 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
        if ( !*p_m_ObjectSize )
          v37 = 0LL;
        FxVerifierBugCheckWorker(m_Globals, WDF_VERIFIER_FATAL_ERROR, v37, m_IrpReferenceCount);
      }
      v72 = &this->m_ObjectSize;
      v28 = &this->235;
    }
    v64 = p_m_SystemBuffer->GetBufferSize(p_m_SystemBuffer);
    v65 = p_m_SystemBuffer->GetMdl(p_m_SystemBuffer);
    v66 = (const void *)p_m_SystemBuffer->GetBuffer(p_m_SystemBuffer);
    v67 = p_m_SystemBuffer->GetHandle(p_m_SystemBuffer);
    WPP_IFR_SF_qqqi(m_Globals, v68, v69, 0x15u, traceGuida, v67, v66, v65, v64);
    goto LABEL_58;
  }
  irp.m_Irp = _a2;
  _a2->IoStatus.Status = Status;
  if ( this->m_IrpAllocation )
  {
    if ( m_CompletionState == FxRequestCompletionStateQueue )
    {
      v38 = m_IoQueue->m_Globals;
      LOBYTE(v72) = 0;
      if ( v38->FxVerifierOn )
        FxIoQueue::Vf_VerifyValidateCompletedRequest(m_IoQueue, v38, this);
      if ( SLOBYTE(m_IoQueue->m_ObjectFlags) < 0
        && (v48 = *(FxVerifierLock **)&m_IoQueue[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
      {
        FxVerifierLock::Lock(v48, (unsigned __int8 *)&v72, a3);
      }
      else
      {
        LOBYTE(v72) = KeAcquireSpinLockRaiseToDpc(&m_IoQueue->m_NPLock.m_Lock);
      }
      p_m_OwnerListEntry2 = &this->m_OwnerListEntry2;
      Flink = this->m_OwnerListEntry2.Flink;
      if ( Flink->Blink != &this->m_OwnerListEntry2 )
        goto LABEL_126;
      Blink = this->m_OwnerListEntry2.Blink;
      if ( Blink->Flink != p_m_OwnerListEntry2 )
        goto LABEL_126;
      Blink->Flink = Flink;
      Flink->Blink = Blink;
      this->m_OwnerListEntry2.Blink = &this->m_OwnerListEntry2;
      p_m_OwnerListEntry2->Flink = p_m_OwnerListEntry2;
      ++m_IoQueue->m_TwoPhaseCompletions;
      if ( SLOBYTE(m_IoQueue->m_ObjectFlags) < 0
        && (v49 = *(FxVerifierLock **)&m_IoQueue[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
      {
        FxVerifierLock::Unlock(v49, (unsigned __int8)v72, v39);
      }
      else
      {
        KeReleaseSpinLock(&m_IoQueue->m_NPLock.m_Lock, (KIRQL)v72);
      }
    }
    else if ( m_IoQueue )
    {
      FxObject::AddRef(this, (void *)0x706D6F43, 995, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
    }
    v24 = this->__vftable;
    p_irp = 1129464644LL;
    v26 = 1001LL;
    v27 = this;
    goto LABEL_49;
  }
  v13 = irp.m_Irp;
  this->m_Irp.m_Irp = 0LL;
  if ( v13->Tail.Overlay.CurrentStackLocation->MajorFunction )
  {
    m_DeviceBase = 0LL;
  }
  else
  {
    m_DeviceBase = this->m_DeviceBase;
    v43 = _InterlockedIncrement(&m_DeviceBase->m_Refcnt);
    if ( SLOBYTE(m_DeviceBase->m_ObjectFlags) < 0 )
    {
      m_DeviceObject = (FxTagTracker *)m_DeviceBase[-1].m_AttachedDevice.m_DeviceObject;
      if ( m_DeviceObject )
        FxTagTracker::UpdateTagHistory(
          m_DeviceObject,
          &irp,
          858,
          "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp",
          TagAddRef,
          v43);
    }
    v13 = irp.m_Irp;
    m_Lock = (FxPkgGeneral *)m_DeviceBase[3].m_SpinLock.m_Lock;
    if ( irp.m_Irp->IoStatus.Status < 0 )
    {
      FxFileObject::_DestroyFileObject(
        m_Lock->m_Device,
        (_WDF_FILEOBJECT_CLASS)m_Lock->m_DeviceBase[1].m_DisposeSingleEntry.Next,
        irp.m_Irp->Tail.Overlay.CurrentStackLocation->FileObject);
      FxPkgGeneral::DecrementOpenHandleCount(m_Lock);
      v13 = irp.m_Irp;
    }
    p_m_Reserved = &this->m_Reserved;
  }
  IofCompleteRequest(v13, this->m_PriorityBoost);
  irp.m_Irp = 0LL;
  if ( *p_m_Reserved )
  {
    FxRequest::PostProcessCompletionForReserved(this, m_CompletionState, m_IoQueue);
    goto LABEL_33;
  }
  if ( m_CompletionState == FxRequestCompletionStateNone )
  {
    v45 = _InterlockedIncrement(&this->m_Refcnt);
    if ( SLOBYTE(this->m_ObjectFlags) < 0 )
    {
      v63 = this[-1].m_OwnerListEntry2.Blink;
      if ( v63 )
        FxTagTracker::UpdateTagHistory(
          (FxTagTracker *)v63,
          (void *)0x706D6F43,
          925,
          "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp",
          TagAddRef,
          v45);
    }
    this->DeleteObject(this);
    goto LABEL_33;
  }
  if ( (m_CompletionState & 0x80u) == 0 )
  {
    PreviousIrql = 0;
    v16 = m_IoQueue->m_Globals;
    if ( v16->FxVerifierOn )
      FxIoQueue::Vf_VerifyValidateCompletedRequest(m_IoQueue, v16, this);
    if ( SLOBYTE(m_IoQueue->m_ObjectFlags) < 0
      && (v46 = *(FxVerifierLock **)&m_IoQueue[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
    {
      FxVerifierLock::Lock(v46, &PreviousIrql, v15);
    }
    else
    {
      PreviousIrql = KeAcquireSpinLockRaiseToDpc(&m_IoQueue->m_NPLock.m_Lock);
    }
    v18 = &this->m_OwnerListEntry2;
    v19 = this->m_OwnerListEntry2.Flink;
    if ( v19->Blink == &this->m_OwnerListEntry2 )
    {
      v20 = this->m_OwnerListEntry2.Blink;
      if ( v20->Flink == v18 )
      {
        v20->Flink = v19;
        v19->Blink = v20;
        this->m_OwnerListEntry2.Blink = &this->m_OwnerListEntry2;
        v18->Flink = v18;
        --m_IoQueue->m_DriverIoCount;
        if ( m_IoQueue->m_Dispatching )
        {
          if ( SLOBYTE(m_IoQueue->m_ObjectFlags) < 0
            && (v47 = *(FxVerifierLock **)&m_IoQueue[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
          {
            FxVerifierLock::Unlock(v47, PreviousIrql, v17);
          }
          else
          {
            KeReleaseSpinLock(&m_IoQueue->m_NPLock.m_Lock, PreviousIrql);
          }
        }
        else
        {
          FxIoQueue::DispatchEvents(m_IoQueue, PreviousIrql, 0LL);
        }
        goto LABEL_30;
      }
    }
LABEL_126:
    __fastfail(3u);
  }
LABEL_30:
  this->m_ObjectFlags |= 4u;
  v21 = &this->24;
  if ( this->m_ParentObject )
  {
    v50 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
    m_ParentObject = this->m_ParentObject;
    v21 = &this->24;
    v52 = v50;
    if ( m_ParentObject )
    {
      if ( FxObject::RemoveChildObjectInternal(m_ParentObject, this) == -1073741738 )
      {
        FxObject::SetObjectStateLocked(this, FxObjectStateWaitingForParentDeleteAndDisposed);
        KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v52);
        goto LABEL_33;
      }
      v21 = &this->24;
      this->m_ParentObject = 0LL;
    }
    KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v52);
  }
  if ( _bittest16((const signed __int16 *)&this->24, 9u) )
  {
    v54 = this->m_Globals;
    if ( v54->FxVerboseOn )
    {
      v55 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        v55 = 0LL;
      WPP_IFR_SF_qqLL(v54, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, this, v55, this->m_ObjectState, 0xAu);
    }
    if ( SLOBYTE(v21->m_ObjectFlags) < 0 )
      *((_BYTE *)this + _InterlockedIncrement((volatile signed __int32 *)&this[-1].m_ForwardProgressQueue) - 32) = 10;
  }
  this->m_ObjectState = 10;
  FxObject::DestroyChildren(this);
  this->Release(this, 0LL, 1248, "minkernel\\wdf\\framework\\shared\\object\\fxobjectstatemachine.cpp");
LABEL_33:
  if ( m_DeviceBase )
  {
    v24 = (FxRequest_vtbl *)m_DeviceBase->FxNonPagedObject::FxObject::__vftable;
    p_irp = (__int64)&irp;
    v26 = 879LL;
    v27 = (FxRequest *)m_DeviceBase;
LABEL_49:
    v24->Release(v27, (void *)p_irp, v26, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
  }
  return Status;
}
