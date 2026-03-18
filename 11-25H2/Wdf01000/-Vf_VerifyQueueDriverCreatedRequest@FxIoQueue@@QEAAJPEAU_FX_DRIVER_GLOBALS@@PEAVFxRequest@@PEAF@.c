/*
 * XREFs of ?Vf_VerifyQueueDriverCreatedRequest@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@PEAF@Z @ 0x1400DC24C
 * Callers:
 *     ?QueueDriverCreatedRequest@FxIoQueue@@QEAAJPEAVFxRequest@@E@Z @ 0x140008AC8 (-QueueDriverCreatedRequest@FxIoQueue@@QEAAJPEAVFxRequest@@E@Z.c)
 *     imp_WdfRequestForwardToParentDeviceIoQueue @ 0x140047730 (imp_WdfRequestForwardToParentDeviceIoQueue.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1400135F0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x140022CC8 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Vf_VerifyRequestIsNotCancelable@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400DC304 (-Vf_VerifyRequestIsNotCancelable@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall FxIoQueue::Vf_VerifyQueueDriverCreatedRequest(
        FxIoQueue *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxRequest *Request,
        __int16 *OldFlags)
{
  _LIST_ENTRY *Flink; // rcx
  unsigned __int8 v8; // r8
  KIRQL v9; // si
  bool v10; // zf
  int IsNotCancelable; // edi
  FxIoQueue *status; // [rsp+30h] [rbp+8h] OVERLAPPED BYREF

  status = this;
  LOBYTE(status) = 0;
  if ( SLOBYTE(Request->m_ObjectFlags) < 0 && (Flink = Request[-1].m_ForwardProgressList.Flink) != 0LL )
  {
    FxVerifierLock::Lock((FxVerifierLock *)Flink, (unsigned __int8 *)&status, (unsigned __int8)Request);
    v9 = (unsigned __int8)status;
  }
  else
  {
    v9 = KeAcquireSpinLockRaiseToDpc(&Request->m_NPLock.m_Lock);
  }
  v10 = FxDriverGlobals->FxVerifierOn == 0;
  *OldFlags = Request->m_VerifierFlags;
  if ( v10 )
  {
    IsNotCancelable = 0;
  }
  else
  {
    IsNotCancelable = FxRequest::Vf_VerifyRequestIsNotCancelable(Request, FxDriverGlobals);
    if ( IsNotCancelable < 0 )
      goto LABEL_10;
  }
  Request->m_VerifierFlags &= ~1u;
LABEL_10:
  FxNonPagedObject::Unlock(Request, v9, v8);
  return (unsigned int)IsNotCancelable;
}
