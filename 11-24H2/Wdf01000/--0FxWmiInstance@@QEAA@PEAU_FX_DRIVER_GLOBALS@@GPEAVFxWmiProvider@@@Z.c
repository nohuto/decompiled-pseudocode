/*
 * XREFs of ??0FxWmiInstance@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GPEAVFxWmiProvider@@@Z @ 0x140055C7C
 * Callers:
 *     ??0FxWmiInstanceExternal@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_WMI_INSTANCE_CONFIG@@PEAVFxWmiProvider@@@Z @ 0x140055BE4 (--0FxWmiInstanceExternal@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_WMI_INSTANCE_CONFIG@@PEAVFxWmiPr.c)
 *     ??0FxWmiInstanceInternal@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxWmiInstanceInternalCallbacks@@PEAVFxWmiProvider@@@Z @ 0x14008D984 (--0FxWmiInstanceInternal@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxWmiInstanceInternalCallbacks@@PEAVF.c)
 * Callees:
 *     ??0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140039854 (--0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x140049F80 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 */

void __fastcall FxWmiInstance::FxWmiInstance(
        FxWmiInstance *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        unsigned __int16 ObjectSize,
        FxWmiProvider *Provider)
{
  FxNonPagedObject::FxNonPagedObject(this, (_FX_DRIVER_GLOBALS *)0x1034, ObjectSize, FxDriverGlobals);
  this->__vftable = (FxWmiInstance_vtbl *)FxWmiInstance::`vftable';
  this->m_ListEntry.Blink = &this->m_ListEntry;
  this->m_ListEntry.Flink = &this->m_ListEntry;
  this->m_Provider = Provider;
  FxObject::AddRef(Provider, this, 37, "minkernel\\wdf\\framework\\kmdf\\src\\irphandlers\\wmi\\fxwmiinstance.cpp");
  this->m_ObjectFlags |= 0x800u;
}
