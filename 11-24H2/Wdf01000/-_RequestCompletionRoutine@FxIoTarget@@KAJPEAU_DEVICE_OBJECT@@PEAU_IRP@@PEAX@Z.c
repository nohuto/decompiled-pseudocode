/*
 * XREFs of ?_RequestCompletionRoutine@FxIoTarget@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x140036B90
 * Callers:
 *     <none>
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

__int64 __fastcall FxIoTarget::_RequestCompletionRoutine(
        _DEVICE_OBJECT *DeviceObject,
        _IRP *Irp,
        FxRequestBase *Context)
{
  FxIoTarget *m_Target; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  char v6; // bp
  unsigned __int8 v7; // r8
  const void *v8; // r15
  unsigned __int8 v9; // al
  char v10; // r14
  _FX_DRIVER_GLOBALS *v11; // rcx
  _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY *v13; // rax
  _IRP *v14; // rcx
  unsigned __int8 m_TargetFlags; // bp
  _FX_DRIVER_GLOBALS *v16; // rax
  _FX_DRIVER_GLOBALS *v17; // rcx
  FxRequestBase *_a1; // rax
  unsigned __int8 v20; // al
  _FX_DRIVER_GLOBALS *v21; // rcx
  unsigned __int8 FxVerboseOn; // dl
  FxVerifierLock *m_TargetDevice; // rcx
  FxVerifierLock *v24; // rcx
  _FX_DRIVER_GLOBALS *v25; // r10
  FxRequestBase *v26; // rax
  _IRP *m_Irp; // rax
  FxRequestBase *_a2; // rax
  const void *v29; // rdx
  unsigned __int8 v30; // dl
  unsigned __int8 v31; // r8
  FxIoTarget_vtbl *v32; // rax
  FxRequestBase *v33; // rax
  unsigned __int8 PreviousIrql; // [rsp+88h] [rbp+10h] BYREF
  unsigned __int8 v35; // [rsp+90h] [rbp+18h] BYREF

  m_Target = Context->m_Target;
  if ( Context->m_CompletionRoutine.m_Completion != FxIoTarget::_SyncCompletionRoutine
    && Irp->PendingReturned
    && Irp->CurrentLocation <= Irp->StackCount )
  {
    Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  }
  PreviousIrql = 0;
  m_Globals = m_Target->m_Globals;
  if ( m_Globals->FxVerboseOn )
  {
    if ( !Context->m_ObjectSize || (v26 = (FxRequestBase *)((unsigned __int64)Context ^ 0xFFFFFFFFFFFFFFF8uLL)) == 0LL )
      v26 = Context;
    WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0x31u, WPP_FxIoTarget_cpp_Traceguids, v26);
  }
  v6 = 0;
  if ( SLOBYTE(m_Target->m_ObjectFlags) < 0 && (m_TargetDevice = (FxVerifierLock *)m_Target[-1].m_TargetDevice) != 0LL )
    FxVerifierLock::Lock(m_TargetDevice, &PreviousIrql, (unsigned __int8)Context);
  else
    PreviousIrql = KeAcquireSpinLockRaiseToDpc(&m_Target->m_NPLock.m_Lock);
  v8 = 0LL;
  v9 = Context->m_TargetFlags | 1;
  Context->m_TargetFlags = v9;
  if ( (v9 & 4) != 0 )
  {
    v20 = MxTimer::Stop(&Context->m_Timer->Timer);
    v21 = Context->m_Globals;
    FxVerboseOn = v21->FxVerboseOn;
    if ( !v20 )
    {
      if ( FxVerboseOn )
        WPP_IFR_SF_q(v21, 5u, 0xDu, 0x14u, WPP_FxRequestBase_cpp_Traceguids, Context);
      goto LABEL_28;
    }
    if ( FxVerboseOn )
      WPP_IFR_SF_q(v21, 5u, 0xDu, 0x15u, WPP_FxRequestBase_cpp_Traceguids, Context);
    Context->m_TargetFlags &= ~4u;
  }
  if ( _InterlockedExchangeAdd(&Context->m_IrpCompletionReferenceCount, 0xFFFFFFFF) != 1 )
  {
LABEL_28:
    if ( !Context->m_ObjectSize || (_a1 = (FxRequestBase *)((unsigned __int64)Context ^ 0xFFFFFFFFFFFFFFF8uLL)) == 0LL )
      _a1 = Context;
    WPP_IFR_SF_q(m_Target->m_Globals, 4u, 0xEu, 0x32u, WPP_FxIoTarget_cpp_Traceguids, _a1);
    v10 = 0;
    goto LABEL_18;
  }
  v10 = 1;
  if ( (Context->m_TargetFlags & 8) != 0 )
  {
    m_Irp = Context->m_Irp.m_Irp;
    if ( m_Irp->IoStatus.Status == -1073741536 )
      m_Irp->IoStatus.Status = -1073741643;
  }
  v11 = m_Target->m_Globals;
  if ( v11->FxVerboseOn )
  {
    if ( !Context->m_ObjectSize || (_a2 = (FxRequestBase *)((unsigned __int64)Context ^ 0xFFFFFFFFFFFFFFF8uLL)) == 0LL )
      _a2 = Context;
    if ( m_Target->m_ObjectSize )
      v29 = (const void *)((unsigned __int64)m_Target ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v29 = 0LL;
    WPP_IFR_SF_qq(v11, 5u, 0xEu, 0x28u, WPP_FxIoTarget_cpp_Traceguids, v29, _a2);
  }
  Flink = Context->m_ListEntry.Flink;
  v13 = (_LIST_ENTRY *)&Context->120;
  if ( ($D26A3A2066A8AC2BFBF5167DE33ED1ED *)Flink->Blink != &Context->120
    || (v14 = Context->m_CsqContext.Irp, *(_LIST_ENTRY **)&v14->Type != v13) )
  {
    __fastfail(3u);
  }
  *(_QWORD *)&v14->Type = Flink;
  Flink->Blink = (_LIST_ENTRY *)v14;
  Context->m_CsqContext.Irp = (_IRP *)&Context->120;
  v13->Flink = v13;
  m_TargetFlags = Context->m_TargetFlags;
  Context->m_TargetFlags = m_TargetFlags & 0xE2;
  v16 = m_Target->m_Globals;
  if ( v16->FxVerifierOn && v16->FxVerifierIO )
  {
    v35 = 0;
    FxNonPagedObject::Lock(Context, &v35, v7);
    v30 = v35;
    Context->m_VerifierFlags &= ~0x100u;
    FxNonPagedObject::Unlock(Context, v30, v31);
  }
  if ( m_Target->m_Removing )
  {
    if ( m_Target->m_SentIoListHead.Flink == &m_Target->m_SentIoListHead
      && m_Target->m_IgnoredIoListHead.Flink == &m_Target->m_IgnoredIoListHead )
    {
      v32 = m_Target->__vftable;
      m_Target->m_Removing = 0;
      v32->ClearTargetPointers(m_Target);
      v6 = 1;
      goto LABEL_18;
    }
  }
  else if ( m_Target->m_WaitingForSentIo
         && (m_TargetFlags & 0x10) == 0
         && m_Target->m_SentIoListHead.Flink == &m_Target->m_SentIoListHead )
  {
    m_Target->m_WaitingForSentIo = 0;
    v6 = 1;
    goto LABEL_18;
  }
  v6 = 0;
LABEL_18:
  if ( SLOBYTE(m_Target->m_ObjectFlags) < 0 && (v24 = (FxVerifierLock *)m_Target[-1].m_TargetDevice) != 0LL )
    FxVerifierLock::Unlock(v24, PreviousIrql, v7);
  else
    KeReleaseSpinLock(&m_Target->m_NPLock.m_Lock, PreviousIrql);
  if ( v10 )
  {
    v17 = m_Target->m_Globals;
    if ( v17->FxVerboseOn )
    {
      if ( !Context->m_ObjectSize || (v33 = (FxRequestBase *)((unsigned __int64)Context ^ 0xFFFFFFFFFFFFFFF8uLL)) == 0LL )
        v33 = Context;
      WPP_IFR_SF_q(v17, 5u, 0xEu, 0x33u, WPP_FxIoTarget_cpp_Traceguids, v33);
    }
    FxRequestBase::CompleteSubmitted(Context);
  }
  if ( v6 )
  {
    v25 = m_Target->m_Globals;
    if ( v25->FxVerboseOn )
    {
      if ( m_Target->m_ObjectSize )
        v8 = (const void *)((unsigned __int64)m_Target ^ 0xFFFFFFFFFFFFFFF8uLL);
      WPP_IFR_SF_qq(v25, 5u, 0xEu, 0x34u, WPP_FxIoTarget_cpp_Traceguids, v8, &m_Target->m_SentIoEvent);
    }
    KeSetEvent(&m_Target->m_SentIoEvent.m_Event.m_Event, 0, 0);
  }
  if ( v10 && _InterlockedExchangeAdd(&m_Target->m_IoCount, 0xFFFFFFFF) == 1 )
  {
    FxIoTarget::PrintDisposeMessage(m_Target);
    KeSetEvent(&m_Target->m_DisposeEvent->m_Event.m_Event, 0, 0);
  }
  return 3221225494LL;
}
