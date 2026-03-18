/*
 * XREFs of ?PerformSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@PEAH@Z @ 0x140085D20
 * Callers:
 *     DxgkDisplayMuxSwitchExecute @ 0x1400899C0 (DxgkDisplayMuxSwitchExecute.c)
 * Callees:
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1400118A8 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     ?reset@?$unique_ptr@U_KEY_VALUE_PARTIAL_INFORMATION@@U?$byte_array_deleter@U_KEY_VALUE_PARTIAL_INFORMATION@@@DxgMonitor@@@wistd@@QEAAXPEAU_KEY_VALUE_PARTIAL_INFORMATION@@@Z @ 0x14001EE78 (-reset@-$unique_ptr@U_KEY_VALUE_PARTIAL_INFORMATION@@U-$byte_array_deleter@U_KEY_VALUE_PARTIAL_I.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0MINIPORT_LIST_AUTO_LOCK@@QEAA@_N@Z @ 0x1400417D8 (--0MINIPORT_LIST_AUTO_LOCK@@QEAA@_N@Z.c)
 *     ?ReleaseMiniportListMutex@@YAXXZ @ 0x1400419DC (-ReleaseMiniportListMutex@@YAXXZ.c)
 *     ?Release@AUTO_REMOVE_LOCK@@QEAAXXZ @ 0x14004D960 (-Release@AUTO_REMOVE_LOCK@@QEAAXXZ.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x14005A028 (--1CInterfaceCallContext@@QEAA@XZ.c)
 *     DpiQueryIntegratedDescriptorWrapper @ 0x14005D260 (DpiQueryIntegratedDescriptorWrapper.c)
 *     Feature_DisplayMux_PostGA_BugBundle_2__private_IsEnabledDeviceUsageNoInline @ 0x14006DF3C (Feature_DisplayMux_PostGA_BugBundle_2__private_IsEnabledDeviceUsageNoInline.c)
 *     DpiGetIntegratedEdidSizeForDisplayMuxTarget @ 0x14007D7D4 (DpiGetIntegratedEdidSizeForDisplayMuxTarget.c)
 *     DpiSetIntegratedEdidSizeForDisplayMuxTarget @ 0x14007DC68 (DpiSetIntegratedEdidSizeForDisplayMuxTarget.c)
 *     _DXGKCALLONEXIT__lambda_5bf16074e78eca97c9745c10e52e39f7____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x1400828CC (_DXGKCALLONEXIT__lambda_5bf16074e78eca97c9745c10e52e39f7____--_2_--DXGKCALLONEXIT--_DXGKCALLONEX.c)
 *     _DXGKCALLONEXIT__lambda_8e64b2d4059ca463867f9c5833a46b2d____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x1400828E8 (_DXGKCALLONEXIT__lambda_8e64b2d4059ca463867f9c5833a46b2d____--_2_--DXGKCALLONEXIT--_DXGKCALLONEX.c)
 *     _DXGKCALLONEXIT__lambda_b3b73720c9a5b94f1e3275d94b86d9de____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x140082968 (_DXGKCALLONEXIT__lambda_b3b73720c9a5b94f1e3275d94b86d9de____--_2_--DXGKCALLONEXIT--_DXGKCALLONEX.c)
 *     ?CheckFailed@@YA_NJW4_D3DKMT_DISPLAYMUX_SWITCH_ERROR_STAGE@@AEAU_DISPLAYMUX_SWITCH_CONTEXT@@IPEAD@Z @ 0x140082F28 (-CheckFailed@@YA_NJW4_D3DKMT_DISPLAYMUX_SWITCH_ERROR_STAGE@@AEAU_DISPLAYMUX_SWITCH_CONTEXT@@IPEA.c)
 *     ?CheckForMdmFaultOrDelayInjection@@YA_NW4_D3DKMT_DISPLAYMUX_SWITCH_INJECTION_STAGE@@W4_D3DKMT_DISPLAYMUX_SWITCH_ERROR_STAGE@@AEAU_DISPLAYMUX_SWITCH_CONTEXT@@@Z @ 0x1400831BC (-CheckForMdmFaultOrDelayInjection@@YA_NW4_D3DKMT_DISPLAYMUX_SWITCH_INJECTION_STAGE@@W4_D3DKMT_DI.c)
 *     ?GetInternalPanelInfo@DISPLAY_MUX_MGR@@QEBA_NPEAU_DXGK_DISPLAYMUX_SET_INTERNAL_PANEL_INFO@@@Z @ 0x140084BA0 (-GetInternalPanelInfo@DISPLAY_MUX_MGR@@QEBA_NPEAU_DXGK_DISPLAYMUX_SET_INTERNAL_PANEL_INFO@@@Z.c)
 *     ?QueryConnectionChanges@@YAJPEAU_DEVICE_OBJECT@@U_LUID@@PEAU_GUID@@2@Z @ 0x140087114 (-QueryConnectionChanges@@YAJPEAU_DEVICE_OBJECT@@U_LUID@@PEAU_GUID@@2@Z.c)
 *     ?ReleaseReference@TARGET_POWER_REFERENCE@@AEAAXXZ @ 0x1400872B4 (-ReleaseReference@TARGET_POWER_REFERENCE@@AEAAXXZ.c)
 *     ?SetAdapterAllowedToReportDisplayMuxHpd@DISPLAY_MUX_MGR@@QEAAXPEAU_DISPLAYCONFIG_DISPLAYMUX_TARGET@@@Z @ 0x140087B30 (-SetAdapterAllowedToReportDisplayMuxHpd@DISPLAY_MUX_MGR@@QEAAXPEAU_DISPLAYCONFIG_DISPLAYMUX_TARG.c)
 *     ?SetDisableProcessingDisplayBatchesStatus@DISPLAY_MUX_MGR@@QEAAX_N@Z @ 0x140087B80 (-SetDisableProcessingDisplayBatchesStatus@DISPLAY_MUX_MGR@@QEAAX_N@Z.c)
 *     ?SetDisableQueryConnectionDdiStatus@DISPLAY_MUX_MGR@@QEAAJU_LUID@@_N@Z @ 0x140087C34 (-SetDisableQueryConnectionDdiStatus@DISPLAY_MUX_MGR@@QEAAJU_LUID@@_N@Z.c)
 *     ?SwitchMux@DISPLAY_MUX_MGR@@QEAAJU_LUID@@I@Z @ 0x140088408 (-SwitchMux@DISPLAY_MUX_MGR@@QEAAJU_LUID@@I@Z.c)
 *     ?TakePowerReference@TARGET_POWER_REFERENCE@@QEAAXQEAXU_DISPLAYCONFIG_DISPLAYMUX_TARGET@@@Z @ 0x1400885DC (-TakePowerReference@TARGET_POWER_REFERENCE@@QEAAXQEAXU_DISPLAYCONFIG_DISPLAYMUX_TARGET@@@Z.c)
 *     ??0CInterfaceCallContext@@QEAA@PEAU_FDO_CONTEXT@@W4LocksToAcquire@@@Z @ 0x14008BF24 (--0CInterfaceCallContext@@QEAA@PEAU_FDO_CONTEXT@@W4LocksToAcquire@@@Z.c)
 *     ?FindAdapterAndAcquire@AUTO_REMOVE_LOCK@@QEAAJPEAU_LUID@@@Z @ 0x14008BF84 (-FindAdapterAndAcquire@AUTO_REMOVE_LOCK@@QEAAJPEAU_LUID@@@Z.c)
 *     DpiDxgkDdiDisplayMuxPostSwitchToPhase1 @ 0x14008C518 (DpiDxgkDdiDisplayMuxPostSwitchToPhase1.c)
 *     DpiDxgkDdiDisplayMuxPreSwitchAway @ 0x14008C684 (DpiDxgkDdiDisplayMuxPreSwitchAway.c)
 *     DpiDxgkDdiDisplayMuxPreSwitchAwayGetPrivateData @ 0x14008C730 (DpiDxgkDdiDisplayMuxPreSwitchAwayGetPrivateData.c)
 *     DpiDxgkDdiDisplayMuxPreSwitchTo @ 0x14008C7F0 (DpiDxgkDdiDisplayMuxPreSwitchTo.c)
 *     DpiDxgkDdiDisplayMuxSetInternalPanelInfo @ 0x14008C928 (DpiDxgkDdiDisplayMuxSetInternalPanelInfo.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?DpiBrightness3GetCaps@@YAJPEAXKPEAU_DXGK_BRIGHTNESS_CAPS@@@Z @ 0x14024CA00 (-DpiBrightness3GetCaps@@YAJPEAXKPEAU_DXGK_BRIGHTNESS_CAPS@@@Z.c)
 *     ?DpiBrightness3GetNitRanges@@YAJPEAXKPEAU_DXGK_BRIGHTNESS_GET_NIT_RANGES_OUT@@@Z @ 0x14024CB00 (-DpiBrightness3GetNitRanges@@YAJPEAXKPEAU_DXGK_BRIGHTNESS_GET_NIT_RANGES_OUT@@@Z.c)
 *     DpiAcpiIsLidOpen @ 0x140251ABC (DpiAcpiIsLidOpen.c)
 *     ?MonitorIsMonitorConnected@@YAJPEAXIEPEAE@Z @ 0x1402DF8D8 (-MonitorIsMonitorConnected@@YAJPEAXIEPEAE@Z.c)
 */

