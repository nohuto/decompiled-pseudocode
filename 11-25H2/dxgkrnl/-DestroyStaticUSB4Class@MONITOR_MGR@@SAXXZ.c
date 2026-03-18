/*
 * XREFs of ?DestroyStaticUSB4Class@MONITOR_MGR@@SAXXZ @ 0x14026C0A0
 * Callers:
 *     ?MonitorCleanupGlobal@@YAJXZ @ 0x1400062AC (-MonitorCleanupGlobal@@YAJXZ.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??1USB4_HOSTROUTER_MGR@@QEAA@XZ @ 0x140270304 (--1USB4_HOSTROUTER_MGR@@QEAA@XZ.c)
 */

void MONITOR_MGR::DestroyStaticUSB4Class(void)
{
  PVOID v0; // rbx

  v0 = MONITOR_MGR::_pUsb4Manager;
  if ( MONITOR_MGR::_pUsb4Manager )
  {
    USB4_HOSTROUTER_MGR::~USB4_HOSTROUTER_MGR((USB4_HOSTROUTER_MGR *)MONITOR_MGR::_pUsb4Manager);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v0);
    MONITOR_MGR::_pUsb4Manager = 0LL;
  }
}
