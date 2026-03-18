/*
 * XREFs of ??_GFxRelatedDeviceList@@QEAAPEAXI@Z @ 0x1400A2820
 * Callers:
 *     ??1FxPkgPdo@@UEAA@XZ @ 0x14004B938 (--1FxPkgPdo@@UEAA@XZ.c)
 *     ??1FxPkgPnp@@MEAA@XZ @ 0x14004BB3C (--1FxPkgPnp@@MEAA@XZ.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x140034320 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxTransactionedList@@QEAA@XZ @ 0x14004D84C (--1FxTransactionedList@@QEAA@XZ.c)
 */

FxRelatedDeviceList *__fastcall FxRelatedDeviceList::`scalar deleting destructor'(FxRelatedDeviceList *this)
{
  this->m_ListLock.m_DbgFlagIsInitialized = 0;
  FxTransactionedList::~FxTransactionedList(this);
  FxPoolFree(this);
  return this;
}
