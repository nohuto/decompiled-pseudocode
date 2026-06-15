/*
 * XREFs of ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002CFAC
 * Callers:
 *     ?QueueDeviceStateChanged@CMonitorManager@@AEAAJKPEBG@Z @ 0x18002A798 (-QueueDeviceStateChanged@CMonitorManager@@AEAAJKPEBG@Z.c)
 *     ?ProcessDeviceStateChanged@CMonitorManager@@AEAAXXZ @ 0x18002CE3C (-ProcessDeviceStateChanged@CMonitorManager@@AEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18002CF84 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?HandleDeviceRemoved@CMonitorManager@@AEAAXPEBG@Z @ 0x18002CFE4 (-HandleDeviceRemoved@CMonitorManager@@AEAAXPEBG@Z.c)
 *     ?DoHandlePropertyValueChanged@CMonitorManager@@AEAAXPEBGU_tagpropertykey@@@Z @ 0x18002E214 (-DoHandlePropertyValueChanged@CMonitorManager@@AEAAXPEBGU_tagpropertykey@@@Z.c)
 *     ?OnPowerStateChanged@CMonitorManager@@QEAAXE@Z @ 0x18002E318 (-OnPowerStateChanged@CMonitorManager@@QEAAXE@Z.c)
 *     ?HandleDeviceArrivalForExistingMonitors@CMonitorManager@@AEAAXPEBG@Z @ 0x18002E7E4 (-HandleDeviceArrivalForExistingMonitors@CMonitorManager@@AEAAXPEBG@Z.c)
 *     ?DoHandleDefaultDeviceChanged@CMonitorManager@@AEAAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEBG@Z @ 0x18002EAD8 (-DoHandleDefaultDeviceChanged@CMonitorManager@@AEAAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_00.c)
 *     ?Shutdown@CMonitorManager@@QEAAXXZ @ 0x180113A70 (-Shutdown@CMonitorManager@@QEAAXXZ.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800A4D5C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

void __fastcall ATL::CCritSecLock::Lock(LPCRITICAL_SECTION *this)
{
  EnterCriticalSection(*this);
  *((_BYTE *)this + 8) = 1;
}
