/*
 * XREFs of ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x1403845FC
 * Callers:
 *     ?CreateVidPnMgr@VIDPN_MGR_CLASSFACTORY@@SAJQEAVADAPTER_DISPLAY@@PEAPEAVVIDPN_MGR@@@Z @ 0x140383F4C (-CreateVidPnMgr@VIDPN_MGR_CLASSFACTORY@@SAJQEAVADAPTER_DISPLAY@@PEAPEAVVIDPN_MGR@@@Z.c)
 * Callees:
 *     ??1?$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ @ 0x140013054 (--1-$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14001B3E0 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x140036A80 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x14003EB9C (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x1400410D8 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x14004C14C (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDEOPRESENTTARGETSET@@@@QEAAXPEAVDMMVIDEOPRESENTTARGETSET@@@Z @ 0x140061610 (-reset@-$auto_rc@VDMMVIDEOPRESENTTARGETSET@@@@QEAAXPEAVDMMVIDEOPRESENTTARGETSET@@@Z.c)
 *     ??0DXGDIAGNOSTICS@@QEAA@IIW4DXGK_POOL_FLAGS@@I@Z @ 0x1400724CC (--0DXGDIAGNOSTICS@@QEAA@IIW4DXGK_POOL_FLAGS@@I@Z.c)
 *     ??0DMMVIDEOPRESENTSOURCESET@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x14008CC3C (--0DMMVIDEOPRESENTSOURCESET@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ??0DMMVIDEOPRESENTTARGETSET@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x14008CD04 (--0DMMVIDEOPRESENTTARGETSET@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?_InitializeDmmClientInterfaces@VIDPN_MGR@@AEAAJXZ @ 0x140255550 (-_InitializeDmmClientInterfaces@VIDPN_MGR@@AEAAJXZ.c)
 *     ?_InitializeDxgPortDmmInterfaces@VIDPN_MGR@@AEAAJXZ @ 0x140255910 (-_InitializeDxgPortDmmInterfaces@VIDPN_MGR@@AEAAJXZ.c)
 *     ?_InitializeVidPnMiniportInterfaces@VIDPN_MGR@@AEAAJXZ @ 0x140255A34 (-_InitializeVidPnMiniportInterfaces@VIDPN_MGR@@AEAAJXZ.c)
 *     ?_ReadTargetPriorityList@VIDPN_MGR@@AEAAJQEAXPEBU_UNICODE_STRING@@PEAV?$AutoBuffer@I@DMM@@@Z @ 0x14025631C (-_ReadTargetPriorityList@VIDPN_MGR@@AEAAJQEAXPEBU_UNICODE_STRING@@PEAV-$AutoBuffer@I@DMM@@@Z.c)
 *     ?MonitorRegisterMonitorEventCallback@@YAJPEAVADAPTER_DISPLAY@@P6AJPEAXI1W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z1PEAPEAUHDXGMONITOREVENT__@@@Z @ 0x140267FF8 (-MonitorRegisterMonitorEventCallback@@YAJPEAVADAPTER_DISPLAY@@P6AJPEAXI1W4MONITOR_EVENT@@_KW4_DM.c)
 *     ?_ReadConfiguration@VIDPN_MGR@@AEAAJXZ @ 0x1403827C0 (-_ReadConfiguration@VIDPN_MGR@@AEAAJXZ.c)
 *     DpiReadPnpRegistryValue @ 0x140384310 (DpiReadPnpRegistryValue.c)
 *     DpiOpenPnpRegistryKey @ 0x1403844B0 (DpiOpenPnpRegistryKey.c)
 *     ?DxgkCallDriverIoControl@@YAJPEAU_DEVICE_OBJECT@@KPEAXK1KEPEA_K@Z @ 0x1403EA6E0 (-DxgkCallDriverIoControl@@YAJPEAU_DEVICE_OBJECT@@KPEAXK1KEPEA_K@Z.c)
 */

