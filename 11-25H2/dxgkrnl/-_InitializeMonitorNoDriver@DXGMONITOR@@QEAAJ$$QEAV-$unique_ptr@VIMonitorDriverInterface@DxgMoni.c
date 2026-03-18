/*
 * XREFs of ?_InitializeMonitorNoDriver@DXGMONITOR@@QEAAJ$$QEAV?$unique_ptr@VIMonitorDriverInterface@DxgMonitor@@U?$default_delete@VIMonitorDriverInterface@DxgMonitor@@@wistd@@@wistd@@IPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAUDXGKMON_USB4_HOSTROUTER_INFO@@@Z @ 0x140356B64
 * Callers:
 *     ?_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEAEAVMONITOR_REF_ACCESSOR@@PEAU_DXGK_CONNECTION_USB4_INFO@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140355604 (-_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEAEAVMONITOR_REF_ACCESSOR@@PEAU_.c)
 *     ?_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@AEBVMONITOR_REF_ACCESSOR@@AEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140402270 (-_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@AEBVMONITOR_REF_ACCESSOR@.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?reset@?$unique_ptr@VMonitorDescriptorState@DxgMonitor@@U?$default_delete@VMonitorDescriptorState@DxgMonitor@@@wistd@@@wistd@@QEAAXPEAVMonitorDescriptorState@DxgMonitor@@@Z @ 0x14005AF38 (-reset@-$unique_ptr@VMonitorDescriptorState@DxgMonitor@@U-$default_delete@VMonitorDescriptorStat.c)
 *     ?reset@?$unique_ptr@VMonitorUsb4State@DxgMonitor@@U?$default_delete@VMonitorUsb4State@DxgMonitor@@@wistd@@@wistd@@QEAAXPEAVMonitorUsb4State@DxgMonitor@@@Z @ 0x140063058 (-reset@-$unique_ptr@VMonitorUsb4State@DxgMonitor@@U-$default_delete@VMonitorUsb4State@DxgMonitor.c)
 *     ?reset@?$unique_ptr@VMonitorPnpState@DxgMonitor@@U?$default_delete@VMonitorPnpState@DxgMonitor@@@wistd@@@wistd@@QEAAXPEAVMonitorPnpState@DxgMonitor@@@Z @ 0x140063088 (-reset@-$unique_ptr@VMonitorPnpState@DxgMonitor@@U-$default_delete@VMonitorPnpState@DxgMonitor@@.c)
 *     ?reset@?$unique_ptr@VMonitorMipiDsiState@DxgMonitor@@U?$default_delete@VMonitorMipiDsiState@DxgMonitor@@@wistd@@@wistd@@QEAAXPEAVMonitorMipiDsiState@DxgMonitor@@@Z @ 0x1400630B8 (-reset@-$unique_ptr@VMonitorMipiDsiState@DxgMonitor@@U-$default_delete@VMonitorMipiDsiState@DxgM.c)
 *     ?reset@?$unique_ptr@VMonitorGammaState@DxgMonitor@@U?$default_delete@VMonitorGammaState@DxgMonitor@@@wistd@@@wistd@@QEAAXPEAVMonitorGammaState@DxgMonitor@@@Z @ 0x1400630E8 (-reset@-$unique_ptr@VMonitorGammaState@DxgMonitor@@U-$default_delete@VMonitorGammaState@DxgMonit.c)
 *     ?reset@?$unique_ptr@VMonitorModes@DxgMonitor@@U?$default_delete@VMonitorModes@DxgMonitor@@@wistd@@@wistd@@QEAAXPEAVMonitorModes@DxgMonitor@@@Z @ 0x140063118 (-reset@-$unique_ptr@VMonitorModes@DxgMonitor@@U-$default_delete@VMonitorModes@DxgMonitor@@@wistd.c)
 *     ??_GMonitorDataStore@DxgMonitor@@UEAAPEAXI@Z @ 0x1400900C0 (--_GMonitorDataStore@DxgMonitor@@UEAAPEAXI@Z.c)
 *     ??0MonitorDisplayPortState@DxgMonitor@@QEAA@AEBVIMonitorComponentParent@1@@Z @ 0x14009079C (--0MonitorDisplayPortState@DxgMonitor@@QEAA@AEBVIMonitorComponentParent@1@@Z.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ??0MonitorModes@DxgMonitor@@QEAA@AEBVIMonitorComponentParent@1@AEBVIMonitorRegistry@1@@Z @ 0x1401845B8 (--0MonitorModes@DxgMonitor@@QEAA@AEBVIMonitorComponentParent@1@AEBVIMonitorRegistry@1@@Z.c)
 *     ??0MonitorDescriptorState@DxgMonitor@@QEAA@AEBVIMonitorComponentParent@1@AEBVIMonitorRegistry@1@@Z @ 0x140186188 (--0MonitorDescriptorState@DxgMonitor@@QEAA@AEBVIMonitorComponentParent@1@AEBVIMonitorRegistry@1@.c)
 *     ?DmmGetVidPnTargetPowerComponentIndex@@YAJQEAXIPEAI@Z @ 0x140186FC8 (-DmmGetVidPnTargetPowerComponentIndex@@YAJQEAXIPEAI@Z.c)
 *     ??0MonitorUsb4State@DxgMonitor@@QEAA@AEBVIMonitorComponentParent@1@PEAUDXGKMON_USB4_HOSTROUTER_INFO@@PEAUPOHANDLE__@@I@Z @ 0x1402701CC (--0MonitorUsb4State@DxgMonitor@@QEAA@AEBVIMonitorComponentParent@1@PEAUDXGKMON_USB4_HOSTROUTER_I.c)
 *     ??0MonitorGammaState@DxgMonitor@@QEAA@AEBVIMonitorComponentParent@1@AEBVIMonitorDxgiGammaSource@1@@Z @ 0x140272784 (--0MonitorGammaState@DxgMonitor@@QEAA@AEBVIMonitorComponentParent@1@AEBVIMonitorDxgiGammaSource@.c)
 *     ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x1403261A4 (-DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 *     ??0MonitorColorState@DxgMonitor@@QEAA@AEAVIMonitorComponentParent@1@AEAVIMonitorRegistry@1@@Z @ 0x1403572BC (--0MonitorColorState@DxgMonitor@@QEAA@AEAVIMonitorComponentParent@1@AEAVIMonitorRegistry@1@@Z.c)
 */

