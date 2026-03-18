/*
 * XREFs of ?MonitorGetColorPipelineState2@@YAJPEAUHDXGMONITOR__@@PEAU_DISPLAYCONFIG_COLOR_PIPELINE_STATE_2@@@Z @ 0x14026E064
 * Callers:
 *     DxgkDisplayConfigDeviceInfoForAdapter @ 0x1403C64A0 (DxgkDisplayConfigDeviceInfoForAdapter.c)
 * Callees:
 *     ??0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z @ 0x14002FE7C (--0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z.c)
 *     ??1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x140034BE4 (--1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     ??1MUTEX_LOCK@@QEAA@XZ @ 0x140034CD4 (--1MUTEX_LOCK@@QEAA@XZ.c)
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z @ 0x140036210 (-AcquireMonitorShared@MONITOR_MGR@@SA-AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?GetCachedGammaRampForDiagnostics@MonitorGammaState@DxgMonitor@@QEBAJPEAU_DXGK_DIAG_BLACK_SCREEN_DXGKRNL_SAMPLED_GAMMA@@@Z @ 0x140279A54 (-GetCachedGammaRampForDiagnostics@MonitorGammaState@DxgMonitor@@QEBAJPEAU_DXGK_DIAG_BLACK_SCREEN.c)
 *     ?_QueryColorSpaceTransformCaps@MonitorGammaState@DxgMonitor@@AEBAJKPEAXPEA_K@Z @ 0x1403CB590 (-_QueryColorSpaceTransformCaps@MonitorGammaState@DxgMonitor@@AEBAJKPEAXPEA_K@Z.c)
 */

__int64 __fastcall MonitorGetColorPipelineState2(
        struct HDXGMONITOR__ *a1,
        struct _DISPLAYCONFIG_COLOR_PIPELINE_STATE_2 *a2)
{
  __int64 v4; // rdi
  int *v5; // rcx
  int v6; // eax
  _DWORD *v7; // rdx
  __int64 v8; // r8
  int v9; // eax
  int v10; // xmm6_4
  int v11; // ecx
  int v12; // eax
  unsigned __int64 v13; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD v14[3]; // [rsp+30h] [rbp-D8h] BYREF
  _DWORD v15[16]; // [rsp+48h] [rbp-C0h] BYREF
  _OWORD v16[15]; // [rsp+88h] [rbp-80h] BYREF

  if ( !a1 || !a2 )
    return 3221225485LL;
  MONITOR_MGR::AcquireMonitorShared(v14, (__int64)a1);
  if ( v14[0] )
  {
    v4 = *(_QWORD *)(v14[0] + 248LL);
    memset(v16, 0, 0xE8uLL);
    DxgMonitor::MonitorGammaState::GetCachedGammaRampForDiagnostics(
      (DxgMonitor::MonitorGammaState *)v4,
      (struct _DXGK_DIAG_BLACK_SCREEN_DXGKRNL_SAMPLED_GAMMA *)v16);
    v5 = (int *)&v16[4];
    v6 = DWORD1(v16[14]);
    v7 = (_DWORD *)((char *)a2 + 76);
    *((_OWORD *)a2 + 2) = v16[12];
    v8 = 16LL;
    *((_DWORD *)a2 + 5) = v6;
    *((_OWORD *)a2 + 3) = v16[13];
    *((_DWORD *)a2 + 16) = v16[14];
    do
    {
      *(v7 - 1) = *(v5 - 16);
      v9 = *v5++;
      *v7 = v9;
      v7 += 3;
      *(v7 - 2) = v5[15];
      --v8;
    }
    while ( v8 );
    memset(v15, 0, sizeof(v15));
    v13 = 0LL;
    DxgMonitor::MonitorGammaState::_QueryColorSpaceTransformCaps((DxgMonitor::MonitorGammaState *)v4, 0x40u, v15, &v13);
    v10 = 0;
    v11 = (v15[6] >> 10) & 0x3FF;
    *((_DWORD *)a2 + 6) = v15[6] & 0x3FF;
    v12 = v15[11];
    *((_DWORD *)a2 + 7) = v11;
    *((_DWORD *)a2 + 17) = v12;
    MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)&v13, (struct DXGFASTMUTEX *)(v4 + 152));
    if ( *(_BYTE *)(v4 + 80) )
      v10 = *(_DWORD *)(v4 + 200);
    MUTEX_LOCK::~MUTEX_LOCK((MUTEX_LOCK *)&v13);
    *((_DWORD *)a2 + 66) = v10;
    CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v14);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(2LL, -1073741275LL);
    WdLogGlobalForLineNumber = 3903;
    CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v14);
    return 3221226021LL;
  }
}
