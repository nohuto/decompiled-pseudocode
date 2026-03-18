/*
 * XREFs of ?MonitorGetDisplayHdrSupportLevel@@YAJPEAUHDXGMONITOR__@@PEAW4_DISPLAYCONFIG_HDR_CERTIFICATIONS@@PEAW4_DISPLAYCONFIG_HDR_CERTIFICATIONS2@@@Z @ 0x14026E3A0
 * Callers:
 *     DxgkGetMonitorInternalInfo @ 0x140413FF0 (DxgkGetMonitorInternalInfo.c)
 * Callees:
 *     ??1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x140034BE4 (--1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z @ 0x140036210 (-AcquireMonitorShared@MONITOR_MGR@@SA-AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z.c)
 *     Feature_AddDisplayHDR12CertificationTier__private_IsEnabledDeviceUsageNoInline @ 0x14006DE94 (Feature_AddDisplayHDR12CertificationTier__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall MonitorGetDisplayHdrSupportLevel(
        struct HDXGMONITOR__ *a1,
        enum _DISPLAYCONFIG_HDR_CERTIFICATIONS *a2,
        enum _DISPLAYCONFIG_HDR_CERTIFICATIONS2 *a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rbx
  _QWORD v8[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( !a1 )
    return 3221225485LL;
  MONITOR_MGR::AcquireMonitorShared(v8, (__int64)a1);
  if ( v8[0] )
  {
    v7 = *(_QWORD *)(v8[0] + 224LL);
    *(_DWORD *)a2 = *(_DWORD *)(v7 + 480);
    if ( (unsigned int)Feature_AddDisplayHDR12CertificationTier__private_IsEnabledDeviceUsageNoInline() )
      *(_DWORD *)a3 = *(_DWORD *)(v7 + 484);
    v6 = 0;
  }
  else
  {
    v6 = -1073741275;
    WdLogSingleEntry1(2LL, -1073741275LL);
    WdLogGlobalForLineNumber = 4065;
  }
  CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v8);
  return v6;
}
