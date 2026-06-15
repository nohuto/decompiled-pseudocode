/*
 * XREFs of ??0CaptureMonitor@CMonitorManager@@QEAA@PEAV1@PEBG1PEAUStreamConnectionSettings@@_N@Z @ 0x18010F2E4
 * Callers:
 *     ?CreateMonitor@CMonitorManager@@AEAAJPEBG0PEAUStreamConnectionSettings@@_NPEAUICapabilityUsageSession@Management@CapabilityAccess@Internal@Windows@@PEAPEAVCaptureMonitor@1@@Z @ 0x18010FE60 (-CreateMonitor@CMonitorManager@@AEAAJPEBG0PEAUStreamConnectionSettings@@_NPEAUICapabilityUsageSe.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18005CC3C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 */

// Hidden C++ exception states: #wind=3
CMonitorManager::CaptureMonitor *__fastcall CMonitorManager::CaptureMonitor::CaptureMonitor(
        CMonitorManager::CaptureMonitor *this,
        struct CMonitorManager *a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4,
        struct StreamConnectionSettings *a5,
        bool a6)
{
  *(_QWORD *)this = &CMonitorManager::CaptureMonitor::`vftable';
  *((_DWORD *)this + 2) = 1;
  *((_BYTE *)this + 12) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 6) = 0;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_BYTE *)this + 48) = 0;
  *((_BYTE *)this + 49) = a6;
  std::wstring::wstring((__int64)this + 56, (__int64)a3);
  std::wstring::wstring((__int64)this + 88, (__int64)a4);
  *((_QWORD *)this + 15) = 0LL;
  *((_DWORD *)this + 32) = 0;
  *(_OWORD *)((char *)this + 136) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 7LL;
  *((_WORD *)this + 68) = 0;
  *(_OWORD *)((char *)this + 168) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 7LL;
  *((_WORD *)this + 84) = 0;
  *((_QWORD *)this + 25) = a2;
  *((_QWORD *)this + 26) = 0LL;
  if ( a5 )
  {
    *((_QWORD *)this + 15) = *(_QWORD *)a5;
    *((_DWORD *)this + 32) = *((_DWORD *)a5 + 2);
  }
  return this;
}
