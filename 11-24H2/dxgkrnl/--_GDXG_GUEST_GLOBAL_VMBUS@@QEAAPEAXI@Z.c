/*
 * XREFs of ??_GDXG_GUEST_GLOBAL_VMBUS@@QEAAPEAXI@Z @ 0x140073260
 * Callers:
 *     ??1DXGGLOBAL@@EEAA@XZ @ 0x1401D29F4 (--1DXGGLOBAL@@EEAA@XZ.c)
 *     ?EnsureVmBusInterface@DXGGLOBAL@@QEAAJXZ @ 0x1401D3EF8 (-EnsureVmBusInterface@DXGGLOBAL@@QEAAJXZ.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 */

void **__fastcall DXG_GUEST_GLOBAL_VMBUS::`scalar deleting destructor'(void **this)
{
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(this[7]);
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(this);
  return this;
}