void __fastcall DISPLAY_MUX_SWITCH_OPERATION::PerformSwitch(
        DISPLAY_MUX_SWITCH_OPERATION *this,
        struct _D3DKMT_DISPLAYMUX_SWITCH_STATUS *a2,
        int *a3)
{
  void *v4; // rbx
  char v5; // r15
  struct _LUID *v6; // r12
  int AdapterAndAcquire; // eax
  bool v8; // zf
  struct _KMUTANT *v9; // r13
  struct _KMUTANT *v10; // rdi
  char v11; // al
  __int64 v12; // rdi
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // r8
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rbx
  unsigned int v21; // edi
  __int64 v22; // rcx
  char v23; // di
  __int64 v24; // rcx
  __int64 v25; // r8
  unsigned int v26; // edi
  __int64 v27; // rbx
  __int64 v28; // rcx
  __int64 v29; // rdi
  unsigned int v30; // edx
  char *v31; // r8
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rbx
  unsigned int v35; // edi
  __int64 v36; // rdx
  int v37; // eax
  char *v38; // r8
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rdi
  unsigned int v42; // esi
  __int64 v43; // rdi
  unsigned int v44; // esi
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // rbx
  unsigned int v49; // edi
  __int64 v50; // rbx
  unsigned int v51; // edi
  __int64 v52; // rcx
  bool v53; // zf
  _QWORD *v54; // rdi
  __int64 v55; // rcx
  __int64 v56; // rbx
  __int64 v57; // rax
  unsigned int v58; // r13d
  __int64 v59; // rdx
  __int64 v60; // r9
  struct _DEVICE_OBJECT *v61; // rdi
  int v62; // edx
  int v63; // r9d
  unsigned int v64; // r8d
  int v65; // ecx
  __int64 v66; // rdx
  __int64 v67; // rcx
  __m128i v68; // xmm0
  __int64 v69; // rdi
  char IsLidOpen; // al
  __int64 v71; // rdx
  __int64 v72; // r10
  __int64 v73; // [rsp+20h] [rbp-E0h]
  __int64 v74; // [rsp+20h] [rbp-E0h]
  __int64 v75; // [rsp+28h] [rbp-D8h]
  char v76[4]; // [rsp+30h] [rbp-D0h] BYREF
  int Caps; // [rsp+34h] [rbp-CCh] BYREF
  unsigned __int8 v78[8]; // [rsp+38h] [rbp-C8h] BYREF
  struct _KMUTANT *v79; // [rsp+40h] [rbp-C0h] BYREF
  char v80; // [rsp+48h] [rbp-B8h]
  _QWORD *v81; // [rsp+50h] [rbp-B0h] BYREF
  char v82; // [rsp+58h] [rbp-A8h]
  DISPLAY_MUX_SWITCH_OPERATION *v83; // [rsp+60h] [rbp-A0h] BYREF
  char v84; // [rsp+68h] [rbp-98h]
  char v85; // [rsp+70h] [rbp-90h]
  __int64 v86; // [rsp+78h] [rbp-88h] BYREF
  int v87; // [rsp+80h] [rbp-80h]
  int v88; // [rsp+84h] [rbp-7Ch]
  __int128 v89; // [rsp+88h] [rbp-78h]
  char v90; // [rsp+98h] [rbp-68h]
  __int16 v91[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int16 v92; // [rsp+A4h] [rbp-5Ch]
  unsigned int v93; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v94[3]; // [rsp+B0h] [rbp-50h] BYREF
  char v95; // [rsp+C8h] [rbp-38h]
  __int64 v96; // [rsp+D0h] [rbp-30h] BYREF
  int v97; // [rsp+D8h] [rbp-28h]
  int v98; // [rsp+DCh] [rbp-24h]
  __int128 v99; // [rsp+E0h] [rbp-20h]
  char v100; // [rsp+F0h] [rbp-10h]
  DISPLAY_MUX_SWITCH_OPERATION *v101; // [rsp+F8h] [rbp-8h] BYREF
  char v102; // [rsp+100h] [rbp+0h]
  __m128i v103; // [rsp+108h] [rbp+8h]
  int v104; // [rsp+118h] [rbp+18h]
  unsigned int v105; // [rsp+120h] [rbp+20h]
  __int64 v106; // [rsp+128h] [rbp+28h] BYREF
  struct _DEVICE_OBJECT *v107; // [rsp+130h] [rbp+30h] BYREF
  __int64 v108; // [rsp+138h] [rbp+38h]
  int v109; // [rsp+150h] [rbp+50h]
  _QWORD *v110; // [rsp+160h] [rbp+60h]
  _OWORD *v111; // [rsp+168h] [rbp+68h]
  void *v112; // [rsp+170h] [rbp+70h]
  int *v113; // [rsp+178h] [rbp+78h]
  struct _DEVICE_OBJECT *v114; // [rsp+180h] [rbp+80h] BYREF
  __int64 v115; // [rsp+188h] [rbp+88h]
  int v116; // [rsp+1A0h] [rbp+A0h]
  __int64 v117; // [rsp+1B0h] [rbp+B0h] BYREF
  int v118; // [rsp+1B8h] [rbp+B8h]
  __int64 v119; // [rsp+1C0h] [rbp+C0h] BYREF
  int v120; // [rsp+1C8h] [rbp+C8h]
  __m128i v121; // [rsp+1D0h] [rbp+D0h]
  int v122; // [rsp+1E0h] [rbp+E0h]
  char v123[8]; // [rsp+1E8h] [rbp+E8h] BYREF
  __int64 v124; // [rsp+1F0h] [rbp+F0h]
  int v125; // [rsp+208h] [rbp+108h]
  _OWORD v126[15]; // [rsp+218h] [rbp+118h] BYREF
  _BYTE v127[224]; // [rsp+310h] [rbp+210h] BYREF
  struct _D3DKMT_DISPLAYMUX_SWITCH_STATUS *v128; // [rsp+448h] [rbp+348h] BYREF

  v128 = a2;
  v113 = a3;
  v111 = 0LL;
  v112 = 0LL;
  v4 = 0LL;
  v93 = 0;
  v106 = 0LL;
  v126[0] = 0LL;
  v103 = 0uLL;
  v104 = 0;
  MINIPORT_LIST_AUTO_LOCK::MINIPORT_LIST_AUTO_LOCK((MINIPORT_LIST_AUTO_LOCK *)v76);
  v5 = byte_140161431;
  v6 = (struct _LUID *)((char *)this + 68);
  v79 = 0LL;
  v80 = 0;
  AdapterAndAcquire = AUTO_REMOVE_LOCK::FindAdapterAndAcquire(
                        (AUTO_REMOVE_LOCK *)&v79,
                        (struct _LUID *)((char *)this + 68));
  if ( CheckFailed(AdapterAndAcquire, 1044, (__int64)this + 92, 0x21Eu) )
    goto LABEL_2;
  v81 = 0LL;
  v82 = 0;
  Caps = AUTO_REMOVE_LOCK::FindAdapterAndAcquire((AUTO_REMOVE_LOCK *)&v81, (struct _LUID *)this + 10);
  if ( CheckFailed(Caps, 1045, (__int64)this + 92, 0x226u) )
  {
    AUTO_REMOVE_LOCK::Release((PVOID *)&v81);
LABEL_2:
    AUTO_REMOVE_LOCK::Release((PVOID *)&v79);
    v8 = v76[0] == 0;
    goto LABEL_3;
  }
  v83 = this;
  v96 = 0LL;
  v98 = -1;
  v88 = -1;
  v84 = 1;
  v97 = 0;
  v99 = 0LL;
  v100 = 0;
  v86 = 0LL;
  v87 = 0;
  v89 = 0LL;
  v90 = 0;
  DISPLAY_MUX_MGR::SetDisableProcessingDisplayBatchesStatus(qword_140161380, 1);
  v94[1] = this;
  v94[0] = &Caps;
  v95 = 1;
  v94[2] = &v128;
  v92 = 0;
  v91[0] = 0;
  memset((char *)&v126[1] + 8, 0, 0xD1uLL);
  v9 = v79;
  v10 = v79 + 81;
  KeWaitForSingleObject(&v79[81], Executive, 0, 0, 0LL);
  v8 = *(_WORD *)(&v9[85].ApcDisable + 1) == 3;
  v105 = *(_DWORD *)&v9[80].Abandoned;
  v11 = BYTE8(v126[1]);
  if ( v8 )
    v11 = 1;
  BYTE8(v126[1]) = v11;
  KeReleaseMutex(v10, 0);
  v110 = v81;
  CInterfaceCallContext::CInterfaceCallContext(v123, v81);
  if ( CheckFailed(v125, 1028, (__int64)this + 92, 0x266u) )
    goto LABEL_10;
  v12 = v124;
  if ( !*(_BYTE *)(v124 + 6441) )
  {
    memset(v127, 0, 0xD1uLL);
    if ( !DISPLAY_MUX_MGR::GetInternalPanelInfo(
            qword_140161380,
            (struct _DXGK_DISPLAYMUX_SET_INTERNAL_PANEL_INFO *)v127) )
    {
      CheckFailed(-1073741823, 1051, (__int64)this + 92, 0x27Du);
      goto LABEL_10;
    }
    Caps = DpiDxgkDdiDisplayMuxSetInternalPanelInfo(v12, *((unsigned int *)this + 22), v127);
    if ( CheckFailed(v125, 1049, (__int64)this + 92, 0x274u) )
    {
LABEL_10:
      CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v123);
      DXGKCALLONEXIT__lambda_5bf16074e78eca97c9745c10e52e39f7____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)v94);
      DXGKCALLONEXIT__lambda_8e64b2d4059ca463867f9c5833a46b2d____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)&v83);
      AUTO_REMOVE_LOCK::Release((PVOID *)&v81);
      AUTO_REMOVE_LOCK::Release((PVOID *)&v79);
      v8 = v76[0] == 0;
      goto LABEL_3;
    }
    *(_BYTE *)(v12 + 6441) = 1;
  }
  if ( CheckForMdmFaultOrDelayInjection(4, 1027, (__int64)this + 92) )
    goto LABEL_10;
  v13 = *((_DWORD *)this + 22);
  v14 = *(_QWORD *)(v12 + 4032);
  v117 = *((_QWORD *)this + 10);
  v118 = v13;
  TARGET_POWER_REFERENCE::TakePowerReference(&v86, v14, &v117);
  v15 = *((unsigned int *)this + 22);
  v16 = v105;
  *(_QWORD *)((char *)this + 20) = *((_QWORD *)this + 10);
  *((_DWORD *)this + 7) = v15;
  v17 = DpiDxgkDdiDisplayMuxPreSwitchTo(v12, v15, v16);
  if ( v17 >= 0 )
    *((_DWORD *)this + 1) = 2;
  Caps = v17;
  if ( CheckFailed(v17, 1027, (__int64)this + 92, 0x28Du) )
  {
    CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v123);
    goto LABEL_20;
  }
  v23 = *(_BYTE *)(v12 + 6440);
  v85 = v23;
  CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v123);
  if ( !v23 )
  {
    if ( BYTE8(v126[1])
      && ((Caps = DpiBrightness3GetCaps(
                    v9->MutantListEntry.Flink,
                    *((_DWORD *)this + 19),
                    (struct _DXGK_BRIGHTNESS_CAPS *)((char *)&v126[1] + 9)),
           CheckFailed(Caps, 1046, (__int64)this + 92, 0x2A0u))
       || (Caps = DpiBrightness3GetNitRanges(
                    v9->MutantListEntry.Flink,
                    *((_DWORD *)this + 19),
                    (struct _DXGK_BRIGHTNESS_GET_NIT_RANGES_OUT *)((char *)&v126[1] + 13)),
           CheckFailed(Caps, 1047, (__int64)this + 92, 0x2A6u)))
      || (Caps = DpiGetIntegratedEdidSizeForDisplayMuxTarget(
                   (__int64)v9->MutantListEntry.Flink,
                   *((_DWORD *)this + 19),
                   v91),
          CheckFailed(Caps, 1047, (__int64)this + 92, 0x2AEu)) )
    {
LABEL_20:
      DXGKCALLONEXIT__lambda_5bf16074e78eca97c9745c10e52e39f7____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)v94);
      if ( v90 )
      {
        v20 = v89;
        v21 = v88;
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
        {
          LODWORD(v73) = v88;
          McTemplateK0pqq_EtwWriteTransfer(v18, (__int64)&Dxgk_ReportPowerComponentState, v19, (_QWORD)v89, v73, 0);
        }
        v22 = *(_QWORD *)(v20 + 3232);
        if ( v22 )
          PoFxIdleComponent(v22, v21, 0LL);
      }
      goto LABEL_26;
    }
    v92 = v91[0];
  }
  CInterfaceCallContext::CInterfaceCallContext(&v107, v9);
  if ( CheckFailed(v109, 1029, (__int64)this + 92, 0x2B8u) )
    goto LABEL_35;
  v29 = v108;
  v30 = *((_DWORD *)this + 19);
  v78[0] = 0;
  Caps = MonitorIsMonitorConnected(*(void **)(v108 + 4032), v30, 1u, v78);
  if ( CheckFailed(Caps, 1025, (__int64)this + 92, 0x2C0u) )
    goto LABEL_35;
  v31 = (char *)this + 92;
  if ( !v78[0] )
  {
    CheckFailed(-1073741275, 1026, (__int64)v31, 0x2C6u);
LABEL_35:
    CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)&v107);
    DXGKCALLONEXIT__lambda_5bf16074e78eca97c9745c10e52e39f7____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)v94);
    if ( !v90 )
    {
LABEL_26:
      DXGKCALLONEXIT__lambda_8e64b2d4059ca463867f9c5833a46b2d____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)&v83);
      AUTO_REMOVE_LOCK::Release((PVOID *)&v81);
      AUTO_REMOVE_LOCK::Release((PVOID *)&v79);
      v8 = v76[0] == 0;
