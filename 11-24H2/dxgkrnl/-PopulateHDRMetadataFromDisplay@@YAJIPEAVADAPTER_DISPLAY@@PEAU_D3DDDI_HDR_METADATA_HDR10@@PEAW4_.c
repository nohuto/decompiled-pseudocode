/*
 * XREFs of ?PopulateHDRMetadataFromDisplay@@YAJIPEAVADAPTER_DISPLAY@@PEAU_D3DDDI_HDR_METADATA_HDR10@@PEAW4_D3DDDI_HDR_METADATA_TYPE@@@Z @ 0x1402E3B40
 * Callers:
 *     ?PreparePresentIndirect@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@PEAVBLTENTRY@@@Z @ 0x1402E3F08 (-PreparePresentIndirect@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT.c)
 *     ?PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAVCRefCountedBuffer@@@Z @ 0x1404201A0 (-PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUV.c)
 * Callees:
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x14002FD80 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ??1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x140034BE4 (--1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z @ 0x140036210 (-AcquireMonitorShared@MONITOR_MGR@@SA-AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z.c)
 *     ?_GetMonitorHandle@MONITOR_MGR@@SAPEAUHDXGMONITOR__@@PEAVDXGMONITOR@@@Z @ 0x1400406B0 (-_GetMonitorHandle@MONITOR_MGR@@SAPEAUHDXGMONITOR__@@PEAVDXGMONITOR@@@Z.c)
 *     DXGKCALLONEXIT__lambda_995b1012b958866616d8e16870c72d2c___ @ 0x140048090 (DXGKCALLONEXIT__lambda_995b1012b958866616d8e16870c72d2c___.c)
 *     ?MonitorReleaseMonitorHandle@@YAJPEAXPEAUHDXGMONITOR__@@0@Z @ 0x1402E09E0 (-MonitorReleaseMonitorHandle@@YAJPEAXPEAUHDXGMONITOR__@@0@Z.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z @ 0x1402E1840 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402E1CB0 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 *     ?AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ @ 0x1402E1D74 (-AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ.c)
 *     ?MonitorGetAdvancedColorMetadataOverride@@YAJPEAUHDXGMONITOR__@@PEAU_D3DDDI_HDR_METADATA_HDR10@@@Z @ 0x1402E5498 (-MonitorGetAdvancedColorMetadataOverride@@YAJPEAUHDXGMONITOR__@@PEAU_D3DDDI_HDR_METADATA_HDR10@@.c)
 */

__int64 __fastcall PopulateHDRMetadataFromDisplay(
        unsigned int a1,
        struct ADAPTER_DISPLAY *this,
        struct _D3DDDI_HDR_METADATA_HDR10 *a3,
        enum _D3DDDI_HDR_METADATA_TYPE *a4)
{
  __int64 v4; // rbx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r14
  MONITOR_MGR *v15; // rdi
  int MonitorInstance; // eax
  __int64 v17; // rbx
  int v18; // esi
  struct DXGMONITOR *v19; // rdi
  __int64 v20; // rcx
  char v21; // bl
  void *v22; // r8
  __int64 v23; // r9
  __int64 v25; // rax
  void *v26; // r8
  __int64 v27; // r9
  int AdvancedColorMetadataOverride; // eax
  __int64 v29; // rcx
  void *v30; // r8
  __int64 v31; // r9
  bool v32; // zf
  __int64 CurrentProcess; // rax
  __int64 v34; // rax
  struct HDXGMONITOR__ *MonitorHandle; // [rsp+20h] [rbp-60h] BYREF
  __int64 (__fastcall *v36)(unsigned int, struct ADAPTER_DISPLAY *, struct _D3DDDI_HDR_METADATA_HDR10 *, enum _D3DDDI_HDR_METADATA_TYPE *); // [rsp+28h] [rbp-58h] BYREF
  struct DXGMONITOR *v37; // [rsp+30h] [rbp-50h]
  __int128 v38; // [rsp+40h] [rbp-40h] BYREF
  __int64 v39; // [rsp+50h] [rbp-30h] BYREF
  struct HDXGMONITOR__ **v40; // [rsp+58h] [rbp-28h]
  char v41; // [rsp+60h] [rbp-20h]
  _QWORD v42[3]; // [rsp+68h] [rbp-18h] BYREF
  struct ADAPTER_DISPLAY *v43; // [rsp+B8h] [rbp+38h] BYREF

