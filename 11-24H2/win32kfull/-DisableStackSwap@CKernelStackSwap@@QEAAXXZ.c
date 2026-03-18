/*
 * XREFs of ?DisableStackSwap@CKernelStackSwap@@QEAAXXZ @ 0x1402B1648
 * Callers:
 *     ??0CKernelStackSwapAuto@@QEAA@XZ @ 0x1401814D4 (--0CKernelStackSwapAuto@@QEAA@XZ.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CKernelStackSwap::DisableStackSwap(CKernelStackSwap *this, __int64 a2)
{
  struct tagTHREADINFO *v3; // rax

  v3 = PtiCurrent((__int64)this, a2);
  *((_QWORD *)this + 1) = v3;
  if ( *((int *)v3 + 426) < 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 807);
  if ( !*(_DWORD *)(*((_QWORD *)this + 1) + 1704LL) )
  {
    *(_QWORD *)(*((_QWORD *)this + 1) + 1360LL) |= 0x40000000uLL;
    *(_BYTE *)this = KeSetKernelStackSwapEnable(0);
  }
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 1) + 1704LL));
}
