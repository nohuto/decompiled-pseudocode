/*
 * XREFs of ??_GFxDeviceInterface@@QEAAPEAXI@Z @ 0x14003E7E8
 * Callers:
 *     ??1FxPkgPnp@@MEAA@XZ @ 0x14003FD1C (--1FxPkgPnp@@MEAA@XZ.c)
 *     imp_WdfDeviceCreateDeviceInterface @ 0x140046D00 (imp_WdfDeviceCreateDeviceInterface.c)
 * Callees:
 *     ??3FxStump@@SAXPEAX@Z @ 0x1400216E4 (--3FxStump@@SAXPEAX@Z.c)
 *     ??1FxDeviceInterface@@QEAA@XZ @ 0x14003E810 (--1FxDeviceInterface@@QEAA@XZ.c)
 */

FxDeviceInterface *__fastcall FxDeviceInterface::`scalar deleting destructor'(FxDeviceInterface *this)
{
  FxDeviceInterface::~FxDeviceInterface(this);
  FxStump::operator delete(this);
  return this;
}
