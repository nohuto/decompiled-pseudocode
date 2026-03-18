/*
 * XREFs of ?MonitorGetDisplayHdrSupportLevel@@YAJPEAUHDXGMONITOR__@@PEAW4_DISPLAYCONFIG_HDR_CERTIFICATIONS@@@Z @ 0x1403E7B68
 * Callers:
 *     DxgkGetMonitorInternalInfo @ 0x140419880 (DxgkGetMonitorInternalInfo.c)
 * Callees:
 *     ??1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x140034CB0 (--1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z @ 0x140036128 (-AcquireMonitorShared@MONITOR_MGR@@SA-AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z.c)
 */

__int64 __fastcall MonitorGetDisplayHdrSupportLevel(
        struct HDXGMONITOR__ *a1,
        enum _DISPLAYCONFIG_HDR_CERTIFICATIONS *a2)
{
  unsigned int v3; // ebx
  _QWORD v5[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( !a1 )
    return 3221225485LL;
  MONITOR_MGR::AcquireMonitorShared(v5, (__int64)a1);
  if ( v5[0] )
  {
    *(_DWORD *)a2 = *(_DWORD *)(*(_QWORD *)(v5[0] + 224LL) + 480LL);
    v3 = 0;
  }
  else
  {
    v3 = -1073741275;
    WdLogSingleEntry1(2LL, -1073741275LL);
    WdLogGlobalForLineNumber = 4063;
  }
  CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v5);
  return v3;
}
