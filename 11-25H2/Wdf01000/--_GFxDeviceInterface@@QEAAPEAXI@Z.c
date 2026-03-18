/*
 * XREFs of ??_GFxDeviceInterface@@QEAAPEAXI@Z @ 0x14004A608
 * Callers:
 *     ??1FxPkgPnp@@MEAA@XZ @ 0x14004BB3C (--1FxPkgPnp@@MEAA@XZ.c)
 *     imp_WdfDeviceCreateDeviceInterface @ 0x140053AA0 (imp_WdfDeviceCreateDeviceInterface.c)
 * Callees:
 *     ??3FxStump@@SAXPEAX@Z @ 0x140008FB4 (--3FxStump@@SAXPEAX@Z.c)
 *     ??1FxDeviceInterface@@QEAA@XZ @ 0x14004A630 (--1FxDeviceInterface@@QEAA@XZ.c)
 */

FxDeviceInterface *__fastcall FxDeviceInterface::`scalar deleting destructor'(FxDeviceInterface *this)
{
  FxDeviceInterface::~FxDeviceInterface(this);
  FxStump::operator delete(this);
  return this;
}
