/*
 * XREFs of ?Vf_VerifyRemoveIrpFromQueueByContext@FxIrpQueue@@AEAAXPEAU_FX_DRIVER_GLOBALS@@PEAU_IO_CSQ_IRP_CONTEXT@@@Z @ 0x1400E3DA0
 * Callers:
 *     ?RequestCancelable@FxIoQueue@@QEAAJPEAVFxRequest@@EP6AXPEAUWDFREQUEST__@@@ZE@Z @ 0x14002CE90 (-RequestCancelable@FxIoQueue@@QEAAJPEAVFxRequest@@EP6AXPEAUWDFREQUEST__@@@ZE@Z.c)
 *     ?RemoveIrpFromQueueByContext@FxIrpQueue@@AEAAPEAU_IRP@@PEAU_IO_CSQ_IRP_CONTEXT@@@Z @ 0x14004CCC0 (-RemoveIrpFromQueueByContext@FxIrpQueue@@AEAAPEAU_IRP@@PEAU_IO_CSQ_IRP_CONTEXT@@@Z.c)
 *     imp_WdfRequestUnmarkCancelable @ 0x1400535B0 (imp_WdfRequestUnmarkCancelable.c)
 * Callees:
 *     ?IsVerificationEnabled@_FX_DRIVER_GLOBALS@@QEAAEKKW4FxVerifierDownlevelOption@@@Z @ 0x14002CCC0 (-IsVerificationEnabled@_FX_DRIVER_GLOBALS@@QEAAEKKW4FxVerifierDownlevelOption@@@Z.c)
 *     WPP_IFR_SF_qqq @ 0x140041538 (WPP_IFR_SF_qqq.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1400830A8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

void __fastcall FxIrpQueue::Vf_VerifyRemoveIrpFromQueueByContext(
        FxIrpQueue *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _IO_CSQ_IRP_CONTEXT *Context,
        FxVerifierDownlevelOption a4)
{
  _FX_DRIVER_GLOBALS *v6; // rcx
  _IO_CSQ *_a3; // r10
  _IRP *_a1; // rax

  if ( _FX_DRIVER_GLOBALS::IsVerificationEnabled(FxDriverGlobals, (unsigned int)FxDriverGlobals, 0xBu, a4) )
  {
    _a1 = Context->Irp;
    if ( _a1 )
    {
      if ( Context->Type != 1 || Context->Csq != _a3 )
      {
        WPP_IFR_SF_qqq(v6, 2u, 0x10u, 0xAu, WPP_FxIrpQueue_cpp_Traceguids, _a1, Context, _a3);
        FxVerifierBugCheckWorker(FxDriverGlobals, WDF_REQUEST_FATAL_ERROR, 5uLL, (ULONG_PTR)Context);
      }
    }
  }
}
