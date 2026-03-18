/*
 * XREFs of ?CompleteSubmitted@FxRequestBase@@QEAAXXZ @ 0x140037090
 * Callers:
 *     ?CompleteCanceledRequest@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z @ 0x1400070F4 (-CompleteCanceledRequest@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z.c)
 *     ?RequestCompletionRoutine@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z @ 0x1400366C0 (-RequestCompletionRoutine@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z.c)
 *     ?_RequestCompletionRoutine@FxIoTarget@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x140036B90 (-_RequestCompletionRoutine@FxIoTarget@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?TimerCallback@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z @ 0x14007A0CC (-TimerCallback@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z.c)
 *     ?HandleFailedResubmit@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z @ 0x14009B7E0 (-HandleFailedResubmit@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z.c)
 * Callees:
 *     ?VerifierClearFormatted@FxRequestBase@@QEAAXXZ @ 0x140060058 (-VerifierClearFormatted@FxRequestBase@@QEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 *     memset @ 0x1400AC800 (memset.c)
 */

void __fastcall FxRequestBase::CompleteSubmitted(FxRequestBase *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  FxIoTarget *m_Target; // rdi
  FxRequestContext *m_RequestContext; // rcx
  void (__fastcall *m_Completion)(WDFREQUEST__ *, WDFIOTARGET__ *, _WDF_REQUEST_COMPLETION_PARAMS *, void *); // rsi
  FxRequestContext *v6; // r8
  void *m_TargetCompletionContext; // r9
  unsigned __int64 v8; // rdx
  _WDF_REQUEST_COMPLETION_PARAMS *p_m_CompletionParams; // r8
  unsigned __int64 v10; // rcx
  _IRP *v11; // rax
  FxIoTarget *v12; // r10
  _IO_STATUS_BLOCK IoStatus; // xmm0
  unsigned __int64 v14; // r10
  _IRP *m_Irp; // rax
  _QWORD v16[11]; // [rsp+30h] [rbp-58h] BYREF

  m_Globals = this->m_Globals;
  m_Target = this->m_Target;
  if ( m_Globals->FxTrackDriverForMiniDumpLog )
    *(_QWORD *)((unsigned int)(unk_1400C8080 * HIDWORD(KeGetPcr()[1].LockArray)) + unk_1400C8070) = m_Globals;
  if ( this->m_Globals->FxVerifierOn )
  {
    m_Irp = this->m_Irp.m_Irp;
    m_Irp->Tail.Overlay.DeviceQueueEntry.DeviceListEntry = 0LL;
    *((_OWORD *)&m_Irp->Tail.CompletionKey + 1) = 0LL;
    FxRequestBase::VerifierClearFormatted(this);
  }
  m_RequestContext = this->m_RequestContext;
  if ( m_RequestContext )
  {
    m_RequestContext->m_CompletionParams.IoStatus = this->m_Irp.m_Irp->IoStatus;
    this->m_RequestContext->CopyParameters(this->m_RequestContext, this);
    m_Completion = this->m_CompletionRoutine.m_Completion;
    if ( !m_Completion )
      goto LABEL_12;
    v6 = this->m_RequestContext;
    m_TargetCompletionContext = this->m_TargetCompletionContext;
    v8 = (unsigned __int64)m_Target ^ 0xFFFFFFFFFFFFFFF8uLL;
    this->m_CompletionRoutine.m_Completion = 0LL;
    p_m_CompletionParams = &v6->m_CompletionParams;
    this->m_TargetCompletionContext = 0LL;
    if ( !m_Target->m_ObjectSize )
      v8 = 0LL;
  }
  else
  {
    m_Completion = this->m_CompletionRoutine.m_Completion;
    if ( !m_Completion )
      goto LABEL_12;
    memset(v16, 0, 0x48uLL);
    v11 = this->m_Irp.m_Irp;
    p_m_CompletionParams = (_WDF_REQUEST_COMPLETION_PARAMS *)v16;
    v12 = this->m_Target;
    m_TargetCompletionContext = this->m_TargetCompletionContext;
    HIDWORD(v16[0]) = 255;
    IoStatus = v11->IoStatus;
    this->m_CompletionRoutine.m_Completion = 0LL;
    *(_OWORD *)&v16[3] = 0LL;
    this->m_TargetCompletionContext = 0LL;
    *(_IO_STATUS_BLOCK *)&v16[1] = IoStatus;
    memset(&v16[5], 0, 32);
    LOWORD(v11) = v12->m_ObjectSize;
    v14 = (unsigned __int64)v12 ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !(_WORD)v11 )
      v14 = 0LL;
    v8 = v14;
  }
  v10 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
  if ( !this->m_ObjectSize )
    v10 = 0LL;
  m_Completion((WDFREQUEST__ *)v10, (WDFIOTARGET__ *)v8, p_m_CompletionParams, m_TargetCompletionContext);
LABEL_12:
  this->Release(this, m_Target, 530, "minkernel\\wdf\\framework\\shared\\core\\fxrequestbase.cpp");
}
