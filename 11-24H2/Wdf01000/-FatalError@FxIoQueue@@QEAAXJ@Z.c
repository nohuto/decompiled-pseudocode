/*
 * XREFs of ?FatalError@FxIoQueue@@QEAAXJ@Z @ 0x1400A11A0
 * Callers:
 *     imp_WdfIoQueueStop @ 0x14003C540 (imp_WdfIoQueueStop.c)
 *     imp_WdfIoQueuePurgeSynchronously @ 0x14003CCD0 (imp_WdfIoQueuePurgeSynchronously.c)
 *     imp_WdfIoQueueStopAndPurge @ 0x14003CD40 (imp_WdfIoQueueStopAndPurge.c)
 *     imp_WdfIoQueuePurge @ 0x14003CDB0 (imp_WdfIoQueuePurge.c)
 *     imp_WdfIoQueueStopSynchronously @ 0x14003D2F0 (imp_WdfIoQueueStopSynchronously.c)
 *     imp_WdfIoQueueDrain @ 0x1400A08B0 (imp_WdfIoQueueDrain.c)
 *     imp_WdfIoQueueDrainSynchronously @ 0x1400A0920 (imp_WdfIoQueueDrainSynchronously.c)
 *     imp_WdfIoQueueStopAndPurgeSynchronously @ 0x1400A0990 (imp_WdfIoQueueStopAndPurgeSynchronously.c)
 * Callees:
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1400830A8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

void __fastcall __noreturn FxIoQueue::FatalError(FxIoQueue *this, int Status)
{
  WDFQUEUE__ *v2; // r8
  bool v3; // zf
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  _WDF_QUEUE_FATAL_ERROR_DATA data; // [rsp+20h] [rbp-28h] BYREF

  data.Status = Status;
  *(&data.Status + 1) = 0;
  v2 = (WDFQUEUE__ *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  data.Request = 0LL;
  v3 = this->m_ObjectSize == 0;
  m_Globals = this->m_Globals;
  if ( v3 )
    v2 = 0LL;
  data.Queue = v2;
  FxVerifierBugCheckWorker(m_Globals, WDF_QUEUE_FATAL_ERROR, (ULONG_PTR)&data, 0LL);
}