LABEL_3:
      if ( !v8 )
        ReleaseMiniportListMutex();
      return;
    }
    v26 = v88;
    v27 = v89;
LABEL_37:
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
    {
      LODWORD(v75) = 0;
      LODWORD(v73) = v26;
      McTemplateK0pqq_EtwWriteTransfer(v24, (__int64)&Dxgk_ReportPowerComponentState, v25, v27, v73, v75);
    }
    v28 = *(_QWORD *)(v27 + 3232);
    if ( v28 )
      PoFxIdleComponent(v28, v26, 0LL);
    goto LABEL_26;
  }
  if ( CheckForMdmFaultOrDelayInjection(5, 1030, (__int64)v31) )
    goto LABEL_35;
  v32 = *((_DWORD *)this + 19);
  v33 = *(_QWORD *)(v29 + 4032);
  v119 = *(_QWORD *)((char *)this + 68);
  v120 = v32;
  TARGET_POWER_REFERENCE::TakePowerReference(&v96, v33, &v119);
  Caps = DISPLAY_MUX_MGR::SetDisableQueryConnectionDdiStatus(qword_140161380, *v6, 1);
  if ( CheckFailed(Caps, 1030, (__int64)this + 92, 0x2D7u) )
  {
LABEL_48:
    CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)&v107);
    DXGKCALLONEXIT__lambda_5bf16074e78eca97c9745c10e52e39f7____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)v94);
    if ( v90 )
    {
      v34 = v89;
      v35 = v88;
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
      {
        LODWORD(v73) = v88;
        McTemplateK0pqq_EtwWriteTransfer(v24, (__int64)&Dxgk_ReportPowerComponentState, v25, (_QWORD)v89, v73, 0);
      }
      v24 = *(_QWORD *)(v34 + 3232);
      if ( v24 )
        PoFxIdleComponent(v24, v35, 0LL);
    }
    if ( !v100 )
      goto LABEL_26;
    v27 = v99;
    v26 = v98;
    goto LABEL_37;
  }
  v101 = this;
  v102 = 1;
  if ( CheckForMdmFaultOrDelayInjection(6, 1031, (__int64)this + 92) )
    goto LABEL_57;
  v36 = *((unsigned int *)this + 19);
  *((_QWORD *)this + 1) = *(_QWORD *)((char *)this + 68);
  *((_DWORD *)this + 4) = v36;
  v37 = DpiDxgkDdiDisplayMuxPreSwitchAway(v29, v36, &v93);
  if ( v37 >= 0 )
    *(_DWORD *)this = 2;
  Caps = v37;
  if ( CheckFailed(v37, 1031, (__int64)this + 92, 0x2E8u) )
  {
LABEL_57:
    DXGKCALLONEXIT__lambda_b3b73720c9a5b94f1e3275d94b86d9de____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT(&v101);
    goto LABEL_48;
  }
  DISPLAY_MUX_MGR::SetAdapterAllowedToReportDisplayMuxHpd(
    qword_140161380,
    (DISPLAY_MUX_SWITCH_OPERATION *)((char *)this + 68));
  v38 = (char *)this + 92;
  if ( v93 > 0x100000 )
  {
    CheckFailed(-1073741306, 1032, (__int64)v38, 0x2F3u);
    goto LABEL_57;
  }
  if ( CheckForMdmFaultOrDelayInjection(7, 1034, (__int64)v38) )
    goto LABEL_57;
  if ( v93 )
  {
    v106 = operator new[](v93, 0x4B677844u, 256LL);
    v4 = (void *)v106;
    if ( !v106 )
    {
      CheckFailed(-1073741801, 1033, (__int64)this + 92, 0x304u);
LABEL_67:
      DXGKCALLONEXIT__lambda_b3b73720c9a5b94f1e3275d94b86d9de____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT(&v101);
      CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)&v107);
      DXGKCALLONEXIT__lambda_5bf16074e78eca97c9745c10e52e39f7____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)v94);
      if ( v90 )
      {
        v41 = v89;
        v42 = v88;
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
        {
          LODWORD(v73) = v88;
          McTemplateK0pqq_EtwWriteTransfer(v39, (__int64)&Dxgk_ReportPowerComponentState, v40, (_QWORD)v89, v73, 0);
        }
        v39 = *(_QWORD *)(v41 + 3232);
        if ( v39 )
          PoFxIdleComponent(v39, v42, 0LL);
      }
      if ( v100 )
      {
        v43 = v99;
        v44 = v98;
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
        {
          LODWORD(v75) = 0;
          LODWORD(v73) = v98;
          McTemplateK0pqq_EtwWriteTransfer(v39, (__int64)&Dxgk_ReportPowerComponentState, v40, (_QWORD)v99, v73, v75);
        }
        v45 = *(_QWORD *)(v43 + 3232);
        if ( v45 )
          PoFxIdleComponent(v45, v44, 0LL);
      }
      DXGKCALLONEXIT__lambda_8e64b2d4059ca463867f9c5833a46b2d____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)&v83);
      AUTO_REMOVE_LOCK::Release((PVOID *)&v81);
      AUTO_REMOVE_LOCK::Release((PVOID *)&v79);
      if ( v76[0] )
        ReleaseMiniportListMutex();
      if ( v4 )
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v4);
      return;
    }
    Caps = DpiDxgkDdiDisplayMuxPreSwitchAwayGetPrivateData(v29, *((_DWORD *)this + 19), v93, v106, (__int64)v126);
    if ( CheckFailed(Caps, 1034, (__int64)this + 92, 0x30Eu) )
      goto LABEL_67;
    v112 = v4;
    v111 = v126;
  }
  if ( CheckForMdmFaultOrDelayInjection(8, 1035, (__int64)this + 92) )
    goto LABEL_67;
  Caps = DISPLAY_MUX_MGR::SwitchMux(qword_140161380, *(struct _LUID *)((char *)this + 80), *((_DWORD *)this + 22));
  if ( CheckFailed(Caps, 1035, (__int64)this + 92, 0x31Eu) )
  {
    DXGKCALLONEXIT__lambda_b3b73720c9a5b94f1e3275d94b86d9de____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT(&v101);
    CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)&v107);
    DXGKCALLONEXIT__lambda_5bf16074e78eca97c9745c10e52e39f7____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)v94);
    if ( v90 )
    {
      v48 = v89;
      v49 = v88;
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
      {
        LODWORD(v73) = v88;
        McTemplateK0pqq_EtwWriteTransfer(v46, (__int64)&Dxgk_ReportPowerComponentState, v47, (_QWORD)v89, v73, 0);
      }
      v46 = *(_QWORD *)(v48 + 3232);
      if ( v46 )
        PoFxIdleComponent(v46, v49, 0LL);
    }
    if ( v100 )
    {
      v50 = v99;
      v51 = v98;
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
      {
        LODWORD(v75) = 0;
        LODWORD(v73) = v98;
        McTemplateK0pqq_EtwWriteTransfer(v46, (__int64)&Dxgk_ReportPowerComponentState, v47, (_QWORD)v99, v73, v75);
      }
      v52 = *(_QWORD *)(v50 + 3232);
      if ( v52 )
        PoFxIdleComponent(v52, v51, 0LL);
    }
  }
  else
  {
    v8 = *(_BYTE *)(v29 + 2716) == 0;
    v54 = v110;
    if ( v8 )
      qword_140161068 = v110[3];
    if ( CheckForMdmFaultOrDelayInjection(9, 1037, (__int64)this + 92)
      || (Caps = DISPLAY_MUX_MGR::SetDisableQueryConnectionDdiStatus(qword_140161380, *v6, 0),
          CheckFailed(Caps, 1037, (__int64)this + 92, 0x331u)) )
    {
      DXGKCALLONEXIT__lambda_b3b73720c9a5b94f1e3275d94b86d9de____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT(&v101);
    }
    else
    {
      DXGKCALLONEXIT__lambda_b3b73720c9a5b94f1e3275d94b86d9de____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT(&v101);
      if ( !CheckForMdmFaultOrDelayInjection(10, 1038, (__int64)this + 92) )
      {
        Caps = QueryConnectionChanges(
                 v107,
                 *(struct _LUID *)((char *)this + 68),
                 (struct _GUID *)((char *)this + 92),
                 (struct _GUID *)((char *)this + 108));
        DISPLAY_MUX_MGR::SetAdapterAllowedToReportDisplayMuxHpd(qword_140161380, 0LL);
        if ( !CheckFailed(Caps, 1038, (__int64)this + 92, 0x340u) )
        {
          v56 = *((unsigned int *)qword_140161380 + 33);
          v57 = *(_QWORD *)((char *)qword_140161380 + 124);
          v121 = *(__m128i *)((char *)qword_140161380 + 116);
          v58 = _mm_cvtsi128_si32(_mm_srli_si128(v121, 12));
          v122 = v56;
          if ( HIDWORD(v57) )
          {
            v5 |= (unsigned __int8)((__int64 (*)(void))DpiAcpiIsLidOpen)() == 0;
            if ( v5 )
            {
              WdLogSingleEntry1(2LL, v58);
              WdLogGlobalForLineNumber = 855;
            }
            else
            {
              WdLogSingleEntry5(0LL, 484LL, 52LL, 2LL, v58, 0LL);
              WdLogGlobalForLineNumber = 851;
            }
          }
          if ( (_DWORD)v56 != 1 )
          {
            v5 |= (unsigned __int8)((__int64 (*)(void))DpiAcpiIsLidOpen)() == 0;
            if ( v5 )
            {
              WdLogSingleEntry1(2LL, v56);
              WdLogGlobalForLineNumber = 886;
            }
            else if ( (_DWORD)v56 )
            {
              WdLogSingleEntry5(0LL, 484LL, 52LL, 3LL, v56, 0LL);
              WdLogGlobalForLineNumber = 881;
            }
            else
            {
              WdLogSingleEntry5(0LL, 484LL, 52LL, 3LL, 0LL, 0LL);
              WdLogGlobalForLineNumber = 874;
            }
          }
          if ( *((_DWORD *)this + 17) != v121.m128i_i32[0]
            || *((_QWORD *)this + 9) != *(__int64 *)((char *)v121.m128i_i64 + 4) )
          {
            v5 |= (unsigned __int8)DpiAcpiIsLidOpen(v55, v121.m128i_u32[2]) == 0;
            if ( v5 )
            {
              WdLogSingleEntry2(2LL, v60, v59);
              WdLogGlobalForLineNumber = 910;
            }
            else
            {
              WdLogSingleEntry5(0LL, 484LL, 52LL, 4LL, v60, v59);
              WdLogGlobalForLineNumber = 904;
            }
          }
          CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)&v107);
          CInterfaceCallContext::CInterfaceCallContext(&v114, v54);
          if ( !CheckFailed(v116, 1039, (__int64)this + 92, 0x397u)
            && !CheckForMdmFaultOrDelayInjection(11, 1040, (__int64)this + 92) )
          {
            v61 = v114;
            if ( v85
              || (Caps = DpiSetIntegratedEdidSizeForDisplayMuxTarget((__int64)v114, *((_DWORD *)this + 22), v92),
                  !CheckFailed(v116, 1050, (__int64)this + 92, 0x3A6u)) )
            {
              if ( !CheckForMdmFaultOrDelayInjection(12, 1041, (__int64)this + 92) )
              {
                v62 = *((_DWORD *)this + 22);
                v63 = (int)v112;
                v64 = v93;
                v65 = v115;
                v74 = (__int64)v111;
                *((_BYTE *)this + 32) = 1;
                Caps = DpiDxgkDdiDisplayMuxPostSwitchToPhase1(v65, v62, v64, v63, v74);
                if ( !CheckFailed(Caps, 1041, (__int64)this + 92, 0x3B8u) )
                {
                  Caps = DpiQueryIntegratedDescriptorWrapper((__int64)v61);
                  if ( !CheckFailed(Caps, 1040, (__int64)this + 92, 0x3C0u)
                    && (!(unsigned int)Feature_DisplayMux_PostGA_BugBundle_2__private_IsEnabledDeviceUsageNoInline()
                     || !CheckForMdmFaultOrDelayInjection(13, 1042, (__int64)this + 92)) )
                  {
                    DISPLAY_MUX_MGR::SetAdapterAllowedToReportDisplayMuxHpd(
                      qword_140161380,
                      (DISPLAY_MUX_SWITCH_OPERATION *)((char *)this + 80));
                    Caps = QueryConnectionChanges(
                             v61,
                             *(struct _LUID *)((char *)this + 80),
                             (struct _GUID *)((char *)this + 92),
                             (struct _GUID *)((char *)this + 108));
                    DISPLAY_MUX_MGR::SetAdapterAllowedToReportDisplayMuxHpd(qword_140161380, 0LL);
                    if ( !CheckFailed(Caps, 1042, (__int64)this + 92, 0x3D3u)
                      && ((unsigned int)Feature_DisplayMux_PostGA_BugBundle_2__private_IsEnabledDeviceUsageNoInline()
                       || !CheckForMdmFaultOrDelayInjection(13, 1042, (__int64)this + 92)) )
                    {
                      v68 = *(__m128i *)((char *)qword_140161380 + 116);
                      v69 = *((unsigned int *)qword_140161380 + 33);
                      v104 = *((_DWORD *)qword_140161380 + 33);
                      v103 = v68;
                      if ( *((_DWORD *)this + 20) != _mm_cvtsi128_si32(v68)
                        || *(_QWORD *)((char *)this + 84) != *(__int64 *)((char *)v103.m128i_i64 + 4) )
                      {
                        IsLidOpen = DpiAcpiIsLidOpen(v67, v66);
                        v71 = *((unsigned int *)this + 20);
                        v5 |= IsLidOpen == 0;
                        if ( v5 )
                        {
                          WdLogSingleEntry2(2LL, v71, *((unsigned int *)this + 22));
                          WdLogGlobalForLineNumber = 1016;
                        }
                        else
                        {
                          WdLogSingleEntry5(0LL, 484LL, 52LL, 1LL, v71, *((unsigned int *)this + 22));
                          WdLogGlobalForLineNumber = 1010;
                        }
                      }
                      if ( (_DWORD)v69 == (_DWORD)v56 )
                      {
                        if ( v103.m128i_i32[3] != v58 + 1 )
                        {
                          if ( (unsigned __int8)v5 | ((unsigned __int8)DpiAcpiIsLidOpen(v67, v66) == 0) )
                          {
                            WdLogSingleEntry2(2LL, v72, v58);
                            WdLogGlobalForLineNumber = 1041;
                          }
                          else
                          {
                            WdLogSingleEntry5(0LL, 484LL, 52LL, 5LL, v58, v72);
                            WdLogGlobalForLineNumber = 1035;
                          }
                        }
                        *v113 = 1;
                      }
                      else if ( v103.m128i_i32[3] == v58 )
                      {
                        if ( (_DWORD)v69 != (_DWORD)v56 + 1 )
                        {
                          if ( (unsigned __int8)v5 | ((unsigned __int8)DpiAcpiIsLidOpen(v67, v66) == 0) )
                          {
                            WdLogSingleEntry2(2LL, v69, v56);
                            WdLogGlobalForLineNumber = 1068;
                          }
                          else
                          {
                            WdLogSingleEntry5(0LL, 484LL, 52LL, 6LL, v56, v69);
                            WdLogGlobalForLineNumber = 1062;
                          }
                        }
                        *v113 = 0;
                      }
                      else if ( (unsigned __int8)v5 | ((unsigned __int8)DpiAcpiIsLidOpen(v67, v66) == 0) )
                      {
                        WdLogSingleEntry0(2LL);
                        WdLogGlobalForLineNumber = 1089;
                      }
                      else
                      {
                        WdLogSingleEntry5(0LL, 484LL, 52LL, 7LL, 0LL, 0LL);
                        WdLogGlobalForLineNumber = 1085;
                      }
                    }
                  }
                }
              }
            }
          }
          CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)&v114);
          DXGKCALLONEXIT__lambda_5bf16074e78eca97c9745c10e52e39f7____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)v94);
          TARGET_POWER_REFERENCE::ReleaseReference((TARGET_POWER_REFERENCE *)&v86);
          TARGET_POWER_REFERENCE::ReleaseReference((TARGET_POWER_REFERENCE *)&v96);
          DXGKCALLONEXIT__lambda_8e64b2d4059ca463867f9c5833a46b2d____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)&v83);
          AUTO_REMOVE_LOCK::Release((PVOID *)&v81);
          AUTO_REMOVE_LOCK::Release((PVOID *)&v79);
          v53 = v76[0] == 0;
          goto LABEL_157;
        }
      }
    }
    CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)&v107);
    DXGKCALLONEXIT__lambda_5bf16074e78eca97c9745c10e52e39f7____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)v94);
    TARGET_POWER_REFERENCE::ReleaseReference((TARGET_POWER_REFERENCE *)&v86);
    TARGET_POWER_REFERENCE::ReleaseReference((TARGET_POWER_REFERENCE *)&v96);
  }
  DXGKCALLONEXIT__lambda_8e64b2d4059ca463867f9c5833a46b2d____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)&v83);
  AUTO_REMOVE_LOCK::Release((PVOID *)&v81);
  AUTO_REMOVE_LOCK::Release((PVOID *)&v79);
  v53 = v76[0] == 0;
LABEL_157:
  if ( !v53 )
    ReleaseMiniportListMutex();
  wistd::unique_ptr<_KEY_VALUE_PARTIAL_INFORMATION,DxgMonitor::byte_array_deleter<_KEY_VALUE_PARTIAL_INFORMATION>>::reset(
    (void **)&v106,
    0LL);
}
