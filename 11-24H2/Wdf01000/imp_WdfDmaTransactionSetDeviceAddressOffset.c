/*
 * XREFs of imp_WdfDmaTransactionSetDeviceAddressOffset @ 0x140073F00
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140016BF0 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     WPP_IFR_SF_qL @ 0x140028CC0 (WPP_IFR_SF_qL.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832D8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall imp_WdfDmaTransactionSetDeviceAddressOffset(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMATRANSACTION__ *DmaTransaction,
        unsigned int Offset)
{
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+50h] [rbp+8h] BYREF
  FxDmaTransactionBase *pDmaTrans; // [rsp+68h] [rbp+20h] BYREF

  pDmaTrans = 0LL;
  pFxDriverGlobals = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)DmaTransaction,
    0x1401u,
    (void **)&pDmaTrans,
    &pFxDriverGlobals);
  if ( (unsigned int)(pDmaTrans->m_DmaEnabler->m_Profile - 7) > 1 )
  {
    WPP_IFR_SF_qL(
      pFxDriverGlobals,
      2u,
      0xFu,
      0x1Du,
      WPP_FxDmaTransactionAPI_cpp_Traceguids,
      DmaTransaction,
      pDmaTrans->m_DmaEnabler->m_Profile);
    FxVerifierDbgBreakPoint(pFxDriverGlobals);
  }
  else
  {
    HIDWORD(pDmaTrans[1].m_Globals) = Offset;
  }
}
