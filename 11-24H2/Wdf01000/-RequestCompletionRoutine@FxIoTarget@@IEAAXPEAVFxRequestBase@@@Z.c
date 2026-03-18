/*
 * XREFs of ?RequestCompletionRoutine@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z @ 0x1400366C0
 * Callers:
 *     ?FailPendedRequest@FxIoTarget@@IEAAXPEAVFxRequestBase@@J@Z @ 0x14009B7B4 (-FailPendedRequest@FxIoTarget@@IEAAXPEAVFxRequestBase@@J@Z.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x14002A1A4 (WPP_IFR_SF_qq.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x14002BD60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14002BDA8 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14002C4B0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x14002C4F0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?CompleteSubmitted@FxRequestBase@@QEAAXXZ @ 0x140037090 (-CompleteSubmitted@FxRequestBase@@QEAAXXZ.c)
 *     WPP_IFR_SF_q @ 0x140037258 (WPP_IFR_SF_q.c)
 *     ?Stop@MxTimer@@QEAAEXZ @ 0x140037354 (-Stop@MxTimer@@QEAAEXZ.c)
 *     ?PrintDisposeMessage@FxIoTarget@@IEAAXXZ @ 0x14009B964 (-PrintDisposeMessage@FxIoTarget@@IEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

void __fastcall FxIoTarget::RequestCompletionRoutine(FxIoTarget *this, FxRequestBase *Request, unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  char v6; // r14
  unsigned __int8 v7; // r8
  unsigned __int8 v8; // al
  char v9; // bp
  _LIST_ENTRY *Flink; // rdx
  $D26A3A2066A8AC2BFBF5167DE33ED1ED *v11; // rax
  _IRP *Irp; // rcx
  unsigned __int8 m_TargetFlags; // r14
  _FX_DRIVER_GLOBALS *v14; // rax
  _FX_DRIVER_GLOBALS *v15; // rcx
  unsigned __int64 v16; // rcx
  FxRequestBase *v17; // rax
  unsigned __int8 v18; // al
  _FX_DRIVER_GLOBALS *v19; // rcx
  unsigned __int8 FxVerboseOn; // dl
  _DEVICE_OBJECT *m_TargetDevice; // rcx
  _DEVICE_OBJECT *v22; // rcx
  _FX_DRIVER_GLOBALS *v23; // rcx
  unsigned __int64 v24; // rdx
  FxRequestBase *v25; // rax
  _IRP *m_Irp; // rax
  unsigned __int64 v27; // rcx
  FxRequestBase *_a2; // r8
  const void *v29; // rdx
  unsigned __int8 v30; // dl
  unsigned __int8 v31; // r8
  FxIoTarget_vtbl *v32; // rax
  unsigned __int64 v33; // rdx
  FxRequestBase *v34; // rax
  const void *v35; // rdx
  unsigned __int8 irql; // [rsp+80h] [rbp+8h] BYREF
  unsigned __int8 PreviousIrql; // [rsp+88h] [rbp+10h] BYREF

  irql = 0;
  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
  {
    v24 = (unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL;
    v25 = Request;
    if ( !Request->m_ObjectSize )
      v24 = 0LL;
    if ( v24 )
      v25 = (FxRequestBase *)v24;
    WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0x31u, WPP_FxIoTarget_cpp_Traceguids, v25);
  }
  v6 = 0;
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && (m_TargetDevice = this[-1].m_TargetDevice) != 0LL )
    FxVerifierLock::Lock((FxVerifierLock *)m_TargetDevice, &irql, a3);
  else
    irql = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
  v8 = Request->m_TargetFlags | 1;
  Request->m_TargetFlags = v8;
  if ( (v8 & 4) != 0 )
  {
    v18 = MxTimer::Stop(&Request->m_Timer->Timer);
    v19 = Request->m_Globals;
    FxVerboseOn = v19->FxVerboseOn;
    if ( !v18 )
    {
      if ( FxVerboseOn )
        WPP_IFR_SF_q(v19, 5u, 0xDu, 0x14u, WPP_FxRequestBase_cpp_Traceguids, Request);
      goto LABEL_26;
    }
    if ( FxVerboseOn )
      WPP_IFR_SF_q(v19, 5u, 0xDu, 0x15u, WPP_FxRequestBase_cpp_Traceguids, Request);
    Request->m_TargetFlags &= ~4u;
  }
  if ( _InterlockedExchangeAdd(&Request->m_IrpCompletionReferenceCount, 0xFFFFFFFF) != 1 )
  {
LABEL_26:
    v16 = (unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL;
    v17 = Request;
    if ( !Request->m_ObjectSize )
      v16 = 0LL;
    if ( v16 )
      v17 = (FxRequestBase *)v16;
    WPP_IFR_SF_q(this->m_Globals, 4u, 0xEu, 0x32u, WPP_FxIoTarget_cpp_Traceguids, v17);
    v9 = 0;
    goto LABEL_14;
  }
  v9 = 1;
  if ( (Request->m_TargetFlags & 8) != 0 )
  {
    m_Irp = Request->m_Irp.m_Irp;
    if ( m_Irp->IoStatus.Status == -1073741536 )
      m_Irp->IoStatus.Status = -1073741643;
  }
  if ( this->m_Globals->FxVerboseOn )
  {
    v27 = (unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL;
    _a2 = Request;
    if ( !Request->m_ObjectSize )
      v27 = 0LL;
    if ( v27 )
      _a2 = (FxRequestBase *)v27;
    v29 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v29 = 0LL;
    WPP_IFR_SF_qq(this->m_Globals, 5u, 0xEu, 0x28u, WPP_FxIoTarget_cpp_Traceguids, v29, _a2);
  }
  Flink = Request->m_ListEntry.Flink;
  v11 = &Request->120;
  if ( ($D26A3A2066A8AC2BFBF5167DE33ED1ED *)Flink->Blink != &Request->120
    || (Irp = Request->m_CsqContext.Irp, *($D26A3A2066A8AC2BFBF5167DE33ED1ED **)&Irp->Type != v11) )
  {
    __fastfail(3u);
  }
  *(_QWORD *)&Irp->Type = Flink;
  Flink->Blink = (_LIST_ENTRY *)Irp;
  Request->m_CsqContext.Irp = (_IRP *)&Request->120;
  v11->m_ListEntry.Flink = (_LIST_ENTRY *)v11;
  m_TargetFlags = Request->m_TargetFlags;
  Request->m_TargetFlags = m_TargetFlags & 0xE2;
  v14 = this->m_Globals;
  if ( v14->FxVerifierOn && v14->FxVerifierIO )
  {
    PreviousIrql = 0;
    FxNonPagedObject::Lock(Request, &PreviousIrql, v7);
    v30 = PreviousIrql;
    Request->m_VerifierFlags &= ~0x100u;
    FxNonPagedObject::Unlock(Request, v30, v31);
  }
  if ( this->m_Removing )
  {
    if ( this->m_SentIoListHead.Flink == &this->m_SentIoListHead
      && this->m_IgnoredIoListHead.Flink == &this->m_IgnoredIoListHead )
    {
      v32 = this->__vftable;
      this->m_Removing = 0;
      v32->ClearTargetPointers(this);
      v6 = 1;
      goto LABEL_14;
    }
  }
  else if ( this->m_WaitingForSentIo
         && (m_TargetFlags & 0x10) == 0
         && this->m_SentIoListHead.Flink == &this->m_SentIoListHead )
  {
    this->m_WaitingForSentIo = 0;
    v6 = 1;
    goto LABEL_14;
  }
  v6 = 0;
LABEL_14:
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v22 = this[-1].m_TargetDevice) != 0LL )
    FxVerifierLock::Unlock((FxVerifierLock *)v22, irql, v7);
  else
    KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
  if ( v9 )
  {
    v15 = this->m_Globals;
    if ( v15->FxVerboseOn )
    {
      v33 = (unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL;
      v34 = Request;
      if ( !Request->m_ObjectSize )
        v33 = 0LL;
      if ( v33 )
        v34 = (FxRequestBase *)v33;
      WPP_IFR_SF_q(v15, 5u, 0xEu, 0x33u, WPP_FxIoTarget_cpp_Traceguids, v34);
    }
    FxRequestBase::CompleteSubmitted(Request);
  }
  if ( v6 )
  {
    v23 = this->m_Globals;
    if ( v23->FxVerboseOn )
    {
      v35 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        v35 = 0LL;
      WPP_IFR_SF_qq(v23, 5u, 0xEu, 0x34u, WPP_FxIoTarget_cpp_Traceguids, v35, &this->m_SentIoEvent);
    }
    KeSetEvent(&this->m_SentIoEvent.m_Event.m_Event, 0, 0);
  }
  if ( v9 )
  {
    if ( _InterlockedExchangeAdd(&this->m_IoCount, 0xFFFFFFFF) == 1 )
    {
      FxIoTarget::PrintDisposeMessage(this);
      KeSetEvent(&this->m_DisposeEvent->m_Event.m_Event, 0, 0);
    }
  }
}
