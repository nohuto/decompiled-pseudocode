/*
 * XREFs of ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x14036B9EC
 * Callers:
 *     ?CreateVidPnMgr@VIDPN_MGR_CLASSFACTORY@@SAJQEAVADAPTER_DISPLAY@@PEAPEAVVIDPN_MGR@@@Z @ 0x14036B344 (-CreateVidPnMgr@VIDPN_MGR_CLASSFACTORY@@SAJQEAVADAPTER_DISPLAY@@PEAPEAVVIDPN_MGR@@@Z.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14000BE00 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??1?$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ @ 0x1400224E4 (--1-$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1400369D0 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x14003E58C (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x140040B88 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x14004BC00 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDEOPRESENTTARGETSET@@@@QEAAXPEAVDMMVIDEOPRESENTTARGETSET@@@Z @ 0x140061ECC (-reset@-$auto_rc@VDMMVIDEOPRESENTTARGETSET@@@@QEAAXPEAVDMMVIDEOPRESENTTARGETSET@@@Z.c)
 *     ??0DXGDIAGNOSTICS@@QEAA@IIW4DXGK_POOL_FLAGS@@I@Z @ 0x140072E60 (--0DXGDIAGNOSTICS@@QEAA@IIW4DXGK_POOL_FLAGS@@I@Z.c)
 *     ??0DMMVIDEOPRESENTSOURCESET@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x14008DF00 (--0DMMVIDEOPRESENTSOURCESET@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ??0DMMVIDEOPRESENTTARGETSET@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x14008DFC8 (--0DMMVIDEOPRESENTTARGETSET@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?_InitializeDmmClientInterfaces@VIDPN_MGR@@AEAAJXZ @ 0x14025C3F0 (-_InitializeDmmClientInterfaces@VIDPN_MGR@@AEAAJXZ.c)
 *     ?_InitializeDxgPortDmmInterfaces@VIDPN_MGR@@AEAAJXZ @ 0x14025C7B0 (-_InitializeDxgPortDmmInterfaces@VIDPN_MGR@@AEAAJXZ.c)
 *     ?_InitializeVidPnMiniportInterfaces@VIDPN_MGR@@AEAAJXZ @ 0x14025C8D4 (-_InitializeVidPnMiniportInterfaces@VIDPN_MGR@@AEAAJXZ.c)
 *     ?_ReadTargetPriorityList@VIDPN_MGR@@AEAAJQEAXPEBU_UNICODE_STRING@@PEAV?$AutoBuffer@I@DMM@@@Z @ 0x14025D1BC (-_ReadTargetPriorityList@VIDPN_MGR@@AEAAJQEAXPEBU_UNICODE_STRING@@PEAV-$AutoBuffer@I@DMM@@@Z.c)
 *     ?MonitorRegisterMonitorEventCallback@@YAJPEAVADAPTER_DISPLAY@@P6AJPEAXI1W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z1PEAPEAUHDXGMONITOREVENT__@@@Z @ 0x14026EF58 (-MonitorRegisterMonitorEventCallback@@YAJPEAVADAPTER_DISPLAY@@P6AJPEAXI1W4MONITOR_EVENT@@_KW4_DM.c)
 *     ?_ReadConfiguration@VIDPN_MGR@@AEAAJXZ @ 0x140369B90 (-_ReadConfiguration@VIDPN_MGR@@AEAAJXZ.c)
 *     DpiReadPnpRegistryValue @ 0x14036B708 (DpiReadPnpRegistryValue.c)
 *     DpiOpenPnpRegistryKey @ 0x14036B8A0 (DpiOpenPnpRegistryKey.c)
 *     ?DxgkCallDriverIoControl@@YAJPEAU_DEVICE_OBJECT@@KPEAXK1KEPEA_K@Z @ 0x1403E3E00 (-DxgkCallDriverIoControl@@YAJPEAU_DEVICE_OBJECT@@KPEAXK1KEPEA_K@Z.c)
 */