__int64 __fastcall DXGMONITOR::_InitializeMonitorNoDriver(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY a5,
        char a6,
        unsigned int a7,
        struct DXGKMON_USB4_HOSTROUTER_INFO *a8)
{
  unsigned int v9; // r12d
  __int64 v12; // rax
  unsigned int v13; // edi
  __int64 v14; // rax
  void (__fastcall ***v15)(_QWORD, __int64); // rcx
  char v16; // al
  unsigned int v17; // edx
  char v18; // al
  char v19; // cl
  __int64 v20; // rax
  struct POHANDLE__ *v21; // r13
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // rdi
  __int64 v25; // r9
  _QWORD *v26; // rax
  __int64 v27; // r9
  DxgMonitor::MonitorDataStore *v28; // rcx
  DxgMonitor::MonitorDescriptorState *v29; // rax
  struct _ERESOURCE *v30; // rax
  __int64 v31; // r9
  DxgMonitor::MonitorColorState *v32; // rax
  __int64 v33; // r9
  __int64 v34; // rax
  void *v35; // rcx
  __int64 v36; // rax
  __int64 v37; // r9
  void *v38; // rcx
  DxgMonitor::MonitorModes *v39; // rax
  DxgMonitor::MonitorModes *v40; // rax
  __int64 v41; // r9
  bool v43; // cf
  DxgMonitor::MonitorGammaState *v44; // rax
  DxgMonitor::MonitorGammaState *v45; // rax
  __int64 v46; // r9
  DxgMonitor::MonitorUsb4State *v47; // rax
  DxgMonitor::MonitorUsb4State *v48; // rax
  __int64 v49; // r9
  DxgMonitor::MonitorDisplayPortState *v50; // rax
  __int64 v51; // r9
  DxgMonitor::MonitorDisplayPortState *v52; // rax
  void *v53; // rcx
  __int64 v54; // rax
  __int64 v55; // rax
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v56; // edi

