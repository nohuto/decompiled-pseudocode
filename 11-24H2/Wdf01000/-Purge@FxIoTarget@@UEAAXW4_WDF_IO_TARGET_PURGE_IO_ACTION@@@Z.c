/*
 * XREFs of ?Purge@FxIoTarget@@UEAAXW4_WDF_IO_TARGET_PURGE_IO_ACTION@@@Z @ 0x140067060
 * Callers:
 *     ?Purge@FxUsbDevice@@MEAAXW4_WDF_IO_TARGET_PURGE_IO_ACTION@@@Z @ 0x14009F310 (-Purge@FxUsbDevice@@MEAAXW4_WDF_IO_TARGET_PURGE_IO_ACTION@@@Z.c)
 * Callees:
 *     ?_CancelSentRequests@FxIoTarget@@KAXPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x140006B70 (-_CancelSentRequests@FxIoTarget@@KAXPEAU_SINGLE_LIST_ENTRY@@@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x14002BD60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14002C4B0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     WPP_IFR_SF_q @ 0x140037258 (WPP_IFR_SF_q.c)
 *     ?CompletePendedRequestList@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1400671FC (-CompletePendedRequestList@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

void __fastcall FxIoTarget::Purge(FxIoTarget *this, __int64 Action)
{
  FxIoTarget_vtbl *v3; // rax
  FxIoTarget_vtbl *v4; // rax
  unsigned __int8 v5; // r8
  unsigned __int8 v6; // dl
  unsigned __int8 v7; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned __int16 m_ObjectSize; // ax
  const void *_a1; // rbx
  _LIST_ENTRY pendedHead; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int8 wait; // [rsp+70h] [rbp+20h] BYREF
  unsigned __int8 irql; // [rsp+80h] [rbp+30h] BYREF
  _SINGLE_LIST_ENTRY sentHead; // [rsp+88h] [rbp+38h] BYREF

  pendedHead.Blink = &pendedHead;
  sentHead.Next = 0LL;
  pendedHead.Flink = &pendedHead;
  v3 = this->__vftable;
  wait = 0;
  v3->GotoPurgeState(this, (_WDF_IO_TARGET_PURGE_IO_ACTION)Action, &pendedHead, &sentHead, &wait, 1u);
  FxIoTarget::CompletePendedRequestList(this, &pendedHead);
  FxIoTarget::_CancelSentRequests(&sentHead);
  if ( wait )
  {
    v4 = this->__vftable;
    irql = 0;
    v4->WaitForSentIoToComplete(this);
    FxNonPagedObject::Lock(this, &irql, v5);
    v6 = irql;
    this->m_WaitingForSentIo = 0;
    FxNonPagedObject::Unlock(this, v6, v7);
  }
  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
  {
    m_ObjectSize = this->m_ObjectSize;
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0x16u, WPP_FxIoTarget_cpp_Traceguids, _a1);
  }
}
