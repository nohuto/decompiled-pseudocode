/*
 * XREFs of ?GetSdrWhiteLevel@@YAJIPEAVADAPTER_DISPLAY@@AEAI@Z @ 0x140308B48
 * Callers:
 *     ?PreparePresentIndirect@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@PEAVBLTENTRY@@@Z @ 0x14030766C (-PreparePresentIndirect@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT.c)
 * Callees:
 *     ?_GetMonitorHandle@MONITOR_MGR@@SAPEAUHDXGMONITOR__@@PEAVDXGMONITOR@@@Z @ 0x140040C00 (-_GetMonitorHandle@MONITOR_MGR@@SAPEAUHDXGMONITOR__@@PEAVDXGMONITOR@@@Z.c)
 *     DXGKCALLONEXIT__lambda_ab661333c311e4e7923f02b8b309729e___ @ 0x1400559A0 (DXGKCALLONEXIT__lambda_ab661333c311e4e7923f02b8b309729e___.c)
 *     ?MonitorReleaseMonitorHandle@@YAJPEAXPEAUHDXGMONITOR__@@0@Z @ 0x1402CA448 (-MonitorReleaseMonitorHandle@@YAJPEAXPEAUHDXGMONITOR__@@0@Z.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z @ 0x1402CB2B0 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402CB720 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 *     ?AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ @ 0x1402CB7E4 (-AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ.c)
 *     ?MonitorGetSDRWhiteLevelMilliNits@@YAJPEAUHDXGMONITOR__@@PEAK@Z @ 0x140309298 (-MonitorGetSDRWhiteLevelMilliNits@@YAJPEAUHDXGMONITOR__@@PEAK@Z.c)
 */

__int64 __fastcall GetSdrWhiteLevel(unsigned int a1, struct ADAPTER_DISPLAY *a2, unsigned int *a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r14
  MONITOR_MGR *v11; // rdi
  int MonitorInstance; // eax
  __int64 v13; // rbx
  int v14; // esi
  struct DXGMONITOR *v15; // rbx
  int SDRWhiteLevelMilliNits; // eax
  __int64 v17; // rcx
  void *v18; // r8
  __int64 v19; // r9
  __int64 CurrentProcess; // rax
  __int64 v22; // rax
  __int64 (__fastcall *v23)(unsigned int, struct ADAPTER_DISPLAY *, struct _D3DDDI_HDR_METADATA_HDR10 *, enum _D3DDDI_HDR_METADATA_TYPE *); // [rsp+20h] [rbp-40h] BYREF
  struct DXGMONITOR *v24; // [rsp+28h] [rbp-38h]
  __int128 v25; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v26[2]; // [rsp+40h] [rbp-20h] BYREF
  char v27; // [rsp+50h] [rbp-10h]
  unsigned int v28; // [rsp+90h] [rbp+30h] BYREF
  struct ADAPTER_DISPLAY *v29; // [rsp+98h] [rbp+38h] BYREF
  struct HDXGMONITOR__ *MonitorHandle; // [rsp+A8h] [rbp+48h] BYREF

  v29 = a2;
  v4 = *((_QWORD *)a2 + 2);
  v6 = 3984LL * a1;
  v7 = *(unsigned int *)(v6 + *((_QWORD *)a2 + 16) + 1072);
  v8 = WdLogNewEntry5_WdTrace(v6, a2, a3, a4);
  v10 = (unsigned int)v7;
  *(_QWORD *)(v8 + 24) = v7;
  *(_QWORD *)(v8 + 32) = v4;
  WdLogGlobalForLineNumber = 2330;
  if ( !v4 || (_DWORD)v7 == -1 )
    goto LABEL_18;
  if ( !*(_QWORD *)(v4 + 3120) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2351;
  }
  v11 = *(MONITOR_MGR **)(*(_QWORD *)(v4 + 3120) + 112LL);
  if ( !v11 )
  {
    WdLogSingleEntry1(2LL, v4);
    WdLogGlobalForLineNumber = 2361;
LABEL_18:
    LODWORD(v13) = -1073741811;
    goto LABEL_16;
  }
  v24 = 0LL;
  v23 = PopulateHDRMetadataFromDisplay;
  MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v23);
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v11, v7, 1, (struct MONITOR_REF_ACCESSOR *)&v23);
  LODWORD(v13) = -1073741275;
  v14 = MonitorInstance;
  if ( MonitorInstance == -1073741275 )
  {
    WdLogSingleEntry2(7LL, v10, v11);
    WdLogGlobalForLineNumber = 2376;
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v23);
LABEL_16:
    CurrentProcess = PsGetCurrentProcess(v9);
    WdLogSingleEntry2(3LL, (int)v13, CurrentProcess);
    WdLogGlobalForLineNumber = 58;
    return (unsigned int)v13;
  }
  if ( MonitorInstance < 0 )
  {
    WdLogSingleEntry2(2LL, v10, v11);
    WdLogGlobalForLineNumber = 2383;
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v23);
    LODWORD(v13) = v14;
    goto LABEL_16;
  }
  v15 = v24;
  if ( !v24 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2388;
  }
  v24 = 0LL;
  MonitorHandle = MONITOR_MGR::_GetMonitorHandle(v15);
  MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v23);
  *(_QWORD *)&v25 = &v29;
  *((_QWORD *)&v25 + 1) = &MonitorHandle;
  DXGKCALLONEXIT__lambda_ab661333c311e4e7923f02b8b309729e_((__int64)v26, &v25);
  v28 = 0;
  SDRWhiteLevelMilliNits = MonitorGetSDRWhiteLevelMilliNits(MonitorHandle, &v28);
  v13 = SDRWhiteLevelMilliNits;
  if ( SDRWhiteLevelMilliNits < 0 )
  {
    v22 = PsGetCurrentProcess(v17);
    WdLogSingleEntry2(3LL, v13, v22);
    WdLogGlobalForLineNumber = 78;
  }
  else
  {
    *a3 = v28 / 0x3E8;
  }
  if ( v27 )
    MonitorReleaseMonitorHandle(*(_QWORD **)(*(_QWORD *)v26[0] + 16LL), *(struct HDXGMONITOR__ **)v26[1], v18, v19);
  return (unsigned int)v13;
}
