/*
 * XREFs of ?OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z @ 0x14025ABEC
 * Callers:
 *     ?_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14025CB50 (-_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXG.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14000BE00 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1400345B4 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1400369D0 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ @ 0x1400384F0 (-AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x140040B88 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x140040C30 (-IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?Invalidate@DMMVIDPNTOPOLOGY@@QEAAXXZ @ 0x140064DBC (-Invalidate@DMMVIDPNTOPOLOGY@@QEAAXXZ.c)
 *     Feature_PanelBufferControl__private_IsEnabledDeviceUsageNoInline @ 0x14006E0E0 (Feature_PanelBufferControl__private_IsEnabledDeviceUsageNoInline.c)
 *     DpiPanelBufferingGetCaps @ 0x14008A7DC (DpiPanelBufferingGetCaps.c)
 *     ?SetConnectedMonitor@DMMVIDEOPRESENTTARGET@@QEAAXPEAUHDXGMONITOR__@@@Z @ 0x14008F084 (-SetConnectedMonitor@DMMVIDEOPRESENTTARGET@@QEAAXPEAUHDXGMONITOR__@@@Z.c)
 *     ?SetTargetUsage@DMMVIDEOPRESENTTARGET@@QEAAXW4_D3DKMT_DISPLAY_TARGET_USAGE@@_N@Z @ 0x14008F19C (-SetTargetUsage@DMMVIDEOPRESENTTARGET@@QEAAXW4_D3DKMT_DISPLAY_TARGET_USAGE@@_N@Z.c)
 *     ?OnMonitorConnectionChanged@ADAPTER_DISPLAY@@QEAAXII@Z @ 0x140199B1C (-OnMonitorConnectionChanged@ADAPTER_DISPLAY@@QEAAXII@Z.c)
 *     ?MonitorGetUsageClass@@YAJPEAUHDXGMONITOR__@@PEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@PEA_N@Z @ 0x1402DEB68 (-MonitorGetUsageClass@@YAJPEAUHDXGMONITOR__@@PEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@PEA_N@Z.c)
 *     ?MonitorGetMonitorHandle@@YAJPEAXIE0PEAPEAUHDXGMONITOR__@@@Z @ 0x1402E06D8 (-MonitorGetMonitorHandle@@YAJPEAXIE0PEAPEAUHDXGMONITOR__@@@Z.c)
 *     ?MonitorReleaseMonitorHandle@@YAJPEAXPEAUHDXGMONITOR__@@0@Z @ 0x1402E09E0 (-MonitorReleaseMonitorHandle@@YAJPEAXPEAUHDXGMONITOR__@@0@Z.c)
 *     IsVirtualizationDisabledForTarget @ 0x1402E19E4 (IsVirtualizationDisabledForTarget.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x140315880 (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 *     ?MonitorIsMonitorAndLinkHDRCapable@@YAJPEAUHDXGMONITOR__@@PEATMONITOR_AND_LINK_HDR_CAPS@@PEAW4MonitorAndLinkHDRIncapableReason@@@Z @ 0x14035F81C (-MonitorIsMonitorAndLinkHDRCapable@@YAJPEAUHDXGMONITOR__@@PEATMONITOR_AND_LINK_HDR_CAPS@@PEAW4Mo.c)
 *     ?MonitorGetNativeFlags@@YAJPEAUHDXGMONITOR__@@PEAE11@Z @ 0x1403ADE68 (-MonitorGetNativeFlags@@YAJPEAUHDXGMONITOR__@@PEAE11@Z.c)
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
  struct DXGADAPTER *v37; // rax
  __int64 v38; // rcx
  int Caps; // eax
  __int64 v40; // rbx
  __int64 v41; // rbx
  __int64 v42; // rax
  unsigned int PathSourceFromTarget; // ebx
  const struct DMMVIDPN *ClientCommittedVidPnRef; // rax
  const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *v45; // r8
  unsigned int v46; // eax
  int v47; // ecx
  struct DXGADAPTER *v48; // rax
  void *v49; // r8
  bool v50; // [rsp+30h] [rbp-30h] BYREF
  unsigned __int8 v51; // [rsp+31h] [rbp-2Fh] BYREF
  unsigned __int8 v52; // [rsp+32h] [rbp-2Eh] BYREF
  unsigned __int8 v53; // [rsp+33h] [rbp-2Dh] BYREF
  char v54; // [rsp+34h] [rbp-2Ch] BYREF
  char v55; // [rsp+35h] [rbp-2Bh] BYREF
  char v56; // [rsp+36h] [rbp-2Ah] BYREF
  int v57; // [rsp+38h] [rbp-28h] BYREF
  int v58; // [rsp+3Ch] [rbp-24h] BYREF
  int v59; // [rsp+40h] [rbp-20h] BYREF
  struct HDXGMONITOR__ *v60; // [rsp+48h] [rbp-18h] BYREF
  __int64 v61[2]; // [rsp+50h] [rbp-10h] BYREF
  bool v62; // [rsp+A0h] [rbp+40h] BYREF
  struct HDXGMONITOR__ *v63; // [rsp+B0h] [rbp+50h]
  int v64; // [rsp+B8h] [rbp+58h]

  v64 = a4;
  v63 = a3;
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
  v63 = (struct HDXGMONITOR__ *)*((_QWORD *)TargetById + 14);
  v60 = 0LL;
  ContainingAdapter = VIDPN_MGR::GetContainingAdapter((VIDPN_MGR *)a1);
  MonitorHandle = MonitorGetMonitorHandle(ContainingAdapter, v11, 0, TargetById, &v60);
  v14 = MonitorHandle;
  if ( MonitorHandle == -1073741275 )
  {
    v8 = v60;
    if ( v60 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 5386;
    }
    LODWORD(v14) = 0;
  }
  else if ( MonitorHandle >= 0 )
  {
    v8 = v60;
  }
  else
  {
    v15 = VIDPN_MGR::GetContainingAdapter((VIDPN_MGR *)a1);
    WdLogSingleEntry3(2LL, v6, v15, v14);
    v4 = v64;
    WdLogGlobalForLineNumber = 5395;
    v60 = 0LL;
  }
  v16 = v63;
  if ( v8 != v63 )
  {
    DMMVIDEOPRESENTTARGET::SetConnectedMonitor((struct _DXGK_MONITORLINKINFO *)TargetById, v8);
    v17 = *((_DWORD *)TargetById + 20) - 10;
    *((_BYTE *)TargetById + 413) = 1;
    if ( v17 <= 1 )
      *((_BYTE *)TargetById + 414) = 1;
    if ( v8 )
    {
      v51 = 0;
      v52 = 0;
      v53 = 0;
      NativeFlags = MonitorGetNativeFlags(v8, &v51, &v52, &v53);
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
      v23 = v51;
      *((_BYTE *)TargetById + 405) = v51;
      if ( v22 || !v23 || (v24 = 1, !v52) )
        v24 = 0;
      *((_BYTE *)TargetById + 406) = v24;
      v57 = 0;
      v62 = 0;
      UsageClass = MonitorGetUsageClass(v8, (enum _D3DKMT_DISPLAY_TARGET_USAGE *)&v57, &v62);
      if ( UsageClass >= 0 )
      {
        v28 = v57;
        v29 = v62;
      }
      else
      {
        v26 = UsageClass;
        v27 = VIDPN_MGR::GetContainingAdapter((VIDPN_MGR *)a1);
        WdLogSingleEntry3(2LL, v6, v27, v26);
        WdLogGlobalForLineNumber = 5447;
        v28 = 0;
        v57 = 0;
        v29 = 0;
        v62 = 0;
      }
      DMMVIDEOPRESENTTARGET::SetTargetUsage((__int64)TargetById, v28, v29);
      *((_BYTE *)TargetById + 412) = v53;
      v58 = 0;
      IsMonitorAndLinkHDRCapable = MonitorIsMonitorAndLinkHDRCapable(v8, (union MONITOR_AND_LINK_HDR_CAPS *)&v58, 0LL);
      if ( IsMonitorAndLinkHDRCapable >= 0 )
      {
        v33 = v58;
      }
      else
      {
        v31 = IsMonitorAndLinkHDRCapable;
        v32 = VIDPN_MGR::GetContainingAdapter((VIDPN_MGR *)a1);
        WdLogSingleEntry3(2LL, v6, v32, v31);
        WdLogGlobalForLineNumber = 5464;
        v33 = 0;
        v58 = 0;
      }
      v54 = 0;
      *((_BYTE *)TargetById + 419) = v33 & 1;
      v55 = 0;
      v34 = (unsigned int)VIDPN_MGR::GetContainingAdapter((VIDPN_MGR *)a1);
      v35 = IsVirtualizationDisabledForTarget(v34, v6, (unsigned int)&v54, (unsigned int)&v55, 0LL);
      v14 = v35;
      if ( v35 < 0 )
      {
        v36 = VIDPN_MGR::GetContainingAdapter((VIDPN_MGR *)a1);
        WdLogSingleEntry3(2LL, v6, v36, v14);
        WdLogGlobalForLineNumber = 5481;
        LODWORD(v14) = 0;
      }
      *((_BYTE *)TargetById + 407) = v54 == 0;
      if ( !(unsigned int)Feature_PanelBufferControl__private_IsEnabledDeviceUsageNoInline() )
        goto LABEL_44;
      v37 = VIDPN_MGR::GetContainingAdapter((VIDPN_MGR *)a1);
      *((_DWORD *)TargetById + 154) = 0;
      v38 = *((_QWORD *)v37 + 27);
      if ( v38 )
      {
        Caps = DpiPanelBufferingGetCaps(v38, *((_DWORD *)TargetById + 6), (_DWORD *)TargetById + 154);
        if ( (Caps & 0xC0000000) != 0xC0000000 )
          goto LABEL_44;
      }
      else
      {
        Caps = -1073741275;
      }
      WdLogSingleEntry1(3LL, Caps);
      WdLogGlobalForLineNumber = 5496;
    }
    else
    {
      *(_WORD *)((char *)TargetById + 405) = 0;
      DMMVIDEOPRESENTTARGET::SetTargetUsage((__int64)TargetById, 0, 0);
      *((_BYTE *)TargetById + 412) = 1;
    }
LABEL_44:
    v40 = *(_QWORD *)(a1 + 160);
    if ( v40 != a1 + 160 )
    {
      v41 = v40 - 8;
      while ( v41 )
      {
        if ( DMMVIDPNTOPOLOGY::IsTargetInTopology((DMMVIDPNTOPOLOGY *)(v41 + 96), v6) )
          DMMVIDPNTOPOLOGY::Invalidate((DMMVIDPNTOPOLOGY *)(v41 + 96));
        v42 = *(_QWORD *)(v41 + 8);
        v41 = v42 - 8;
        if ( v42 == a1 + 160 )
          v41 = 0LL;
      }
    }
    v61[0] = 0LL;
    PathSourceFromTarget = -1;
    ClientCommittedVidPnRef = VIDPN_MGR::AcquireLastClientCommittedVidPnRef((VIDPN_MGR *)a1);
    auto_rc<DMMVIDPN const>::reset(v61, (__int64)ClientCommittedVidPnRef);
    if ( v61[0] )
      PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget((DMMVIDPNTOPOLOGY *)(v61[0] + 96), v6);
    auto_rc<DMMVIDPN const>::reset(v61, 0LL);
    if ( !*(_QWORD *)(a1 + 8) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 68;
    }
    ADAPTER_DISPLAY::OnMonitorConnectionChanged(*(PERESOURCE ***)(a1 + 8), PathSourceFromTarget, v45);
    v16 = v63;
    goto LABEL_65;
  }
  switch ( v4 )
  {
    case 10:
      v59 = 0;
      v50 = 0;
      if ( (int)MonitorGetUsageClass(v8, (enum _D3DKMT_DISPLAY_TARGET_USAGE *)&v59, &v50) >= 0 )
        DMMVIDEOPRESENTTARGET::SetTargetUsage((__int64)TargetById, v59, v50);
      break;
    case 11:
      break;
    case 12:
      v47 = `DMMVIDEOPRESENTTARGET::IncreaseConnectionId'::`2'::s_TargetConnectionId;
      *((_DWORD *)TargetById + 33) = `DMMVIDEOPRESENTTARGET::IncreaseConnectionId'::`2'::s_TargetConnectionId;
      `DMMVIDEOPRESENTTARGET::IncreaseConnectionId'::`2'::s_TargetConnectionId = v47 + 1;
LABEL_64:
      LODWORD(v14) = 0;
      goto LABEL_65;
    default:
      goto LABEL_65;
  }
  v50 = 0;
  v46 = (unsigned int)VIDPN_MGR::GetContainingAdapter((VIDPN_MGR *)a1);
  LODWORD(v14) = IsVirtualizationDisabledForTarget(v46, v6, (unsigned int)&v50, (unsigned int)&v56, 0LL);
  if ( (int)v14 < 0 )
    goto LABEL_64;
  *((_BYTE *)TargetById + 407) = !v50;
LABEL_65:
  if ( v16 )
  {
    v48 = VIDPN_MGR::GetContainingAdapter((VIDPN_MGR *)a1);
    MonitorReleaseMonitorHandle(v48, v16, v49);
  }
  return (unsigned int)v14;
}
