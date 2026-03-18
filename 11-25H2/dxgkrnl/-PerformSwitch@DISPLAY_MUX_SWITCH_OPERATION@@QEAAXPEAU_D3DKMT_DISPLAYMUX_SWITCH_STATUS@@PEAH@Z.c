/*
 * XREFs of ?PerformSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@PEAH@Z @ 0x140085690
 * Callers:
 *     DxgkDisplayMuxSwitchExecute @ 0x1400892D8 (DxgkDisplayMuxSwitchExecute.c)
 * Callees:
 *     ?reset@?$unique_ptr@U_KEY_VALUE_PARTIAL_INFORMATION@@U?$byte_array_deleter@U_KEY_VALUE_PARTIAL_INFORMATION@@@DxgMonitor@@@wistd@@QEAAXPEAU_KEY_VALUE_PARTIAL_INFORMATION@@@Z @ 0x14000F9E8 (-reset@-$unique_ptr@U_KEY_VALUE_PARTIAL_INFORMATION@@U-$byte_array_deleter@U_KEY_VALUE_PARTIAL_I.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x140014AA8 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     ??0MINIPORT_LIST_AUTO_LOCK@@QEAA@_N@Z @ 0x140041E48 (--0MINIPORT_LIST_AUTO_LOCK@@QEAA@_N@Z.c)
 *     ?ReleaseMiniportListMutex@@YAXXZ @ 0x14004204C (-ReleaseMiniportListMutex@@YAXXZ.c)
 *     ?Release@AUTO_REMOVE_LOCK@@QEAAXXZ @ 0x14004DFC0 (-Release@AUTO_REMOVE_LOCK@@QEAAXXZ.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x14005A628 (--1CInterfaceCallContext@@QEAA@XZ.c)
 *     DpiQueryIntegratedDescriptorWrapper @ 0x14005D800 (DpiQueryIntegratedDescriptorWrapper.c)
 *     DpiGetIntegratedEdidSizeForDisplayMuxTarget @ 0x14007D0A4 (DpiGetIntegratedEdidSizeForDisplayMuxTarget.c)
 *     DpiSetIntegratedEdidSizeForDisplayMuxTarget @ 0x14007D538 (DpiSetIntegratedEdidSizeForDisplayMuxTarget.c)
 *     _DXGKCALLONEXIT__lambda_5bf16074e78eca97c9745c10e52e39f7____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x140082230 (_DXGKCALLONEXIT__lambda_5bf16074e78eca97c9745c10e52e39f7____--_2_--DXGKCALLONEXIT--_DXGKCALLONEX.c)
 *     _DXGKCALLONEXIT__lambda_8e64b2d4059ca463867f9c5833a46b2d____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x140082268 (_DXGKCALLONEXIT__lambda_8e64b2d4059ca463867f9c5833a46b2d____--_2_--DXGKCALLONEXIT--_DXGKCALLONEX.c)
 *     _DXGKCALLONEXIT__lambda_b3b73720c9a5b94f1e3275d94b86d9de____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x1400822CC (_DXGKCALLONEXIT__lambda_b3b73720c9a5b94f1e3275d94b86d9de____--_2_--DXGKCALLONEXIT--_DXGKCALLONEX.c)
 *     ?CheckFailed@@YA_NJW4_D3DKMT_DISPLAYMUX_SWITCH_ERROR_STAGE@@AEAU_DISPLAYMUX_SWITCH_CONTEXT@@IPEAD@Z @ 0x1400828A8 (-CheckFailed@@YA_NJW4_D3DKMT_DISPLAYMUX_SWITCH_ERROR_STAGE@@AEAU_DISPLAYMUX_SWITCH_CONTEXT@@IPEA.c)
 *     ?CheckForMdmFaultOrDelayInjection@@YA_NW4_D3DKMT_DISPLAYMUX_SWITCH_INJECTION_STAGE@@W4_D3DKMT_DISPLAYMUX_SWITCH_ERROR_STAGE@@AEAU_DISPLAYMUX_SWITCH_CONTEXT@@@Z @ 0x140082B3C (-CheckForMdmFaultOrDelayInjection@@YA_NW4_D3DKMT_DISPLAYMUX_SWITCH_INJECTION_STAGE@@W4_D3DKMT_DI.c)
 *     ?GetInternalPanelInfo@DISPLAY_MUX_MGR@@QEBA_NPEAU_DXGK_DISPLAYMUX_SET_INTERNAL_PANEL_INFO@@@Z @ 0x140084510 (-GetInternalPanelInfo@DISPLAY_MUX_MGR@@QEBA_NPEAU_DXGK_DISPLAYMUX_SET_INTERNAL_PANEL_INFO@@@Z.c)
 *     ?QueryConnectionChanges@@YAJPEAU_DEVICE_OBJECT@@U_LUID@@PEAU_GUID@@2@Z @ 0x140086A58 (-QueryConnectionChanges@@YAJPEAU_DEVICE_OBJECT@@U_LUID@@PEAU_GUID@@2@Z.c)
 *     ?ReleaseReference@TARGET_POWER_REFERENCE@@AEAAXXZ @ 0x140086BF8 (-ReleaseReference@TARGET_POWER_REFERENCE@@AEAAXXZ.c)
 *     ?SetAdapterAllowedToReportDisplayMuxHpd@DISPLAY_MUX_MGR@@QEAAXPEAU_DISPLAYCONFIG_DISPLAYMUX_TARGET@@@Z @ 0x140087474 (-SetAdapterAllowedToReportDisplayMuxHpd@DISPLAY_MUX_MGR@@QEAAXPEAU_DISPLAYCONFIG_DISPLAYMUX_TARG.c)
 *     ?SetDisableProcessingDisplayBatchesStatus@DISPLAY_MUX_MGR@@QEAAX_N@Z @ 0x1400874C4 (-SetDisableProcessingDisplayBatchesStatus@DISPLAY_MUX_MGR@@QEAAX_N@Z.c)
 *     ?SetDisableQueryConnectionDdiStatus@DISPLAY_MUX_MGR@@QEAAJU_LUID@@_N@Z @ 0x140087578 (-SetDisableQueryConnectionDdiStatus@DISPLAY_MUX_MGR@@QEAAJU_LUID@@_N@Z.c)
 *     ?SwitchMux@DISPLAY_MUX_MGR@@QEAAJU_LUID@@I@Z @ 0x140087D4C (-SwitchMux@DISPLAY_MUX_MGR@@QEAAJU_LUID@@I@Z.c)
 *     ?TakePowerReference@TARGET_POWER_REFERENCE@@QEAAXQEAXU_DISPLAYCONFIG_DISPLAYMUX_TARGET@@@Z @ 0x140087F20 (-TakePowerReference@TARGET_POWER_REFERENCE@@QEAAXQEAXU_DISPLAYCONFIG_DISPLAYMUX_TARGET@@@Z.c)
 *     ??0CInterfaceCallContext@@QEAA@PEAU_FDO_CONTEXT@@W4LocksToAcquire@@@Z @ 0x14008AFC0 (--0CInterfaceCallContext@@QEAA@PEAU_FDO_CONTEXT@@W4LocksToAcquire@@@Z.c)
 *     ?FindAdapterAndAcquire@AUTO_REMOVE_LOCK@@QEAAJPEAU_LUID@@@Z @ 0x14008B020 (-FindAdapterAndAcquire@AUTO_REMOVE_LOCK@@QEAAJPEAU_LUID@@@Z.c)
 *     DpiDxgkDdiDisplayMuxPostSwitchToPhase1 @ 0x14008B558 (DpiDxgkDdiDisplayMuxPostSwitchToPhase1.c)
 *     DpiDxgkDdiDisplayMuxPreSwitchAway @ 0x14008B6C4 (DpiDxgkDdiDisplayMuxPreSwitchAway.c)
 *     DpiDxgkDdiDisplayMuxPreSwitchAwayGetPrivateData @ 0x14008B770 (DpiDxgkDdiDisplayMuxPreSwitchAwayGetPrivateData.c)
 *     DpiDxgkDdiDisplayMuxPreSwitchTo @ 0x14008B830 (DpiDxgkDdiDisplayMuxPreSwitchTo.c)
 *     DpiDxgkDdiDisplayMuxSetInternalPanelInfo @ 0x14008B968 (DpiDxgkDdiDisplayMuxSetInternalPanelInfo.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?DpiBrightness3GetCaps@@YAJPEAXKPEAU_DXGK_BRIGHTNESS_CAPS@@@Z @ 0x140245BF0 (-DpiBrightness3GetCaps@@YAJPEAXKPEAU_DXGK_BRIGHTNESS_CAPS@@@Z.c)
 *     ?DpiBrightness3GetNitRanges@@YAJPEAXKPEAU_DXGK_BRIGHTNESS_GET_NIT_RANGES_OUT@@@Z @ 0x140245CF0 (-DpiBrightness3GetNitRanges@@YAJPEAXKPEAU_DXGK_BRIGHTNESS_GET_NIT_RANGES_OUT@@@Z.c)
 *     DpiAcpiIsLidOpen @ 0x14024AC8C (DpiAcpiIsLidOpen.c)
 *     ?MonitorIsMonitorConnected@@YAJPEAXIEPEAE@Z @ 0x1403D2FF8 (-MonitorIsMonitorConnected@@YAJPEAXIEPEAE@Z.c)
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
  __int64 v39; // r9
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rdi
  unsigned int v43; // esi
  __int64 v44; // rdi
  unsigned int v45; // esi
  __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // rbx
  unsigned int v50; // edi
  __int64 v51; // rbx
  unsigned int v52; // edi
  __int64 v53; // rcx
  bool v54; // zf
  _QWORD *v55; // rdi
  __int64 v56; // rcx
  __int64 v57; // rbx
  __int64 v58; // rax
  unsigned int v59; // r13d
  __int64 v60; // rdx
  __int64 v61; // r9
  struct _DEVICE_OBJECT *v62; // rdi
  int v63; // edx
  int v64; // r9d
  unsigned int v65; // r8d
  int v66; // ecx
  __int64 v67; // rdx
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v70; // rdx
  __int64 v71; // rcx
  __m128i v72; // xmm0
  __int64 v73; // rdi
  char IsLidOpen; // al
  __int64 v75; // rdx
  __int64 v76; // r10
  __int64 v77; // [rsp+20h] [rbp-E0h]
  __int64 v78; // [rsp+20h] [rbp-E0h]
  __int64 v79; // [rsp+28h] [rbp-D8h]
  char v80[4]; // [rsp+30h] [rbp-D0h] BYREF
  int Caps; // [rsp+34h] [rbp-CCh] BYREF
  unsigned __int8 v82[8]; // [rsp+38h] [rbp-C8h] BYREF
  struct _KMUTANT *v83; // [rsp+40h] [rbp-C0h] BYREF
  char v84; // [rsp+48h] [rbp-B8h]
  _QWORD *v85; // [rsp+50h] [rbp-B0h] BYREF
  char v86; // [rsp+58h] [rbp-A8h]
  DISPLAY_MUX_SWITCH_OPERATION *v87; // [rsp+60h] [rbp-A0h] BYREF
  char v88; // [rsp+68h] [rbp-98h]
  char v89; // [rsp+70h] [rbp-90h]
  __int64 v90; // [rsp+78h] [rbp-88h] BYREF
  int v91; // [rsp+80h] [rbp-80h]
  int v92; // [rsp+84h] [rbp-7Ch]
  __int128 v93; // [rsp+88h] [rbp-78h]
  char v94; // [rsp+98h] [rbp-68h]
  __int16 v95[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int16 v96; // [rsp+A4h] [rbp-5Ch]
  unsigned int v97; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v98[3]; // [rsp+B0h] [rbp-50h] BYREF
  char v99; // [rsp+C8h] [rbp-38h]
  __int64 v100; // [rsp+D0h] [rbp-30h] BYREF
  int v101; // [rsp+D8h] [rbp-28h]
  int v102; // [rsp+DCh] [rbp-24h]
  __int128 v103; // [rsp+E0h] [rbp-20h]
  char v104; // [rsp+F0h] [rbp-10h]
  DISPLAY_MUX_SWITCH_OPERATION *v105; // [rsp+F8h] [rbp-8h] BYREF
  char v106; // [rsp+100h] [rbp+0h]
  __m128i v107; // [rsp+108h] [rbp+8h]
  int v108; // [rsp+118h] [rbp+18h]
  unsigned int v109; // [rsp+120h] [rbp+20h]
  __int64 v110; // [rsp+128h] [rbp+28h] BYREF
  struct _DEVICE_OBJECT *v111; // [rsp+130h] [rbp+30h] BYREF
  __int64 v112; // [rsp+138h] [rbp+38h]
  int v113; // [rsp+150h] [rbp+50h]
  _QWORD *v114; // [rsp+160h] [rbp+60h]
  _OWORD *v115; // [rsp+168h] [rbp+68h]
  void *v116; // [rsp+170h] [rbp+70h]
  int *v117; // [rsp+178h] [rbp+78h]
  struct _DEVICE_OBJECT *v118; // [rsp+180h] [rbp+80h] BYREF
  __int64 v119; // [rsp+188h] [rbp+88h]
  int v120; // [rsp+1A0h] [rbp+A0h]
  __int64 v121; // [rsp+1B0h] [rbp+B0h] BYREF
  int v122; // [rsp+1B8h] [rbp+B8h]
  __int64 v123; // [rsp+1C0h] [rbp+C0h] BYREF
  int v124; // [rsp+1C8h] [rbp+C8h]
  __m128i v125; // [rsp+1D0h] [rbp+D0h]
  int v126; // [rsp+1E0h] [rbp+E0h]
  char v127[8]; // [rsp+1E8h] [rbp+E8h] BYREF
  __int64 v128; // [rsp+1F0h] [rbp+F0h]
  int v129; // [rsp+208h] [rbp+108h]
  _OWORD v130[15]; // [rsp+218h] [rbp+118h] BYREF
  _BYTE v131[224]; // [rsp+310h] [rbp+210h] BYREF
  struct _D3DKMT_DISPLAYMUX_SWITCH_STATUS *v132; // [rsp+448h] [rbp+348h] BYREF

  v132 = a2;
  v117 = a3;
  v115 = 0LL;
  v116 = 0LL;
  v4 = 0LL;
  v97 = 0;
  v110 = 0LL;
  v130[0] = 0LL;
  v107 = 0uLL;
  v108 = 0;
  MINIPORT_LIST_AUTO_LOCK::MINIPORT_LIST_AUTO_LOCK((MINIPORT_LIST_AUTO_LOCK *)v80);
  v5 = byte_14015E431;
  v6 = (struct _LUID *)((char *)this + 68);
  v83 = 0LL;
  v84 = 0;
  AdapterAndAcquire = AUTO_REMOVE_LOCK::FindAdapterAndAcquire(
                        (AUTO_REMOVE_LOCK *)&v83,
                        (struct _LUID *)((char *)this + 68));
  if ( CheckFailed(AdapterAndAcquire, 1044, (__int64)this + 92, 0x21Eu) )
    goto LABEL_2;
  v85 = 0LL;
  v86 = 0;
  Caps = AUTO_REMOVE_LOCK::FindAdapterAndAcquire((AUTO_REMOVE_LOCK *)&v85, (struct _LUID *)this + 10);
  if ( CheckFailed(Caps, 1045, (__int64)this + 92, 0x226u) )
  {
    AUTO_REMOVE_LOCK::Release((PVOID *)&v85);
LABEL_2:
    AUTO_REMOVE_LOCK::Release((PVOID *)&v83);
    v8 = v80[0] == 0;
    goto LABEL_3;
  }
  v87 = this;
  v100 = 0LL;
  v102 = -1;
  v92 = -1;
  v88 = 1;
  v101 = 0;
  v103 = 0LL;
  v104 = 0;
  v90 = 0LL;
  v91 = 0;
  v93 = 0LL;
  v94 = 0;
  DISPLAY_MUX_MGR::SetDisableProcessingDisplayBatchesStatus(qword_14015E3C0, 1);
  v98[1] = this;
  v98[0] = &Caps;
  v99 = 1;
  v98[2] = &v132;
  v96 = 0;
  v95[0] = 0;
  memset((char *)&v130[1] + 8, 0, 0xD1uLL);
  v9 = v83;
  v10 = v83 + 81;
  KeWaitForSingleObject(&v83[81], Executive, 0, 0, 0LL);
  v8 = *(_WORD *)(&v9[85].ApcDisable + 1) == 3;
  v109 = *(_DWORD *)&v9[80].Abandoned;
  v11 = BYTE8(v130[1]);
  if ( v8 )
    v11 = 1;
  BYTE8(v130[1]) = v11;
  KeReleaseMutex(v10, 0);
  v114 = v85;
  CInterfaceCallContext::CInterfaceCallContext(v127, v85);
  if ( CheckFailed(v129, 1028, (__int64)this + 92, 0x266u) )
    goto LABEL_10;
  v12 = v128;
  if ( !*(_BYTE *)(v128 + 6441) )
  {
    memset(v131, 0, 0xD1uLL);
    if ( !DISPLAY_MUX_MGR::GetInternalPanelInfo(
            qword_14015E3C0,
            (struct _DXGK_DISPLAYMUX_SET_INTERNAL_PANEL_INFO *)v131) )
    {
      CheckFailed(-1073741823, 1051, (__int64)this + 92, 0x27Du);
      goto LABEL_10;
    }
    Caps = DpiDxgkDdiDisplayMuxSetInternalPanelInfo(v12, *((unsigned int *)this + 22), v131);
    if ( CheckFailed(v129, 1049, (__int64)this + 92, 0x274u) )
    {
LABEL_10:
      CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v127);
      DXGKCALLONEXIT__lambda_5bf16074e78eca97c9745c10e52e39f7____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)v98);
      DXGKCALLONEXIT__lambda_8e64b2d4059ca463867f9c5833a46b2d____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)&v87);
      AUTO_REMOVE_LOCK::Release((PVOID *)&v85);
      AUTO_REMOVE_LOCK::Release((PVOID *)&v83);
      v8 = v80[0] == 0;
      goto LABEL_3;
    }
    *(_BYTE *)(v12 + 6441) = 1;
  }
  if ( CheckForMdmFaultOrDelayInjection(4, 1027, (__int64)this + 92) )
    goto LABEL_10;
  v13 = *((_DWORD *)this + 22);
  v14 = *(_QWORD *)(v12 + 4032);
  v121 = *((_QWORD *)this + 10);
  v122 = v13;
  TARGET_POWER_REFERENCE::TakePowerReference(&v90, v14, &v121);
  v15 = *((unsigned int *)this + 22);
  v16 = v109;
  *(_QWORD *)((char *)this + 20) = *((_QWORD *)this + 10);
  *((_DWORD *)this + 7) = v15;
  v17 = DpiDxgkDdiDisplayMuxPreSwitchTo(v12, v15, v16);
  if ( v17 >= 0 )
    *((_DWORD *)this + 1) = 2;
  Caps = v17;
  if ( CheckFailed(v17, 1027, (__int64)this + 92, 0x28Du) )
  {
    CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v127);
    goto LABEL_20;
  }
  v23 = *(_BYTE *)(v12 + 6440);
  v89 = v23;
  CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v127);
  if ( !v23 )
  {
    if ( BYTE8(v130[1])
      && ((Caps = DpiBrightness3GetCaps(
                    v9->MutantListEntry.Flink,
                    *((_DWORD *)this + 19),
                    (struct _DXGK_BRIGHTNESS_CAPS *)((char *)&v130[1] + 9)),
           CheckFailed(Caps, 1046, (__int64)this + 92, 0x2A0u))
       || (Caps = DpiBrightness3GetNitRanges(
                    v9->MutantListEntry.Flink,
                    *((_DWORD *)this + 19),
                    (struct _DXGK_BRIGHTNESS_GET_NIT_RANGES_OUT *)((char *)&v130[1] + 13)),
           CheckFailed(Caps, 1047, (__int64)this + 92, 0x2A6u)))
      || (Caps = DpiGetIntegratedEdidSizeForDisplayMuxTarget(
                   (__int64)v9->MutantListEntry.Flink,
                   *((_DWORD *)this + 19),
                   v95),
          CheckFailed(Caps, 1047, (__int64)this + 92, 0x2AEu)) )
    {
LABEL_20:
      DXGKCALLONEXIT__lambda_5bf16074e78eca97c9745c10e52e39f7____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)v98);
      if ( v94 )
      {
        v20 = v93;
        v21 = v92;
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
        {
          LODWORD(v77) = v92;
          McTemplateK0pqq_EtwWriteTransfer(v18, (__int64)&Dxgk_ReportPowerComponentState, v19, (_QWORD)v93, v77, 0);
        }
        v22 = *(_QWORD *)(v20 + 3232);
        if ( v22 )
          PoFxIdleComponent(v22, v21, 0LL);
      }
      goto LABEL_26;
    }
    v96 = v95[0];
  }
  CInterfaceCallContext::CInterfaceCallContext(&v111, v9);
  if ( CheckFailed(v113, 1029, (__int64)this + 92, 0x2B8u) )
    goto LABEL_35;
  v29 = v112;
  v30 = *((_DWORD *)this + 19);
  v82[0] = 0;
  Caps = MonitorIsMonitorConnected(*(void **)(v112 + 4032), v30, 1u, v82);
  if ( CheckFailed(Caps, 1025, (__int64)this + 92, 0x2C0u) )
    goto LABEL_35;
  v31 = (char *)this + 92;
  if ( !v82[0] )
  {
    CheckFailed(-1073741275, 1026, (__int64)v31, 0x2C6u);
LABEL_35:
    CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)&v111);
    DXGKCALLONEXIT__lambda_5bf16074e78eca97c9745c10e52e39f7____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)v98);
    if ( !v94 )
    {
LABEL_26:
      DXGKCALLONEXIT__lambda_8e64b2d4059ca463867f9c5833a46b2d____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)&v87);
      AUTO_REMOVE_LOCK::Release((PVOID *)&v85);
      AUTO_REMOVE_LOCK::Release((PVOID *)&v83);
      v8 = v80[0] == 0;
LABEL_3:
      if ( !v8 )
        ReleaseMiniportListMutex();
      return;
    }
    v26 = v92;
    v27 = v93;
LABEL_37:
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
    {
      LODWORD(v79) = 0;
      LODWORD(v77) = v26;
      McTemplateK0pqq_EtwWriteTransfer(v24, (__int64)&Dxgk_ReportPowerComponentState, v25, v27, v77, v79);
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
  v123 = *(_QWORD *)((char *)this + 68);
  v124 = v32;
  TARGET_POWER_REFERENCE::TakePowerReference(&v100, v33, &v123);
  Caps = DISPLAY_MUX_MGR::SetDisableQueryConnectionDdiStatus(qword_14015E3C0, *v6, 1);
  if ( CheckFailed(Caps, 1030, (__int64)this + 92, 0x2D7u) )
  {
LABEL_48:
    CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)&v111);
    DXGKCALLONEXIT__lambda_5bf16074e78eca97c9745c10e52e39f7____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)v98);
    if ( v94 )
    {
      v34 = v93;
      v35 = v92;
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
      {
        LODWORD(v77) = v92;
        McTemplateK0pqq_EtwWriteTransfer(v24, (__int64)&Dxgk_ReportPowerComponentState, v25, (_QWORD)v93, v77, 0);
      }
      v24 = *(_QWORD *)(v34 + 3232);
      if ( v24 )
        PoFxIdleComponent(v24, v35, 0LL);
    }
    if ( !v104 )
      goto LABEL_26;
    v27 = v103;
    v26 = v102;
    goto LABEL_37;
  }
  v105 = this;
  v106 = 1;
  if ( CheckForMdmFaultOrDelayInjection(6, 1031, (__int64)this + 92) )
    goto LABEL_57;
  v36 = *((unsigned int *)this + 19);
  *((_QWORD *)this + 1) = *(_QWORD *)((char *)this + 68);
  *((_DWORD *)this + 4) = v36;
  v37 = DpiDxgkDdiDisplayMuxPreSwitchAway(v29, v36, &v97);
  if ( v37 >= 0 )
    *(_DWORD *)this = 2;
  Caps = v37;
  if ( CheckFailed(v37, 1031, (__int64)this + 92, 0x2E8u) )
  {
LABEL_57:
    DXGKCALLONEXIT__lambda_b3b73720c9a5b94f1e3275d94b86d9de____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT(&v105);
    goto LABEL_48;
  }
  DISPLAY_MUX_MGR::SetAdapterAllowedToReportDisplayMuxHpd(
    qword_14015E3C0,
    (DISPLAY_MUX_SWITCH_OPERATION *)((char *)this + 68));
  v38 = (char *)this + 92;
  if ( v97 > 0x100000 )
  {
    CheckFailed(-1073741306, 1032, (__int64)v38, 0x2F3u);
    goto LABEL_57;
  }
  if ( CheckForMdmFaultOrDelayInjection(7, 1034, (__int64)v38) )
    goto LABEL_57;
  if ( v97 )
  {
    v110 = operator new[](v97, 0x4B677844u, 256LL, v39);
    v4 = (void *)v110;
    if ( !v110 )
    {
      CheckFailed(-1073741801, 1033, (__int64)this + 92, 0x304u);
LABEL_67:
      DXGKCALLONEXIT__lambda_b3b73720c9a5b94f1e3275d94b86d9de____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT(&v105);
      CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)&v111);
      DXGKCALLONEXIT__lambda_5bf16074e78eca97c9745c10e52e39f7____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)v98);
      if ( v94 )
      {
        v42 = v93;
        v43 = v92;
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
        {
          LODWORD(v77) = v92;
          McTemplateK0pqq_EtwWriteTransfer(v40, (__int64)&Dxgk_ReportPowerComponentState, v41, (_QWORD)v93, v77, 0);
        }
        v40 = *(_QWORD *)(v42 + 3232);
        if ( v40 )
          PoFxIdleComponent(v40, v43, 0LL);
      }
      if ( v104 )
      {
        v44 = v103;
        v45 = v102;
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
        {
          LODWORD(v79) = 0;
          LODWORD(v77) = v102;
          McTemplateK0pqq_EtwWriteTransfer(v40, (__int64)&Dxgk_ReportPowerComponentState, v41, (_QWORD)v103, v77, v79);
        }
        v46 = *(_QWORD *)(v44 + 3232);
        if ( v46 )
          PoFxIdleComponent(v46, v45, 0LL);
      }
      DXGKCALLONEXIT__lambda_8e64b2d4059ca463867f9c5833a46b2d____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)&v87);
      AUTO_REMOVE_LOCK::Release((PVOID *)&v85);
      AUTO_REMOVE_LOCK::Release((PVOID *)&v83);
      if ( v80[0] )
        ReleaseMiniportListMutex();
      if ( v4 )
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v4);
      return;
    }
    Caps = DpiDxgkDdiDisplayMuxPreSwitchAwayGetPrivateData(v29, *((_DWORD *)this + 19), v97, v110, (__int64)v130);
    if ( CheckFailed(Caps, 1034, (__int64)this + 92, 0x30Eu) )
      goto LABEL_67;
    v116 = v4;
    v115 = v130;
  }
  if ( CheckForMdmFaultOrDelayInjection(8, 1035, (__int64)this + 92) )
    goto LABEL_67;
  Caps = DISPLAY_MUX_MGR::SwitchMux(qword_14015E3C0, *(struct _LUID *)((char *)this + 80), *((_DWORD *)this + 22));
  if ( CheckFailed(Caps, 1035, (__int64)this + 92, 0x31Eu) )
  {
    DXGKCALLONEXIT__lambda_b3b73720c9a5b94f1e3275d94b86d9de____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT(&v105);
    CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)&v111);
    DXGKCALLONEXIT__lambda_5bf16074e78eca97c9745c10e52e39f7____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)v98);
    if ( v94 )
    {
      v49 = v93;
      v50 = v92;
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
      {
        LODWORD(v77) = v92;
        McTemplateK0pqq_EtwWriteTransfer(v47, (__int64)&Dxgk_ReportPowerComponentState, v48, (_QWORD)v93, v77, 0);
      }
      v47 = *(_QWORD *)(v49 + 3232);
      if ( v47 )
        PoFxIdleComponent(v47, v50, 0LL);
    }
    if ( v104 )
    {
      v51 = v103;
      v52 = v102;
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
      {
        LODWORD(v79) = 0;
        LODWORD(v77) = v102;
        McTemplateK0pqq_EtwWriteTransfer(v47, (__int64)&Dxgk_ReportPowerComponentState, v48, (_QWORD)v103, v77, v79);
      }
      v53 = *(_QWORD *)(v51 + 3232);
      if ( v53 )
        PoFxIdleComponent(v53, v52, 0LL);
    }
  }
  else
  {
    v8 = *(_BYTE *)(v29 + 2716) == 0;
    v55 = v114;
    if ( v8 )
      qword_14015E0A8 = v114[3];
    if ( CheckForMdmFaultOrDelayInjection(9, 1037, (__int64)this + 92)
      || (Caps = DISPLAY_MUX_MGR::SetDisableQueryConnectionDdiStatus(qword_14015E3C0, *v6, 0),
          CheckFailed(Caps, 1037, (__int64)this + 92, 0x331u)) )
    {
      DXGKCALLONEXIT__lambda_b3b73720c9a5b94f1e3275d94b86d9de____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT(&v105);
    }
    else
    {
      DXGKCALLONEXIT__lambda_b3b73720c9a5b94f1e3275d94b86d9de____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT(&v105);
      if ( !CheckForMdmFaultOrDelayInjection(10, 1038, (__int64)this + 92) )
      {
        Caps = QueryConnectionChanges(
                 v111,
                 *(struct _LUID *)((char *)this + 68),
                 (struct _GUID *)((char *)this + 92),
                 (struct _GUID *)((char *)this + 108));
        DISPLAY_MUX_MGR::SetAdapterAllowedToReportDisplayMuxHpd(qword_14015E3C0, 0LL);
        if ( !CheckFailed(Caps, 1038, (__int64)this + 92, 0x340u) )
        {
          v57 = *((unsigned int *)qword_14015E3C0 + 33);
          v58 = *(_QWORD *)((char *)qword_14015E3C0 + 124);
          v125 = *(__m128i *)((char *)qword_14015E3C0 + 116);
          v59 = _mm_cvtsi128_si32(_mm_srli_si128(v125, 12));
          v126 = v57;
          if ( HIDWORD(v58) )
          {
            v5 |= (unsigned __int8)((__int64 (*)(void))DpiAcpiIsLidOpen)() == 0;
            if ( v5 )
            {
              WdLogSingleEntry1(2LL, v59);
              WdLogGlobalForLineNumber = 855;
            }
            else
            {
              WdLogSingleEntry5(0LL, 484LL, 52LL, 2LL, v59, 0LL);
              WdLogGlobalForLineNumber = 851;
            }
          }
          if ( (_DWORD)v57 != 1 )
          {
            v5 |= (unsigned __int8)((__int64 (*)(void))DpiAcpiIsLidOpen)() == 0;
            if ( v5 )
            {
              WdLogSingleEntry1(2LL, v57);
              WdLogGlobalForLineNumber = 886;
            }
            else if ( (_DWORD)v57 )
            {
              WdLogSingleEntry5(0LL, 484LL, 52LL, 3LL, v57, 0LL);
              WdLogGlobalForLineNumber = 881;
            }
            else
            {
              WdLogSingleEntry5(0LL, 484LL, 52LL, 3LL, 0LL, 0LL);
              WdLogGlobalForLineNumber = 874;
            }
          }
          if ( *((_DWORD *)this + 17) != v125.m128i_i32[0]
            || *((_QWORD *)this + 9) != *(__int64 *)((char *)v125.m128i_i64 + 4) )
          {
            v5 |= (unsigned __int8)DpiAcpiIsLidOpen(v56, v125.m128i_u32[2]) == 0;
            if ( v5 )
            {
              WdLogSingleEntry2(2LL, v61, v60);
              WdLogGlobalForLineNumber = 910;
            }
            else
            {
              WdLogSingleEntry5(0LL, 484LL, 52LL, 4LL, v61, v60);
              WdLogGlobalForLineNumber = 904;
            }
          }
          CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)&v111);
          CInterfaceCallContext::CInterfaceCallContext(&v118, v55);
          if ( !CheckFailed(v120, 1039, (__int64)this + 92, 0x397u)
            && !CheckForMdmFaultOrDelayInjection(11, 1040, (__int64)this + 92) )
          {
            v62 = v118;
            if ( v89
              || (Caps = DpiSetIntegratedEdidSizeForDisplayMuxTarget((__int64)v118, *((_DWORD *)this + 22), v96),
                  !CheckFailed(v120, 1050, (__int64)this + 92, 0x3A6u)) )
            {
              if ( !CheckForMdmFaultOrDelayInjection(12, 1041, (__int64)this + 92) )
              {
                v63 = *((_DWORD *)this + 22);
                v64 = (int)v116;
                v65 = v97;
                v66 = v119;
                v78 = (__int64)v115;
                *((_BYTE *)this + 32) = 1;
                Caps = DpiDxgkDdiDisplayMuxPostSwitchToPhase1(v66, v63, v65, v64, v78);
                if ( !CheckFailed(Caps, 1041, (__int64)this + 92, 0x3B8u) )
                {
                  Caps = DpiQueryIntegratedDescriptorWrapper((__int64)v62, v67, v68, v69);
                  if ( !CheckFailed(Caps, 1040, (__int64)this + 92, 0x3C0u) )
                  {
                    DISPLAY_MUX_MGR::SetAdapterAllowedToReportDisplayMuxHpd(
                      qword_14015E3C0,
                      (DISPLAY_MUX_SWITCH_OPERATION *)((char *)this + 80));
                    Caps = QueryConnectionChanges(
                             v62,
                             *(struct _LUID *)((char *)this + 80),
                             (struct _GUID *)((char *)this + 92),
                             (struct _GUID *)((char *)this + 108));
                    DISPLAY_MUX_MGR::SetAdapterAllowedToReportDisplayMuxHpd(qword_14015E3C0, 0LL);
                    if ( !CheckFailed(Caps, 1042, (__int64)this + 92, 0x3CAu)
                      && !CheckForMdmFaultOrDelayInjection(13, 1042, (__int64)this + 92) )
                    {
                      v72 = *(__m128i *)((char *)qword_14015E3C0 + 116);
                      v73 = *((unsigned int *)qword_14015E3C0 + 33);
                      v108 = *((_DWORD *)qword_14015E3C0 + 33);
                      v107 = v72;
                      if ( *((_DWORD *)this + 20) != _mm_cvtsi128_si32(v72)
                        || *(_QWORD *)((char *)this + 84) != *(__int64 *)((char *)v107.m128i_i64 + 4) )
                      {
                        IsLidOpen = DpiAcpiIsLidOpen(v71, v70);
                        v75 = *((unsigned int *)this + 20);
                        v5 |= IsLidOpen == 0;
                        if ( v5 )
                        {
                          WdLogSingleEntry2(2LL, v75, *((unsigned int *)this + 22));
                          WdLogGlobalForLineNumber = 1004;
                        }
                        else
                        {
                          WdLogSingleEntry5(0LL, 484LL, 52LL, 1LL, v75, *((unsigned int *)this + 22));
                          WdLogGlobalForLineNumber = 998;
                        }
                      }
                      if ( (_DWORD)v73 == (_DWORD)v57 )
                      {
                        if ( v107.m128i_i32[3] != v59 + 1 )
                        {
                          if ( (unsigned __int8)v5 | ((unsigned __int8)DpiAcpiIsLidOpen(v71, v70) == 0) )
                          {
                            WdLogSingleEntry2(2LL, v76, v59);
                            WdLogGlobalForLineNumber = 1029;
                          }
                          else
                          {
                            WdLogSingleEntry5(0LL, 484LL, 52LL, 5LL, v59, v76);
                            WdLogGlobalForLineNumber = 1023;
                          }
                        }
                        *v117 = 1;
                      }
                      else if ( v107.m128i_i32[3] == v59 )
                      {
                        if ( (_DWORD)v73 != (_DWORD)v57 + 1 )
                        {
                          if ( (unsigned __int8)v5 | ((unsigned __int8)DpiAcpiIsLidOpen(v71, v70) == 0) )
                          {
                            WdLogSingleEntry2(2LL, v73, v57);
                            WdLogGlobalForLineNumber = 1056;
                          }
                          else
                          {
                            WdLogSingleEntry5(0LL, 484LL, 52LL, 6LL, v57, v73);
                            WdLogGlobalForLineNumber = 1050;
                          }
                        }
                        *v117 = 0;
                      }
                      else if ( (unsigned __int8)v5 | ((unsigned __int8)DpiAcpiIsLidOpen(v71, v70) == 0) )
                      {
                        WdLogSingleEntry0(2LL);
                        WdLogGlobalForLineNumber = 1077;
                      }
                      else
                      {
                        WdLogSingleEntry5(0LL, 484LL, 52LL, 7LL, 0LL, 0LL);
                        WdLogGlobalForLineNumber = 1073;
                      }
                    }
                  }
                }
              }
            }
          }
          CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)&v118);
          DXGKCALLONEXIT__lambda_5bf16074e78eca97c9745c10e52e39f7____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)v98);
          TARGET_POWER_REFERENCE::ReleaseReference((TARGET_POWER_REFERENCE *)&v90);
          TARGET_POWER_REFERENCE::ReleaseReference((TARGET_POWER_REFERENCE *)&v100);
          DXGKCALLONEXIT__lambda_8e64b2d4059ca463867f9c5833a46b2d____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)&v87);
          AUTO_REMOVE_LOCK::Release((PVOID *)&v85);
          AUTO_REMOVE_LOCK::Release((PVOID *)&v83);
          v54 = v80[0] == 0;
          goto LABEL_154;
        }
      }
    }
    CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)&v111);
    DXGKCALLONEXIT__lambda_5bf16074e78eca97c9745c10e52e39f7____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)v98);
    TARGET_POWER_REFERENCE::ReleaseReference((TARGET_POWER_REFERENCE *)&v90);
    TARGET_POWER_REFERENCE::ReleaseReference((TARGET_POWER_REFERENCE *)&v100);
  }
  DXGKCALLONEXIT__lambda_8e64b2d4059ca463867f9c5833a46b2d____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)&v87);
  AUTO_REMOVE_LOCK::Release((PVOID *)&v85);
  AUTO_REMOVE_LOCK::Release((PVOID *)&v83);
  v54 = v80[0] == 0;
LABEL_154:
  if ( !v54 )
    ReleaseMiniportListMutex();
  wistd::unique_ptr<_KEY_VALUE_PARTIAL_INFORMATION,DxgMonitor::byte_array_deleter<_KEY_VALUE_PARTIAL_INFORMATION>>::reset(
    (void **)&v110,
    0LL);
}
