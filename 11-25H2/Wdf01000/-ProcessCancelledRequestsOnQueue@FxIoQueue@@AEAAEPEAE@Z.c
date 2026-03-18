/*
 * XREFs of ?ProcessCancelledRequestsOnQueue@FxIoQueue@@AEAAEPEAE@Z @ 0x14004B2B8
 * Callers:
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x14000E050 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x140011A74 (WPP_IFR_SF_qq.c)
 *     ?IsPowerStateNotifyingDriver@FxIoQueue@@AEAAEXZ @ 0x140012FC0 (-IsPowerStateNotifyingDriver@FxIoQueue@@AEAAEXZ.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1400135F0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x140022C80 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Invoke@FxIoQueueIoCanceledOnQueue@@QEAAXPEAUWDFQUEUE__@@PEAUWDFREQUEST__@@@Z @ 0x14004B40C (-Invoke@FxIoQueueIoCanceledOnQueue@@QEAAXPEAUWDFQUEUE__@@PEAUWDFREQUEST__@@@Z.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x14007BF54 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 */

unsigned __int8 __fastcall FxIoQueue::ProcessCancelledRequestsOnQueue(FxIoQueue *this, unsigned __int8 *PreviousIrql)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r12
  __int64 v5; // rcx
  _QWORD **v6; // rdi
  _QWORD *v7; // rax
  __int64 v9; // rcx
  _QWORD *v10; // rdx
  FxRequestBase *v11; // r14
  WDFQUEUE__ *v12; // rbp
  const void *_a2; // rcx
  WDFREQUEST__ *v14; // rsi
  WDFREQUEST__ *_a1; // rax
  unsigned __int8 v16; // r8
  unsigned __int8 v17; // r8

  m_Globals = this->m_Globals;
  if ( FxIoQueue::IsPowerStateNotifyingDriver(this) )
    return 0;
  v6 = (_QWORD **)(v5 + 288);
  while ( 1 )
  {
    v7 = *v6;
    if ( *v6 == v6 )
      break;
    v9 = *v7;
    if ( *(_QWORD **)(*v7 + 8LL) != v7 || (v10 = (_QWORD *)v7[1], (_QWORD *)*v10 != v7) )
      __fastfail(3u);
    *v10 = v9;
    v11 = (FxRequestBase *)(v7 - 36);
    *(_QWORD *)(v9 + 8) = v10;
    v7[1] = v7;
    *v7 = v7;
    v12 = (WDFQUEUE__ *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      _a2 = 0LL;
    v14 = (WDFREQUEST__ *)((unsigned __int64)(v7 - 36) ^ 0xFFFFFFFFFFFFFFF8uLL);
    _a1 = v14;
    if ( !v11->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qq(m_Globals, 4u, 0xDu, 0x55u, WPP_FxIoQueue_cpp_Traceguids, _a1, _a2);
    if ( m_Globals->FxVerifierOn )
      FxRequestBase::SetVerifierFlags(v11, 64);
    FxNonPagedObject::Unlock(this, *PreviousIrql, v16);
    if ( !v11->m_ObjectSize )
      v14 = 0LL;
    if ( !this->m_ObjectSize )
      v12 = 0LL;
    FxIoQueueIoCanceledOnQueue::Invoke(&this->m_IoCanceledOnQueue, v12, v14);
    FxNonPagedObject::Lock(this, PreviousIrql, v17);
  }
  return 1;
}
