/*
 * XREFs of KeInitializeApc @ 0x140429EA0
 * Callers:
 *     IopCopyCompleteReadIrp @ 0x1402D3280 (IopCopyCompleteReadIrp.c)
 *     IoRaiseHardError @ 0x1404339B0 (IoRaiseHardError.c)
 *     EtwpTraceThreadRundownWithStack @ 0x140644A5C (EtwpTraceThreadRundownWithStack.c)
 *     EtwpCovSampCaptureQueueApc @ 0x140645B60 (EtwpCovSampCaptureQueueApc.c)
 *     DbgkpLkmdLaunchSnapApc @ 0x1406FC264 (DbgkpLkmdLaunchSnapApc.c)
 *     PsUpdateSvmProcessPasidAllThreads @ 0x1407647D4 (PsUpdateSvmProcessPasidAllThreads.c)
 *     PspEnableProcessOptionalXStateFeatures @ 0x140764ED0 (PspEnableProcessOptionalXStateFeatures.c)
 *     IopCancelIrpsInThreadList @ 0x1408BDA64 (IopCancelIrpsInThreadList.c)
 *     PspRecheckThreadOptionalXStateFeatures @ 0x1408F3834 (PspRecheckThreadOptionalXStateFeatures.c)
 *     PspRecheckThreadPasidMsrState @ 0x1408F3C78 (PspRecheckThreadPasidMsrState.c)
 *     PspSetContextThreadInternal @ 0x1409095F0 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x140909940 (PspGetContextThreadInternal.c)
 *     NtNotifyChangeMultipleKeys @ 0x140937870 (NtNotifyChangeMultipleKeys.c)
 *     NtQueueApcThreadEx2 @ 0x1409F6A10 (NtQueueApcThreadEx2.c)
 *     PerfLogImageUnload @ 0x140A0BE8C (PerfLogImageUnload.c)
 *     ExSwapinWorkerThreads @ 0x140A4E204 (ExSwapinWorkerThreads.c)
 *     KeSpecialUserApcKernelRoutine @ 0x140A91590 (KeSpecialUserApcKernelRoutine.c)
 *     KeInitThread @ 0x140B59400 (KeInitThread.c)
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
