/*
 * XREFs of imp_WdfUsbTargetPipeSetNoMaximumPacketSizeCheck @ 0x140079E20
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_q @ 0x14001FA38 (WPP_IFR_SF_q.c)
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140026530 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 */

void __fastcall imp_WdfUsbTargetPipeSetNoMaximumPacketSizeCheck(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFUSBPIPE__ *Pipe)
{
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+40h] [rbp+8h] BYREF
  FxUsbPipe *pUsbPipe; // [rsp+50h] [rbp+18h] BYREF

  pFxDriverGlobals = 0LL;
  pUsbPipe = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)Pipe,
    0x1203u,
    (void **)&pUsbPipe,
    &pFxDriverGlobals);
  if ( pFxDriverGlobals->FxVerboseOn )
    WPP_IFR_SF_q(pFxDriverGlobals, 5u, 0xEu, 0xAu, WPP_FxUsbPipeAPI_cpp_Traceguids, Pipe);
  pUsbPipe->m_CheckPacketSize = 0;
}
