/*
 * XREFs of imp_WdfChildListUpdateAllChildDescriptionsAsPresent @ 0x14008B670
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_q @ 0x14001FA38 (WPP_IFR_SF_q.c)
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140026530 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     ?UpdateAllAsPresent@FxChildList@@QEAAXPEAK@Z @ 0x14008C7E0 (-UpdateAllAsPresent@FxChildList@@QEAAXPEAK@Z.c)
 */

void __fastcall imp_WdfChildListUpdateAllChildDescriptionsAsPresent(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCHILDLIST__ *DeviceList)
{
  unsigned int *v3; // rdx
  _FX_DRIVER_GLOBALS *v4; // rbx
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+40h] [rbp+8h] BYREF
  FxChildList *pList; // [rsp+50h] [rbp+18h] BYREF

  pFxDriverGlobals = 0LL;
  pList = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)DeviceList,
    0x1029u,
    (void **)&pList,
    &pFxDriverGlobals);
  v4 = pFxDriverGlobals;
  if ( pFxDriverGlobals->FxVerboseOn )
    WPP_IFR_SF_q(pFxDriverGlobals, 5u, 0xCu, 0x2Au, WPP_FxChildListAPI_cpp_Traceguids, DeviceList);
  FxChildList::UpdateAllAsPresent(pList, v3);
  if ( v4->FxVerboseOn )
    WPP_IFR_SF_q(v4, 5u, 0xCu, 0x2Bu, WPP_FxChildListAPI_cpp_Traceguids, DeviceList);
}
