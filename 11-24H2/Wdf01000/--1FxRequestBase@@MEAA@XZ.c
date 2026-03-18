/*
 * XREFs of ??1FxRequestBase@@MEAA@XZ @ 0x14000BC50
 * Callers:
 *     imp_WdfUsbTargetDeviceSendControlTransferSynchronously @ 0x140009550 (imp_WdfUsbTargetDeviceSendControlTransferSynchronously.c)
 *     ??1FxSyncRequest@@UEAA@XZ @ 0x14000B9C0 (--1FxSyncRequest@@UEAA@XZ.c)
 *     ?SelfDestruct@FxRequestFromLookaside@@MEAAXXZ @ 0x14000BB10 (-SelfDestruct@FxRequestFromLookaside@@MEAAXXZ.c)
 *     FxIoTargetSendIo @ 0x14000BF50 (FxIoTargetSendIo.c)
 *     ??_GFxRequest@@UEAAPEAXI@Z @ 0x14000D440 (--_GFxRequest@@UEAAPEAXI@Z.c)
 *     ??_EFxRequestFromLookaside@@UEAAPEAXI@Z @ 0x140094580 (--_EFxRequestFromLookaside@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x14000EC70 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1MxTimer@@QEAA@XZ @ 0x1400232B8 (--1MxTimer@@QEAA@XZ.c)
 *     WPP_IFR_SF_qqLL @ 0x1400251E0 (WPP_IFR_SF_qqLL.c)
 *     ??1FxTagTracker@@QEAA@XZ @ 0x140082404 (--1FxTagTracker@@QEAA@XZ.c)
 *     ?FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z @ 0x140082ED4 (-FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1400830A8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ??1FxVerifierLock@@QEAA@XZ @ 0x140083B50 (--1FxVerifierLock@@QEAA@XZ.c)
 *     WPP_IFR_SF_sqq @ 0x140097250 (WPP_IFR_SF_sqq.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

void __fastcall FxRequestBase::~FxRequestBase(FxRequestBase *this)
{
  _MDL *m_AllocatedMdl; // rcx
  FxRequestContext *m_RequestContext; // rcx
  _IRP *m_Irp; // rdi
  FxRequestTimer *m_Timer; // rdi
  unsigned int m_Type; // r8d
  unsigned int i; // edx
  __int64 v8; // rcx
  FxRequestContext *v9; // rcx
  void *m_TargetCompletionContext; // rdi
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  const void *_a2; // rdx
  void *v13; // rdi
  const char *HandleName; // rcx
  unsigned __int64 v15; // rdi
  const void *v16; // rax
  const _GUID *traceGuid; // [rsp+20h] [rbp-38h]

  this->__vftable = (FxRequestBase_vtbl *)FxRequestBase::`vftable';
  m_AllocatedMdl = this->m_AllocatedMdl;
  if ( m_AllocatedMdl )
  {
    if ( this->m_Globals->FxVerifierOn )
      FxMdlFreeDebug(this->m_Globals, m_AllocatedMdl);
    else
      IoFreeMdl(m_AllocatedMdl);
  }
  m_RequestContext = this->m_RequestContext;
  m_Irp = this->m_Irp.m_Irp;
  if ( m_RequestContext )
  {
    if ( m_Irp )
      m_RequestContext->ReleaseAndRestore(m_RequestContext, this);
    v9 = this->m_RequestContext;
    if ( v9 )
      ((void (__fastcall *)(FxRequestContext *, __int64))v9->~FxRequestContext)(v9, 1LL);
  }
  if ( m_Irp && this->m_IrpAllocation == 1 )
    IoFreeIrp(this->m_Irp.m_Irp);
  m_Timer = this->m_Timer;
  if ( m_Timer )
  {
    MxTimer::~MxTimer(&this->m_Timer->Timer);
    FxPoolFree(m_Timer);
  }
  this->__vftable = (FxRequestBase_vtbl *)FxNonPagedObject::`vftable';
  if ( SLOBYTE(this->m_ObjectFlags) < 0 )
  {
    v13 = *(void **)&this[-1].m_IrpCompletionReferenceCount;
    if ( v13 )
    {
      FxVerifierLock::~FxVerifierLock(*(FxVerifierLock **)&this[-1].m_IrpCompletionReferenceCount);
      FxPoolFree(v13);
      *(_QWORD *)&this[-1].m_IrpCompletionReferenceCount = 0LL;
    }
  }
  this->m_NPLock.m_DbgFlagIsInitialized = 0;
  this->__vftable = (FxRequestBase_vtbl *)FxObject::`vftable';
  if ( SLOBYTE(this->m_ObjectFlags) < 0 )
  {
    m_TargetCompletionContext = this[-1].m_TargetCompletionContext;
    if ( m_TargetCompletionContext )
    {
      FxTagTracker::~FxTagTracker((FxTagTracker *)this[-1].m_TargetCompletionContext);
      FxPoolFree(m_TargetCompletionContext);
    }
  }
  if ( this->m_ParentObject
    || this->m_ChildListHead.Flink != &this->m_ChildListHead
    || this->m_ChildEntry.Flink != &this->m_ChildEntry )
  {
    m_Type = this->m_Type;
    for ( i = 0; ; ++i )
    {
      if ( i >= FxObjectsInfoCount )
        goto LABEL_38;
      v8 = i;
      if ( (_WORD)m_Type == FxObjectsInfo[v8].ObjectType )
        break;
      if ( (unsigned __int16)m_Type <= FxObjectsInfo[v8].ObjectType )
        goto LABEL_38;
    }
    HandleName = FxObjectsInfo[v8].HandleName;
    if ( !HandleName )
LABEL_38:
      HandleName = "WDFOBJECT";
    v15 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
    v16 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v16 = 0LL;
    WPP_IFR_SF_sqq(this->m_Globals, i, m_Type, (unsigned __int16)FxObjectsInfo, traceGuid, HandleName, v16, this);
    if ( !this->m_ObjectSize )
      v15 = 0LL;
    FxVerifierBugCheckWorker(this->m_Globals, WDF_OBJECT_ERROR, v15, (unsigned __int64)this);
  }
  if ( _bittest16((const signed __int16 *)&this->24, 9u) )
  {
    m_Globals = this->m_Globals;
    if ( m_Globals->FxVerboseOn )
    {
      _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        _a2 = 0LL;
      WPP_IFR_SF_qqLL(m_Globals, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, this, _a2, this->m_ObjectState, 0xCu);
    }
    if ( SLOBYTE(this->m_ObjectFlags) < 0 )
      *((_BYTE *)this + _InterlockedIncrement((volatile signed __int32 *)&this[-1].m_IrpQueue) - 32) = 12;
  }
  this->m_SpinLock.m_DbgFlagIsInitialized = 0;
  this->m_ObjectState = 12;
}
