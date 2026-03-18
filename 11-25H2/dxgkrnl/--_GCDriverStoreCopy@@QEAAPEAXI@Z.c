/*
 * XREFs of ??_GCDriverStoreCopy@@QEAAPEAXI@Z @ 0x14007A640
 * Callers:
 *     ??1DXGK_VIRTUAL_GPU_PARAV@@EEAA@XZ @ 0x14020F6DC (--1DXGK_VIRTUAL_GPU_PARAV@@EEAA@XZ.c)
 *     ?VmBusGetDriverStoreFile@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1403A3100 (-VmBusGetDriverStoreFile@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??1CDriverStoreCopy@@QEAA@XZ @ 0x1401C7190 (--1CDriverStoreCopy@@QEAA@XZ.c)
 */

CDriverStoreCopy *__fastcall CDriverStoreCopy::`scalar deleting destructor'(CDriverStoreCopy *this)
{
  CDriverStoreCopy::~CDriverStoreCopy(this);
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(this);
  return this;
}
