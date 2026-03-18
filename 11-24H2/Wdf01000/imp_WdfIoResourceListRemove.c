/*
 * XREFs of imp_WdfIoResourceListRemove @ 0x140098D50
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140016BF0 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     WPP_IFR_SF_qdd @ 0x14005F07C (WPP_IFR_SF_qdd.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832D8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?RemoveAndDelete@FxResourceCollection@@QEAAEK@Z @ 0x14009A964 (-RemoveAndDelete@FxResourceCollection@@QEAAEK@Z.c)
 */

void __fastcall imp_WdfIoResourceListRemove(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIORESLIST__ *ResourceList,
        unsigned int Index)
{
  FxIoResList *pList; // [rsp+50h] [rbp+8h] BYREF
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+68h] [rbp+20h] BYREF

  pFxDriverGlobals = 0LL;
  pList = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)ResourceList,
    0x1035u,
    (void **)&pList,
    &pFxDriverGlobals);
  if ( FxResourceCollection::RemoveAndDelete(pList, Index) )
  {
    pList->m_OwningList->m_Changed = 1;
  }
  else
  {
    WPP_IFR_SF_qdd(
      pFxDriverGlobals,
      2u,
      0xCu,
      0xEu,
      WPP_FxResourceAPI_cpp_Traceguids,
      ResourceList,
      Index,
      pList->m_Count);
    FxVerifierDbgBreakPoint(pFxDriverGlobals);
  }
}
