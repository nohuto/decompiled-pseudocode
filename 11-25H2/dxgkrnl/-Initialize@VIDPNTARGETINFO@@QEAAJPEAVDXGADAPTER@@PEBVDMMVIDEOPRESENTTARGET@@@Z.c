/*
 * XREFs of ?Initialize@VIDPNTARGETINFO@@QEAAJPEAVDXGADAPTER@@PEBVDMMVIDEOPRESENTTARGET@@@Z @ 0x1401BE450
 * Callers:
 *     ?AddVidPnTargetInfo@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1403FE1A4 (-AddVidPnTargetInfo@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAJPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x14002B150 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x140034CB0 (--1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z @ 0x140036128 (-AcquireMonitorShared@MONITOR_MGR@@SA-AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x14004C14C (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?MonitorGetLidStateFromMonitor@@YAJPEAUHDXGMONITOR__@@PEA_N@Z @ 0x140267744 (-MonitorGetLidStateFromMonitor@@YAJPEAUHDXGMONITOR__@@PEA_N@Z.c)
 *     ?GetCachedGammaRampForDiagnostics@MonitorGammaState@DxgMonitor@@QEBAJPEAU_DXGK_DIAG_BLACK_SCREEN_DXGKRNL_SAMPLED_GAMMA@@@Z @ 0x14027285C (-GetCachedGammaRampForDiagnostics@MonitorGammaState@DxgMonitor@@QEBAJPEAU_DXGK_DIAG_BLACK_SCREEN.c)
 *     ?IsMonitorConnected@DMMVIDEOPRESENTTARGET@@QEBAEPEAW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1402D22CC (-IsMonitorConnected@DMMVIDEOPRESENTTARGET@@QEBAEPEAW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 *     ?DmmIsTargetInClientVidPnTopology@@YAJQEAXIPEAE@Z @ 0x140404204 (-DmmIsTargetInClientVidPnTopology@@YAJQEAXIPEAE@Z.c)
 */

__int64 __fastcall VIDPNTARGETINFO::Initialize(
        VIDPNTARGETINFO *this,
        struct DXGADAPTER *a2,
        const struct DMMVIDEOPRESENTTARGET *a3)
{
  unsigned __int8 IsMonitorConnected; // al
  unsigned int v7; // edx
  bool v8; // al
  struct HDXGMONITOR__ *v9; // rcx
  __int64 v10; // rdx
  struct _DXGK_DIAG_BLACK_SCREEN_DXGKRNL_SAMPLED_GAMMA *v11; // rdi
  _QWORD v13[4]; // [rsp+50h] [rbp-28h] BYREF
  unsigned __int8 v14; // [rsp+88h] [rbp+10h] BYREF
  bool v15; // [rsp+98h] [rbp+20h] BYREF

  if ( !a2 || !a3 )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a2) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1682;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"pDisplayAdapter->IsCoreResourceSharedOwner()",
      1682LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  *(_DWORD *)this = *((_DWORD *)a3 + 6);
  IsMonitorConnected = DMMVIDEOPRESENTTARGET::IsMonitorConnected(a3, (VIDPNTARGETINFO *)((char *)this + 8));
  v7 = *(_DWORD *)this;
  v14 = 0;
  *((_BYTE *)this + 4) = IsMonitorConnected != 0;
  *((_DWORD *)this + 3) = *((_DWORD *)a3 + 23);
  DmmIsTargetInClientVidPnTopology(a2, v7, &v14);
  *((_BYTE *)this + 5) = v14 != 0;
  v8 = IsInternalVideoOutput(*((enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)a3 + 20));
  *((_BYTE *)this + 6) = v8;
  if ( v8 )
  {
    v9 = (struct HDXGMONITOR__ *)*((_QWORD *)a3 + 14);
    v15 = 0;
    if ( (int)MonitorGetLidStateFromMonitor(v9, &v15) >= 0 )
      *((_BYTE *)this + 7) = v15;
  }
  v10 = *((_QWORD *)a3 + 14);
  v11 = (VIDPNTARGETINFO *)((char *)this + 16);
  if ( v10 && v11 )
  {
    MONITOR_MGR::AcquireMonitorShared(v13, v10);
    if ( v13[0] )
    {
      DxgMonitor::MonitorGammaState::GetCachedGammaRampForDiagnostics(
        *(DxgMonitor::MonitorGammaState **)(v13[0] + 248LL),
        v11);
    }
    else
    {
      WdLogSingleEntry1(2LL, -1073741275LL);
      WdLogGlobalForLineNumber = 3054;
    }
    CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v13);
  }
  return 0LL;
}
