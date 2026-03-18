/*
 * XREFs of ??_GFxQueryInterface@@QEAAPEAXI@Z @ 0x140073EA0
 * Callers:
 *     ?Dispose@FxPkgPnp@@MEAAEXZ @ 0x140073DF0 (-Dispose@FxPkgPnp@@MEAAEXZ.c)
 *     imp_WdfDeviceAddQueryInterface @ 0x140076330 (imp_WdfDeviceAddQueryInterface.c)
 * Callees:
 *     ??3FxStump@@SAXPEAX@Z @ 0x1400216E4 (--3FxStump@@SAXPEAX@Z.c)
 *     ??1FxQueryInterface@@QEAA@XZ @ 0x140073EC8 (--1FxQueryInterface@@QEAA@XZ.c)
 */

FxQueryInterface *__fastcall FxQueryInterface::`scalar deleting destructor'(FxQueryInterface *this)
{
  FxQueryInterface::~FxQueryInterface(this);
  FxStump::operator delete(this);
  return this;
}
