/*
 * XREFs of ??0CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@AEBVMONITOR_REF_ACCESSOR@@@Z @ 0x140034D20
 * Callers:
 *     ?MonitorCreatePhysicalMonitor@@YAJPEAXIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_CONNECTION_USB4_INFO@@PEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1402666F4 (-MonitorCreatePhysicalMonitor@@YAJPEAXIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_CONNECTION_USB4_INFO@@PEA.c)
 *     ?MonitorNotifyDeviceNodeReady@@YAJPEAXIPEAU_DEVICE_OBJECT@@@Z @ 0x140353960 (-MonitorNotifyDeviceNodeReady@@YAJPEAXIPEAU_DEVICE_OBJECT@@@Z.c)
 * Callees:
 *     ?AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ @ 0x1402CB7E4 (-AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ.c)
 */

CONST_MONITOR_REF_LOCK_ACCESSOR *__fastcall CONST_MONITOR_REF_LOCK_ACCESSOR::CONST_MONITOR_REF_LOCK_ACCESSOR(
        CONST_MONITOR_REF_LOCK_ACCESSOR *this,
        const struct MONITOR_REF_ACCESSOR *a2)
{
  __int64 v2; // rdi
  __int64 v5; // rdx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *((_QWORD *)a2 + 1);
  *(_QWORD *)this = v2;
  if ( v2 )
  {
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)(v2 + 40), 1u);
  }
  *((_QWORD *)this + 1) = retaddr;
  v5 = 2LL;
  do
  {
    *((_QWORD *)this + 2) = *((_QWORD *)a2 + 1);
    --v5;
  }
  while ( v5 );
  MONITOR_REF_ACCESSOR::AddReference((CONST_MONITOR_REF_LOCK_ACCESSOR *)((char *)this + 8));
  return this;
}
