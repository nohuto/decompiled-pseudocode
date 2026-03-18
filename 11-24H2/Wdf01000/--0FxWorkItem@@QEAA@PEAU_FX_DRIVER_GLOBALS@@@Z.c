/*
 * XREFs of ??0FxWorkItem@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400399EC
 * Callers:
 *     ?_Create@FxWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_WORKITEM_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@PEAPEAUWDFWORKITEM__@@@Z @ 0x140039938 (-_Create@FxWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_WORKITEM_CONFIG@@PEAU_WDF_OBJECT_ATTRIB.c)
 * Callees:
 *     ??0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140039854 (--0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxWorkItem::FxWorkItem(FxWorkItem *this, _FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  FxNonPagedObject::FxNonPagedObject(this, (_FX_DRIVER_GLOBALS *)0x1025, 0xD0u, FxDriverGlobals);
  this->__vftable = (FxWorkItem_vtbl *)FxWorkItem::`vftable';
  this->m_WorkItem.m_WorkItem = 0LL;
  this->m_WorkItemCompleted.m_Event.m_DbgFlagIsInitialized = 0;
  KeInitializeEvent(&this->m_WorkItemCompleted.m_Event.m_Event, NotificationEvent, 1u);
  this->m_WorkItemCompleted.m_Event.m_DbgFlagIsInitialized = 1;
  this->m_Object = 0LL;
  this->m_Callback = 0LL;
  this->m_CallbackLock = 0LL;
  this->m_CallbackLockObject = 0LL;
  *(_WORD *)&this->m_RunningDown = 0;
  this->m_WorkItemThread = 0LL;
  this->m_WorkItemRunningCount = 0;
  this->m_ObjectFlags |= 0x811u;
}
