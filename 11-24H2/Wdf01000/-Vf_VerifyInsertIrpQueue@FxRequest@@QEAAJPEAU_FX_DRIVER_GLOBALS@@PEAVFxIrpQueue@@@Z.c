/*
 * XREFs of ?Vf_VerifyInsertIrpQueue@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIrpQueue@@@Z @ 0x1400DCE70
 * Callers:
 *     ?QueueDriverCreatedRequest@FxIoQueue@@QEAAJPEAVFxRequest@@E@Z @ 0x1400211F8 (-QueueDriverCreatedRequest@FxIoQueue@@QEAAJPEAVFxRequest@@E@Z.c)
 *     ?EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z @ 0x140021A60 (-EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z.c)
 *     ?ForwardRequest@FxIoQueue@@QEAAJPEAV1@PEAVFxRequest@@@Z @ 0x1400221F0 (-ForwardRequest@FxIoQueue@@QEAAJPEAV1@PEAVFxRequest@@@Z.c)
 *     ?ForwardRequestWorker@FxIoQueue@@QEAAJPEAVFxRequest@@PEAV1@@Z @ 0x1400228D0 (-ForwardRequestWorker@FxIoQueue@@QEAAJPEAVFxRequest@@PEAV1@@Z.c)
 *     ?InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z @ 0x140023300 (-InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z.c)
 *     imp_WdfRequestForwardToIoQueue @ 0x140023560 (imp_WdfRequestForwardToIoQueue.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x140026780 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     imp_WdfRequestMarkCancelableEx @ 0x14002B930 (imp_WdfRequestMarkCancelableEx.c)
 *     ?RequestCancelable@FxIoQueue@@QEAAJPEAVFxRequest@@EP6AXPEAUWDFREQUEST__@@@ZE@Z @ 0x14002CE90 (-RequestCancelable@FxIoQueue@@QEAAJPEAVFxRequest@@EP6AXPEAUWDFREQUEST__@@@ZE@Z.c)
 *     imp_WdfRequestForwardToParentDeviceIoQueue @ 0x14003D5B0 (imp_WdfRequestForwardToParentDeviceIoQueue.c)
 *     ?InsertHeadIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@PEAK@Z @ 0x14003E078 (-InsertHeadIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@PEAK@Z.c)
 *     ?InsertNewRequest@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z @ 0x14003E240 (-InsertNewRequest@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z.c)
 * Callees:
 *     WPP_IFR_SF_qqd @ 0x14001AC10 (WPP_IFR_SF_qqd.c)
 *     ?VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140056F48 (-VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832D8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxRequest::Vf_VerifyInsertIrpQueue(
        FxRequest *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxIrpQueue *IrpQueue)
{
  unsigned int v4; // ebx
  unsigned __int16 m_ObjectSize; // ax
  const void *v6; // rcx

  if ( this->m_IrpQueue )
  {
    v4 = -1073741595;
    m_ObjectSize = this->m_ObjectSize;
    v6 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      v6 = 0LL;
    WPP_IFR_SF_qqd(FxDriverGlobals, 2u, 0x10u, 0x28u, WPP_FxRequest_cpp_Traceguids, IrpQueue, v6, 0xC00000E5);
    FxVerifierDbgBreakPoint(FxDriverGlobals);
  }
  else
  {
    return (unsigned int)FxRequest::VerifyRequestIsNotCompleted(this, FxDriverGlobals);
  }
  return v4;
}
