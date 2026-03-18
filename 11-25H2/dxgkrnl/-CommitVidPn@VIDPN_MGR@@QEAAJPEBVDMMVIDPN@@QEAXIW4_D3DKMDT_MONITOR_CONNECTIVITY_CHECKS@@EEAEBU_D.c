/*
 * XREFs of ?CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE@Z @ 0x1403A9824
 * Callers:
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1403A8604 (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 * Callees:
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x1400410D8 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ?CacheVidPnToBeComitted@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@IAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@@Z @ 0x140057CB8 (-CacheVidPnToBeComitted@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@IAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@@Z.c)
 *     ?MonitorGetNumConnectedMonitor@@YAJPEAXPEAI@Z @ 0x140188A40 (-MonitorGetNumConnectedMonitor@@YAJPEAXPEAI@Z.c)
 *     ?MonitorIsUsingSimulatedMonitor@@YAJPEAXPEAE@Z @ 0x1403A84AC (-MonitorIsUsingSimulatedMonitor@@YAJPEAXPEAE@Z.c)
 *     ?DmmLogCommitVidPnFailedPacket@@YAXPEAU_DXGKARG_COMMITVIDPN@@JW4DXGK_DIAG_COMMIT_VIDPN_STAGE@@@Z @ 0x1403AA8A0 (-DmmLogCommitVidPnFailedPacket@@YAXPEAU_DXGKARG_COMMITVIDPN@@JW4DXGK_DIAG_COMMIT_VIDPN_STAGE@@@Z.c)
 *     ?DdiCommitVidPn@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_COMMITVIDPN@@@Z @ 0x1403AAA08 (-DdiCommitVidPn@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_COMMITVIDPN@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::CommitVidPn(
        ADAPTER_DISPLAY **this,
        unsigned __int64 a2,
        void *const a3,
        unsigned int a4,
        enum _D3DKMDT_MONITOR_CONNECTIVITY_CHECKS a5,
        char a6,
        unsigned __int8 a7,
        const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *a8,
        unsigned __int8 *a9)
{
  __int64 v9; // r12
  unsigned __int8 v13; // di
  char v14; // bl
  DXGADAPTER *ContainingAdapter; // rax
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // eax
  __int64 v19; // rdi
  struct DXGADAPTER *v20; // rax
  __int64 v21; // r8
  struct DXGADAPTER *v22; // rax
  struct DXGADAPTER *v23; // rax
  __int64 v24; // r8
  __int64 v25; // r9
  struct DXGADAPTER *v26; // rax
  bool v27; // zf
  int v28; // eax
  struct DXGADAPTER *v29; // rax
  __int64 result; // rax
  const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *v31; // rdi
  int v32; // eax
  unsigned int v33; // ebx
  _DXGKARG_COMMITVIDPN v34; // [rsp+30h] [rbp-20h] BYREF
  unsigned int v35; // [rsp+98h] [rbp+48h] BYREF

  v9 = a4;
  if ( a2 == -96LL )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 8469;
  }
  *(_QWORD *)&v34.Flags = 0LL;
  v34.hPrimaryAllocation = a3;
  v13 = a7;
  v34.AffectedVidPnSourceId = v9;
  v14 = *((_BYTE *)a8 + 4) & 8;
  a7 = 0;
  v34.hFunctionalVidPn = (D3DKMDT_HVIDPN)(a2 & -(__int64)(a2 != -88LL));
  *(_QWORD *)&v34.Flags = a6 & 1 | (2 * (v13 & 1u));
  ContainingAdapter = VIDPN_MGR::GetContainingAdapter((VIDPN_MGR *)this);
  if ( (int)MonitorIsUsingSimulatedMonitor(ContainingAdapter, &a7, v16, v17) < 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 469;
  }
  if ( a7 || v13 )
    v34.MonitorConnectivityChecks = D3DKMDT_MCC_IGNORE;
  else
    v34.MonitorConnectivityChecks = a5;
  if ( !v14 )
  {
    if ( !this[1] )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 68;
    }
    v18 = ADAPTER_DISPLAY::DdiCommitVidPn(this[1], &v34);
    v19 = v18;
    if ( v18 == -1071774920 || v18 == -1071774976 )
    {
      v22 = VIDPN_MGR::GetContainingAdapter((VIDPN_MGR *)this);
      WdLogSingleEntry3(7LL, a2, v9, v22);
      WdLogGlobalForLineNumber = 8512;
      if ( v34.MonitorConnectivityChecks == D3DKMDT_MCC_ENFORCE && a9 )
        *a9 = 1;
      v35 = 0;
      v23 = VIDPN_MGR::GetContainingAdapter((VIDPN_MGR *)this);
      if ( (int)MonitorGetNumConnectedMonitor(v23, &v35, v24, v25) < 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 8529;
      }
      if ( v35 != 1 || v34.MonitorConnectivityChecks != D3DKMDT_MCC_ENFORCE || a6 )
        goto LABEL_16;
      v26 = VIDPN_MGR::GetContainingAdapter((VIDPN_MGR *)this);
      WdLogSingleEntry3(7LL, a2, v9, v26);
      v27 = this[1] == 0LL;
      WdLogGlobalForLineNumber = 8543;
      v34.MonitorConnectivityChecks = D3DKMDT_MCC_IGNORE;
      if ( v27 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 68;
      }
      v28 = ADAPTER_DISPLAY::DdiCommitVidPn(this[1], &v34);
      v19 = v28;
      if ( v28 < 0 )
      {
        v29 = VIDPN_MGR::GetContainingAdapter((VIDPN_MGR *)this);
        WdLogSingleEntry4(7LL, a2, v9, v29, v19);
        v21 = 2LL;
        WdLogGlobalForLineNumber = 8553;
        goto LABEL_29;
      }
      DmmLogCommitVidPnFailedPacket(&v34, (unsigned int)v28, 3LL);
    }
    else if ( v18 < 0 )
    {
      v20 = VIDPN_MGR::GetContainingAdapter((VIDPN_MGR *)this);
      WdLogSingleEntry3(2LL, a2, v20, v19);
      WdLogGlobalForLineNumber = 8569;
LABEL_16:
      v21 = 4LL;
LABEL_29:
      DmmLogCommitVidPnFailedPacket(&v34, (unsigned int)v19, v21);
      return (unsigned int)v19;
    }
  }
  v31 = a8;
  v32 = VIDPN_MGR::CacheVidPnToBeComitted((VIDPN_MGR *)this, (const struct DMMVIDPN *)a2, v9, a8);
  v33 = v32;
  if ( v32 >= 0 )
    return 0LL;
  WdLogSingleEntry4(2LL, a2, v9, (int)(*(_DWORD *)v31 << 28) >> 28, v32);
  result = v33;
  WdLogGlobalForLineNumber = 8587;
  return result;
}
