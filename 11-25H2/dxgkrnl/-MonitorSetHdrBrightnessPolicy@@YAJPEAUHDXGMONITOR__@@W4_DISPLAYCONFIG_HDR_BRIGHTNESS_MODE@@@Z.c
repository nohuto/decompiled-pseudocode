/*
 * XREFs of ?MonitorSetHdrBrightnessPolicy@@YAJPEAUHDXGMONITOR__@@W4_DISPLAYCONFIG_HDR_BRIGHTNESS_MODE@@@Z @ 0x1402683DC
 * Callers:
 *     DxgkDisplayConfigDeviceInfoForAdapter @ 0x140415E90 (DxgkDisplayConfigDeviceInfoForAdapter.c)
 * Callees:
 *     ?AcquireMonitorExclusive@MONITOR_MGR@@SA?AVMONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z @ 0x140032B1C (-AcquireMonitorExclusive@MONITOR_MGR@@SA-AVMONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z.c)
 *     ??1MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x140035774 (--1MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall MonitorSetHdrBrightnessPolicy(__int64 a1, unsigned int a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  _QWORD v6[5]; // [rsp+30h] [rbp-28h] BYREF

  if ( a1 )
  {
    MONITOR_MGR::AcquireMonitorExclusive(v6, a1);
    if ( v6[0] )
    {
      v4 = *(_QWORD *)(v6[0] + 224LL);
      if ( *(_DWORD *)(v4 + 520) != a2 )
      {
        *(_DWORD *)(v4 + 520) = a2;
        (*(void (__fastcall **)(_QWORD, __int64, const wchar_t *, _QWORD))(**(_QWORD **)(v4 + 8) + 136LL))(
          *(_QWORD *)(v4 + 8),
          4LL,
          L"HdrBrightnessMode",
          a2);
      }
      v3 = 0;
    }
    else
    {
      v3 = -1073741275;
      WdLogSingleEntry1(2LL, -1073741275LL);
      WdLogGlobalForLineNumber = 6854;
    }
    MONITOR_REF_LOCK_ACCESSOR::~MONITOR_REF_LOCK_ACCESSOR((MONITOR_REF_LOCK_ACCESSOR *)v6);
  }
  else
  {
    v3 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 6848;
  }
  return v3;
}
