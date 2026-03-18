/*
 * XREFs of ?_IrpCancelForDriver@FxIoQueue@@KAXPEAVFxIrpQueue@@PEAU_IRP@@PEAU_IO_CSQ_IRP_CONTEXT@@E@Z @ 0x14003E4B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x14002C4F0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?CancelForDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x14003E590 (-CancelForDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x140049FC8 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

void __fastcall FxIoQueue::_IrpCancelForDriver(
        FxIrpQueue *IrpQueue,
        _IRP *Irp,
        _IO_CSQ_IRP_CONTEXT *CsqContext,
        KIRQL Irql)
{
  FxRequest *v4; // rbp
  FxIoQueue *p_Blink; // rbx
  signed __int32 RefCount; // r8d
  _LIST_ENTRY *Flink; // rcx
  FxVerifierLock *v10; // rcx

  v4 = (FxRequest *)&CsqContext[-5];
  HIBYTE(CsqContext[3].Csq) = 1;
  p_Blink = (FxIoQueue *)&IrpQueue[-6].m_Queue.Blink;
  RefCount = _InterlockedIncrement((volatile signed __int32 *)&IrpQueue[-6].m_LockObject + 1);
  if ( SLOBYTE(IrpQueue[-6].m_RequestCount) < 0 )
  {
    Flink = IrpQueue[-7].m_Queue.Flink;
    if ( Flink )
      FxTagTracker::UpdateTagHistory(
        (FxTagTracker *)Flink,
        Irp,
        4677,
        "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp",
        TagAddRef,
        RefCount);
  }
  if ( SLOBYTE(p_Blink->m_ObjectFlags) < 0
    && (v10 = *(FxVerifierLock **)&p_Blink[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
  {
    FxVerifierLock::Unlock(v10, Irql, RefCount);
  }
  else
  {
    KeReleaseSpinLock(&p_Blink->m_NPLock.m_Lock, Irql);
  }
  FxIoQueue::CancelForDriver(p_Blink, v4);
  p_Blink->Release(p_Blink, Irp, 4688, "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
}
