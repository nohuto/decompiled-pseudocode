/*
 * XREFs of imp_WdfCmResourceListRemove @ 0x1400988E0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140026530 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     WPP_IFR_SF_qdd @ 0x140061F7C (WPP_IFR_SF_qdd.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832E8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?RemoveAndDelete@FxResourceCollection@@QEAAEK@Z @ 0x14009A888 (-RemoveAndDelete@FxResourceCollection@@QEAAEK@Z.c)
 */

void __fastcall imp_WdfCmResourceListRemove(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCMRESLIST__ *List,
        unsigned int Index)
{
  FxCmResList *pList; // [rsp+50h] [rbp+8h] BYREF
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+68h] [rbp+20h] BYREF

  pFxDriverGlobals = 0LL;
  pList = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)List,
    0x1036u,
    (void **)&pList,
    &pFxDriverGlobals);
  if ( !FxResourceCollection::RemoveAndDelete(pList, Index) )
  {
    WPP_IFR_SF_qdd(pFxDriverGlobals, 2u, 0xCu, 0x10u, WPP_FxResourceAPI_cpp_Traceguids, List, Index, pList->m_Count);
    FxVerifierDbgBreakPoint(pFxDriverGlobals);
  }
}