  v9 = a3;
  v12 = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  v13 = a7;
  *(_QWORD *)(v12 + 24) = a1;
  WdLogGlobalForLineNumber = 736;
  if ( !v13 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 745;
LABEL_40:
    if ( !a4 )
      goto LABEL_4;
    goto LABEL_41;
  }
  if ( v13 != 1 )
    goto LABEL_40;
  if ( a4 )
    goto LABEL_4;
LABEL_41:
  WdLogSingleEntry0(1LL);
  WdLogGlobalForLineNumber = 746;
LABEL_4:
  *(_DWORD *)(a1 + 180) = v9;
  *(_DWORD *)(a1 + 280) = v13;
  *(_DWORD *)(a1 + 284) = v13;
  v14 = *a2;
  *a2 = 0LL;
  v15 = *(void (__fastcall ****)(_QWORD, __int64))(a1 + 192);
  *(_QWORD *)(a1 + 192) = v14;
  if ( v15 )
    (**v15)(v15, 1LL);
  if ( (_BYTE)a5 )
  {
    v43 = a6 != 0;
    a6 = -a6;
    *(_BYTE *)(a1 + 176) = *(_BYTE *)(a1 + 176) & 0xFB | (v43 ? 0 : 4) | 2;
  }
  v16 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 168) + 88LL))(*(_QWORD *)(a1 + 168));
  v17 = *(_DWORD *)(a1 + 180);
  v43 = v16 != 0;
  v18 = *(_BYTE *)(a1 + 177);
  a7 = -1;
  v19 = v18 & 0xDF | (v43 ? 0x20 : 0);
  v20 = *(_QWORD *)(a1 + 168);
  *(_BYTE *)(a1 + 177) = v19;
  DmmGetVidPnTargetPowerComponentIndex(*(_QWORD **)(*(_QWORD *)(v20 + 24) + 16LL), v17, &a7);
  v21 = *(struct POHANDLE__ **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 168) + 24LL) + 16LL) + 3232LL);
  v23 = operator new(0x50uLL, 0x4D677844u, 64LL, v22);
  v24 = a1 + 16;
  if ( v23 )
  {
    *(_QWORD *)v23 = v24;
    *(_BYTE *)(v23 + 16) = 0;
    *(_QWORD *)(v23 + 24) = 0LL;
    *(_QWORD *)(v23 + 32) = 0LL;
    *(_QWORD *)(v23 + 40) = 0LL;
    *(_OWORD *)(v23 + 48) = 0LL;
    *(_OWORD *)(v23 + 64) = 0LL;
    *(_QWORD *)(v23 + 8) = a4;
  }
  else
  {
    v23 = 0LL;
  }
  wistd::unique_ptr<DxgMonitor::MonitorPnpState,wistd::default_delete<DxgMonitor::MonitorPnpState>>::reset(
    (DxgMonitor::MonitorPnpState **)(a1 + 200),
    (DxgMonitor::MonitorPnpState *)v23);
  if ( !*(_QWORD *)(a1 + 200) )
  {
    WdLogSingleEntry1(2LL, -1073741801LL);
    WdLogGlobalForLineNumber = 773;
    return 3221225495LL;
  }
  v26 = (_QWORD *)operator new(0x18uLL, 0x4D677844u, 256LL, v25);
  if ( v26 )
  {
    v26[1] = v24;
    *v26 = &DxgMonitor::MonitorDataStore::`vftable';
    v26[2] = a1 + 24;
  }
  else
  {
    v26 = 0LL;
  }
  v28 = *(DxgMonitor::MonitorDataStore **)(a1 + 208);
  *(_QWORD *)(a1 + 208) = v26;
  if ( v28 )
    DxgMonitor::MonitorDataStore::`scalar deleting destructor'(v28, 1);
  if ( !*(_QWORD *)(a1 + 208) )
  {
    WdLogSingleEntry1(2LL, -1073741801LL);
    WdLogGlobalForLineNumber = 776;
    return 3221225495LL;
  }
  v29 = (DxgMonitor::MonitorDescriptorState *)operator new(0xB8uLL, 0x4D677844u, 64LL, v27);
  if ( v29 )
    v30 = (struct _ERESOURCE *)DxgMonitor::MonitorDescriptorState::MonitorDescriptorState(
                                 v29,
                                 (const struct DxgMonitor::IMonitorComponentParent *)(a1 + 16),
                                 *(const struct DxgMonitor::IMonitorRegistry **)(a1 + 208));
  else
    v30 = 0LL;
  wistd::unique_ptr<DxgMonitor::MonitorDescriptorState,wistd::default_delete<DxgMonitor::MonitorDescriptorState>>::reset(
    (struct _ERESOURCE **)(a1 + 216),
    v30);
  if ( !*(_QWORD *)(a1 + 216) )
  {
    WdLogSingleEntry1(2LL, -1073741801LL);
    WdLogGlobalForLineNumber = 779;
    return 3221225495LL;
  }
  v32 = (DxgMonitor::MonitorColorState *)operator new(0x220uLL, 0x4D677844u, 256LL, v31);
  if ( v32 )
    v34 = DxgMonitor::MonitorColorState::MonitorColorState(
            v32,
            (struct DxgMonitor::IMonitorComponentParent *)(a1 + 16),
            *(struct DxgMonitor::IMonitorRegistry **)(a1 + 208));
  else
    v34 = 0LL;
  v35 = *(void **)(a1 + 224);
  *(_QWORD *)(a1 + 224) = v34;
  if ( v35 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v35);
  if ( !*(_QWORD *)(a1 + 224) )
  {
    WdLogSingleEntry1(2LL, -1073741801LL);
    WdLogGlobalForLineNumber = 782;
    return 3221225495LL;
  }
  v36 = operator new(0x18uLL, 0x4D677844u, 256LL, v33);
  if ( v36 )
  {
    *(_QWORD *)(v36 + 8) = *(_QWORD *)(a1 + 208);
    *(_QWORD *)v36 = v24;
    *(_DWORD *)(v36 + 16) = 0;
    *(_WORD *)(v36 + 20) = 0;
    *(_BYTE *)(v36 + 22) = 0;
  }
  else
  {
    v36 = 0LL;
  }
  v38 = *(void **)(a1 + 240);
  *(_QWORD *)(a1 + 240) = v36;
  if ( v38 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v38);
  if ( !*(_QWORD *)(a1 + 240) )
  {
    WdLogSingleEntry1(2LL, -1073741801LL);
    WdLogGlobalForLineNumber = 785;
    return 3221225495LL;
  }
  v39 = (DxgMonitor::MonitorModes *)operator new(0xF8uLL, 0x4D677844u, 64LL, v37);
  if ( v39 )
    v40 = DxgMonitor::MonitorModes::MonitorModes(
            v39,
            (const struct DxgMonitor::IMonitorComponentParent *)(a1 + 16),
            *(const struct DxgMonitor::IMonitorRegistry **)(a1 + 208));
  else
    v40 = 0LL;
  wistd::unique_ptr<DxgMonitor::MonitorModes,wistd::default_delete<DxgMonitor::MonitorModes>>::reset(
    (DxgMonitor::MonitorModes **)(a1 + 232),
    v40);
  if ( !*(_QWORD *)(a1 + 232) )
  {
    WdLogSingleEntry1(2LL, -1073741801LL);
    WdLogGlobalForLineNumber = 788;
    return 3221225495LL;
  }
  v44 = (DxgMonitor::MonitorGammaState *)operator new(0xD0uLL, 0x4D677844u, 64LL, v41);
  if ( v44 )
    v45 = DxgMonitor::MonitorGammaState::MonitorGammaState(
            v44,
            (const struct DxgMonitor::IMonitorComponentParent *)(a1 + 16),
            (const struct DxgMonitor::IMonitorDxgiGammaSource *)(a1 + 32));
  else
    v45 = 0LL;
  wistd::unique_ptr<DxgMonitor::MonitorGammaState,wistd::default_delete<DxgMonitor::MonitorGammaState>>::reset(
    (DxgMonitor::MonitorGammaState **)(a1 + 248),
    v45);
  if ( !*(_QWORD *)(a1 + 248) )
  {
    WdLogSingleEntry1(2LL, -1073741801LL);
    WdLogGlobalForLineNumber = 791;
    return 3221225495LL;
  }
  v47 = (DxgMonitor::MonitorUsb4State *)operator new(0x60uLL, 0x4D677844u, 64LL, v46);
  if ( v47 )
    v48 = (DxgMonitor::MonitorUsb4State *)DxgMonitor::MonitorUsb4State::MonitorUsb4State(
                                            v47,
                                            (const struct DxgMonitor::IMonitorComponentParent *)(a1 + 16),
                                            a8,
                                            v21,
                                            a7);
  else
    v48 = 0LL;
  wistd::unique_ptr<DxgMonitor::MonitorUsb4State,wistd::default_delete<DxgMonitor::MonitorUsb4State>>::reset(
    (DxgMonitor::MonitorUsb4State **)(a1 + 264),
    v48);
  if ( !*(_QWORD *)(a1 + 264) )
  {
    WdLogSingleEntry1(2LL, -1073741801LL);
    WdLogGlobalForLineNumber = 794;
    return 3221225495LL;
  }
  v50 = (DxgMonitor::MonitorDisplayPortState *)operator new(0x28uLL, 0x4D677844u, 256LL, v49);
  if ( v50 )
    v52 = DxgMonitor::MonitorDisplayPortState::MonitorDisplayPortState(
            v50,
            (const struct DxgMonitor::IMonitorComponentParent *)(a1 + 16));
  else
    v52 = 0LL;
  v53 = *(void **)(a1 + 272);
  *(_QWORD *)(a1 + 272) = v52;
  if ( v53 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v53);
  if ( !*(_QWORD *)(a1 + 272) )
  {
    WdLogSingleEntry1(2LL, -1073741801LL);
    WdLogGlobalForLineNumber = 797;
    return 3221225495LL;
  }
  if ( (_BYTE)a5 )
  {
    v54 = operator new(0x50uLL, 0x4D677844u, 64LL, v51);
    if ( v54 )
    {
      *(_QWORD *)v54 = v24;
      *(_OWORD *)(v54 + 8) = 0LL;
      *(_DWORD *)(v54 + 24) = 0;
      *(_QWORD *)(v54 + 40) = 0LL;
      *(_DWORD *)(v54 + 68) = -1;
      *(_QWORD *)(v54 + 48) = 0LL;
      *(_QWORD *)(v54 + 56) = 0LL;
      *(_DWORD *)(v54 + 64) = 0;
      *(_DWORD *)(v54 + 72) = 17;
    }
    else
    {
      v54 = 0LL;
    }
    wistd::unique_ptr<DxgMonitor::MonitorMipiDsiState,wistd::default_delete<DxgMonitor::MonitorMipiDsiState>>::reset(
      (__int64 *)(a1 + 256),
      v54);
    if ( !*(_QWORD *)(a1 + 256) )
    {
      WdLogSingleEntry1(2LL, -1073741801LL);
      WdLogGlobalForLineNumber = 802;
      return 3221225495LL;
    }
  }
  v55 = *(_QWORD *)(a1 + 168);
  a5 = D3DKMDT_VOT_UNINITIALIZED;
  if ( (int)DmmGetVideoOutputTechnology(*(_QWORD **)(*(_QWORD *)(v55 + 24) + 16LL), v9, &a5, 0LL) < 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 814;
  }
  v56 = a5;
  if ( a5 == D3DKMDT_VOT_UNINITIALIZED )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 815;
  }
  *(_DWORD *)(a1 + 184) = v56;
  return 0LL;
}
