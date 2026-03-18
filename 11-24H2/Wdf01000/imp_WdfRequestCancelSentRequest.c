/*
 * XREFs of imp_WdfRequestCancelSentRequest @ 0x140006E00
 * Callers:
 *     <none>
 * Callees:
 *     ?Cancel@FxRequestBase@@QEAAEXZ @ 0x140006E7C (-Cancel@FxRequestBase@@QEAAEXZ.c)
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140016BF0 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     WPP_IFR_SF_q @ 0x140037258 (WPP_IFR_SF_q.c)
 */

unsigned __int8 __fastcall imp_WdfRequestCancelSentRequest(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFREQUEST__ *Request)
{
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+40h] [rbp+8h] BYREF
  FxRequest *pRequest; // [rsp+50h] [rbp+18h] BYREF

  pFxDriverGlobals = 0LL;
  pRequest = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    Request,
    0x1008u,
    (void **)&pRequest,
    &pFxDriverGlobals);
  if ( pFxDriverGlobals->FxVerboseOn )
    WPP_IFR_SF_q(pFxDriverGlobals, 5u, 0x10u, 0x32u, WPP_FxRequestApi_cpp_Traceguids, Request);
  return FxRequestBase::Cancel(pRequest);
}
