/*
 * XREFs of ?QueryForInterface@FxDeviceBase@@QEAAJPEBU_GUID@@PEAU_INTERFACE@@GGPEAXPEAU_DEVICE_OBJECT@@@Z @ 0x140041174
 * Callers:
 *     ?QueryForReenumerationInterface@FxPkgFdo@@EEAAJXZ @ 0x1400407D0 (-QueryForReenumerationInterface@FxPkgFdo@@EEAAJXZ.c)
 *     imp_WdfFdoQueryForInterface @ 0x140040A60 (imp_WdfFdoQueryForInterface.c)
 *     ?QuerySecureDeviceToken@FxCompanionTarget@@UEAAJPEA_K@Z @ 0x14008F5C0 (-QuerySecureDeviceToken@FxCompanionTarget@@UEAAJPEA_K@Z.c)
 *     ?QueryForPowerThread@FxPkgFdo@@EEAAJXZ @ 0x1400A70D0 (-QueryForPowerThread@FxPkgFdo@@EEAAJXZ.c)
 * Callees:
 *     ?_QueryForInterface@FxQueryInterface@@SAJPEAU_DEVICE_OBJECT@@PEBU_GUID@@PEAU_INTERFACE@@GGPEAX@Z @ 0x14004120C (-_QueryForInterface@FxQueryInterface@@SAJPEAU_DEVICE_OBJECT@@PEBU_GUID@@PEAU_INTERFACE@@GGPEAX@Z.c)
 *     ?GetAttachedDeviceReference@FxDeviceBase@@QEAAPEAU_DEVICE_OBJECT@@XZ @ 0x1400412C0 (-GetAttachedDeviceReference@FxDeviceBase@@QEAAPEAU_DEVICE_OBJECT@@XZ.c)
 */

__int64 __fastcall FxDeviceBase::QueryForInterface(
        FxDeviceBase *this,
        const _GUID *InterfaceType,
        _INTERFACE *Interface,
        unsigned __int16 Size,
        unsigned __int16 Version,
        void *InterfaceSpecificData,
        _DEVICE_OBJECT *TargetDevice)
{
  _DEVICE_OBJECT *AttachedDeviceReference; // rdi
  unsigned int v11; // ebx

  AttachedDeviceReference = TargetDevice;
  if ( TargetDevice )
    ObfReferenceObject(TargetDevice);
  else
    AttachedDeviceReference = FxDeviceBase::GetAttachedDeviceReference(this);
  v11 = FxQueryInterface::_QueryForInterface(
          AttachedDeviceReference,
          InterfaceType,
          Interface,
          Size,
          Version,
          InterfaceSpecificData);
  ObfDereferenceObject(AttachedDeviceReference);
  return v11;
}
