/*
 * XREFs of ?WaitForSignal@_FX_DRIVER_GLOBALS@@QEAAXPEAVMxEvent@@PEBDPEAXKK@Z @ 0x140007008
 * Callers:
 *     ?WakeInterruptIsr@FxInterrupt@@QEAAEXZ @ 0x140006AF4 (-WakeInterruptIsr@FxInterrupt@@QEAAEXZ.c)
 *     ?CancelRepeaters@FxUsbPipeContinuousReader@@QEAAXXZ @ 0x140006D40 (-CancelRepeaters@FxUsbPipeContinuousReader@@QEAAXXZ.c)
 *     ?QueueIdleSynchronously@FxIoQueue@@QEAAJE@Z @ 0x14003D1D4 (-QueueIdleSynchronously@FxIoQueue@@QEAAJE@Z.c)
 *     ?QueueDrainSynchronously@FxIoQueue@@QEAAJXZ @ 0x1400A1244 (-QueueDrainSynchronously@FxIoQueue@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall _FX_DRIVER_GLOBALS::WaitForSignal(
        _FX_DRIVER_GLOBALS *this,
        MxEvent *Event,
        const char *ReasonForWaiting,
        void *Handle,
        unsigned int WarningTimeoutInSec,
        char WaitSignalFlags)
{
  _LARGE_INTEGER timeOut; // [rsp+48h] [rbp+10h] BYREF

  timeOut.QuadPart = -10000000LL * WarningTimeoutInSec;
  while ( KeWaitForSingleObject(
            Event,
            Executive,
            0,
            0,
            (PLARGE_INTEGER)((unsigned __int64)&timeOut & -(__int64)(timeOut.QuadPart != 0))) == 258 )
  {
    DbgPrint("Thread 0x%p is %s 0x%p\n", KeGetCurrentThread(), ReasonForWaiting, Handle);
    if ( (WaitSignalFlags & 4) != 0
      || (WaitSignalFlags & 1) != 0 && this->FxVerifierDbgBreakOnError
      || (WaitSignalFlags & 2) != 0 && !KdRefreshDebuggerNotPresent() )
    {
      DbgBreakPoint();
    }
  }
}
