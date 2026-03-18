/*
 * XREFs of WPP_IFR_SF_qiid @ 0x1400560A4
 * Callers:
 *     ?Complete@FxRequest@@QEAAJJ@Z @ 0x14000CFD0 (-Complete@FxRequest@@QEAAJJ@Z.c)
 *     ?QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x14000DD00 (-QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x14000FB50 (-DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     ?DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z @ 0x140027830 (-DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z.c)
 *     ?DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z @ 0x140028E00 (-DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z.c)
 *     imp_WdfDeviceWdmDispatchIrpToIoQueue @ 0x14002A6F0 (imp_WdfDeviceWdmDispatchIrpToIoQueue.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x140036790 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?CompleteWithInformation@FxRequest@@QEAAJJ_K@Z @ 0x1400487EC (-CompleteWithInformation@FxRequest@@QEAAJJ_K@Z.c)
 *     imp_WdfRequestRetrieveOutputBuffer @ 0x140048B50 (imp_WdfRequestRetrieveOutputBuffer.c)
 *     imp_WdfRequestRetrieveInputBuffer @ 0x1400492F0 (imp_WdfRequestRetrieveInputBuffer.c)
 *     imp_WdfRequestComplete @ 0x140058A10 (imp_WdfRequestComplete.c)
 *     imp_WdfRequestCompleteWithInformation @ 0x1400596D0 (imp_WdfRequestCompleteWithInformation.c)
 *     ?DmaCompleted@FxDmaTransactionBase@@QEAAE_KPEAJW4FxDmaCompletionType@@@Z @ 0x1400659BC (-DmaCompleted@FxDmaTransactionBase@@QEAAE_KPEAJW4FxDmaCompletionType@@@Z.c)
 *     imp_WdfRequestCompleteWithPriorityBoost @ 0x140066730 (imp_WdfRequestCompleteWithPriorityBoost.c)
 * Callees:
 *     FxIFR @ 0x14000CC40 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x140056368 (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_qiid(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 level,
        unsigned int flags,
        unsigned __int16 id,
        const _GUID *traceGuid,
        const void *_a1,
        const void *_a2,
        __int64 _a3,
        int _a4)
{
  int v13; // eax
  unsigned __int64 v14; // rbx

  v13 = *(&WPP_GLOBAL_WDF_Control.Characteristics + 16 * ((unsigned __int64)flags >> 16) + (((flags - 1) >> 5) & 0x7FF));
  if ( _bittest(&v13, (flags - 1) & 0x1F) )
  {
    v14 = (unsigned __int64)flags >> 16 << 6;
    if ( *((_BYTE *)&WPP_GLOBAL_WDF_Control.Flags + v14 + 1) >= level )
      FxWmiTraceMessage(
        *(unsigned __int64 *)((char *)&WPP_GLOBAL_WDF_Control.CurrentIrp + v14),
        0x2Bu,
        traceGuid,
        id,
        &_a1,
        8LL,
        &_a2,
        8LL,
        &_a3,
        8LL,
        &_a4,
        4LL,
        0LL);
  }
  FxIFR(globals, level, flags, traceGuid, id, &_a1, 8LL, &_a2, 8LL, &_a3, 8LL, &_a4, 4LL, 0LL);
}
