/*
 * XREFs of ??1WDFDEVICE_INIT@@QEAA@XZ @ 0x1400409C0
 * Callers:
 *     ?CreateDevice@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@PEAE@Z @ 0x14003ED0C (-CreateDevice@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@PEAE@Z.c)
 *     ?AddDevice@FxDriver@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x14003F868 (-AddDevice@FxDriver@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ??_GWDFDEVICE_INIT@@QEAAPEAXI@Z @ 0x14007CE60 (--_GWDFDEVICE_INIT@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x14000EC70 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??3FxStump@@SAXPEAX@Z @ 0x1400216E4 (--3FxStump@@SAXPEAX@Z.c)
 *     ??_GFxIrpPreprocessInfo@@QEAAPEAXI@Z @ 0x14003EC78 (--_GFxIrpPreprocessInfo@@QEAAPEAXI@Z.c)
 *     ?_CleanupList@FxDeviceText@@SAHPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x140040B7C (-_CleanupList@FxDeviceText@@SAHPEAU_SINGLE_LIST_ENTRY@@@Z.c)
 *     ??1PdoInit@@QEAA@XZ @ 0x140040BAC (--1PdoInit@@QEAA@XZ.c)
 *     ??1WDFCXDEVICE_INIT@@QEAA@XZ @ 0x14009546C (--1WDFCXDEVICE_INIT@@QEAA@XZ.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

void __fastcall WDFDEVICE_INIT::~WDFDEVICE_INIT(WDFDEVICE_INIT *this)
{
  FxPnpStateCallback *PnpStateCallbacks; // rcx
  FxPowerStateCallback *PowerStateCallbacks; // rcx
  FxPowerPolicyStateCallback *PowerPolicyStateCallbacks; // rcx
  FxString *DeviceName; // rcx
  FxString *DeviceID; // rcx
  FxString *InstanceID; // rcx
  FxString *ContainerID; // rcx
  FxString *Sddl; // rcx
  FxIrpPreprocessInfo *PreprocessInfo; // rcx
  FxUserObject *CxContextObject; // rcx
  _LIST_ENTRY *p_CxDeviceInitListHead; // rsi
  WDFCXDEVICE_INIT *Flink; // rdi
  _LIST_ENTRY *v14; // rax

  PnpStateCallbacks = this->PnpPower.PnpStateCallbacks;
  if ( PnpStateCallbacks )
    FxPoolFree(PnpStateCallbacks);
  PowerStateCallbacks = this->PnpPower.PowerStateCallbacks;
  if ( PowerStateCallbacks )
    FxPoolFree(PowerStateCallbacks);
  PowerPolicyStateCallbacks = this->PnpPower.PowerPolicyStateCallbacks;
  if ( PowerPolicyStateCallbacks )
    FxPoolFree(PowerPolicyStateCallbacks);
  DeviceName = this->DeviceName;
  if ( DeviceName )
    DeviceName->DeleteObject(DeviceName);
  DeviceID = this->Pdo.DeviceID;
  if ( DeviceID )
    DeviceID->DeleteObject(DeviceID);
  InstanceID = this->Pdo.InstanceID;
  if ( InstanceID )
    InstanceID->DeleteObject(InstanceID);
  ContainerID = this->Pdo.ContainerID;
  if ( ContainerID )
    ContainerID->DeleteObject(ContainerID);
  FxDeviceText::_CleanupList(&this->Pdo.DeviceText);
  Sddl = this->Security.Sddl;
  if ( Sddl )
    Sddl->DeleteObject(Sddl);
  PreprocessInfo = this->PreprocessInfo;
  if ( PreprocessInfo )
    FxIrpPreprocessInfo::`scalar deleting destructor'(PreprocessInfo);
  CxContextObject = this->CxContextObject;
  if ( CxContextObject )
    CxContextObject->DeleteObject(CxContextObject);
  p_CxDeviceInitListHead = &this->CxDeviceInitListHead;
  while ( 1 )
  {
    Flink = (WDFCXDEVICE_INIT *)p_CxDeviceInitListHead->Flink;
    if ( p_CxDeviceInitListHead->Flink == p_CxDeviceInitListHead )
      break;
    if ( Flink->ListEntry.Blink != p_CxDeviceInitListHead
      || (v14 = Flink->ListEntry.Flink, (WDFCXDEVICE_INIT *)Flink->ListEntry.Flink->Blink != Flink) )
    {
      __fastfail(3u);
    }
    p_CxDeviceInitListHead->Flink = v14;
    v14->Blink = p_CxDeviceInitListHead;
    Flink->ListEntry.Blink = (_LIST_ENTRY *)Flink;
    Flink->ListEntry.Flink = (_LIST_ENTRY *)Flink;
    WDFCXDEVICE_INIT::~WDFCXDEVICE_INIT(Flink);
    FxStump::operator delete(Flink);
  }
  PdoInit::~PdoInit(&this->Pdo);
}