  v43 = this;
  v4 = a1;
  if ( !this
    || !a3
    || !a4
    || *((_DWORD *)this + 24) <= a1
    || !(unsigned __int8)ADAPTER_DISPLAY::IsVidPnSourceActive(this, a1) )
  {
    return 3221225485LL;
  }
  v9 = 4024 * v4;
  v10 = *((_QWORD *)v43 + 2);
  v11 = *(unsigned int *)(v9 + *((_QWORD *)v43 + 16) + 1072);
  v12 = WdLogNewEntry5_WdTrace(v9, v43, v7, v8);
  v14 = (unsigned int)v11;
  *(_QWORD *)(v12 + 24) = v11;
  *(_QWORD *)(v12 + 32) = v10;
  WdLogGlobalForLineNumber = 2330;
  if ( !v10 || (_DWORD)v11 == -1 )
    goto LABEL_32;
  if ( !*(_QWORD *)(v10 + 3120) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2351;
  }
  v15 = *(MONITOR_MGR **)(*(_QWORD *)(v10 + 3120) + 112LL);
  if ( !v15 )
  {
    WdLogSingleEntry1(2LL, v10);
    WdLogGlobalForLineNumber = 2361;
LABEL_32:
    LODWORD(v17) = -1073741811;
LABEL_33:
    CurrentProcess = PsGetCurrentProcess(v13);
    WdLogSingleEntry2(3LL, (int)v17, CurrentProcess);
    WdLogGlobalForLineNumber = 1808;
    return (unsigned int)v17;
  }
  v37 = 0LL;
  v36 = PopulateHDRMetadataFromDisplay;
  MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v36);
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v15, v11, 1, (struct MONITOR_REF_ACCESSOR *)&v36);
  LODWORD(v17) = -1073741275;
  v18 = MonitorInstance;
  if ( MonitorInstance == -1073741275 )
  {
    WdLogSingleEntry2(7LL, v14, v15);
    WdLogGlobalForLineNumber = 2376;
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v36);
    goto LABEL_33;
  }
  if ( MonitorInstance < 0 )
  {
    WdLogSingleEntry2(2LL, v14, v15);
    WdLogGlobalForLineNumber = 2383;
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v36);
    LODWORD(v17) = v18;
    goto LABEL_33;
  }
  v19 = v37;
  if ( !v37 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2388;
  }
  v37 = 0LL;
  MonitorHandle = MONITOR_MGR::_GetMonitorHandle(v19);
  MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v36);
  *(_QWORD *)&v38 = &v43;
  *((_QWORD *)&v38 + 1) = &MonitorHandle;
  DXGKCALLONEXIT__lambda_995b1012b958866616d8e16870c72d2c_((__int64)&v39, &v38);
  if ( !MonitorHandle )
  {
    LODWORD(v17) = -1073741811;
    goto LABEL_22;
  }
  MONITOR_MGR::AcquireMonitorShared(v42, (__int64)MonitorHandle);
  if ( !v42[0] )
  {
    WdLogSingleEntry1(2LL, -1073741275LL);
    WdLogGlobalForLineNumber = 3671;
    CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v42);
LABEL_22:
    v25 = PsGetCurrentProcess(v20);
    WdLogSingleEntry2(3LL, (int)v17, v25);
    WdLogGlobalForLineNumber = 1830;
    goto LABEL_23;
  }
  v21 = *(_BYTE *)(*(_QWORD *)(v42[0] + 224LL) + 516LL);
  CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v42);
  if ( !v21 )
  {
    if ( v41 )
      MonitorReleaseMonitorHandle(*(_QWORD **)(*(_QWORD *)v39 + 16LL), *v40, v22, v23);
    return 3221225474LL;
  }
  AdvancedColorMetadataOverride = MonitorGetAdvancedColorMetadataOverride(MonitorHandle, a3);
  v17 = AdvancedColorMetadataOverride;
  if ( AdvancedColorMetadataOverride < 0 )
  {
    v34 = PsGetCurrentProcess(v29);
    WdLogSingleEntry2(3LL, v17, v34);
    WdLogGlobalForLineNumber = 1842;
LABEL_23:
    if ( v41 )
      MonitorReleaseMonitorHandle(*(_QWORD **)(*(_QWORD *)v39 + 16LL), *v40, v26, v27);
    return (unsigned int)v17;
  }
  v32 = v41 == 0;
  *a4 = D3DDDI_HDR_METADATA_TYPE_HDR10;
  if ( !v32 )
    MonitorReleaseMonitorHandle(*(_QWORD **)(*(_QWORD *)v39 + 16LL), *v40, v30, v31);
  return 0LL;
}
