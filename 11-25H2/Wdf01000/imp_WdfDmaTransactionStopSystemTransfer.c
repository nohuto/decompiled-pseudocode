/*
 * XREFs of imp_WdfDmaTransactionStopSystemTransfer @ 0x14007AC30
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qL @ 0x140010590 (WPP_IFR_SF_qL.c)
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140026530 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     ?StopTransfer@FxDmaSystemTransaction@@QEAAXXZ @ 0x14007ACC8 (-StopTransfer@FxDmaSystemTransaction@@QEAAXXZ.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832E8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall imp_WdfDmaTransactionStopSystemTransfer(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMATRANSACTION__ *DmaTransaction)
{
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+50h] [rbp+8h] BYREF
  FxDmaTransactionBase *pDmaTrans; // [rsp+60h] [rbp+18h] BYREF

  pDmaTrans = 0LL;
  pFxDriverGlobals = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)DmaTransaction,
    0x1401u,
    (void **)&pDmaTrans,
    &pFxDriverGlobals);
  if ( (unsigned int)(pDmaTrans->m_DmaEnabler->m_Profile - 7) <= 1 )
  {
    FxDmaSystemTransaction::StopTransfer((FxDmaSystemTransaction *)pDmaTrans);
  }
  else
  {
    WPP_IFR_SF_qL(
      pFxDriverGlobals,
      2u,
      0xFu,
      0x27u,
      WPP_FxDmaTransactionAPI_cpp_Traceguids,
      DmaTransaction,
      pDmaTrans->m_DmaEnabler->m_Profile);
    FxVerifierDbgBreakPoint(pFxDriverGlobals);
  }
}