VIDPN_MGR *__fastcall VIDPN_MGR::VIDPN_MGR(VIDPN_MGR *this, struct ADAPTER_DISPLAY *const a2, __int64 a3, __int64 a4)
{
  VIDPN_MGR *v4; // rsi
  __int64 v5; // r14
  __int64 *v6; // rdi
  __int64 *v7; // r15
  DMMVIDEOPRESENTSOURCESET *v9; // rax
  DMMVIDEOPRESENTSOURCESET *v10; // rax
  __int64 v11; // r9
  DMMVIDEOPRESENTTARGETSET *v12; // rax
  DMMVIDEOPRESENTTARGETSET *v13; // rax
  __int64 v14; // rdx
  int Configuration; // ebx
  __int64 v16; // r8
  __int64 v17; // r9
  struct DXGADAPTER *ContainingAdapter; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  struct DXGADAPTER *v22; // rax
  struct DXGADAPTER *v23; // rax
  __int64 v24; // rbx
  __int64 v25; // rcx
  struct DXGADAPTER *v26; // rax
  int v27; // r12d
  struct DXGADAPTER *v28; // rax
  struct DXGADAPTER *v29; // rax
  __int64 v30; // rcx
  struct DXGADAPTER *v31; // rax
  struct DXGADAPTER *v32; // rax
  struct DXGADAPTER *v33; // rax
  __int64 v34; // rdx
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // rdx
  const struct DMMVIDEOPRESENTTARGET *v36; // rdx
  int v37; // eax
  struct DXGADAPTER *v38; // rax
  struct DXGADAPTER *v39; // rax
  int v40; // eax
  __int64 v41; // rcx
  __int64 v42; // rdi
  struct DXGADAPTER *v43; // rax
  int v44; // eax
  __int64 v45; // r15
  unsigned __int64 v46; // r15
  unsigned __int64 v47; // r15
  unsigned int v48; // r12d
  __int64 v49; // rsi
  __int64 v50; // rdi
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  struct DMMVIDEOPRESENTTARGET *v56; // r13
  __int64 v57; // rax
  __int64 v58; // rdi
  unsigned int *i; // rdi
  __int64 v60; // rcx
  int v61; // eax
  __int64 v62; // r15
  unsigned __int64 v63; // r15
  unsigned __int64 v64; // r15
  unsigned int v65; // r12d
  __int64 v66; // rsi
  __int64 v67; // rdi
  struct DMMVIDEOPRESENTTARGET *v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  struct DMMVIDEOPRESENTTARGET *v73; // r13
  struct DXGADAPTER *v74; // rax
  HANDLE v75; // rcx
  void ***v76; // rcx
  __int64 v77; // rax
  struct DXGADAPTER *v78; // rax
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // r9
  __int64 v83; // r15
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r8
  __int64 v87; // r9
  __int64 v88; // rdi
  __int64 v89; // rdx
  __int64 v90; // r8
  __int64 v91; // r9
  struct DXGADAPTER *v92; // rax
  HANDLE v93; // rcx
  struct DXGADAPTER *v94; // rax
  __int64 v95; // rdi
  int (__high *v96)(void *, unsigned int, void *, enum MONITOR_EVENT, unsigned __int64, enum _DMM_VIDPN_MONITOR_TYPE, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *); // rdx
  void *v97; // r8
  struct DXGADAPTER *v98; // rax
  __int64 v99; // r9
  struct DXGADAPTER *v100; // rax
  __int64 v101; // rax
  unsigned __int8 v103; // [rsp+30h] [rbp-D0h]
  unsigned __int8 v104; // [rsp+30h] [rbp-D0h]
  unsigned __int64 *v105; // [rsp+38h] [rbp-C8h]
  unsigned __int64 *v106; // [rsp+38h] [rbp-C8h]
  HANDLE Handle; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v108; // [rsp+48h] [rbp-B8h] BYREF
  VIDPN_MGR *v109; // [rsp+50h] [rbp-B0h]
  struct _UNICODE_STRING v110; // [rsp+58h] [rbp-A8h] BYREF
  struct _UNICODE_STRING v111; // [rsp+68h] [rbp-98h] BYREF
  void **v112; // [rsp+78h] [rbp-88h] BYREF
  __int128 v113; // [rsp+80h] [rbp-80h]
  void **v114; // [rsp+90h] [rbp-70h]
  __int64 v115; // [rsp+98h] [rbp-68h]
  unsigned __int64 v116; // [rsp+A0h] [rbp-60h]
  __int64 v117; // [rsp+A8h] [rbp-58h]
  void **v118; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v119; // [rsp+B8h] [rbp-48h]
  void **v120; // [rsp+C8h] [rbp-38h]
  __int64 v121; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v122; // [rsp+D8h] [rbp-28h]
  __int64 v123; // [rsp+E0h] [rbp-20h]
  _QWORD InputBuffer[2]; // [rsp+E8h] [rbp-18h] BYREF
  _QWORD v125[2]; // [rsp+F8h] [rbp-8h] BYREF
  _OWORD v126[2]; // [rsp+108h] [rbp+8h] BYREF
  int v127; // [rsp+128h] [rbp+28h]
  wchar_t v128; // [rsp+12Ch] [rbp+2Ch]
  _OWORD v129[3]; // [rsp+130h] [rbp+30h] BYREF

  v4 = this;
  v109 = this;
  v5 = 0LL;
  *(_QWORD *)this = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
  v6 = (__int64 *)((char *)this + 112);
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = &Lockable::`vftable';
  v7 = (__int64 *)((char *)this + 120);
  *((_DWORD *)this + 6) = 0;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 19) = 17;
  *((_DWORD *)this + 20) = 39;
  *((_DWORD *)this + 8) = 2;
  *((_DWORD *)this + 24) = 0;
  *(_QWORD *)this = &VIDPN_MGR::`vftable'{for `ContainedBy<ADAPTER_DISPLAY>'};
  *((_QWORD *)this + 2) = &VIDPN_MGR::`vftable'{for `Lockable'};
  *((_QWORD *)this + 11) = &VIDPN_MGR::`vftable'{for `FallibleConstruction'};
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = &Set<DMMVIDPN>::`vftable';
  *((_DWORD *)this + 38) = 0;
  *((_QWORD *)this + 18) = &DoublyLinkedList<DMMVIDPN,DoubleLinkedListElementDeleter<DMMVIDPN>>::`vftable';
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 21) = (char *)this + 160;
  *((_QWORD *)this + 20) = (char *)this + 160;
  *((_DWORD *)this + 46) = 2;
  *((_QWORD *)this + 24) = &Queue<VIDPN_MGR::COMMITVIDPNREQUEST>::`vftable';
  *((_QWORD *)this + 25) = &DoublyLinkedList<VIDPN_MGR::COMMITVIDPNREQUEST,DoubleLinkedListElementDeleter<VIDPN_MGR::COMMITVIDPNREQUEST>>::`vftable';
  *((_DWORD *)this + 52) = 0;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 28) = (char *)this + 216;
  *((_QWORD *)this + 27) = (char *)this + 216;
  *((_DWORD *)this + 60) = 2;
  *((_QWORD *)this + 31) = 30LL;
  *((_QWORD *)this + 32) = &Set<DMMVIDPN>::`vftable';
  *((_DWORD *)this + 68) = 0;
  *((_QWORD *)this + 33) = &DoublyLinkedList<DMMVIDPN,DoubleLinkedListElementDeleter<DMMVIDPN>>::`vftable';
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 36) = (char *)this + 280;
  *((_QWORD *)this + 35) = (char *)this + 280;
  *((_DWORD *)this + 76) = 2;
  *((_QWORD *)this + 39) = 5LL;
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 41) = &Queue<DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>>::`vftable';
  *((_QWORD *)this + 42) = &DoublyLinkedList<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>,DoubleLinkedListElementDeleter<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>>>::`vftable';
  *((_DWORD *)this + 86) = 0;
  *((_QWORD *)this + 46) = 0LL;
  *((_QWORD *)this + 45) = (char *)this + 352;
  *((_QWORD *)this + 44) = (char *)this + 352;
  *((_DWORD *)this + 94) = 2;
  *((_QWORD *)this + 48) = 40LL;
  *((_QWORD *)this + 49) = 0LL;
  *((_QWORD *)this + 50) = 0LL;
  *((_QWORD *)this + 51) = 0LL;
  *((_QWORD *)this + 52) = 0LL;
  *((_QWORD *)this + 53) = 0LL;
  *((_QWORD *)this + 54) = 0LL;
  *((_QWORD *)this + 55) = 0LL;
  *((_QWORD *)this + 56) = 0LL;
  *((_QWORD *)this + 57) = 0LL;
  *((_QWORD *)this + 58) = 0LL;
  *((_QWORD *)this + 59) = 0LL;
  *((_QWORD *)this + 60) = 0LL;
  *((_QWORD *)this + 61) = 0LL;
  *((_QWORD *)this + 62) = 0LL;
  *((_QWORD *)this + 63) = 0LL;
  *((_QWORD *)this + 64) = 0LL;
  *((_BYTE *)this + 520) = 0;
  *((_QWORD *)this + 66) = 0LL;
  *((_DWORD *)this + 134) = 0;
  *((_DWORD *)this + 137) = -1;
  *((_DWORD *)this + 138) = -1;
  *((_QWORD *)this + 70) = 0LL;
  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 166;
  }
  *((_DWORD *)v4 + 26) = 1;
  if ( a2 )
  {
    if ( *((_QWORD *)v4 + 1) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 86;
    }
    *((_QWORD *)v4 + 1) = a2;
  }
  else
  {
    WdLogSingleEntry2(2LL, v4, *((_QWORD *)v4 + 1));
    WdLogGlobalForLineNumber = 79;
  }
  if ( *((_DWORD *)v4 + 8) != 2 )
  {
    WdLogSingleEntry1(2LL, v4);
    *((_DWORD *)v4 + 24) = *((_DWORD *)v4 + 6);
    WdLogGlobalForLineNumber = 178;
    return v4;
  }
  v9 = (DMMVIDEOPRESENTSOURCESET *)operator new(0x70uLL, 0x4E506456u, 256LL, a4);
  if ( v9 )
    v10 = DMMVIDEOPRESENTSOURCESET::DMMVIDEOPRESENTSOURCESET(v9, v4);
  else
    v10 = 0LL;
  auto_rc<DMMVIDEOPRESENTTARGETSET>::reset(v6, (__int64)v10);
  if ( !*v6 )
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 192;
LABEL_14:
    *((_DWORD *)v4 + 24) = -1073741801;
    return v4;
  }
  v12 = (DMMVIDEOPRESENTTARGETSET *)operator new(0x80uLL, 0x4E506456u, 256LL, v11);
  if ( v12 )
    v13 = DMMVIDEOPRESENTTARGETSET::DMMVIDEOPRESENTTARGETSET(v12, v4);
  else
    v13 = 0LL;
  auto_rc<DMMVIDEOPRESENTTARGETSET>::reset(v7, (__int64)v13);
  if ( !*v7 )
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 205;
    goto LABEL_14;
  }
  Configuration = VIDPN_MGR::_ReadConfiguration(v4);
  if ( Configuration < 0 )
  {
    ContainingAdapter = VIDPN_MGR::GetContainingAdapter(v4);
    WdLogSingleEntry1(2LL, ContainingAdapter);
    WdLogGlobalForLineNumber = 219;
LABEL_22:
    *((_DWORD *)v4 + 24) = Configuration;
    return v4;
  }
  Configuration = VIDPN_MGR::_InitializeDxgPortDmmInterfaces(v4, v14, v16, v17);
  if ( Configuration < 0 )
  {
    v22 = VIDPN_MGR::GetContainingAdapter(v4);
    WdLogSingleEntry1(2LL, v22);
    WdLogGlobalForLineNumber = 234;
    goto LABEL_22;
  }
  Configuration = VIDPN_MGR::_InitializeVidPnMiniportInterfaces((void **)v4, v19, v20, v21);
  if ( Configuration < 0 )
  {
    v23 = VIDPN_MGR::GetContainingAdapter(v4);
    WdLogSingleEntry1(2LL, v23);
    WdLogGlobalForLineNumber = 249;
    goto LABEL_22;
  }
  _InterlockedAdd((volatile signed __int32 *)(*v6 + 72), 1u);
  v24 = *v6;
  v25 = -(__int64)(*v6 != -112);
  InputBuffer[1] = *((_QWORD *)v4 + 49);
  InputBuffer[0] = v24 & v25;
  v26 = VIDPN_MGR::GetContainingAdapter(v4);
  v27 = DxgkCallDriverIoControl(*((PDEVICE_OBJECT *)v26 + 27), 0x23204Fu, InputBuffer, 0x10u, 0LL, 0, v103, v105);
  if ( v27 < 0 )
  {
    v28 = VIDPN_MGR::GetContainingAdapter(v4);
    WdLogSingleEntry1(2LL, v28);
    WdLogGlobalForLineNumber = 286;
LABEL_29:
    *((_DWORD *)v4 + 24) = v27;
    goto LABEL_30;
  }
  if ( !*(_QWORD *)(v24 + 40) )
  {
    v29 = VIDPN_MGR::GetContainingAdapter(v4);
    WdLogSingleEntry1(2LL, v29);
    WdLogGlobalForLineNumber = 298;
    *((_DWORD *)v4 + 24) = -1071774936;
    goto LABEL_31;
  }
  ReferenceCounted::Release((ReferenceCounted *)(v24 + 64));
  _InterlockedIncrement((volatile signed __int32 *)(*v7 + 72));
  v24 = *v7;
  v30 = -(__int64)(*v7 != -112);
  v125[1] = *((_QWORD *)v4 + 50);
  v125[0] = v24 & v30;
  v31 = VIDPN_MGR::GetContainingAdapter(v4);
  v27 = DxgkCallDriverIoControl(*((PDEVICE_OBJECT *)v31 + 27), 0x232053u, v125, 0x10u, 0LL, 0, v104, v106);
  if ( v27 < 0 )
  {
    v32 = VIDPN_MGR::GetContainingAdapter(v4);
    WdLogSingleEntry1(2LL, v32);
    WdLogGlobalForLineNumber = 332;
    goto LABEL_29;
  }
  if ( !*(_QWORD *)(v24 + 40) )
  {
    v33 = VIDPN_MGR::GetContainingAdapter(v4);
    WdLogSingleEntry1(2LL, v33);
    WdLogGlobalForLineNumber = 344;
    *((_DWORD *)v4 + 24) = -1071774935;
    goto LABEL_31;
  }
  v34 = *(_QWORD *)(v24 + 24);
  if ( v34 == v24 + 24 || (NextTarget = (const struct DMMVIDEOPRESENTTARGET *)(v34 - 8)) == 0LL )
  {
LABEL_42:
    v37 = -1;
  }
  else
  {
    while ( !IsInternalVideoOutput(*((enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)NextTarget + 20)) )
    {
      NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v24, v36);
      if ( !NextTarget )
        goto LABEL_42;
    }
    v37 = *((_DWORD *)v36 + 6);
  }
  *((_DWORD *)v4 + 138) = v37;
  ReferenceCounted::Release((ReferenceCounted *)(v24 + 64));
  if ( *(_QWORD *)(*v7 + 40) < *(_QWORD *)(*v6 + 40) )
  {
    v38 = VIDPN_MGR::GetContainingAdapter(v4);
    WdLogSingleEntry3(2LL, *(_QWORD *)(*v7 + 40), *(_QWORD *)(*v6 + 40), v38);
    WdLogGlobalForLineNumber = 387;
    *((_DWORD *)v4 + 24) = -1071774938;
    return v4;
  }
  Handle = 0LL;
  v39 = VIDPN_MGR::GetContainingAdapter(v4);
  v40 = DpiOpenPnpRegistryKey(*((_QWORD *)v39 + 27), 1u, 0x20019u, &Handle);
  v42 = v40;
  if ( v40 < 0 )
  {
    v43 = VIDPN_MGR::GetContainingAdapter(v4);
    WdLogSingleEntry2(2LL, v43, v42);
    WdLogGlobalForLineNumber = 412;
    *((_DWORD *)v4 + 24) = v42;
    return v4;
  }
  _InterlockedIncrement((volatile signed __int32 *)(*v7 + 72));
  v24 = *v7;
  v127 = *(_DWORD *)L"st";
  v128 = aTargetpriority[18];
  v110.Buffer = (wchar_t *)v126;
  v112 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
  v126[0] = *(_OWORD *)L"TargetPriorityList";
  v114 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
  *(_QWORD *)&v110.Length = 2490404LL;
  v126[1] = *(_OWORD *)L"iorityList";
  v115 = 0LL;
  v113 = 0LL;
  v116 = 0LL;
  v117 = 256LL;
  v44 = VIDPN_MGR::_ReadTargetPriorityList(v41, Handle, &v110, &v112);
  v45 = v44;
  if ( v44 < 0 )
  {
    if ( v44 != -1073741275 )
    {
      v74 = VIDPN_MGR::GetContainingAdapter(v4);
      WdLogSingleEntry2(2LL, v74, v45);
      v75 = Handle;
      WdLogGlobalForLineNumber = 484;
      *((_DWORD *)v4 + 24) = v45;
      ZwClose(v75);
      v76 = &v112;
      goto LABEL_74;
    }
  }
  else
  {
    v46 = v116;
    if ( !v116 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 435;
    }
    v47 = v46 >> 2;
    v48 = 0;
    if ( v47 )
    {
      v49 = v115;
      v50 = 0LL;
      do
      {
        TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById(
                       (DMMVIDEOPRESENTTARGETSET *)v24,
                       *(_DWORD *)(v49 + 4 * v50));
        v56 = TargetById;
        if ( TargetById )
        {
          if ( *((_DWORD *)TargetById + 31) == -1 )
          {
            *((_DWORD *)TargetById + 31) = v48;
            v57 = WdLogNewEntry5_WdTrace(v53, v52, v54, v55);
            *(_QWORD *)(v57 + 24) = v50;
            *(_QWORD *)(v57 + 32) = *((unsigned int *)v56 + 6);
            WdLogGlobalForLineNumber = 465;
          }
          else
          {
            WdLogSingleEntry1(2LL, *((unsigned int *)TargetById + 6));
            WdLogGlobalForLineNumber = 455;
          }
        }
        else
        {
          WdLogSingleEntry2(3LL, *(unsigned int *)(v49 + 4 * v50), v50);
          WdLogGlobalForLineNumber = 446;
        }
        v50 = ++v48;
      }
      while ( v48 < v47 );
      v4 = v109;
    }
    v58 = *(_QWORD *)(v24 + 24);
    if ( v58 != v24 + 24 )
    {
      for ( i = (unsigned int *)(v58 - 8);
            i;
            i = (unsigned int *)DMMVIDEOPRESENTTARGETSET::GetNextTarget(
                                  (DMMVIDEOPRESENTTARGETSET *)v24,
                                  (const struct DMMVIDEOPRESENTTARGET *const)i) )
      {
        if ( i[31] == -1 )
        {
          WdLogSingleEntry1(3LL, i[6]);
          WdLogGlobalForLineNumber = 476;
        }
      }
    }
  }
  DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v112);
  v111.Buffer = (wchar_t *)v129;
  v129[0] = *(_OWORD *)L"TargetForcePriorityList";
  v118 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
  *(_QWORD *)&v111.Length = 3145774LL;
  v120 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
  v129[2] = *(_OWORD *)L"ityList";
  v121 = 0LL;
  v122 = 0LL;
  v119 = 0LL;
  v123 = 256LL;
  v129[1] = *(_OWORD *)L"rcePriorityList";
  v61 = VIDPN_MGR::_ReadTargetPriorityList(v60, Handle, &v111, &v118);
  v62 = v61;
  if ( v61 < 0 )
  {
    if ( v61 == -1073741275 )
      goto LABEL_80;
    v92 = VIDPN_MGR::GetContainingAdapter(v4);
    WdLogSingleEntry2(2LL, v92, v62);
    v93 = Handle;
    WdLogGlobalForLineNumber = 546;
    *((_DWORD *)v4 + 24) = v62;
    ZwClose(v93);
    v76 = &v118;
LABEL_74:
    DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(v76);
LABEL_30:
    if ( !v24 )
      return v4;
LABEL_31:
    ReferenceCounted::Release((ReferenceCounted *)(v24 + 64));
    return v4;
  }
  v63 = v122;
  if ( !v122 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 507;
  }
  v64 = v63 >> 2;
  v65 = 0;
  if ( v64 )
  {
    v66 = v121;
    v67 = 0LL;
    do
    {
      v68 = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v24, *(_DWORD *)(v66 + 4 * v67));
      v73 = v68;
      if ( v68 )
      {
        if ( *((_DWORD *)v68 + 32) == -1 )
        {
          *((_DWORD *)v68 + 32) = v65;
          v77 = WdLogNewEntry5_WdTrace(v70, v69, v71, v72);
          *(_QWORD *)(v77 + 24) = v67;
          *(_QWORD *)(v77 + 32) = *((unsigned int *)v73 + 6);
          WdLogGlobalForLineNumber = 537;
        }
        else
        {
          WdLogSingleEntry1(2LL, *((unsigned int *)v68 + 6));
          WdLogGlobalForLineNumber = 527;
        }
      }
      else
      {
        WdLogSingleEntry2(3LL, *(unsigned int *)(v66 + 4 * v67), v67);
        WdLogGlobalForLineNumber = 518;
      }
      v67 = ++v65;
    }
    while ( v65 < v64 );
    v4 = v109;
  }
