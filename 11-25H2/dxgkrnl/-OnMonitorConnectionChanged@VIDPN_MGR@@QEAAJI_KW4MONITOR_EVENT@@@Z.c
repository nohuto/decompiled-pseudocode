/*
 * XREFs of ?OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z @ 0x140253DB4
 * Callers:
 *     ?_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140255CB0 (-_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXG.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14001B3E0 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x140034684 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x140036A80 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ @ 0x140038864 (-AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x1400410D8 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x140041180 (-IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?Invalidate@DMMVIDPNTOPOLOGY@@QEAAXXZ @ 0x14006519C (-Invalidate@DMMVIDPNTOPOLOGY@@QEAAXXZ.c)
 *     ?SetConnectedMonitor@DMMVIDEOPRESENTTARGET@@QEAAXPEAUHDXGMONITOR__@@@Z @ 0x14008DDB4 (-SetConnectedMonitor@DMMVIDEOPRESENTTARGET@@QEAAXPEAUHDXGMONITOR__@@@Z.c)
 *     ?SetTargetUsage@DMMVIDEOPRESENTTARGET@@QEAAXW4_D3DKMT_DISPLAY_TARGET_USAGE@@_N@Z @ 0x14008DECC (-SetTargetUsage@DMMVIDEOPRESENTTARGET@@QEAAXW4_D3DKMT_DISPLAY_TARGET_USAGE@@_N@Z.c)
 *     ?OnMonitorConnectionChanged@ADAPTER_DISPLAY@@QEAAXII@Z @ 0x140197690 (-OnMonitorConnectionChanged@ADAPTER_DISPLAY@@QEAAXII@Z.c)
 *     ?MonitorIsMonitorAndLinkHDRCapable@@YAJPEAUHDXGMONITOR__@@PEATMONITOR_AND_LINK_HDR_CAPS@@PEAW4MonitorAndLinkHDRIncapableReason@@@Z @ 0x1402BF950 (-MonitorIsMonitorAndLinkHDRCapable@@YAJPEAUHDXGMONITOR__@@PEATMONITOR_AND_LINK_HDR_CAPS@@PEAW4Mo.c)
 *     ?MonitorGetUsageClass@@YAJPEAUHDXGMONITOR__@@PEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@PEA_N@Z @ 0x1402C81EC (-MonitorGetUsageClass@@YAJPEAUHDXGMONITOR__@@PEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@PEA_N@Z.c)
 *     ?MonitorGetMonitorHandle@@YAJPEAXIE0PEAPEAUHDXGMONITOR__@@@Z @ 0x1402CA140 (-MonitorGetMonitorHandle@@YAJPEAXIE0PEAPEAUHDXGMONITOR__@@@Z.c)
 *     ?MonitorReleaseMonitorHandle@@YAJPEAXPEAUHDXGMONITOR__@@0@Z @ 0x1402CA448 (-MonitorReleaseMonitorHandle@@YAJPEAXPEAUHDXGMONITOR__@@0@Z.c)
 *     IsVirtualizationDisabledForTarget @ 0x1402CB454 (IsVirtualizationDisabledForTarget.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1402D597C (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 *     ?MonitorGetNativeFlags@@YAJPEAUHDXGMONITOR__@@PEAE11@Z @ 0x1403B9728 (-MonitorGetNativeFlags@@YAJPEAUHDXGMONITOR__@@PEAE11@Z.c)
 */

