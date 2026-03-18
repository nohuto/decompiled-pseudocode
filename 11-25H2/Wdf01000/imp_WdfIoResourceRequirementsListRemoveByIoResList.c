/*
 * XREFs of imp_WdfIoResourceRequirementsListRemoveByIoResList @ 0x1400991F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1400135F0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     WPP_IFR_SF_q @ 0x14001FA38 (WPP_IFR_SF_q.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x140022C80 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140026530 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x140026620 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?RemoveEntry@FxCollectionInternal@@QEAAJPEAVFxCollectionEntry@@@Z @ 0x14004C728 (-RemoveEntry@FxCollectionInternal@@QEAAJPEAVFxCollectionEntry@@@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832E8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

void __fastcall imp_WdfIoResourceRequirementsListRemoveByIoResList(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIORESREQLIST__ *RequirementsList,
        WDFIORESLIST__ *IoResList)
{
  unsigned __int8 v5; // r8
  FxIoResReqList *v6; // rcx
  unsigned __int8 v7; // r8
  FxCollectionEntry *p_Blink; // rdx
  char v9; // bl
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+30h] [rbp-10h] BYREF
  FxIoResList *pResList; // [rsp+38h] [rbp-8h] BYREF
  unsigned __int8 irql; // [rsp+50h] [rbp+10h] BYREF
  FxIoResReqList *pList; // [rsp+68h] [rbp+28h] BYREF

  pFxDriverGlobals = 0LL;
  pList = 0LL;
  pResList = 0LL;
  irql = 0;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)RequirementsList,
    0x1037u,
    (void **)&pList,
    &pFxDriverGlobals);
  if ( (pList->m_AccessFlags & 2) != 0 )
  {
    FxObjectHandleGetPtr(pFxDriverGlobals, (unsigned __int64)IoResList, 0x1035u, (void **)&pResList);
    FxNonPagedObject::Lock(pList, &irql, v5);
    v6 = pList;
    v7 = (unsigned __int8)pResList;
    p_Blink = (FxCollectionEntry *)&pList->m_ListHead.Flink[-1].Blink;
    v9 = 0;
    while ( p_Blink != (FxCollectionEntry *)&pList->FxCollectionInternal )
    {
      if ( p_Blink->m_Object == pResList )
      {
        v9 = 1;
        pList->m_Changed = 1;
        FxCollectionInternal::RemoveEntry(&pList->FxCollectionInternal, p_Blink);
        v6 = pList;
        break;
      }
      p_Blink = (FxCollectionEntry *)&p_Blink->m_ListEntry.Flink[-1].Blink;
    }
    FxNonPagedObject::Unlock(v6, irql, v7);
    if ( v9 )
      pResList->DeleteObject(pResList);
  }
  else
  {
    WPP_IFR_SF_q(pFxDriverGlobals, 2u, 0xCu, 0xBu, WPP_FxResourceAPI_cpp_Traceguids, RequirementsList);
    FxVerifierDbgBreakPoint(pFxDriverGlobals);
  }
}
