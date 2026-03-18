/*
 * XREFs of ??_GCDriverStoreCopy@@QEAAPEAXI@Z @ 0x14007AB20
 * Callers:
 *     ??1DXGK_VIRTUAL_GPU_PARAV@@EEAA@XZ @ 0x140215DA0 (--1DXGK_VIRTUAL_GPU_PARAV@@EEAA@XZ.c)
 *     ?VmBusGetDriverStoreFile@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140395F60 (-VmBusGetDriverStoreFile@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??1CDriverStoreCopy@@QEAA@XZ @ 0x1401CC420 (--1CDriverStoreCopy@@QEAA@XZ.c)
 */

CDriverStoreCopy *__fastcall CDriverStoreCopy::`scalar deleting destructor'(CDriverStoreCopy *this)
{
  CDriverStoreCopy::~CDriverStoreCopy(this);
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(this);
  return this;
}
