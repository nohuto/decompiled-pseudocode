/*
 * XREFs of ?CancelSentIo@FxIoTarget@@QEAAXXZ @ 0x140071AB8
 * Callers:
 *     ?Reset@FxUsbPipe@@QEAAJXZ @ 0x1400040A0 (-Reset@FxUsbPipe@@QEAAJXZ.c)
 *     imp_WdfUsbTargetPipeResetSynchronously @ 0x1400717F0 (imp_WdfUsbTargetPipeResetSynchronously.c)
 *     ?CancelSentIo@FxUsbDevice@@QEAAXXZ @ 0x14009E8FC (-CancelSentIo@FxUsbDevice@@QEAAXXZ.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1400135F0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     WPP_IFR_SF_q @ 0x14001FA38 (WPP_IFR_SF_q.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x140022CC8 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1400446E0 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?_CancelSentRequests@FxIoTarget@@KAXPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1400663A0 (-_CancelSentRequests@FxIoTarget@@KAXPEAU_SINGLE_LIST_ENTRY@@@Z.c)
 */

void __fastcall FxIoTarget::CancelSentIo(FxIoTarget *this, __int64 a2, unsigned __int8 a3)
{
  char m_ObjectFlags; // al
  _FX_DRIVER_GLOBALS *m_Globals; // r12
  _LIST_ENTRY *v5; // rbx
  unsigned __int8 v7; // r8
  unsigned __int8 v8; // r15
  _LIST_ENTRY *p_m_SentIoListHead; // r14
  _LIST_ENTRY *Blink; // rbp
  _LIST_ENTRY *Flink; // r13
  unsigned __int16 m_ObjectSize; // ax
  const void *_a1; // rsi
  _DEVICE_OBJECT *m_TargetDevice; // rcx
  _SINGLE_LIST_ENTRY *p_Blink; // rax
  unsigned __int8 irql; // [rsp+70h] [rbp+8h] BYREF
  _SINGLE_LIST_ENTRY sentRequestListHead; // [rsp+78h] [rbp+10h] BYREF

  m_ObjectFlags = this->m_ObjectFlags;
  m_Globals = this->m_Globals;
  v5 = 0LL;
  sentRequestListHead.Next = 0LL;
  irql = 0;
  if ( m_ObjectFlags < 0 && (m_TargetDevice = this[-1].m_TargetDevice) != 0LL )
  {
    FxVerifierLock::Lock((FxVerifierLock *)m_TargetDevice, &irql, a3);
    v8 = irql;
  }
  else
  {
    v8 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
  }
  p_m_SentIoListHead = &this->m_SentIoListHead;
  Blink = this->m_SentIoListHead.Blink;
  Flink = this->m_SentIoListHead.Flink;
  if ( Blink != &this->m_SentIoListHead )
  {
    do
    {
      FxObject::AddRef(
        (FxObject *)&Blink[-8].Blink,
        (void *)0x6C636E43,
        608,
        "minkernel\\wdf\\framework\\shared\\targets\\general\\fxiotarget.cpp");
      p_Blink = (_SINGLE_LIST_ENTRY *)&Blink[1].Blink;
      Blink[1].Blink = v5;
      v5 = (_LIST_ENTRY *)((char *)Blink + 24);
      Blink = Blink->Blink;
    }
    while ( Blink != p_m_SentIoListHead );
    sentRequestListHead.Next = p_Blink;
  }
  FxNonPagedObject::Unlock(this, v8, v7);
  m_ObjectSize = this->m_ObjectSize;
  _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !m_ObjectSize )
    _a1 = 0LL;
  WPP_IFR_SF_q(m_Globals, 4u, 0xEu, 0x38u, WPP_FxIoTarget_cpp_Traceguids, _a1);
  if ( Flink != p_m_SentIoListHead )
    FxIoTarget::_CancelSentRequests(&sentRequestListHead);
}
