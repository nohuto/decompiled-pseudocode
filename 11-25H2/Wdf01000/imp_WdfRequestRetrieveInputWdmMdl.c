/*
 * XREFs of imp_WdfRequestRetrieveInputWdmMdl @ 0x1400697F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qd @ 0x140025B50 (WPP_IFR_SF_qd.c)
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140026530 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     ?GetMdl@FxRequest@@QEAAJPEAPEAU_MDL@@@Z @ 0x1400698B8 (-GetMdl@FxRequest@@QEAAJPEAPEAU_MDL@@@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008306C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

int __fastcall imp_WdfRequestRetrieveInputWdmMdl(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFREQUEST__ *Request, _MDL **Mdl)
{
  void *retaddr; // [rsp+48h] [rbp+0h]
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+50h] [rbp+8h] BYREF
  FxRequest *pRequest; // [rsp+60h] [rbp+18h] BYREF

  pFxDriverGlobals = 0LL;
  pRequest = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)Request,
    0x1008u,
    (void **)&pRequest,
    &pFxDriverGlobals);
  if ( !Mdl )
    FxVerifierNullBugCheck(pFxDriverGlobals, retaddr);
  *Mdl = 0LL;
  if ( pRequest->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->MajorFunction != 3 )
    return FxRequest::GetMdl(pRequest, Mdl);
  if ( pFxDriverGlobals->FxVerboseOn )
    WPP_IFR_SF_qd(pFxDriverGlobals, 5u, 0x10u, 0x29u, WPP_FxRequestApi_cpp_Traceguids, Request, -1073741808);
  return -1073741808;
}
