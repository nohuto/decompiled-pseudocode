/*
 * XREFs of KeInitializeApc @ 0x1404163D0
 * Callers:
 *     IopCopyCompleteReadIrp @ 0x14025FA30 (IopCopyCompleteReadIrp.c)
 *     IoRaiseHardError @ 0x1403C1290 (IoRaiseHardError.c)
 *     EtwpTraceThreadRundownWithStack @ 0x14064F0A4 (EtwpTraceThreadRundownWithStack.c)
 *     EtwpCovSampCaptureQueueApc @ 0x140650210 (EtwpCovSampCaptureQueueApc.c)
 *     DbgkpLkmdLaunchSnapApc @ 0x140705D04 (DbgkpLkmdLaunchSnapApc.c)
 *     PsUpdateSvmProcessPasidAllThreads @ 0x1407743C4 (PsUpdateSvmProcessPasidAllThreads.c)
 *     PspEnableProcessOptionalXStateFeatures @ 0x140774AC0 (PspEnableProcessOptionalXStateFeatures.c)
 *     NtNotifyChangeMultipleKeys @ 0x1408BD110 (NtNotifyChangeMultipleKeys.c)
 *     IopCancelIrpsInThreadList @ 0x1408EED94 (IopCancelIrpsInThreadList.c)
 *     PspRecheckThreadOptionalXStateFeatures @ 0x1408FCA64 (PspRecheckThreadOptionalXStateFeatures.c)
 *     PspRecheckThreadPasidMsrState @ 0x1408FCE90 (PspRecheckThreadPasidMsrState.c)
 *     PspSetContextThreadInternal @ 0x14091FB00 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x14091FE50 (PspGetContextThreadInternal.c)
 *     NtQueueApcThreadEx2 @ 0x1409EA990 (NtQueueApcThreadEx2.c)
 *     PerfLogImageUnload @ 0x140A0E50C (PerfLogImageUnload.c)
 *     ExSwapinWorkerThreads @ 0x140A48C04 (ExSwapinWorkerThreads.c)
 *     KeSpecialUserApcKernelRoutine @ 0x140A91F70 (KeSpecialUserApcKernelRoutine.c)
 *     KeInitThread @ 0x140B6A948 (KeInitThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeInitializeApc(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned __int8 a7,
        __int64 a8)
{
  __int64 result; // rax

  *(_BYTE *)a1 = 18;
  *(_BYTE *)(a1 + 2) = 88;
  if ( a3 == 2 )
    LOBYTE(a3) = *(_BYTE *)(a2 + 586);
  *(_BYTE *)(a1 + 80) = a3;
  *(_QWORD *)(a1 + 40) = a5;
  result = a7;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 32) = a4;
  *(_QWORD *)(a1 + 48) = a6;
  if ( !a6 )
  {
    result = 0LL;
    a8 = 0LL;
  }
  *(_BYTE *)(a1 + 81) = result;
  *(_QWORD *)(a1 + 56) = a8;
  *(_BYTE *)(a1 + 82) = 0;
  *(_BYTE *)(a1 + 1) = 0;
  return result;
}
