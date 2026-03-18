/*
 * XREFs of imp_WdfDmaTransactionSetSingleTransferRequirement @ 0x1400870D0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140016BF0 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x14001F580 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     WPP_IFR_SF_qq @ 0x14002A1A4 (WPP_IFR_SF_qq.c)
 *     ?GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z @ 0x140049CCC (-GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832D8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_ql @ 0x140086654 (WPP_IFR_SF_ql.c)
 */

void __fastcall imp_WdfDmaTransactionSetSingleTransferRequirement(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMATRANSACTION__ *DmaTransaction,
        unsigned __int8 RequireSingleTransfer)
{
  __int64 v5; // rcx
  __int64 v6; // r8
  __int16 v7; // ax
  const void *_a2; // rcx
  int v9; // ecx
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+50h] [rbp+8h] BYREF
  FxDmaTransactionBase *pDmaTrans; // [rsp+68h] [rbp+20h] BYREF

  pFxDriverGlobals = 0LL;
  pDmaTrans = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)DmaTransaction,
    0x1401u,
    (void **)&pDmaTrans,
    &pFxDriverGlobals);
  if ( (int)FxVerifierCheckIrqlLevel(pFxDriverGlobals, 2u) >= 0 )
  {
    if ( FxDmaEnabler::GetDmaDescription(pDmaTrans->m_DmaEnabler, WdfDmaDirectionReadFromDevice)->m_SimplexAdapterInfo.DeviceDescription.Version != 3 )
    {
      v7 = *(_WORD *)(v5 + 10);
      _a2 = (const void *)(v5 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v7 )
        _a2 = 0LL;
      WPP_IFR_SF_qq(pFxDriverGlobals, 2u, 0xFu, 0x19u, WPP_FxDmaTransactionAPI_cpp_Traceguids, DmaTransaction, _a2);
      goto LABEL_6;
    }
    v9 = *(_DWORD *)(v6 + 120);
    if ( (unsigned int)(v9 - 1) > 1 && v9 != 7 )
    {
      WPP_IFR_SF_ql(pFxDriverGlobals, 2u, 0xFu, 0x1Au, WPP_FxDmaTransactionAPI_cpp_Traceguids, DmaTransaction, v9);
LABEL_6:
      FxVerifierDbgBreakPoint(pFxDriverGlobals);
      return;
    }
    *(_BYTE *)(v6 + 248) = RequireSingleTransfer;
  }
}
