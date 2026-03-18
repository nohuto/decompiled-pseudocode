/*
 * XREFs of ?s_HitTestRequest@CInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z @ 0x180090C40
 * Callers:
 *     ?HitTestRequest@CInputProxy@@UEAA_NPEAUtagDITCALLBACKSTRUCT@@@Z @ 0x180090C20 (-HitTestRequest@CInputProxy@@UEAA_NPEAUtagDITCALLBACKSTRUCT@@@Z.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18001C2F0 (MIDL_user_allocate.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x180040140 (McGenEventWrite_EventWriteTransfer.c)
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800797F0 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AcquireShared@CTreeLock@@QEAAXXZ @ 0x18008E440 (-AcquireShared@CTreeLock@@QEAAXXZ.c)
 *     ??1PerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1800913EC (--1PerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x180091460 (--0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ?GetDesktopTree@CComposition@@UEAAJU_LUID@@PEAPEAVCDesktopTree@@@Z @ 0x180091600 (-GetDesktopTree@CComposition@@UEAAJU_LUID@@PEAPEAVCDesktopTree@@@Z.c)
 *     ?IsDirty@CVisualTree@@QEBA_NXZ @ 0x180091710 (-IsDirty@CVisualTree@@QEBA_NXZ.c)
 *     ?HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z @ 0x180091730 (-HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z.c)
 *     ?RequestOffThreadCleanTree@CComposition@@QEAAJXZ @ 0x180092E18 (-RequestOffThreadCleanTree@CComposition@@QEAAJXZ.c)
 *     ?ReleaseShared@CTreeLock@@QEAAXXZ @ 0x180092EB4 (-ReleaseShared@CTreeLock@@QEAAXXZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?wait@?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEBA_NKH@Z @ 0x1800ED834 (-wait@-$event_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x1802467D8 (--0CThreadContext@@AEAA@XZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_BOOL8 __fastcall CInputManager::s_HitTestRequest(struct tagDITCALLBACKSTRUCT *a1)
{
  __int64 v2; // r8
  int DesktopTree; // edi
  CHitTestContext *v4; // r15
  unsigned __int64 v5; // rbx
  CComposition *v6; // r14
  __int64 v7; // rax
  __int64 (__fastcall *v8)(CGlobalComposition *__hidden, struct _LUID, struct CDesktopTree **); // rax
  CComposition **v9; // rdi
  int v10; // ebx
  int v11; // eax
  __int64 v12; // rdx
  _DWORD *Value; // rbx
  int v14; // ecx
  __int64 v15; // rdx
  unsigned int v16; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned __int64 v20; // rcx
  int v21; // eax
  CThreadContext *v22; // rax
  CThreadContext *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  CVisualTree *v26; // [rsp+30h] [rbp-D0h] BYREF
  int v27; // [rsp+38h] [rbp-C8h] BYREF
  int v28; // [rsp+40h] [rbp-C0h] BYREF
  int v29; // [rsp+48h] [rbp-B8h] BYREF
  int v30; // [rsp+50h] [rbp-B0h] BYREF
  int v31; // [rsp+58h] [rbp-A8h] BYREF
  int v32; // [rsp+60h] [rbp-A0h] BYREF
  int v33; // [rsp+68h] [rbp-98h] BYREF
  int v34; // [rsp+70h] [rbp-90h] BYREF
  int v35; // [rsp+78h] [rbp-88h] BYREF
  int v36; // [rsp+80h] [rbp-80h] BYREF
  int v37; // [rsp+88h] [rbp-78h] BYREF
  int v38; // [rsp+90h] [rbp-70h] BYREF
  int v39; // [rsp+98h] [rbp-68h] BYREF
  int v40; // [rsp+A0h] [rbp-60h] BYREF
  int v41; // [rsp+A8h] [rbp-58h] BYREF
  int v42; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int64 v43; // [rsp+B8h] [rbp-48h] BYREF
  _DWORD v44[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v45; // [rsp+C8h] [rbp-38h]
  __int128 v46; // [rsp+D0h] [rbp-30h]
  __int64 v47; // [rsp+E0h] [rbp-20h]
  _BYTE v48[64]; // [rsp+E8h] [rbp-18h]
  __int64 v49; // [rsp+128h] [rbp+28h]
  unsigned __int8 v50; // [rsp+130h] [rbp+30h]
  __int64 v51; // [rsp+140h] [rbp+40h] BYREF
  __int64 v52; // [rsp+148h] [rbp+48h] BYREF
  unsigned __int64 v53; // [rsp+150h] [rbp+50h] BYREF
  _QWORD v54[2]; // [rsp+158h] [rbp+58h] BYREF
  int v55; // [rsp+168h] [rbp+68h]
  int v56; // [rsp+16Ch] [rbp+6Ch]
  int v57; // [rsp+170h] [rbp+70h]
  int v58; // [rsp+174h] [rbp+74h]
  _BYTE v59[56]; // [rsp+178h] [rbp+78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v60; // [rsp+1B0h] [rbp+B0h] BYREF
  int *v61; // [rsp+1C0h] [rbp+C0h]
  __int64 v62; // [rsp+1C8h] [rbp+C8h]
  int *v63; // [rsp+1D0h] [rbp+D0h]
  __int64 v64; // [rsp+1D8h] [rbp+D8h]
  __int64 *v65; // [rsp+1E0h] [rbp+E0h]
  __int64 v66; // [rsp+1E8h] [rbp+E8h]
  __int64 *v67; // [rsp+1F0h] [rbp+F0h]
  __int64 v68; // [rsp+1F8h] [rbp+F8h]
  unsigned __int64 *v69; // [rsp+200h] [rbp+100h]
  __int64 v70; // [rsp+208h] [rbp+108h]
  int *v71; // [rsp+210h] [rbp+110h]
  __int64 v72; // [rsp+218h] [rbp+118h]
  int *v73; // [rsp+220h] [rbp+120h]
  __int64 v74; // [rsp+228h] [rbp+128h]
  int *v75; // [rsp+230h] [rbp+130h]
  __int64 v76; // [rsp+238h] [rbp+138h]
  int *v77; // [rsp+240h] [rbp+140h]
  __int64 v78; // [rsp+248h] [rbp+148h]
  int *v79; // [rsp+250h] [rbp+150h]
  __int64 v80; // [rsp+258h] [rbp+158h]
  int *v81; // [rsp+260h] [rbp+160h]
  __int64 v82; // [rsp+268h] [rbp+168h]
  int *v83; // [rsp+270h] [rbp+170h]
  __int64 v84; // [rsp+278h] [rbp+178h]
  int *v85; // [rsp+280h] [rbp+180h]
  __int64 v86; // [rsp+288h] [rbp+188h]
  int *v87; // [rsp+290h] [rbp+190h]
  __int64 v88; // [rsp+298h] [rbp+198h]
  int *v89; // [rsp+2A0h] [rbp+1A0h]
  __int64 v90; // [rsp+2A8h] [rbp+1A8h]
  int *v91; // [rsp+2B0h] [rbp+1B0h]
  __int64 v92; // [rsp+2B8h] [rbp+1B8h]
  int *v93; // [rsp+2C0h] [rbp+1C0h]
  __int64 v94; // [rsp+2C8h] [rbp+1C8h]
  int *v95; // [rsp+2D0h] [rbp+1D0h]
  __int64 v96; // [rsp+2D8h] [rbp+1D8h]
  int *v97; // [rsp+2E0h] [rbp+1E0h]
  __int64 v98; // [rsp+2E8h] [rbp+1E8h]
  __int64 *v99; // [rsp+2F0h] [rbp+1F0h]
  __int64 v100; // [rsp+2F8h] [rbp+1F8h]
  CVisualTree **v101; // [rsp+300h] [rbp+200h]
  __int64 v102; // [rsp+308h] [rbp+208h]
  struct _EVENT_DATA_DESCRIPTOR v103; // [rsp+310h] [rbp+210h] BYREF
  int *v104; // [rsp+320h] [rbp+220h]
  __int64 v105; // [rsp+328h] [rbp+228h]
  int *v106; // [rsp+330h] [rbp+230h]
  __int64 v107; // [rsp+338h] [rbp+238h]
  __int64 *v108; // [rsp+340h] [rbp+240h]
  __int64 v109; // [rsp+348h] [rbp+248h]
  int *v110; // [rsp+350h] [rbp+250h]
  __int64 v111; // [rsp+358h] [rbp+258h]
  wil::details::in1diag3 *retaddr; // [rsp+398h] [rbp+298h]

  InputTraceLogging::PerfRegion::PerfRegion((InputTraceLogging::PerfRegion *)v59, "HitTest", 0LL);
  v44[1] = *((_DWORD *)a1 + 32);
  v45 = *((_QWORD *)a1 + 15);
  DesktopTree = 1;
  v49 = 10666LL;
  v47 = 0LL;
  v50 = 0;
  *(_DWORD *)&v48[56] = 0;
  v46 = 0LL;
  *(struct _D3DCOLORVALUE *)&v48[8] = *(const struct _D3DCOLORVALUE *)&_xmm.r;
  v44[0] = 0;
  *(_QWORD *)v48 = 1065353216LL;
  *(_OWORD *)&v48[24] = 0LL;
  *(_OWORD *)&v48[40] = _xmm;
  *(_DWORD *)&v48[60] = 1065353216;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
  {
    v19 = *((int *)a1 + 29);
    v29 = *((_DWORD *)a1 + 27);
    v20 = *((unsigned int *)a1 + 28) | (unsigned __int64)(v19 << 32);
    v105 = 4LL;
    v28 = *((_DWORD *)a1 + 2);
    v27 = *((_DWORD *)a1 + 1);
    v104 = &v27;
    v106 = &v28;
    v108 = (__int64 *)&v43;
    v110 = &v29;
    v43 = v20;
    v107 = 4LL;
    v109 = 8LL;
    v111 = 4LL;
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_HIT_TEST_Start,
      v2,
      5u,
      &v103);
  }
  if ( !CInputManager::s_pInputManager )
  {
LABEL_19:
    v14 = v50;
    v15 = *((_QWORD *)&v46 + 1);
    *((_QWORD *)a1 + 2) = v46;
    *((_DWORD *)a1 + 24) = HIDWORD(v49);
    v16 = (*((_DWORD *)a1 + 25) ^ v14) & 0xFFFFFFFE;
    *((_QWORD *)a1 + 3) = v15;
    *((_DWORD *)a1 + 25) = v14 ^ v16;
    *((_DWORD *)a1 + 32) = v44[0];
    if ( v15 )
    {
      *((_OWORD *)a1 + 2) = *(_OWORD *)v48;
      *((_OWORD *)a1 + 3) = *(_OWORD *)&v48[16];
      *((_OWORD *)a1 + 4) = *(_OWORD *)&v48[32];
      *((_OWORD *)a1 + 5) = *(_OWORD *)&v48[48];
    }
    goto LABEL_21;
  }
  v4 = (struct CInputManager *)((char *)CInputManager::s_pInputManager + 80);
  if ( !*((_DWORD *)a1 + 27) && (*((_DWORD *)a1 + 28) || *((_DWORD *)a1 + 29)) )
    v5 = *((_QWORD *)a1 + 14);
  else
    v5 = *((unsigned int *)a1 + 27) | 0xFFFFFFFE00000000uLL;
  v6 = (CComposition *)*((_QWORD *)CInputManager::s_pInputManager + 2);
  v7 = *(_QWORD *)v6;
  v26 = 0LL;
  v8 = *(__int64 (__fastcall **)(CGlobalComposition *__hidden, struct _LUID, struct CDesktopTree **))(v7 + 64);
  if ( v8 == CGlobalComposition::GetDesktopTree )
  {
    DesktopTree = CComposition::GetDesktopTree(v6, (struct _LUID)v5, &v26);
    if ( DesktopTree < 0 && v5 == qword_1803FA8D0 )
    {
      v24 = **((_QWORD **)v6 + 77);
      if ( v24 )
      {
        v25 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 56LL))(v24);
        if ( v25 )
        {
          v26 = (CVisualTree *)v25;
          CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v25 + 8));
          DesktopTree = 0;
        }
      }
    }
  }
  else
  {
    DesktopTree = ((__int64 (__fastcall *)(CComposition *, unsigned __int64, CVisualTree **))v8)(v6, v5, &v26);
  }
  if ( DesktopTree >= 0 )
  {
    v9 = (CComposition **)v26;
    v10 = 0;
    while ( 1 )
    {
      CTreeLock::AcquireShared((RTL_SRWLOCK *)v9[3] + 713);
      if ( !CVisualTree::IsDirty((CVisualTree *)v9) )
        break;
      v21 = CComposition::RequestOffThreadCleanTree(v9[3]);
      v10 = v21;
      if ( v21 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v21, 0x5Cu, 0LL);
        CTreeLock::ReleaseShared((CComposition *)((char *)v9[3] + 5704));
        DesktopTree = v10;
        goto LABEL_29;
      }
      CTreeLock::ReleaseShared((CComposition *)((char *)v9[3] + 5704));
      _wait___event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEBA_NKH_Z((char *)v9[3] + 6408);
    }
    DesktopTree = v10;
    if ( v10 < 0 )
    {
LABEL_29:
      MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18032BB90, 2u, v10, 0x12Fu, 0LL);
      goto LABEL_25;
    }
    v54[0] = v26;
    v54[1] = *(_QWORD *)((char *)a1 + 4);
    v55 = *(_DWORD *)a1;
    v56 = *((_DWORD *)a1 + 26);
    v57 = *((_DWORD *)a1 + 27);
    v58 = 0;
    v11 = CHitTestContext::HitTestPoint(
            v4,
            (const struct CHitTestContext::HitTestPointRequest *)v54,
            (struct CHitTestContext::HitTestPointResult *)v44);
    DesktopTree = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18032BB90, 2u, v11, 0x139u, 0LL);
    ReleaseSRWLockShared((PSRWLOCK)(*((_QWORD *)v26 + 3) + 5704LL));
    Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
    if ( !Value )
    {
      v22 = (CThreadContext *)MIDL_user_allocate(0x1C0uLL);
      if ( !v22 || (v23 = CThreadContext::CThreadContext(v22), (Value = v23) == 0LL) )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x28u, 0LL);
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x9E,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\common\\threadcontext.cpp",
          (const char *)0x8007000ELL);
        ModuleFailFastForHRESULT(-2147024882, retaddr);
      }
      TlsSetValue(CThreadContext::s_dwTlsIndex, v23);
    }
    --Value[10];
    if ( v26 )
      CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v26, v12, v2);
    goto LABEL_19;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18032BB90, 2u, DesktopTree, 0x12Cu, 0LL);
LABEL_25:
  if ( v26 )
    CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v26, v18, v2);
LABEL_21:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
  {
    v52 = *((_QWORD *)a1 + 3);
    v51 = *((_QWORD *)a1 + 2);
    v28 = *((_DWORD *)a1 + 2);
    v29 = *((_DWORD *)a1 + 1);
    LODWORD(v26) = *(_DWORD *)&v48[60];
    v42 = *(_DWORD *)&v48[52];
    LODWORD(v43) = *(_DWORD *)&v48[56];
    v41 = *(_DWORD *)&v48[48];
    v40 = *(_DWORD *)&v48[44];
    v38 = *(_DWORD *)&v48[36];
    v39 = *(_DWORD *)&v48[40];
    v37 = *(_DWORD *)&v48[32];
    v36 = *(_DWORD *)&v48[28];
    v34 = *(_DWORD *)&v48[20];
    v35 = *(_DWORD *)&v48[24];
    v32 = *(_DWORD *)&v48[12];
    v33 = *(_DWORD *)&v48[16];
    v61 = &v29;
    v63 = &v28;
    v65 = &v51;
    v67 = &v52;
    v69 = &v53;
    v71 = &v27;
    v73 = &v30;
    v75 = &v31;
    v77 = &v32;
    v79 = &v33;
    v81 = &v34;
    v30 = *(_DWORD *)&v48[4];
    v83 = &v35;
    v31 = *(_DWORD *)&v48[8];
    v27 = *(_DWORD *)v48;
    v53 = (unsigned int)v47 | (unsigned __int64)((__int64)SHIDWORD(v47) << 32);
    v62 = 4LL;
    v64 = 4LL;
    v66 = 8LL;
    v68 = 8LL;
    v70 = 8LL;
    v72 = 4LL;
    v74 = 4LL;
    v76 = 4LL;
    v78 = 4LL;
    v80 = 4LL;
    v82 = 4LL;
    v84 = 4LL;
    v86 = 4LL;
    v85 = &v36;
    v88 = 4LL;
    v87 = &v37;
    v90 = 4LL;
    v89 = &v38;
    v92 = 4LL;
    v91 = &v39;
    v93 = &v40;
    v95 = &v41;
    v97 = &v42;
    v99 = (__int64 *)&v43;
    v101 = &v26;
    v94 = 4LL;
    v96 = 4LL;
    v98 = 4LL;
    v100 = 4LL;
    v102 = 4LL;
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_HIT_TEST_Stop,
      v2,
      0x16u,
      &v60);
  }
  InputTraceLogging::PerfRegion::~PerfRegion((InputTraceLogging::PerfRegion *)v59);
  return DesktopTree >= 0;
}
