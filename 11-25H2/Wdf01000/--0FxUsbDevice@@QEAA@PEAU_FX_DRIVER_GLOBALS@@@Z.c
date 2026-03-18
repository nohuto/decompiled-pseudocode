/*
 * XREFs of ??0FxUsbDevice@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x14009E610
 * Callers:
 *     FxUsbTargetDeviceCreate @ 0x140059F74 (FxUsbTargetDeviceCreate.c)
 * Callees:
 *     ??0FxWaitLockInternal@@QEAA@XZ @ 0x1400521E4 (--0FxWaitLockInternal@@QEAA@XZ.c)
 *     ??0FxIoTarget@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GG@Z @ 0x14007A9E4 (--0FxIoTarget@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GG@Z.c)
 */

void __fastcall FxUsbDevice::FxUsbDevice(FxUsbDevice *this, _FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  FxIoTarget::FxIoTarget(this, FxDriverGlobals, 0x1F0u, 0x1202u);
  this->__vftable = (FxUsbDevice_vtbl *)FxUsbDevice::`vftable';
  FxWaitLockInternal::FxWaitLockInternal(&this->m_InterfaceIterationLock);
  *(_OWORD *)&this->m_DeviceDescriptor.bLength = 0LL;
  *(_WORD *)&this->m_DeviceDescriptor.iSerialNumber = 0;
  this->m_UsbdVersionInformation = 0LL;
  *(_DWORD *)&this->m_OnUSBD = 0;
  this->m_Interfaces = 0LL;
  *(_QWORD *)&this->m_HcdPortCapabilities = 0LL;
  this->m_ControlPipe = 0LL;
  this->m_QueryBusTime = 0LL;
  this->m_BusInterfaceContext = 0LL;
  this->m_BusInterfaceDereference = 0LL;
  this->m_ConfigHandle = 0LL;
  this->m_ConfigDescriptor = 0LL;
  this->m_USBDHandle = 0LL;
  this->m_SspIsochPipeFlags = 0;
  this->m_ObjectFlags |= 0x800u;
}
