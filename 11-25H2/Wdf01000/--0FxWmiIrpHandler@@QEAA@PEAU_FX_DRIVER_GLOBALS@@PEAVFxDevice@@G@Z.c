/*
 * XREFs of ??0FxWmiIrpHandler@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@G@Z @ 0x14004ED28
 * Callers:
 *     ?Initialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x14004E398 (-Initialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 * Callees:
 *     ??0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140022034 (--0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ??0FxCREvent@@QEAA@E@Z @ 0x140039E90 (--0FxCREvent@@QEAA@E@Z.c)
 */

void __fastcall FxWmiIrpHandler::FxWmiIrpHandler(
        FxWmiIrpHandler *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxDevice *Device,
        unsigned __int16 a4)
{
  unsigned __int8 v6; // dl

  FxNonPagedObject::FxNonPagedObject(this, (_FX_DRIVER_GLOBALS *)0x1103, 0, FxDriverGlobals);
  this->m_DeviceBase = Device;
  this->__vftable = (FxWmiIrpHandler_vtbl *)FxWmiIrpHandler::`vftable';
  *(_QWORD *)&this->m_NumProviders = 0LL;
  this->m_WorkItem = 0LL;
  this->m_UpdateCount = 1;
  FxCREvent::FxCREvent(&this->m_UpdateEvent, v6);
  this->m_WorkItemEvent = 0LL;
  this->m_WorkItemQueued = 0;
  this->m_ProvidersListHead.Blink = &this->m_ProvidersListHead;
  this->m_ProvidersListHead.Flink = &this->m_ProvidersListHead;
}
