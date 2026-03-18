/*
 * XREFs of ?MonitorGetExternalBrightnessPolicy@@YAJPEAUHDXGMONITOR__@@PEA_N1PEAW4_DISPLAYCONFIG_HDR_BRIGHTNESS_MODE@@PEAW4_DISPLAYCONFIG_EXTERNAL_BRIGHTNESS_OEM_ENABLEMENT@@@Z @ 0x1402674A0
 * Callers:
 *     DxgkDisplayConfigDeviceInfoForAdapter @ 0x140415E90 (DxgkDisplayConfigDeviceInfoForAdapter.c)
 * Callees:
 *     ??1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x140034CB0 (--1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z @ 0x140036128 (-AcquireMonitorShared@MONITOR_MGR@@SA-AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z.c)
 */

__int64 __fastcall MonitorGetExternalBrightnessPolicy(
        struct HDXGMONITOR__ *a1,
        bool *a2,
        bool *a3,
        enum _DISPLAYCONFIG_HDR_BRIGHTNESS_MODE *a4,
        enum _DISPLAYCONFIG_EXTERNAL_BRIGHTNESS_OEM_ENABLEMENT *a5)
{
  unsigned int v8; // ebx
  __int64 v9; // rdx
  _BYTE *v10; // rcx
  bool v11; // al
  bool v12; // zf
  _QWORD v14[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( a1 )
  {
    MONITOR_MGR::AcquireMonitorShared(v14, (__int64)a1);
    v9 = v14[0];
    if ( v14[0] )
    {
      v10 = *(_BYTE **)(v14[0] + 224LL);
      v11 = (!v10[514] || v10[513]) && (v10[515] || v10[516]);
      *a2 = v11;
      v12 = v10[514] == 0;
      *a3 = v10[516];
      if ( v12 )
        *(_DWORD *)a5 = 0;
      else
        *(_DWORD *)a5 = 2 - (v10[513] != 0);
      v8 = 0;
      *(_DWORD *)a4 = *(_DWORD *)(*(_QWORD *)(v9 + 224) + 520LL);
    }
    else
    {
      v8 = -1073741275;
      WdLogSingleEntry1(2LL, -1073741275LL);
      WdLogGlobalForLineNumber = 6782;
    }
    CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v14);
  }
  else
  {
    v8 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 6776;
  }
  return v8;
}
