/*
 * XREFs of ?Vf_VerifierBreakpoint_RequestEarlyDisposeDeferred@FxRequest@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400DCEF0
 * Callers:
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x14000D190 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     imp_WdfRequestSend @ 0x140031620 (imp_WdfRequestSend.c)
 *     ?PreProcessSendAndForget@FxRequest@@QEAAXXZ @ 0x1400458F8 (-PreProcessSendAndForget@FxRequest@@QEAAXXZ.c)
 * Callees:
 *     ?IsVerificationEnabled@_FX_DRIVER_GLOBALS@@QEAAEKKW4FxVerifierDownlevelOption@@@Z @ 0x140013E20 (-IsVerificationEnabled@_FX_DRIVER_GLOBALS@@QEAAEKKW4FxVerifierDownlevelOption@@@Z.c)
 *     WPP_IFR_SF_q @ 0x14001FA38 (WPP_IFR_SF_q.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832E8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxRequest::Vf_VerifierBreakpoint_RequestEarlyDisposeDeferred(
        FxRequest *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        __int64 a3,
        FxVerifierDownlevelOption a4)
{
  __int16 v5; // r8
  __int64 v6; // r10
  __int16 v7; // ax
  const void *_a1; // r10

  if ( _FX_DRIVER_GLOBALS::IsVerificationEnabled(FxDriverGlobals, (unsigned int)FxDriverGlobals, 0xBu, a4) )
  {
    v7 = *(_WORD *)(v6 + 10);
    _a1 = (const void *)(v6 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v7 )
      _a1 = 0LL;
    WPP_IFR_SF_q(FxDriverGlobals, 2u, 0x10u, v5 + 39, WPP_FxRequest_cpp_Traceguids, _a1);
    FxVerifierDbgBreakPoint(FxDriverGlobals);
  }
}