VIDPN_MGR *__fastcall VIDPN_MGR::VIDPN_MGR(VIDPN_MGR *this, struct ADAPTER_DISPLAY *const a2)
{
  VIDPN_MGR *v2; // rsi
  __int64 v3; // r14
  __int64 *v4; // rdi
  __int64 *v5; // r15
  DMMVIDEOPRESENTSOURCESET *v7; // rax
  DMMVIDEOPRESENTSOURCESET *v8; // rax
  DMMVIDEOPRESENTTARGETSET *v9; // rax
  DMMVIDEOPRESENTTARGETSET *v10; // rax
  int Configuration; // ebx
  struct DXGADAPTER *ContainingAdapter; // rax
  struct DXGADAPTER *v13; // rax
  struct DXGADAPTER *v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rcx
  struct DXGADAPTER *v17; // rax
  int v18; // r12d
  struct DXGADAPTER *v19; // rax
  struct DXGADAPTER *v20; // rax
  __int64 v21; // rcx
  struct DXGADAPTER *v22; // rax
  struct DXGADAPTER *v23; // rax
  struct DXGADAPTER *v24; // rax
  __int64 v25; // rdx
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // rdx
  const struct DMMVIDEOPRESENTTARGET *v27; // rdx
  int v28; // eax
  struct DXGADAPTER *v29; // rax
  struct DXGADAPTER *v30; // rax
  int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // rdi
  struct DXGADAPTER *v34; // rax
  int v35; // eax
  __int64 v36; // r15
  unsigned __int64 v37; // r15
  unsigned __int64 v38; // r15
  unsigned int v39; // r12d
  __int64 v40; // rsi
  __int64 v41; // rdi
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  struct DMMVIDEOPRESENTTARGET *v47; // r13
  __int64 v48; // rax
  __int64 v49; // rdi
  unsigned int *i; // rdi
  __int64 v51; // rcx
  int v52; // eax
  __int64 v53; // r15
  unsigned __int64 v54; // r15
  unsigned __int64 v55; // r15
  unsigned int v56; // r12d
  __int64 v57; // rsi
  __int64 v58; // rdi
  struct DMMVIDEOPRESENTTARGET *v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  struct DMMVIDEOPRESENTTARGET *v64; // r13
  struct DXGADAPTER *v65; // rax
  HANDLE v66; // rcx
  void ***v67; // rcx
  __int64 v68; // rax
  struct DXGADAPTER *v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  __int64 v74; // r15
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // r9
  __int64 v79; // rdi
  struct DXGADAPTER *v80; // rax
  HANDLE v81; // rcx
  struct DXGADAPTER *v82; // rax
  __int64 v83; // rdi
  int (__high *v84)(void *, unsigned int, void *, enum MONITOR_EVENT, unsigned __int64, enum _DMM_VIDPN_MONITOR_TYPE, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *); // rdx
  void *v85; // r8
  struct DXGADAPTER *v86; // rax
  struct DXGADAPTER *v87; // rax
  __int64 v88; // rax
  unsigned __int8 v90; // [rsp+30h] [rbp-D0h]
  unsigned __int8 v91; // [rsp+30h] [rbp-D0h]
  unsigned __int64 *v92; // [rsp+38h] [rbp-C8h]
  unsigned __int64 *v93; // [rsp+38h] [rbp-C8h]
  HANDLE Handle; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v95; // [rsp+48h] [rbp-B8h] BYREF
  VIDPN_MGR *v96; // [rsp+50h] [rbp-B0h]
  struct _UNICODE_STRING v97; // [rsp+58h] [rbp-A8h] BYREF
  struct _UNICODE_STRING v98; // [rsp+68h] [rbp-98h] BYREF
  void **v99; // [rsp+78h] [rbp-88h] BYREF
  __int128 v100; // [rsp+80h] [rbp-80h]
  void **v101; // [rsp+90h] [rbp-70h]
  __int64 v102; // [rsp+98h] [rbp-68h]
  unsigned __int64 v103; // [rsp+A0h] [rbp-60h]
  __int64 v104; // [rsp+A8h] [rbp-58h]
  void **v105; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v106; // [rsp+B8h] [rbp-48h]
  void **v107; // [rsp+C8h] [rbp-38h]
  __int64 v108; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v109; // [rsp+D8h] [rbp-28h]
  __int64 v110; // [rsp+E0h] [rbp-20h]
  _QWORD InputBuffer[2]; // [rsp+E8h] [rbp-18h] BYREF
  _QWORD v112[2]; // [rsp+F8h] [rbp-8h] BYREF
  _OWORD v113[2]; // [rsp+108h] [rbp+8h] BYREF
  int v114; // [rsp+128h] [rbp+28h]
  wchar_t v115; // [rsp+12Ch] [rbp+2Ch]
  _OWORD v116[3]; // [rsp+130h] [rbp+30h] BYREF

  v2 = this;
  v96 = this;
  v3 = 0LL;
  *(_QWORD *)this = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
  v4 = (__int64 *)((char *)this + 112);
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = &Lockable::`vftable';
  v5 = (__int64 *)((char *)this + 120);
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
  *((_DWORD *)v2 + 26) = 1;
  if ( a2 )
  {
    if ( *((_QWORD *)v2 + 1) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 86;
    }
    *((_QWORD *)v2 + 1) = a2;
  }
  else
  {
    WdLogSingleEntry2(2LL, v2, *((_QWORD *)v2 + 1));
    WdLogGlobalForLineNumber = 79;
  }
  if ( *((_DWORD *)v2 + 8) != 2 )
  {
    WdLogSingleEntry1(2LL, v2);
    *((_DWORD *)v2 + 24) = *((_DWORD *)v2 + 6);
    WdLogGlobalForLineNumber = 178;
    return v2;
  }
  v7 = (DMMVIDEOPRESENTSOURCESET *)operator new(0x70uLL, 0x4E506456u, 256LL);
  if ( v7 )
    v8 = DMMVIDEOPRESENTSOURCESET::DMMVIDEOPRESENTSOURCESET(v7, v2);
  else
    v8 = 0LL;
  auto_rc<DMMVIDEOPRESENTTARGETSET>::reset(v4, (__int64)v8);
  if ( !*v4 )
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 192;
LABEL_14:
    *((_DWORD *)v2 + 24) = -1073741801;
    return v2;
  }
  v9 = (DMMVIDEOPRESENTTARGETSET *)operator new(0x80uLL, 0x4E506456u, 256LL);
  if ( v9 )
    v10 = DMMVIDEOPRESENTTARGETSET::DMMVIDEOPRESENTTARGETSET(v9, v2);
  else
    v10 = 0LL;
  auto_rc<DMMVIDEOPRESENTTARGETSET>::reset(v5, (__int64)v10);
  if ( !*v5 )
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 205;
    goto LABEL_14;
  }
  Configuration = VIDPN_MGR::_ReadConfiguration(v2);
  if ( Configuration < 0 )
  {
    ContainingAdapter = VIDPN_MGR::GetContainingAdapter(v2);
    WdLogSingleEntry1(2LL, ContainingAdapter);
    WdLogGlobalForLineNumber = 219;
LABEL_22:
    *((_DWORD *)v2 + 24) = Configuration;
    return v2;
  }
  Configuration = VIDPN_MGR::_InitializeDxgPortDmmInterfaces(v2);
  if ( Configuration < 0 )
  {
    v13 = VIDPN_MGR::GetContainingAdapter(v2);
    WdLogSingleEntry1(2LL, v13);
    WdLogGlobalForLineNumber = 234;
    goto LABEL_22;
  }
  Configuration = VIDPN_MGR::_InitializeVidPnMiniportInterfaces((void **)v2);
  if ( Configuration < 0 )
  {
    v14 = VIDPN_MGR::GetContainingAdapter(v2);
    WdLogSingleEntry1(2LL, v14);
    WdLogGlobalForLineNumber = 249;
    goto LABEL_22;
  }
  _InterlockedAdd((volatile signed __int32 *)(*v4 + 72), 1u);
  v15 = *v4;
  v16 = -(__int64)(*v4 != -112);
  InputBuffer[1] = *((_QWORD *)v2 + 49);
  InputBuffer[0] = v15 & v16;
  v17 = VIDPN_MGR::GetContainingAdapter(v2);
  v18 = DxgkCallDriverIoControl(*((PDEVICE_OBJECT *)v17 + 27), 0x23204Fu, InputBuffer, 0x10u, 0LL, 0, v90, v92);
  if ( v18 < 0 )
  {
    v19 = VIDPN_MGR::GetContainingAdapter(v2);
    WdLogSingleEntry1(2LL, v19);
    WdLogGlobalForLineNumber = 286;
LABEL_29:
    *((_DWORD *)v2 + 24) = v18;
    goto LABEL_30;
  }
  if ( !*(_QWORD *)(v15 + 40) )
  {
    v20 = VIDPN_MGR::GetContainingAdapter(v2);
    WdLogSingleEntry1(2LL, v20);
    WdLogGlobalForLineNumber = 298;
    *((_DWORD *)v2 + 24) = -1071774936;
    goto LABEL_31;
  }
  ReferenceCounted::Release((ReferenceCounted *)(v15 + 64));
  _InterlockedIncrement((volatile signed __int32 *)(*v5 + 72));
  v15 = *v5;
  v21 = -(__int64)(*v5 != -112);
  v112[1] = *((_QWORD *)v2 + 50);
  v112[0] = v15 & v21;
  v22 = VIDPN_MGR::GetContainingAdapter(v2);
  v18 = DxgkCallDriverIoControl(*((PDEVICE_OBJECT *)v22 + 27), 0x232053u, v112, 0x10u, 0LL, 0, v91, v93);
  if ( v18 < 0 )
  {
    v23 = VIDPN_MGR::GetContainingAdapter(v2);
    WdLogSingleEntry1(2LL, v23);
    WdLogGlobalForLineNumber = 332;
    goto LABEL_29;
  }
  if ( !*(_QWORD *)(v15 + 40) )
  {
    v24 = VIDPN_MGR::GetContainingAdapter(v2);
    WdLogSingleEntry1(2LL, v24);
    WdLogGlobalForLineNumber = 344;
    *((_DWORD *)v2 + 24) = -1071774935;
    goto LABEL_31;
  }
  v25 = *(_QWORD *)(v15 + 24);
  if ( v25 == v15 + 24 || (NextTarget = (const struct DMMVIDEOPRESENTTARGET *)(v25 - 8)) == 0LL )
  {
LABEL_42:
    v28 = -1;
  }
  else
  {
    while ( !IsInternalVideoOutput(*((enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)NextTarget + 20)) )
    {
      NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v15, v27);
      if ( !NextTarget )
        goto LABEL_42;
    }
    v28 = *((_DWORD *)v27 + 6);
  }
  *((_DWORD *)v2 + 138) = v28;
  ReferenceCounted::Release((ReferenceCounted *)(v15 + 64));
  if ( *(_QWORD *)(*v5 + 40) < *(_QWORD *)(*v4 + 40) )
  {
    v29 = VIDPN_MGR::GetContainingAdapter(v2);
    WdLogSingleEntry3(2LL, *(_QWORD *)(*v5 + 40), *(_QWORD *)(*v4 + 40), v29);
    WdLogGlobalForLineNumber = 387;
    *((_DWORD *)v2 + 24) = -1071774938;
    return v2;
  }
  Handle = 0LL;
  v30 = VIDPN_MGR::GetContainingAdapter(v2);
  v31 = DpiOpenPnpRegistryKey(*((_QWORD *)v30 + 27), 1u, 0x20019u, &Handle);
  v33 = v31;
  if ( v31 < 0 )
  {
    v34 = VIDPN_MGR::GetContainingAdapter(v2);
    WdLogSingleEntry2(2LL, v34, v33);
    WdLogGlobalForLineNumber = 412;
    *((_DWORD *)v2 + 24) = v33;
    return v2;
  }
  _InterlockedIncrement((volatile signed __int32 *)(*v5 + 72));
  v15 = *v5;
  v114 = *(_DWORD *)L"st";
  v115 = aTargetpriority[18];
  v97.Buffer = (wchar_t *)v113;
  v99 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
  v113[0] = *(_OWORD *)L"TargetPriorityList";
  v101 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
  *(_QWORD *)&v97.Length = 2490404LL;
  v113[1] = *(_OWORD *)L"iorityList";
  v102 = 0LL;
  v100 = 0LL;
  v103 = 0LL;
  v104 = 256LL;
  v35 = VIDPN_MGR::_ReadTargetPriorityList(v32, Handle, &v97, &v99);
  v36 = v35;
  if ( v35 < 0 )
  {
    if ( v35 != -1073741275 )
    {
      v65 = VIDPN_MGR::GetContainingAdapter(v2);
      WdLogSingleEntry2(2LL, v65, v36);
      v66 = Handle;
      WdLogGlobalForLineNumber = 484;
      *((_DWORD *)v2 + 24) = v36;
      ZwClose(v66);
      v67 = &v99;
      goto LABEL_74;
    }
  }
  else
  {
    v37 = v103;
    if ( !v103 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 435;
    }
    v38 = v37 >> 2;
    v39 = 0;
    if ( v38 )
    {
      v40 = v102;
      v41 = 0LL;
      do
      {
        TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById(
                       (DMMVIDEOPRESENTTARGETSET *)v15,
                       *(_DWORD *)(v40 + 4 * v41));
        v47 = TargetById;
        if ( TargetById )
        {
          if ( *((_DWORD *)TargetById + 31) == -1 )
          {
            *((_DWORD *)TargetById + 31) = v39;
            v48 = WdLogNewEntry5_WdTrace(v44, v43, v45, v46);
            *(_QWORD *)(v48 + 24) = v41;
            *(_QWORD *)(v48 + 32) = *((unsigned int *)v47 + 6);
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
          WdLogSingleEntry2(3LL, *(unsigned int *)(v40 + 4 * v41), v41);
          WdLogGlobalForLineNumber = 446;
        }
        v41 = ++v39;
      }
      while ( v39 < v38 );
      v2 = v96;
    }
    v49 = *(_QWORD *)(v15 + 24);
    if ( v49 != v15 + 24 )
    {
      for ( i = (unsigned int *)(v49 - 8);
            i;
            i = (unsigned int *)DMMVIDEOPRESENTTARGETSET::GetNextTarget(
                                  (DMMVIDEOPRESENTTARGETSET *)v15,
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
  DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v99);
  v98.Buffer = (wchar_t *)v116;
  v116[0] = *(_OWORD *)L"TargetForcePriorityList";
  v105 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
  *(_QWORD *)&v98.Length = 3145774LL;
  v107 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
  v116[2] = *(_OWORD *)L"ityList";
  v108 = 0LL;
  v109 = 0LL;
  v106 = 0LL;
  v110 = 256LL;
  v116[1] = *(_OWORD *)L"rcePriorityList";
  v52 = VIDPN_MGR::_ReadTargetPriorityList(v51, Handle, &v98, &v105);
  v53 = v52;
  if ( v52 < 0 )
  {
    if ( v52 == -1073741275 )
      goto LABEL_80;
    v80 = VIDPN_MGR::GetContainingAdapter(v2);
    WdLogSingleEntry2(2LL, v80, v53);
    v81 = Handle;
    WdLogGlobalForLineNumber = 546;
    *((_DWORD *)v2 + 24) = v53;
    ZwClose(v81);
    v67 = &v105;
LABEL_74:
    DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(v67);
LABEL_30:
    if ( !v15 )
      return v2;
LABEL_31:
    ReferenceCounted::Release((ReferenceCounted *)(v15 + 64));
    return v2;
  }
  v54 = v109;
  if ( !v109 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 507;
  }
  v55 = v54 >> 2;
  v56 = 0;
  if ( v55 )
  {
    v57 = v108;
    v58 = 0LL;
    do
    {
      v59 = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v15, *(_DWORD *)(v57 + 4 * v58));
      v64 = v59;
      if ( v59 )
      {
        if ( *((_DWORD *)v59 + 32) == -1 )
        {
          *((_DWORD *)v59 + 32) = v56;
          v68 = WdLogNewEntry5_WdTrace(v61, v60, v62, v63);
          *(_QWORD *)(v68 + 24) = v58;
          *(_QWORD *)(v68 + 32) = *((unsigned int *)v64 + 6);
          WdLogGlobalForLineNumber = 537;
        }
        else
        {
          WdLogSingleEntry1(2LL, *((unsigned int *)v59 + 6));
          WdLogGlobalForLineNumber = 527;
        }
      }
      else
      {
        WdLogSingleEntry2(3LL, *(unsigned int *)(v57 + 4 * v58), v58);
        WdLogGlobalForLineNumber = 518;
      }
      v58 = ++v56;
    }
    while ( v56 < v55 );
    v2 = v96;
  }
LABEL_80:
  DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v105);
  ZwClose(Handle);
  v95 = -1;
  v69 = VIDPN_MGR::GetContainingAdapter(v2);
  if ( (int)DpiReadPnpRegistryValue(*((_QWORD *)v69 + 27), L"DefaultSimulatedTarget", (char *)&v95, 4u, 1u) < 0
    || (v74 = v95, v95 == -1) )
  {
    v83 = WdLogNewEntry5_WdTrace(v71, v70, v72, v73);
    *(_QWORD *)(v83 + 24) = VIDPN_MGR::GetContainingAdapter(v2);
    WdLogGlobalForLineNumber = 592;
  }
  else if ( DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v15, v95) )
  {
    v79 = WdLogNewEntry5_WdTrace(v76, v75, v77, v78);
    *(_QWORD *)(v79 + 24) = v74;
    *(_QWORD *)(v79 + 32) = VIDPN_MGR::GetContainingAdapter(v2);
    WdLogGlobalForLineNumber = 576;
    *((_DWORD *)v2 + 137) = v74;
  }
  else
  {
    v82 = VIDPN_MGR::GetContainingAdapter(v2);
    WdLogSingleEntry2(2LL, v74, v82);
    WdLogGlobalForLineNumber = 585;
  }
  if ( v15 )
    ReferenceCounted::Release((ReferenceCounted *)(v15 + 64));
  Configuration = VIDPN_MGR::_InitializeDmmClientInterfaces(v2);
  if ( Configuration < 0 )
  {
    v86 = VIDPN_MGR::GetContainingAdapter(v2);
    WdLogSingleEntry1(2LL, v86);
    WdLogGlobalForLineNumber = 606;
    goto LABEL_22;
  }
  if ( !*((_QWORD *)v2 + 1) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 68;
  }
  Configuration = MonitorRegisterMonitorEventCallback(
                    *((struct ADAPTER_DISPLAY **)v2 + 1),
                    v84,
                    v85,
                    (struct HDXGMONITOREVENT__ **)v2 + 66);
  if ( Configuration < 0 )
  {
    v87 = VIDPN_MGR::GetContainingAdapter(v2);
    WdLogSingleEntry1(2LL, v87);
    WdLogGlobalForLineNumber = 624;
    goto LABEL_22;
  }
  if ( !*((_QWORD *)v2 + 66) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 632;
  }
  v88 = operator new(0x70uLL, 0x4E506456u, 256LL);
  if ( v88 )
    v3 = DXGDIAGNOSTICS::DXGDIAGNOSTICS(v88, 0x8000u, 1, 256LL, 0x12Cu);
  *((_QWORD *)v2 + 70) = v3;
  *((_DWORD *)v2 + 26) = 2;
  return v2;
}
