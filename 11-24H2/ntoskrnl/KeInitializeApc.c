/*
 * XREFs of KeInitializeApc @ 0x140422520
 * Callers:
 *     IopCopyCompleteReadIrp @ 0x140268580 (IopCopyCompleteReadIrp.c)
 *     IoRaiseHardError @ 0x1403D5B40 (IoRaiseHardError.c)
 *     EtwpTraceThreadRundownWithStack @ 0x140650A6C (EtwpTraceThreadRundownWithStack.c)
 *     EtwpCovSampCaptureQueueApc @ 0x140651B10 (EtwpCovSampCaptureQueueApc.c)
 *     DbgkpLkmdLaunchSnapApc @ 0x140708144 (DbgkpLkmdLaunchSnapApc.c)
 *     PsUpdateSvmProcessPasidAllThreads @ 0x1407741A4 (PsUpdateSvmProcessPasidAllThreads.c)
 *     PspEnableProcessOptionalXStateFeatures @ 0x1407748A0 (PspEnableProcessOptionalXStateFeatures.c)
 *     PspRecheckThreadOptionalXStateFeatures @ 0x1408A644C (PspRecheckThreadOptionalXStateFeatures.c)
 *     PspRecheckThreadPasidMsrState @ 0x1408A6880 (PspRecheckThreadPasidMsrState.c)
 *     NtNotifyChangeMultipleKeys @ 0x1408BF750 (NtNotifyChangeMultipleKeys.c)
 *     PerfLogImageUnload @ 0x1408E6808 (PerfLogImageUnload.c)
 *     PspSetContextThreadInternal @ 0x1408FD220 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x1408FD570 (PspGetContextThreadInternal.c)
 *     IopCancelIrpsInThreadList @ 0x14094A824 (IopCancelIrpsInThreadList.c)
 *     NtQueueApcThreadEx2 @ 0x1409F6A40 (NtQueueApcThreadEx2.c)
 *     ExSwapinWorkerThreads @ 0x140A51B34 (ExSwapinWorkerThreads.c)
 *     KeSpecialUserApcKernelRoutine @ 0x140A95740 (KeSpecialUserApcKernelRoutine.c)
 *     KeInitThread @ 0x140B69230 (KeInitThread.c)
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
