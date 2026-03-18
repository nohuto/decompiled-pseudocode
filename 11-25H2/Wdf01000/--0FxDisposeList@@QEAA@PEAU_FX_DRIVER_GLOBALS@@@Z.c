/*
 * XREFs of ??0FxDisposeList@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x14004E344
 * Callers:
 *     ?_Create@FxDisposeList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z @ 0x14004E2AC (-_Create@FxDisposeList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z.c)
 * Callees:
 *     ??0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140022034 (--0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxDisposeList::FxDisposeList(FxDisposeList *this, _FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  FxNonPagedObject::FxNonPagedObject(this, (_FX_DRIVER_GLOBALS *)0x1033, 0, FxDriverGlobals);
  this->__vftable = (FxDisposeList_vtbl *)FxDisposeList::`vftable';
  this->m_List.Next = 0LL;
  this->m_ListEnd = &this->m_List.Next;
  this->m_SystemWorkItem = 0LL;
  this->m_WorkItemThread = 0LL;
}
