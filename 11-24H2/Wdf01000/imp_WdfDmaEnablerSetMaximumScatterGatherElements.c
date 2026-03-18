/*
 * XREFs of imp_WdfDmaEnablerSetMaximumScatterGatherElements @ 0x1400A2020
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140016BF0 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x14001F580 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     WPP_IFR_SF_q @ 0x140037258 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_PqD @ 0x1400A18BC (WPP_IFR_SF_PqD.c)
 */

void __fastcall imp_WdfDmaEnablerSetMaximumScatterGatherElements(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMAENABLER__ *DmaEnabler,
        unsigned __int64 MaximumElements)
{
  unsigned __int8 v5; // dl
  unsigned int v6; // r8d
  unsigned __int16 v7; // r9
  const _GUID *traceGuid; // [rsp+20h] [rbp-28h]
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+50h] [rbp+8h] BYREF
  FxDmaEnabler *pDmaEnabler; // [rsp+68h] [rbp+20h] BYREF

  pFxDriverGlobals = 0LL;
  pDmaEnabler = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)DmaEnabler,
    0x1400u,
    (void **)&pDmaEnabler,
    &pFxDriverGlobals);
  if ( (int)FxVerifierCheckIrqlLevel(pFxDriverGlobals, 0) >= 0 )
  {
    if ( MaximumElements )
    {
      if ( MaximumElements > 0xFFFFFFFF )
      {
        WPP_IFR_SF_PqD(pFxDriverGlobals, v5, v6, v7, traceGuid, MaximumElements, DmaEnabler);
        LODWORD(MaximumElements) = -1;
      }
      pDmaEnabler->m_MaxSGElements = MaximumElements;
    }
    else
    {
      WPP_IFR_SF_q(pFxDriverGlobals, 2u, 0xFu, 0x14u, WPP_FxDmaEnablerAPI_cpp_Traceguids, DmaEnabler);
    }
  }
}
