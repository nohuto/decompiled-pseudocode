/*
 * XREFs of ?CancelRepeaters@FxUsbPipeContinuousReader@@QEAAXXZ @ 0x140006D40
 * Callers:
 *     ?FxUsbPipeRequestWorkItemHandler@FxUsbPipeContinuousReader@@IEAAXPEAUFxUsbPipeRepeatReader@@@Z @ 0x14000747C (-FxUsbPipeRequestWorkItemHandler@FxUsbPipeContinuousReader@@IEAAXPEAUFxUsbPipeRepeatReader@@@Z.c)
 *     ?WaitForSentIoToComplete@FxUsbPipe@@UEAAXXZ @ 0x14002EB70 (-WaitForSentIoToComplete@FxUsbPipe@@UEAAXXZ.c)
 *     ?Reset@FxUsbPipe@@QEAAJXZ @ 0x14004D148 (-Reset@FxUsbPipe@@QEAAJXZ.c)
 * Callees:
 *     ?Cancel@FxRequestBase@@QEAAEXZ @ 0x140006E7C (-Cancel@FxRequestBase@@QEAAEXZ.c)
 *     ?WaitForSignal@_FX_DRIVER_GLOBALS@@QEAAXPEAVMxEvent@@PEBDPEAXKK@Z @ 0x140007008 (-WaitForSignal@_FX_DRIVER_GLOBALS@@QEAAXPEAVMxEvent@@PEBDPEAXKK@Z.c)
 */

void __fastcall FxUsbPipeContinuousReader::CancelRepeaters(FxUsbPipeContinuousReader *this)
{
  int v2; // edi
  FxUsbPipeRepeatReader *m_Readers; // rsi
  FxUsbPipe *m_Pipe; // r9
  unsigned __int16 m_ObjectSize; // ax
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  void *v7; // r9

  KeEnterCriticalRegion();
  v2 = 0;
  if ( this->m_NumReaders )
  {
    m_Readers = this->m_Readers;
    do
    {
      FxRequestBase::Cancel(m_Readers->Request);
      m_Pipe = this->m_Pipe;
      m_ObjectSize = m_Pipe->m_ObjectSize;
      m_Globals = m_Pipe->m_Globals;
      v7 = (void *)((unsigned __int64)m_Pipe ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !m_ObjectSize )
        v7 = 0LL;
      _FX_DRIVER_GLOBALS::WaitForSignal(
        m_Globals,
        &this->m_Readers[v2].ReadCompletedEvent,
        "waiting for continuous reader to finish, WDFUSBPIPE",
        v7,
        m_Globals->FxVerifierDbgWaitForSignalTimeoutInSec,
        1u);
      ++m_Readers;
      ++v2;
    }
    while ( v2 < this->m_NumReaders );
  }
  KeLeaveCriticalRegion();
}