LABEL_80:
  DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v118);
  ZwClose(Handle);
  v108 = -1;
  v78 = VIDPN_MGR::GetContainingAdapter(v4);
  if ( (int)DpiReadPnpRegistryValue(*((_QWORD *)v78 + 27), L"DefaultSimulatedTarget", (char *)&v108, 4u, 1u) < 0
    || (v83 = v108, v108 == -1) )
  {
    v95 = WdLogNewEntry5_WdTrace(v80, v79, v81, v82);
    *(_QWORD *)(v95 + 24) = VIDPN_MGR::GetContainingAdapter(v4);
    WdLogGlobalForLineNumber = 592;
  }
  else if ( DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v24, v108) )
  {
    v88 = WdLogNewEntry5_WdTrace(v85, v84, v86, v87);
    *(_QWORD *)(v88 + 24) = v83;
    *(_QWORD *)(v88 + 32) = VIDPN_MGR::GetContainingAdapter(v4);
    WdLogGlobalForLineNumber = 576;
    *((_DWORD *)v4 + 137) = v83;
  }
  else
  {
    v94 = VIDPN_MGR::GetContainingAdapter(v4);
    WdLogSingleEntry2(2LL, v83, v94);
    WdLogGlobalForLineNumber = 585;
  }
  if ( v24 )
    ReferenceCounted::Release((ReferenceCounted *)(v24 + 64));
  Configuration = VIDPN_MGR::_InitializeDmmClientInterfaces(v4, v89, v90, v91);
  if ( Configuration < 0 )
  {
    v98 = VIDPN_MGR::GetContainingAdapter(v4);
    WdLogSingleEntry1(2LL, v98);
    WdLogGlobalForLineNumber = 606;
    goto LABEL_22;
  }
  if ( !*((_QWORD *)v4 + 1) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 68;
  }
  Configuration = MonitorRegisterMonitorEventCallback(
                    *((struct ADAPTER_DISPLAY **)v4 + 1),
                    v96,
                    v97,
                    (struct HDXGMONITOREVENT__ **)v4 + 66);
  if ( Configuration < 0 )
  {
    v100 = VIDPN_MGR::GetContainingAdapter(v4);
    WdLogSingleEntry1(2LL, v100);
    WdLogGlobalForLineNumber = 624;
    goto LABEL_22;
  }
  if ( !*((_QWORD *)v4 + 66) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 632;
  }
  v101 = operator new(0x70uLL, 0x4E506456u, 256LL, v99);
  if ( v101 )
    v5 = DXGDIAGNOSTICS::DXGDIAGNOSTICS(v101, 0x8000u, 1, 256LL, 0x12Cu);
  *((_QWORD *)v4 + 70) = v5;
  *((_DWORD *)v4 + 26) = 2;
  return v4;
}
