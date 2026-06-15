/*
 * XREFs of ?IsConnectedTo@CaptureMonitor@CMonitorManager@@QEBA_NPEBG@Z @ 0x18011A45C
 * Callers:
 *     ?HandleDeviceArrivalForExistingMonitors@CMonitorManager@@AEAAXPEBG@Z @ 0x1800097F0 (-HandleDeviceArrivalForExistingMonitors@CMonitorManager@@AEAAXPEBG@Z.c)
 *     ?HandleDeviceRemoved@CMonitorManager@@AEAAXPEBG@Z @ 0x18000A78C (-HandleDeviceRemoved@CMonitorManager@@AEAAXPEBG@Z.c)
 * Callees:
 *     ?c_str@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAPEBGXZ @ 0x18000F840 (-c_str@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAPEBGXZ.c)
 */

char __fastcall CMonitorManager::CaptureMonitor::IsConnectedTo(
        CMonitorManager::CaptureMonitor *this,
        const unsigned __int16 *a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rdx
  char v7; // bl
  __int64 v8; // rax

  v4 = std::wstring::c_str((__int64)this + 136, (__int64)a2);
  v7 = 0;
  if ( !(unsigned int)_o__wcsnicmp(v4, v5, *((_QWORD *)this + 19)) )
    return 1;
  v8 = std::wstring::c_str((__int64)this + 168, v6);
  if ( !(unsigned int)_o__wcsnicmp(v8, a2, *((_QWORD *)this + 23)) )
    return 1;
  return v7;
}
