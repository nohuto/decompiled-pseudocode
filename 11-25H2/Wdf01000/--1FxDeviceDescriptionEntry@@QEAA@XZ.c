/*
 * XREFs of ??1FxDeviceDescriptionEntry@@QEAA@XZ @ 0x140081050
 * Callers:
 *     ?DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x140019AD4 (-DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?EndScan@FxChildList@@QEAAXPEAK@Z @ 0x14001DE8C (-EndScan@FxChildList@@QEAAXPEAK@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

void __fastcall FxDeviceDescriptionEntry::~FxDeviceDescriptionEntry(FxDeviceDescriptionEntry *this)
{
  this->m_DeviceList->Release(
    this->m_DeviceList,
    this,
    77,
    "minkernel\\wdf\\framework\\kmdf\\src\\core\\fxchildlist.cpp");
}
