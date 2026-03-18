/*
 * XREFs of ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x14000AE60
 * Callers:
 *     ?GetPortStatus@FxUsbDevice@@IEAAJPEAK@Z @ 0x140007824 (-GetPortStatus@FxUsbDevice@@IEAAJPEAK@Z.c)
 *     imp_WdfIoTargetSendInternalIoctlOthersSynchronously @ 0x140007E10 (imp_WdfIoTargetSendInternalIoctlOthersSynchronously.c)
 *     imp_WdfUsbTargetDeviceSendControlTransferSynchronously @ 0x140009550 (imp_WdfUsbTargetDeviceSendControlTransferSynchronously.c)
 *     imp_WdfRequestSend @ 0x14000A850 (imp_WdfRequestSend.c)
 *     FxIoTargetSendIo @ 0x14000BF50 (FxIoTargetSendIo.c)
 *     FxIoTargetSendIoctl @ 0x14000D490 (FxIoTargetSendIoctl.c)
 *     ?_SendTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAU_WDF_MEMORY_DESCRIPTOR@@PEAKK@Z @ 0x14001EE38 (-_SendTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAU_WD.c)
 *     ?SubmitSyncRequestIgnoreTargetState@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z @ 0x14004CE80 (-SubmitSyncRequestIgnoreTargetState@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OP.c)
 *     ?Reset@FxUsbPipe@@QEAAJXZ @ 0x14004D148 (-Reset@FxUsbPipe@@QEAAJXZ.c)
 *     imp_WdfUsbTargetDeviceSendUrbSynchronously @ 0x14004D4A0 (imp_WdfUsbTargetDeviceSendUrbSynchronously.c)
 *     imp_WdfUsbTargetPipeAbortSynchronously @ 0x14004F4E0 (imp_WdfUsbTargetPipeAbortSynchronously.c)
 *     ?SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z @ 0x14004F8DC (-SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z.c)
 *     ?SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z @ 0x14004FC24 (-SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z.c)
 *     ?GetString@FxUsbDevice@@QEAAJPEAG0EGPEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z @ 0x140050338 (-GetString@FxUsbDevice@@QEAAJPEAG0EGPEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z.c)
 *     ?InitDevice@FxUsbDevice@@QEAAJK@Z @ 0x140050A64 (-InitDevice@FxUsbDevice@@QEAAJK@Z.c)
 *     imp_WdfUsbTargetPipeSendUrbSynchronously @ 0x14009C4D0 (imp_WdfUsbTargetPipeSendUrbSynchronously.c)
 *     ?Deconfig@FxUsbDevice@@QEAAJXZ @ 0x14009EF90 (-Deconfig@FxUsbDevice@@QEAAJXZ.c)
 * Callees:
 *     ?Cancel@FxRequestBase@@QEAAEXZ @ 0x140006E7C (-Cancel@FxRequestBase@@QEAAEXZ.c)
 *     ?SubmitLocked@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z @ 0x14000B350 (-SubmitLocked@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z.c)
 *     WPP_IFR_SF_qq @ 0x14002A1A4 (WPP_IFR_SF_qq.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14002BDA8 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14002C4B0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x14002C4F0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ @ 0x14002DF5C (-EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x140049FC8 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?ClearVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x140082FF0 (-ClearVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     WPP_IFR_SF_qD @ 0x14008884C (WPP_IFR_SF_qD.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxIoTarget::SubmitSync(
        FxIoTarget *this,
        FxRequestBase *Request,
        _WDF_REQUEST_SEND_OPTIONS *Options,
        unsigned int *Action)
{
  unsigned __int8 v8; // r8
  char v9; // r13
  unsigned int v10; // esi
  unsigned int v11; // r12d
  char m_ObjectFlags; // al
  unsigned int v13; // edi
  unsigned __int8 v14; // r8
  unsigned int v15; // esi
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned int RefCount; // r15d
  _FX_DRIVER_GLOBALS *v18; // rcx
  FxRequestContext *m_RequestContext; // rcx
  _FX_DRIVER_GLOBALS *v20; // rax
  _LARGE_INTEGER *Timeout; // rax
  NTSTATUS v23; // edi
  unsigned __int8 v24; // r8
  _DEVICE_OBJECT *m_TargetDevice; // rcx
  FxTagTracker *m_TargetCompletionContext; // rcx
  unsigned __int8 v27; // al
  _DEVICE_OBJECT *v28; // rcx
  FxRequestBase *_a2; // r8
  unsigned __int64 v30; // rcx
  const void *v31; // rdx
  FxRequestBase *v32; // rax
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // rdx
  FxRequestBase *v35; // rax
  FxVerifierLock **p_m_TargetDevice; // [rsp+40h] [rbp-39h]
  __int64 timeout; // [rsp+48h] [rbp-31h] BYREF
  FxTargetSubmitSyncParams params; // [rsp+50h] [rbp-29h] BYREF
  unsigned __int8 PreviousIrql; // [rsp+E0h] [rbp+67h] BYREF
  unsigned __int8 irql; // [rsp+E8h] [rbp+6Fh] BYREF
  int status; // [rsp+F0h] [rbp+77h] BYREF
  unsigned int *v42; // [rsp+F8h] [rbp+7Fh]

  v42 = Action;
  params.SynchEvent.m_Event.m_DbgFlagIsInitialized = 0;
  KeInitializeEvent(&params.SynchEvent.m_Event.m_Event, SynchronizationEvent, 0);
  params.SynchEvent.m_Event.m_DbgFlagIsInitialized = 1;
  timeout = 0LL;
  status = 0;
  memset(&params.Status, 0, 24);
  irql = 0;
  if ( this->m_Globals->FxVerboseOn )
  {
    _a2 = Request;
    v30 = (unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !Request->m_ObjectSize )
      v30 = 0LL;
    if ( v30 )
      _a2 = (FxRequestBase *)v30;
    v31 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v31 = 0LL;
    WPP_IFR_SF_qq(this->m_Globals, 5u, 0xEu, 0x24u, WPP_FxIoTarget_cpp_Traceguids, v31, _a2);
  }
  v9 = Request->m_RequestBaseFlags & 0x10;
  if ( Action )
    v10 = *Action;
  else
    v10 = 0;
  if ( Options && (Options->Flags & 1) != 0 && Options->Timeout )
  {
    timeout = Options->Timeout;
    v10 |= 0x10u;
  }
  if ( (v10 & 0x20) != 0 )
  {
    params.OrigTargetCompletionContext = Request->m_TargetCompletionContext;
    params.OrigTargetCompletionRoutine = Request->m_CompletionRoutine.m_Completion;
  }
  else
  {
    params.OrigTargetCompletionContext = 0LL;
    params.OrigTargetCompletionRoutine = 0LL;
  }
  Request->m_CompletionRoutine.m_Completion = FxIoTarget::_SyncCompletionRoutine;
  Request->m_TargetCompletionContext = &params;
  if ( Options )
    v11 = Options->Flags & 0xFFFFFFFE;
  else
    v11 = 0;
  m_ObjectFlags = this->m_ObjectFlags;
  PreviousIrql = 0;
  if ( m_ObjectFlags < 0
    && (m_TargetDevice = this[-1].m_TargetDevice,
        p_m_TargetDevice = (FxVerifierLock **)&this[-1].m_TargetDevice,
        m_TargetDevice) )
  {
    FxVerifierLock::Lock((FxVerifierLock *)m_TargetDevice, &PreviousIrql, v8);
  }
  else
  {
    PreviousIrql = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
    p_m_TargetDevice = (FxVerifierLock **)&this[-1].m_TargetDevice;
  }
  v13 = FxIoTarget::SubmitLocked(this, Request, Options, v11);
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && *p_m_TargetDevice )
    FxVerifierLock::Unlock(*p_m_TargetDevice, PreviousIrql, v14);
  else
    KeReleaseSpinLock(&this->m_NPLock.m_Lock, PreviousIrql);
  v15 = v13 | v10;
  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
  {
    v32 = Request;
    v33 = (unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !Request->m_ObjectSize )
      v33 = 0LL;
    if ( v33 )
      v32 = (FxRequestBase *)v33;
    WPP_IFR_SF_qD(m_Globals, v33, 0xEu, 0x26u, WPP_FxIoTarget_cpp_Traceguids, v32, v15);
  }
  RefCount = _InterlockedIncrement(&Request->m_Refcnt);
  if ( SLOBYTE(Request->m_ObjectFlags) < 0 )
  {
    m_TargetCompletionContext = (FxTagTracker *)Request[-1].m_TargetCompletionContext;
    if ( m_TargetCompletionContext )
      FxTagTracker::UpdateTagHistory(
        m_TargetCompletionContext,
        &status,
        1754,
        "minkernel\\wdf\\framework\\shared\\targets\\general\\fxiotarget.cpp",
        TagAddRef,
        RefCount);
  }
  if ( (v15 & 1) != 0 )
  {
    v18 = this->m_Globals;
    if ( v18->FxVerboseOn )
    {
      v34 = (unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL;
      v35 = Request;
      if ( !Request->m_ObjectSize )
        v34 = 0LL;
      if ( v34 )
        v35 = (FxRequestBase *)v34;
      WPP_IFR_SF_qq(v18, 5u, 0xEu, 0x27u, WPP_FxIoTarget_cpp_Traceguids, v35, Request->m_Irp.m_Irp);
    }
    this->Send(this, Request->m_Irp.m_Irp);
    v15 |= 0xCu;
  }
  else if ( (v15 & 2) != 0 )
  {
    v15 |= 0xCu;
  }
  else if ( (v15 & 0x20) != 0 )
  {
    Request->m_TargetCompletionContext = params.OrigTargetCompletionContext;
    Request->m_CompletionRoutine.m_Completion = params.OrigTargetCompletionRoutine;
  }
  if ( (v15 & 4) != 0 )
  {
    if ( (v15 & 8) != 0 )
    {
      KeEnterCriticalRegion();
      Timeout = (_LARGE_INTEGER *)&timeout;
      if ( (v15 & 0x10) == 0 )
        Timeout = 0LL;
      v23 = KeWaitForSingleObject(&params, Executive, 0, 0, Timeout);
      KeLeaveCriticalRegion();
      status = v23;
      if ( v23 == 258 )
      {
        if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v28 = this[-1].m_TargetDevice) != 0LL )
        {
          FxVerifierLock::Lock((FxVerifierLock *)v28, &irql, v24);
          v27 = irql;
        }
        else
        {
          v27 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
        }
        Request->m_TargetFlags |= 8u;
        FxNonPagedObject::Unlock(this, v27);
        FxRequestBase::Cancel(Request);
        FxCREvent::EnterCRAndWaitAndLeave(&params.SynchEvent);
      }
    }
    status = params.Status;
  }
  else
  {
    status = Request->m_Irp.m_Irp->IoStatus.Status;
  }
  Request->Release(Request, &status, 1865, "minkernel\\wdf\\framework\\shared\\targets\\general\\fxiotarget.cpp");
  if ( v42 )
    *v42 = v15;
  if ( v9 )
  {
    m_RequestContext = Request->m_RequestContext;
    if ( m_RequestContext )
    {
      if ( Request->m_Irp.m_Irp )
      {
        m_RequestContext->ReleaseAndRestore(m_RequestContext, Request);
        v20 = Request->m_Globals;
        if ( v20->FxVerifierOn )
        {
          if ( v20->FxVerifierIO )
            FxRequestBase::ClearVerifierFlags(Request, 128);
        }
      }
    }
  }
  return (unsigned int)status;
}
