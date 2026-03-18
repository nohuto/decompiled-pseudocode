/*
 * XREFs of ?TryEnableStackSwap@CKernelStackSwap@@QEAAXXZ @ 0x1402B1724
 * Callers:
 *     ??1CKernelStackSwapAuto@@QEAA@XZ @ 0x14018B41C (--1CKernelStackSwapAuto@@QEAA@XZ.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CKernelStackSwap::TryEnableStackSwap(CKernelStackSwap *this)
{
  if ( *(int *)(*((_QWORD *)this + 1) + 1704LL) <= 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 822);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)this + 1) + 1704LL), 0xFFFFFFFF) == 1 )
  {
    KeSetKernelStackSwapEnable(*(_BYTE *)this);
    *(_QWORD *)(*((_QWORD *)this + 1) + 1360LL) &= ~0x40000000uLL;
  }
  *((_QWORD *)this + 1) = 0LL;
}