__int64 __fastcall VIDPN_MGR::OnMonitorConnectionChanged(__int64 a1, unsigned int a2, struct HDXGMONITOR__ *a3, int a4)
{
  int v4; // edi
  __int64 v6; // r13
  __int64 v7; // rbx
  struct HDXGMONITOR__ *v8; // r12
  struct DMMVIDEOPRESENTTARGET *TargetById; // rsi
  unsigned int v11; // ebx
  struct DXGADAPTER *ContainingAdapter; // rax
  int MonitorHandle; // eax
  __int64 v14; // r15
  struct DXGADAPTER *v15; // rax
  struct HDXGMONITOR__ *v16; // rbx
  unsigned int v17; // eax
  int NativeFlags; // eax
  __int64 v19; // rbx
  struct DXGADAPTER *v20; // rax
  __int64 v21; // rcx
  char v22; // al
  unsigned __int8 v23; // cl
  char v24; // al
  int UsageClass; // eax
  __int64 v26; // rbx
  struct DXGADAPTER *v27; // rax
  int v28; // edx
  char v29; // r8
  int IsMonitorAndLinkHDRCapable; // eax
  __int64 v31; // rbx
  struct DXGADAPTER *v32; // rax
  char v33; // al
  unsigned int v34; // eax
  int v35; // eax
  struct DXGADAPTER *v36; // rax
  __int64 v37; // rbx
  __int64 v38; // rbx
  __int64 v39; // rax
  unsigned int PathSourceFromTarget; // ebx
  const struct DMMVIDPN *ClientCommittedVidPnRef; // rax
  const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *v42; // r8
  unsigned int v43; // eax
  int v44; // ecx
  struct DXGADAPTER *v45; // rax
  void *v46; // r8
  bool v47; // [rsp+30h] [rbp-30h] BYREF
  unsigned __int8 v48; // [rsp+31h] [rbp-2Fh] BYREF
  unsigned __int8 v49; // [rsp+32h] [rbp-2Eh] BYREF
  unsigned __int8 v50; // [rsp+33h] [rbp-2Dh] BYREF
  char v51; // [rsp+34h] [rbp-2Ch] BYREF
  char v52; // [rsp+35h] [rbp-2Bh] BYREF
  char v53; // [rsp+36h] [rbp-2Ah] BYREF
  int v54; // [rsp+38h] [rbp-28h] BYREF
  int v55; // [rsp+3Ch] [rbp-24h] BYREF
  int v56; // [rsp+40h] [rbp-20h] BYREF
  struct HDXGMONITOR__ *v57; // [rsp+48h] [rbp-18h] BYREF
  __int64 v58[2]; // [rsp+50h] [rbp-10h] BYREF
  bool v59; // [rsp+A0h] [rbp+40h] BYREF
  struct HDXGMONITOR__ *v60; // [rsp+B0h] [rbp+50h]
  int v61; // [rsp+B8h] [rbp+58h]

  v61 = a4;
  v60 = a3;
  v4 = a4;
  v6 = a2;
  if ( *(struct _KTHREAD **)(a1 + 64) != KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5352;
  }
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 120) + 72LL));
  v7 = *(_QWORD *)(a1 + 120);
  v8 = 0LL;
  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v7, v6);
  if ( !TargetById )
  {
    WdLogSingleEntry2(2LL, v6, a1);
    WdLogGlobalForLineNumber = 5365;
    if ( v7 )
      ReferenceCounted::Release((ReferenceCounted *)(v7 + 64));
    return 3223192325LL;
  }
  if ( v7 )
    ReferenceCounted::Release((ReferenceCounted *)(v7 + 64));
  v11 = *((_DWORD *)TargetById + 6);
  v60 = (struct HDXGMONITOR__ *)*((_QWORD *)TargetById + 14);
  v57 = 0LL;
  ContainingAdapter = VIDPN_MGR::GetContainingAdapter((VIDPN_MGR *)a1);
  MonitorHandle = MonitorGetMonitorHandle(ContainingAdapter, v11, 0, TargetById, &v57);
  v14 = MonitorHandle;
  if ( MonitorHandle == -1073741275 )
  {
    v8 = v57;
    if ( v57 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 5386;
    }
    LODWORD(v14) = 0;
  }
  else if ( MonitorHandle >= 0 )
  {
    v8 = v57;
  }
  else
  {
    v15 = VIDPN_MGR::GetContainingAdapter((VIDPN_MGR *)a1);
    WdLogSingleEntry3(2LL, v6, v15, v14);
    v4 = v61;
    WdLogGlobalForLineNumber = 5395;
    v57 = 0LL;
  }
  v16 = v60;
  if ( v8 != v60 )
  {
    DMMVIDEOPRESENTTARGET::SetConnectedMonitor((struct _DXGK_MONITORLINKINFO *)TargetById, v8);
    v17 = *((_DWORD *)TargetById + 20) - 10;
    *((_BYTE *)TargetById + 413) = 1;
    if ( v17 <= 1 )
      *((_BYTE *)TargetById + 414) = 1;
    if ( v8 )
    {
      v48 = 0;
      v49 = 0;
      v50 = 0;
      NativeFlags = MonitorGetNativeFlags(v8, &v48, &v49, &v50);
      if ( NativeFlags < 0 )
      {
        v19 = NativeFlags;
        v20 = VIDPN_MGR::GetContainingAdapter((VIDPN_MGR *)a1);
        WdLogSingleEntry3(2LL, v6, v20, v19);
        WdLogGlobalForLineNumber = 5426;
      }
      if ( *(_BYTE *)(*((_QWORD *)VIDPN_MGR::GetContainingAdapter((VIDPN_MGR *)a1) + 390) + 289LL)
        && *(_BYTE *)(*((_QWORD *)VIDPN_MGR::GetContainingAdapter((VIDPN_MGR *)a1) + 390) + 290LL)
        || (v21 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)VIDPN_MGR::GetContainingAdapter((VIDPN_MGR *)a1) + 27) + 64LL)
                            + 40LL),
            v22 = 0,
            *(_DWORD *)(v21 + 28) >= 0x4003u) )
      {
        v22 = 1;
      }
      v23 = v48;
      *((_BYTE *)TargetById + 405) = v48;
      if ( v22 || !v23 || (v24 = 1, !v49) )
        v24 = 0;
      *((_BYTE *)TargetById + 406) = v24;
      v54 = 0;
      v59 = 0;
      UsageClass = MonitorGetUsageClass(v8, (enum _D3DKMT_DISPLAY_TARGET_USAGE *)&v54, &v59);
      if ( UsageClass >= 0 )
      {
        v28 = v54;
        v29 = v59;
      }
      else
      {
        v26 = UsageClass;
        v27 = VIDPN_MGR::GetContainingAdapter((VIDPN_MGR *)a1);
        WdLogSingleEntry3(2LL, v6, v27, v26);
        WdLogGlobalForLineNumber = 5447;
        v28 = 0;
        v54 = 0;
        v29 = 0;
        v59 = 0;
      }
      DMMVIDEOPRESENTTARGET::SetTargetUsage((__int64)TargetById, v28, v29);
      *((_BYTE *)TargetById + 412) = v50;
      v55 = 0;
      IsMonitorAndLinkHDRCapable = MonitorIsMonitorAndLinkHDRCapable(v8, (union MONITOR_AND_LINK_HDR_CAPS *)&v55, 0LL);
      if ( IsMonitorAndLinkHDRCapable >= 0 )
      {
        v33 = v55;
      }
      else
      {
        v31 = IsMonitorAndLinkHDRCapable;
        v32 = VIDPN_MGR::GetContainingAdapter((VIDPN_MGR *)a1);
        WdLogSingleEntry3(2LL, v6, v32, v31);
        WdLogGlobalForLineNumber = 5464;
        v33 = 0;
        v55 = 0;
      }
      v51 = 0;
      *((_BYTE *)TargetById + 419) = v33 & 1;
      v52 = 0;
      v34 = (unsigned int)VIDPN_MGR::GetContainingAdapter((VIDPN_MGR *)a1);
      v35 = IsVirtualizationDisabledForTarget(v34, v6, (unsigned int)&v51, (unsigned int)&v52, 0LL);
      v14 = v35;
      if ( v35 < 0 )
      {
        v36 = VIDPN_MGR::GetContainingAdapter((VIDPN_MGR *)a1);
        WdLogSingleEntry3(2LL, v6, v36, v14);
        WdLogGlobalForLineNumber = 5481;
        LODWORD(v14) = 0;
      }
      *((_BYTE *)TargetById + 407) = v51 == 0;
    }
    else
    {
      *(_WORD *)((char *)TargetById + 405) = 0;
      DMMVIDEOPRESENTTARGET::SetTargetUsage((__int64)TargetById, 0, 0);
      *((_BYTE *)TargetById + 412) = 1;
    }
    v37 = *(_QWORD *)(a1 + 160);
    if ( v37 != a1 + 160 )
    {
      v38 = v37 - 8;
      while ( v38 )
      {
        if ( DMMVIDPNTOPOLOGY::IsTargetInTopology((DMMVIDPNTOPOLOGY *)(v38 + 96), v6) )
          DMMVIDPNTOPOLOGY::Invalidate((DMMVIDPNTOPOLOGY *)(v38 + 96));
        v39 = *(_QWORD *)(v38 + 8);
        v38 = v39 - 8;
        if ( v39 == a1 + 160 )
          v38 = 0LL;
      }
    }
    v58[0] = 0LL;
    PathSourceFromTarget = -1;
    ClientCommittedVidPnRef = VIDPN_MGR::AcquireLastClientCommittedVidPnRef((VIDPN_MGR *)a1);
    auto_rc<DMMVIDPN const>::reset(v58, (__int64)ClientCommittedVidPnRef);
    if ( v58[0] )
      PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget((DMMVIDPNTOPOLOGY *)(v58[0] + 96), v6);
    auto_rc<DMMVIDPN const>::reset(v58, 0LL);
    if ( !*(_QWORD *)(a1 + 8) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 68;
    }
    ADAPTER_DISPLAY::OnMonitorConnectionChanged(*(PERESOURCE ***)(a1 + 8), PathSourceFromTarget, v42);
    v16 = v60;
    goto LABEL_61;
  }
  switch ( v4 )
  {
    case 10:
      v56 = 0;
      v47 = 0;
      if ( (int)MonitorGetUsageClass(v8, (enum _D3DKMT_DISPLAY_TARGET_USAGE *)&v56, &v47) >= 0 )
        DMMVIDEOPRESENTTARGET::SetTargetUsage((__int64)TargetById, v56, v47);
      break;
    case 11:
      break;
    case 12:
      v44 = `DMMVIDEOPRESENTTARGET::IncreaseConnectionId'::`2'::s_TargetConnectionId;
      *((_DWORD *)TargetById + 33) = `DMMVIDEOPRESENTTARGET::IncreaseConnectionId'::`2'::s_TargetConnectionId;
      `DMMVIDEOPRESENTTARGET::IncreaseConnectionId'::`2'::s_TargetConnectionId = v44 + 1;
LABEL_60:
      LODWORD(v14) = 0;
      goto LABEL_61;
    default:
      goto LABEL_61;
  }
  v47 = 0;
  v43 = (unsigned int)VIDPN_MGR::GetContainingAdapter((VIDPN_MGR *)a1);
  LODWORD(v14) = IsVirtualizationDisabledForTarget(v43, v6, (unsigned int)&v47, (unsigned int)&v53, 0LL);
  if ( (int)v14 < 0 )
    goto LABEL_60;
  *((_BYTE *)TargetById + 407) = !v47;
LABEL_61:
  if ( v16 )
  {
    v45 = VIDPN_MGR::GetContainingAdapter((VIDPN_MGR *)a1);
    MonitorReleaseMonitorHandle(v45, v16, v46);
  }
  return (unsigned int)v14;
}
