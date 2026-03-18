/*
 * XREFs of imp_WdfRequestStopAcknowledge @ 0x140082500
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140016BF0 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     ?Vf_VerifyStopAcknowledge@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1400DC4B4 (-Vf_VerifyStopAcknowledge@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 */

void __fastcall imp_WdfRequestStopAcknowledge(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFREQUEST__ *Request,
        unsigned __int8 Requeue)
{
  FxRequest *v4; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  FxRequest *pRequest; // [rsp+40h] [rbp+8h] BYREF
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+58h] [rbp+20h] BYREF

  pRequest = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)Request,
    0x1008u,
    (void **)&pRequest,
    &pFxDriverGlobals);
  v4 = pRequest;
  m_Globals = pRequest->m_Globals;
  if ( !m_Globals->FxVerifierOn || FxRequest::Vf_VerifyStopAcknowledge(pRequest, m_Globals, Requeue) >= 0 )
    v4->m_PowerStopState = (Requeue != 0) + 1;
}
