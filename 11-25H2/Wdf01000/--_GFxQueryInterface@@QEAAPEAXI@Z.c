/*
 * XREFs of ??_GFxQueryInterface@@QEAAPEAXI@Z @ 0x140074470
 * Callers:
 *     ?Dispose@FxPkgPnp@@MEAAEXZ @ 0x1400743C0 (-Dispose@FxPkgPnp@@MEAAEXZ.c)
 *     imp_WdfDeviceAddQueryInterface @ 0x140076AB0 (imp_WdfDeviceAddQueryInterface.c)
 * Callees:
 *     ??3FxStump@@SAXPEAX@Z @ 0x140008FB4 (--3FxStump@@SAXPEAX@Z.c)
 *     ??1FxQueryInterface@@QEAA@XZ @ 0x140074498 (--1FxQueryInterface@@QEAA@XZ.c)
 */

FxQueryInterface *__fastcall FxQueryInterface::`scalar deleting destructor'(FxQueryInterface *this)
{
  FxQueryInterface::~FxQueryInterface(this);
  FxStump::operator delete(this);
  return this;
}
