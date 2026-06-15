/*
 * XREFs of ??_GDeviceStateChangedContext@CMonitorManager@@QEAAPEAXI@Z @ 0x18002C510
 * Callers:
 *     ?QueueDeviceStateChanged@CMonitorManager@@AEAAJKPEBG@Z @ 0x18002A798 (-QueueDeviceStateChanged@CMonitorManager@@AEAAJKPEBG@Z.c)
 *     ?ProcessDeviceStateChanged@CMonitorManager@@AEAAXXZ @ 0x18002CE3C (-ProcessDeviceStateChanged@CMonitorManager@@AEAAXXZ.c)
 *     ?FreeNode@?$CAtlList@V?$CAutoPtr@UDeviceStateChangedContext@CMonitorManager@@@ATL@@V?$CAutoPtrElementTraits@UDeviceStateChangedContext@CMonitorManager@@@2@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x18002D1C4 (-FreeNode@-$CAtlList@V-$CAutoPtr@UDeviceStateChangedContext@CMonitorManager@@@ATL@@V-$CAutoPtrEl.c)
 *     ??1?$CAutoPtr@UDeviceStateChangedContext@CMonitorManager@@@ATL@@QEAA@XZ @ 0x1800A4F7C (--1-$CAutoPtr@UDeviceStateChangedContext@CMonitorManager@@@ATL@@QEAA@XZ.c)
 * Callees:
 *     ??1DeviceStateChangedContext@CMonitorManager@@QEAA@XZ @ 0x18002C53C (--1DeviceStateChangedContext@CMonitorManager@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A7F7C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CMonitorManager::DeviceStateChangedContext *__fastcall CMonitorManager::DeviceStateChangedContext::`scalar deleting destructor'(
        CMonitorManager::DeviceStateChangedContext *this)
{
  CMonitorManager::DeviceStateChangedContext::~DeviceStateChangedContext(this);
  operator delete(this, (const struct std::nothrow_t *)0x18);
  return this;
}
