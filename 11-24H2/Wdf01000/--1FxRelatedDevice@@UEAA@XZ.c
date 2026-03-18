/*
 * XREFs of ??1FxRelatedDevice@@UEAA@XZ @ 0x1400AC218
 * Callers:
 *     ??_EFxRelatedDevice@@UEAAPEAXI@Z @ 0x1400AC260 (--_EFxRelatedDevice@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1FxObject@@UEAA@XZ @ 0x140052A60 (--1FxObject@@UEAA@XZ.c)
 */

void __fastcall FxRelatedDevice::~FxRelatedDevice(FxRelatedDevice *this)
{
  this->__vftable = (FxRelatedDevice_vtbl *)FxRelatedDevice::`vftable';
  ObfDereferenceObject(this->m_DeviceObject);
  FxObject::~FxObject(this);
}
