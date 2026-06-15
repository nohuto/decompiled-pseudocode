/*
 * XREFs of ?IsConnectedTo@CaptureMonitor@CMonitorManager@@QEBA_NPEBG@Z @ 0x1801125FC
 * Callers:
 *     ?HandleDeviceRemoved@CMonitorManager@@AEAAXPEBG@Z @ 0x18002CFE4 (-HandleDeviceRemoved@CMonitorManager@@AEAAXPEBG@Z.c)
 *     ?HandleDeviceArrivalForExistingMonitors@CMonitorManager@@AEAAXPEBG@Z @ 0x18002E7E4 (-HandleDeviceArrivalForExistingMonitors@CMonitorManager@@AEAAXPEBG@Z.c)
 * Callees:
 *     ?c_str@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAPEBGXZ @ 0x180014F20 (-c_str@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAPEBGXZ.c)
 */

char __fastcall CMonitorManager::CaptureMonitor::IsConnectedTo(
        CMonitorManager::CaptureMonitor *this,
        const unsigned __int16 *a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  char v6; // bl
  __int64 v7; // rax

  v4 = std::wstring::c_str((__int64)this + 136);
  v6 = 0;
  if ( !(unsigned int)_o__wcsnicmp(v4, v5, *((_QWORD *)this + 19)) )
    return 1;
  v7 = std::wstring::c_str((__int64)this + 168);
  if ( !(unsigned int)_o__wcsnicmp(v7, a2, *((_QWORD *)this + 23)) )
    return 1;
  return v6;
}
