/*
 * XREFs of imp_WdfDmaEnablerWdmGetDmaAdapter @ 0x1400700F0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140026530 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     WPP_IFR_SF_dq @ 0x1400808C0 (WPP_IFR_SF_dq.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832E8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

_DMA_ADAPTER *__fastcall imp_WdfDmaEnablerWdmGetDmaAdapter(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMAENABLER__ *DmaEnabler,
        int DmaDirection)
{
  __int64 v4; // rbx
  $606C41BA9BCC3D85D2F60B9807CEBB34 *v7; // rbx
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+50h] [rbp+8h] BYREF
  FxDmaEnabler *pDmaEnabler; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0LL;
  pFxDriverGlobals = 0LL;
  pDmaEnabler = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)DmaEnabler,
    0x1400u,
    (void **)&pDmaEnabler,
    &pFxDriverGlobals);
  if ( !DmaDirection )
    return pDmaEnabler->m_SimplexAdapterInfo.AdapterObject;
  if ( DmaDirection == 1 )
  {
    v7 = ($606C41BA9BCC3D85D2F60B9807CEBB34 *)&pDmaEnabler->m_DuplexAdapterInfo[1];
    if ( (*((_BYTE *)pDmaEnabler + 380) & 0x10) == 0 )
      v7 = &pDmaEnabler->184;
    return v7->m_SimplexAdapterInfo.AdapterObject;
  }
  else
  {
    WPP_IFR_SF_dq(pFxDriverGlobals, 2u, 0xFu, 0x17u, WPP_FxDmaEnablerAPI_cpp_Traceguids, DmaDirection, DmaEnabler);
    FxVerifierDbgBreakPoint(pFxDriverGlobals);
  }
  return (_DMA_ADAPTER *)v4;
}
