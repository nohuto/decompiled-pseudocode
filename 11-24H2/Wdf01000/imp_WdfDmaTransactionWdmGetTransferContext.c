/*
 * XREFs of imp_WdfDmaTransactionWdmGetTransferContext @ 0x1400871E0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140016BF0 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     WPP_IFR_SF_qq @ 0x14002A1A4 (WPP_IFR_SF_qq.c)
 *     ?GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z @ 0x140049CCC (-GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832D8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_ql @ 0x140086654 (WPP_IFR_SF_ql.c)
 */

void *__fastcall imp_WdfDmaTransactionWdmGetTransferContext(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMATRANSACTION__ *DmaTransaction)
{
  __int64 v3; // rcx
  __int64 v4; // r8
  __int16 v5; // ax
  const void *_a2; // rcx
  unsigned int v7; // edx
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
  if ( FxDmaEnabler::GetDmaDescription(pDmaTrans->m_DmaEnabler, WdfDmaDirectionReadFromDevice)->m_SimplexAdapterInfo.DeviceDescription.Version == 3 )
  {
    v7 = *(_DWORD *)(v4 + 120);
    if ( v7 > 1 && v7 - 7 > 1 )
      return *(void **)(v4 + 168);
    WPP_IFR_SF_ql(
      pFxDriverGlobals,
      2u,
      0xFu,
      0x1Fu,
      WPP_FxDmaTransactionAPI_cpp_Traceguids,
      DmaTransaction,
      *(_DWORD *)(v4 + 120));
  }
  else
  {
    v5 = *(_WORD *)(v3 + 10);
    _a2 = (const void *)(v3 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v5 )
      _a2 = 0LL;
    WPP_IFR_SF_qq(pFxDriverGlobals, 2u, 0xFu, 0x1Eu, WPP_FxDmaTransactionAPI_cpp_Traceguids, DmaTransaction, _a2);
  }
  FxVerifierDbgBreakPoint(pFxDriverGlobals);
  return 0LL;
}
