/*
 * XREFs of imp_WdfDmaTransactionFreeResources @ 0x140086A80
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140016BF0 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     WPP_IFR_SF_qL @ 0x140028CC0 (WPP_IFR_SF_qL.c)
 *     WPP_IFR_SF_qq @ 0x14002A1A4 (WPP_IFR_SF_qq.c)
 *     ?GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z @ 0x140049CCC (-GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832D8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?ReleaseAdapter@FxDmaPacketTransaction@@QEAAXXZ @ 0x140087528 (-ReleaseAdapter@FxDmaPacketTransaction@@QEAAXXZ.c)
 */

void __fastcall imp_WdfDmaTransactionFreeResources(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMATRANSACTION__ *DmaTransaction)
{
  FxDmaEnabler *m_DmaEnabler; // rcx
  unsigned int m_Profile; // eax
  int v5; // edx
  __int64 v6; // rcx
  FxDmaPacketTransaction *v7; // r8
  __int16 v8; // ax
  const void *_a2; // rcx
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+50h] [rbp+8h] BYREF
  FxDmaPacketTransaction *pDmaTrans; // [rsp+60h] [rbp+18h] BYREF

  pDmaTrans = 0LL;
  pFxDriverGlobals = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)DmaTransaction,
    0x1401u,
    (void **)&pDmaTrans,
    &pFxDriverGlobals);
  m_DmaEnabler = pDmaTrans->m_DmaEnabler;
  m_Profile = m_DmaEnabler->m_Profile;
  if ( m_Profile <= 8 && (v5 = 394, _bittest(&v5, m_Profile)) )
  {
    if ( FxDmaEnabler::GetDmaDescription(m_DmaEnabler, WdfDmaDirectionReadFromDevice)->m_SimplexAdapterInfo.DeviceDescription.Version == 3 )
    {
      FxDmaPacketTransaction::ReleaseAdapter(v7);
      return;
    }
    v8 = *(_WORD *)(v6 + 10);
    _a2 = (const void *)(v6 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v8 )
      _a2 = 0LL;
    WPP_IFR_SF_qq(pFxDriverGlobals, 2u, 0xFu, 0x25u, WPP_FxDmaTransactionAPI_cpp_Traceguids, DmaTransaction, _a2);
  }
  else
  {
    WPP_IFR_SF_qL(pFxDriverGlobals, 2u, 0xFu, 0x24u, WPP_FxDmaTransactionAPI_cpp_Traceguids, DmaTransaction, m_Profile);
  }
  FxVerifierDbgBreakPoint(pFxDriverGlobals);
}
