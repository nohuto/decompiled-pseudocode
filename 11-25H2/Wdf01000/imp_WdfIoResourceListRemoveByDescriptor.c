/*
 * XREFs of imp_WdfIoResourceListRemoveByDescriptor @ 0x140098DC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1400135F0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     WPP_IFR_SF_q @ 0x14001FA38 (WPP_IFR_SF_q.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x140022C80 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140026530 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     ?RemoveEntry@FxCollectionInternal@@QEAAJPEAVFxCollectionEntry@@@Z @ 0x14004C728 (-RemoveEntry@FxCollectionInternal@@QEAAJPEAVFxCollectionEntry@@@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008306C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832E8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

void __fastcall imp_WdfIoResourceListRemoveByDescriptor(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIORESLIST__ *ResourceList,
        _IO_RESOURCE_DESCRIPTOR *Descriptor)
{
  unsigned __int8 v5; // r8
  unsigned __int8 v6; // r8
  _LIST_ENTRY *Flink; // rbx
  FxCollectionInternal *v8; // rsi
  FxCollectionEntry *p_Blink; // rbx
  FxObject *m_Object; // rdi
  unsigned __int64 retaddr; // [rsp+58h] [rbp+28h]
  unsigned __int8 irql; // [rsp+60h] [rbp+30h] BYREF
  FxIoResList *pList; // [rsp+70h] [rbp+40h] BYREF
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+78h] [rbp+48h] BYREF

  pFxDriverGlobals = 0LL;
  pList = 0LL;
  irql = 0;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)ResourceList,
    0x1035u,
    (void **)&pList,
    &pFxDriverGlobals);
  if ( !Descriptor )
    FxVerifierNullBugCheck(pFxDriverGlobals, retaddr);
  if ( (pList->m_AccessFlags & 2) != 0 )
  {
    FxNonPagedObject::Lock(pList, &irql, v5);
    Flink = pList->m_ListHead.Flink;
    v8 = &pList->FxCollectionInternal;
    while ( 1 )
    {
      p_Blink = (FxCollectionEntry *)&Flink[-1].Blink;
      m_Object = 0LL;
      if ( p_Blink == (FxCollectionEntry *)v8 )
        break;
      m_Object = p_Blink->m_Object;
      if ( RtlCompareMemory(&p_Blink->m_Object[1], Descriptor, 0x20uLL) == 32 )
      {
        pList->m_Changed = 1;
        pList->m_OwningList->m_Changed = 1;
        FxCollectionInternal::RemoveEntry(&pList->FxCollectionInternal, p_Blink);
        break;
      }
      Flink = p_Blink->m_ListEntry.Flink;
    }
    FxNonPagedObject::Unlock(pList, irql, v6);
    if ( m_Object )
      m_Object->DeleteObject(m_Object);
  }
  else
  {
    WPP_IFR_SF_q(pFxDriverGlobals, 2u, 0xCu, 0xFu, WPP_FxResourceAPI_cpp_Traceguids, ResourceList);
    FxVerifierDbgBreakPoint(pFxDriverGlobals);
  }
}
