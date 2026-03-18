/*
 * XREFs of ?TimerCallback@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z @ 0x14007A4FC
 * Callers:
 *     ?_TimerDPC@FxRequestBase@@KAXPEAU_KDPC@@PEAX11@Z @ 0x14007A4E0 (-_TimerDPC@FxRequestBase@@KAXPEAU_KDPC@@PEAX11@Z.c)
 * Callees:
 *     ?Cancel@FxRequestBase@@QEAAEXZ @ 0x140004DDC (-Cancel@FxRequestBase@@QEAAEXZ.c)
 *     ?DecrementIoCount@FxIoTarget@@IEAAXXZ @ 0x1400051EC (-DecrementIoCount@FxIoTarget@@IEAAXXZ.c)
 *     ?RemoveCompletedRequestLocked@FxIoTarget@@IEAAEPEAVFxRequestBase@@@Z @ 0x140005240 (-RemoveCompletedRequestLocked@FxIoTarget@@IEAAEPEAVFxRequestBase@@@Z.c)
 *     WPP_IFR_SF_qq @ 0x140011A74 (WPP_IFR_SF_qq.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1400135F0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?CompleteSubmitted@FxRequestBase@@QEAAXXZ @ 0x14001F870 (-CompleteSubmitted@FxRequestBase@@QEAAXXZ.c)
 *     WPP_IFR_SF_q @ 0x14001FA38 (WPP_IFR_SF_q.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x140022CC8 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 */

void __fastcall FxIoTarget::TimerCallback(FxIoTarget *this, FxRequestBase *Request, unsigned __int8 a3)
{
  unsigned __int8 v4; // bp
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  unsigned __int64 v7; // rcx
  FxRequestBase *_a2; // r8
  const void *_a1; // rdx
  _DEVICE_OBJECT *m_TargetDevice; // rcx
  unsigned __int8 v11; // r8
  char v12; // si
  unsigned __int8 v13; // al
  _FX_DRIVER_GLOBALS *v14; // rcx
  unsigned __int64 v15; // r8
  FxRequestBase *v16; // rax
  const void *v17; // rdx
  signed __int32 m_IrpCompletionReferenceCount; // eax
  signed __int32 v19; // edx
  unsigned __int8 v20; // r8
  _DEVICE_OBJECT *v21; // rcx
  unsigned __int8 v22; // al
  _IRP *m_Irp; // rcx
  unsigned __int8 irql; // [rsp+70h] [rbp+8h] BYREF

  irql = 0;
  v4 = 0;
  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
  {
    v7 = (unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL;
    _a2 = Request;
    if ( !Request->m_ObjectSize )
      v7 = 0LL;
    if ( v7 )
      _a2 = (FxRequestBase *)v7;
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qq(m_Globals, 5u, 0xEu, 0x29u, WPP_FxIoTarget_cpp_Traceguids, _a1, _a2);
  }
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && (m_TargetDevice = this[-1].m_TargetDevice) != 0LL )
    FxVerifierLock::Lock((FxVerifierLock *)m_TargetDevice, &irql, a3);
  else
    irql = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
  v12 = 1;
  v13 = Request->m_TargetFlags & 0xFB;
  Request->m_TargetFlags = v13;
  if ( (v13 & 1) == 0 )
  {
    Request->m_TargetFlags = v13 | 8;
    m_IrpCompletionReferenceCount = Request->m_IrpCompletionReferenceCount;
    do
    {
      if ( m_IrpCompletionReferenceCount <= 0 )
        break;
      v19 = m_IrpCompletionReferenceCount;
      m_IrpCompletionReferenceCount = _InterlockedCompareExchange(
                                        &Request->m_IrpCompletionReferenceCount,
                                        m_IrpCompletionReferenceCount + 1,
                                        m_IrpCompletionReferenceCount);
    }
    while ( v19 != m_IrpCompletionReferenceCount );
    FxNonPagedObject::Unlock(this, irql, v11);
    FxRequestBase::Cancel(Request);
    if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v21 = this[-1].m_TargetDevice) != 0LL )
      FxVerifierLock::Lock((FxVerifierLock *)v21, &irql, v20);
    else
      irql = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
  }
  if ( _InterlockedExchangeAdd(&Request->m_IrpCompletionReferenceCount, 0xFFFFFFFF) == 1 )
  {
    v22 = FxIoTarget::RemoveCompletedRequestLocked(this, Request);
    m_Irp = Request->m_Irp.m_Irp;
    v4 = v22;
    if ( m_Irp->IoStatus.Status == -1073741536 )
      m_Irp->IoStatus.Status = -1073741643;
  }
  else
  {
    v12 = 0;
  }
  FxNonPagedObject::Unlock(this, irql, v11);
  if ( v12 )
  {
    v14 = this->m_Globals;
    if ( v14->FxVerboseOn )
    {
      v15 = (unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL;
      v16 = Request;
      if ( !Request->m_ObjectSize )
        v15 = 0LL;
      if ( v15 )
        v16 = (FxRequestBase *)v15;
      WPP_IFR_SF_q(v14, 5u, 0xEu, 0x2Au, WPP_FxIoTarget_cpp_Traceguids, v16);
    }
    FxRequestBase::CompleteSubmitted(Request);
  }
  if ( v4 )
  {
    v17 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v17 = 0LL;
    WPP_IFR_SF_qq(this->m_Globals, 4u, 0xEu, 0x2Bu, WPP_FxIoTarget_cpp_Traceguids, v17, &this->m_SentIoEvent);
    KeSetEvent(&this->m_SentIoEvent.m_Event.m_Event, 0, 0);
  }
  if ( v12 )
    FxIoTarget::DecrementIoCount(this);
}
