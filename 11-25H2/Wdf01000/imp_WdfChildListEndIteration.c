/*
 * XREFs of imp_WdfChildListEndIteration @ 0x140055990
 * Callers:
 *     <none>
 * Callees:
 *     ?EndIteration@FxChildList@@QEAAXPEAU_WDF_CHILD_LIST_ITERATOR@@@Z @ 0x14001DC9C (-EndIteration@FxChildList@@QEAAXPEAU_WDF_CHILD_LIST_ITERATOR@@@Z.c)
 *     WPP_IFR_SF_q @ 0x14001FA38 (WPP_IFR_SF_q.c)
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140026530 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     WPP_IFR_SF_DDd @ 0x140055CD8 (WPP_IFR_SF_DDd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008306C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832E8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall imp_WdfChildListEndIteration(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCHILDLIST__ *DeviceList,
        _WDF_CHILD_LIST_ITERATOR *Iterator)
{
  unsigned __int8 v5; // dl
  _FX_DRIVER_GLOBALS *v6; // rbx
  unsigned int _a2; // eax
  void *retaddr; // [rsp+58h] [rbp+0h]
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+60h] [rbp+8h] BYREF
  FxChildList *pList; // [rsp+70h] [rbp+18h] BYREF

  pList = 0LL;
  pFxDriverGlobals = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)DeviceList,
    0x1029u,
    (void **)&pList,
    &pFxDriverGlobals);
  v6 = pFxDriverGlobals;
  if ( pFxDriverGlobals->FxVerboseOn )
    WPP_IFR_SF_q(pFxDriverGlobals, 5u, 0xCu, 0x1Eu, WPP_FxChildListAPI_cpp_Traceguids, DeviceList);
  if ( !Iterator )
    FxVerifierNullBugCheck(v6, retaddr);
  if ( Iterator->Size == 40 )
  {
    _a2 = Iterator->Flags;
    if ( (_a2 & 0xFFFFFFF8) == 0 )
    {
      FxChildList::EndIteration(pList, Iterator);
      return;
    }
    WPP_IFR_SF_DDd(v6, v5, 0xCu, 0x20u, WPP_FxChildListAPI_cpp_Traceguids, _a2, 7u, -1073741811);
  }
  else
  {
    WPP_IFR_SF_DDd(v6, v5, 0xCu, 0x1Fu, WPP_FxChildListAPI_cpp_Traceguids, Iterator->Size, 0x28u, -1073741820);
  }
  FxVerifierDbgBreakPoint(v6);
}
