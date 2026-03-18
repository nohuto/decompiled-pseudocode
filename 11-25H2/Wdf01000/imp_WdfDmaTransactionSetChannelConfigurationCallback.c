/*
 * XREFs of imp_WdfDmaTransactionSetChannelConfigurationCallback @ 0x140073180
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qL @ 0x140010590 (WPP_IFR_SF_qL.c)
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140026530 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832E8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall imp_WdfDmaTransactionSetChannelConfigurationCallback(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMATRANSACTION__ *DmaTransaction,
        unsigned __int8 (__fastcall *ConfigureRoutine)(WDFDMATRANSACTION__ *, WDFDEVICE__ *, void *, _MDL *, unsigned __int64, unsigned __int64),
        FxObject *ConfigureContext)
{
  FxDmaTransactionBase *v7; // rcx
  FxDmaTransactionBase *pDmaTrans; // [rsp+40h] [rbp-18h] BYREF
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+60h] [rbp+8h] BYREF

  pDmaTrans = 0LL;
  pFxDriverGlobals = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)DmaTransaction,
    0x1401u,
    (void **)&pDmaTrans,
    &pFxDriverGlobals);
  v7 = pDmaTrans;
  if ( (unsigned int)(pDmaTrans->m_DmaEnabler->m_Profile - 7) > 1 )
  {
    WPP_IFR_SF_qL(
      pFxDriverGlobals,
      2u,
      0xFu,
      0x1Bu,
      WPP_FxDmaTransactionAPI_cpp_Traceguids,
      DmaTransaction,
      pDmaTrans->m_DmaEnabler->m_Profile);
    FxVerifierDbgBreakPoint(pFxDriverGlobals);
  }
  else
  {
    pDmaTrans[1].m_SpinLock.m_Lock = (unsigned __int64)ConfigureRoutine;
    v7[1].m_ParentObject = ConfigureContext;
  }
}
