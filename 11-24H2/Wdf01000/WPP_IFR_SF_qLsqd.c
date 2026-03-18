/*
 * XREFs of WPP_IFR_SF_qLsqd @ 0x1400230F0
 * Callers:
 *     ?DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z @ 0x140017EF0 (-DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z.c)
 *     ?DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z @ 0x140019480 (-DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z.c)
 *     imp_WdfDeviceWdmDispatchIrpToIoQueue @ 0x14001AD70 (imp_WdfDeviceWdmDispatchIrpToIoQueue.c)
 *     ?QueueDriverCreatedRequest@FxIoQueue@@QEAAJPEAVFxRequest@@E@Z @ 0x1400211F8 (-QueueDriverCreatedRequest@FxIoQueue@@QEAAJPEAVFxRequest@@E@Z.c)
 *     ?EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z @ 0x140021A60 (-EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z.c)
 *     ?ForwardRequest@FxIoQueue@@QEAAJPEAV1@PEAVFxRequest@@@Z @ 0x1400221F0 (-ForwardRequest@FxIoQueue@@QEAAJPEAV1@PEAVFxRequest@@@Z.c)
 *     ?ForwardRequestWorker@FxIoQueue@@QEAAJPEAVFxRequest@@PEAV1@@Z @ 0x1400228D0 (-ForwardRequestWorker@FxIoQueue@@QEAAJPEAVFxRequest@@PEAV1@@Z.c)
 *     imp_WdfRequestForwardToIoQueue @ 0x140023560 (imp_WdfRequestForwardToIoQueue.c)
 *     ?QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x140026430 (-QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     imp_WdfRequestForwardToParentDeviceIoQueue @ 0x14003D5B0 (imp_WdfRequestForwardToParentDeviceIoQueue.c)
 * Callees:
 *     FxWmiTraceMessage @ 0x140002B68 (FxWmiTraceMessage.c)
 *     FxIFR @ 0x140025370 (FxIFR.c)
 */

void __fastcall WPP_IFR_SF_qLsqd(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 level,
        unsigned int id,
        unsigned __int16 _a1,
        const _GUID *_a2,
        const void *_a3,
        unsigned int _a4,
        const char *_a5,
        const void *globals_0,
        int level_0)
{
  const char *v10; // rdi
  __int64 v11; // rbx
  __int64 v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // rcx
  const char *v18; // rax

  v10 = _a5;
  v11 = -1LL;
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x1000) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= level )
  {
    if ( _a5 )
    {
      v16 = -1LL;
      do
        ++v16;
      while ( _a5[v16] );
      v17 = v16 + 1;
    }
    else
    {
      v17 = 5LL;
    }
    v18 = _a5;
    if ( !_a5 )
      v18 = "NULL";
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      43LL,
      WPP_FxIoQueue_cpp_Traceguids,
      _a1,
      &_a3,
      8LL,
      &_a4,
      4LL,
      v18,
      v17,
      &globals_0,
      8LL,
      &level_0,
      4LL,
      0LL);
  }
  if ( v10 )
  {
    do
      ++v11;
    while ( v10[v11] );
    v15 = v11 + 1;
  }
  else
  {
    v15 = 5LL;
  }
  if ( !v10 )
    v10 = "NULL";
  FxIFR(
    globals,
    level,
    0xDu,
    WPP_FxIoQueue_cpp_Traceguids,
    _a1,
    &_a3,
    8LL,
    &_a4,
    4LL,
    v10,
    v15,
    &globals_0,
    8LL,
    &level_0,
    4LL,
    0LL);
}
