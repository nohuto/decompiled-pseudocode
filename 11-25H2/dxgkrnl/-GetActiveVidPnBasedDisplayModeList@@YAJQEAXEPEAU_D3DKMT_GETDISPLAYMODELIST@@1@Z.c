/*
 * XREFs of ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z @ 0x1403DD5F4
 * Callers:
 *     ?CreateModeList@ADAPTER_DISPLAY@@QEAAJEPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1403DD2F8 (-CreateModeList@ADAPTER_DISPLAY@@QEAAJEPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0xxqqqqqqqqx_EtwWriteTransfer @ 0x14006EAC0 (McTemplateK0xxqqqqqqqqx_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ??1MODE_UNION_LIST@@QEAA@XZ @ 0x140187A44 (--1MODE_UNION_LIST@@QEAA@XZ.c)
 *     ?IsCrossAdapterView@SESSION_VIEW@@QEBAEXZ @ 0x1401F4848 (-IsCrossAdapterView@SESSION_VIEW@@QEBAEXZ.c)
 *     ?PrepareUnpinnedPathsFromSource@@YAJQEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@IEEEQEA_KPEAY0BA@IPEAE@Z @ 0x1402C02D8 (-PrepareUnpinnedPathsFromSource@@YAJQEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM.c)
 *     ?GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z @ 0x1402D60DC (-GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z.c)
 *     DxgkQueryDmmInterface @ 0x1402DD374 (DxgkQueryDmmInterface.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1402E9934 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     _CombineModeList @ 0x14030B520 (_CombineModeList.c)
 *     DxgkQueryMonitorTypeLockHeld @ 0x1403BA4F0 (DxgkQueryMonitorTypeLockHeld.c)
 *     ??ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1403C2B70 (--ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 *     ??ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z @ 0x1403DE024 (--ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z.c)
 *     ?DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z @ 0x1403DF784 (-DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z.c)
 */

__int64 __fastcall GetActiveVidPnBasedDisplayModeList(
        DXGADAPTER *a1,
        char a2,
        struct _D3DKMT_GETDISPLAYMODELIST *a3,
        struct _D3DKMT_GETDISPLAYMODELIST *a4)
{
  DXGADAPTER *v5; // rsi
  struct DXGGLOBAL *Global; // rdi
  ULONG v7; // ebx
  ULONG v8; // eax
  unsigned int v9; // edx
  __int64 VidPnSourceId; // rdi
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // r14
  const struct _DXGDMM_INTERFACE *v15; // rbx
  int v16; // eax
  void (__fastcall *v17)(DXGADAPTER *, struct D3DKMDT_HVIDPN__ *); // r13
  struct D3DKMDT_HVIDPN__ *v18; // r14
  bool v19; // r12
  int v20; // eax
  __int64 v21; // rbx
  __int64 v22; // rdi
  ADAPTER_DISPLAY *v23; // rcx
  unsigned __int64 v24; // rbx
  struct SESSION_VIEW *SessionViewOwner; // rax
  SESSION_VIEW *v26; // r11
  __int64 v27; // r11
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // r13
  char v29; // r12
  __int64 v30; // rax
  __int64 v31; // rcx
  bool v32; // r12
  char v33; // r13
  int v34; // eax
  __int64 v35; // rbx
  int v36; // eax
  __int64 v37; // r12
  unsigned int v38; // ebx
  bool v39; // zf
  const void **v40; // rax
  __int64 v41; // r15
  unsigned int *v42; // r12
  unsigned int v43; // r14d
  __int64 v44; // rcx
  __int64 v45; // r15
  __int64 v46; // r13
  __int64 v47; // r13
  int v48; // r13d
  int v49; // r12d
  int v50; // r15d
  int v51; // r14d
  unsigned int v52; // esi
  int v53; // edi
  __int64 v54; // rbx
  struct DXGGLOBAL *v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 hAdapter; // [rsp+28h] [rbp-D8h]
  struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v60; // [rsp+28h] [rbp-D8h]
  unsigned int v61[2]; // [rsp+30h] [rbp-D0h]
  unsigned __int8 v62[8]; // [rsp+38h] [rbp-C8h]
  unsigned __int8 v63[8]; // [rsp+40h] [rbp-C0h]
  unsigned __int8 v64[8]; // [rsp+48h] [rbp-B8h]
  unsigned __int64 *v65; // [rsp+50h] [rbp-B0h]
  unsigned int *v66; // [rsp+58h] [rbp-A8h]
  __int64 v67; // [rsp+60h] [rbp-A0h]
  bool v68; // [rsp+70h] [rbp-90h]
  _BYTE v69[15]; // [rsp+71h] [rbp-8Fh] BYREF
  ULONG v70; // [rsp+80h] [rbp-80h] BYREF
  struct _DXGDMM_VIDPN_INTERFACE *v71; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v72; // [rsp+90h] [rbp-70h] BYREF
  void (__fastcall *v73)(DXGADAPTER *, struct D3DKMDT_HVIDPN__ *); // [rsp+98h] [rbp-68h]
  const void **p_pModeList; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v75; // [rsp+A8h] [rbp-58h] BYREF
  ULONG UserTime; // [rsp+B0h] [rbp-50h] BYREF
  struct D3DKMDT_HVIDPNTOPOLOGY__ *v77; // [rsp+B8h] [rbp-48h] BYREF
  struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v78; // [rsp+C0h] [rbp-40h] BYREF
  void *v79; // [rsp+C8h] [rbp-38h] BYREF
  struct D3DKMDT_HVIDPN__ *v80; // [rsp+D0h] [rbp-30h] BYREF
  const struct _DXGDMM_INTERFACE *v81; // [rsp+D8h] [rbp-28h] BYREF
  struct _D3DKMT_GETDISPLAYMODELIST *v82; // [rsp+E0h] [rbp-20h]
  struct _DXGDMM_INTERFACE *v83; // [rsp+F0h] [rbp-10h]
  DXGADAPTER *v84; // [rsp+F8h] [rbp-8h]
  DXGADAPTER *v85; // [rsp+100h] [rbp+0h] BYREF
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v86; // [rsp+108h] [rbp+8h]
  int v87; // [rsp+10Ch] [rbp+Ch]
  char v88; // [rsp+110h] [rbp+10h]
  __int128 v89; // [rsp+118h] [rbp+18h] BYREF
  __int64 v90; // [rsp+128h] [rbp+28h]
  int v91; // [rsp+130h] [rbp+30h]
  char v92; // [rsp+134h] [rbp+34h]
  __int64 v93; // [rsp+138h] [rbp+38h]
  _QWORD v94[5]; // [rsp+140h] [rbp+40h] BYREF
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v95; // [rsp+168h] [rbp+68h]
  bool v96; // [rsp+16Ch] [rbp+6Ch]
  char v97; // [rsp+16Dh] [rbp+6Dh]
  int v98; // [rsp+170h] [rbp+70h]
  int v99; // [rsp+174h] [rbp+74h]
  char v100; // [rsp+178h] [rbp+78h]
  __int128 v101; // [rsp+180h] [rbp+80h] BYREF
  __int64 v102; // [rsp+190h] [rbp+90h]
  int v103; // [rsp+198h] [rbp+98h]
  char v104; // [rsp+19Ch] [rbp+9Ch]
  __int64 v105; // [rsp+1A0h] [rbp+A0h]
  __int128 v106; // [rsp+1A8h] [rbp+A8h] BYREF
  __int64 v107; // [rsp+1B8h] [rbp+B8h]
  int v108; // [rsp+1C0h] [rbp+C0h]
  char v109; // [rsp+1C4h] [rbp+C4h]
  __int64 v110; // [rsp+1C8h] [rbp+C8h]
  unsigned int v111[16]; // [rsp+1D0h] [rbp+D0h] BYREF
  unsigned int v112[16]; // [rsp+210h] [rbp+110h] BYREF

  p_pModeList = (const void **)a4;
  v82 = a3;
  v5 = a1;
  v69[1] = a2;
  v84 = a1;
  UserTime = 0;
  Global = DXGGLOBAL::GetGlobal();
  v70 = 0;
  v7 = KeQueryRuntimeThread(KeGetCurrentThread(), &UserTime);
  v8 = KeQueryRuntimeThread(KeGetCurrentThread(), &v70);
  v9 = v8 - v7;
  if ( v7 > v8 )
    v9 = v8 - v7 - 1;
  _InterlockedAdd64((volatile signed __int64 *)Global + 17, v9);
  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal() + 20);
  VidPnSourceId = a3->VidPnSourceId;
  v81 = 0LL;
  v12 = DxgkQueryDmmInterface(v5, v11, &v81);
  v13 = v12;
  if ( v12 < 0 )
  {
    WdLogSingleEntry4(2LL, v12, a3->hAdapter, v5, (unsigned int)VidPnSourceId);
    hAdapter = a3->hAdapter;
    WdLogGlobalForLineNumber = 4965;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Status=0x%I64x QueryDxgDmmInterface failed hAdapter=0x%I64x pAdapter=0x%I64x VidPnSourceId=0x%I64x",
      v13,
      hAdapter,
      (__int64)v5,
      (unsigned int)VidPnSourceId,
      0LL);
    return (unsigned int)v13;
  }
  v15 = v81;
  v71 = 0LL;
  v80 = 0LL;
  v83 = v81;
  v16 = (*((__int64 (__fastcall **)(DXGADAPTER *, struct D3DKMDT_HVIDPN__ **, struct _DXGDMM_VIDPN_INTERFACE **))v81 + 6))(
          v5,
          &v80,
          &v71);
  v13 = v16;
  if ( v16 < 0 )
  {
    WdLogSingleEntry2(2LL, v5, v16);
    WdLogGlobalForLineNumber = 4985;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Failed call to create copy of the last VidPN committed by the client for adapter 0x%I64x (status = 0x%I64x)",
      (__int64)v5,
      v13,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v13;
  }
  v17 = (void (__fastcall *)(DXGADAPTER *, struct D3DKMDT_HVIDPN__ *))*((_QWORD *)v15 + 8);
  v18 = v80;
  v73 = v17;
  v19 = v80 != 0LL;
  v77 = 0LL;
  v78 = 0LL;
  v68 = v80 != 0LL;
  v20 = (*(__int64 (__fastcall **)(struct D3DKMDT_HVIDPN__ *, struct D3DKMDT_HVIDPNTOPOLOGY__ **, struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE **))v71)(
          v80,
          &v77,
          &v78);
  *(_DWORD *)&v69[7] = v20;
  if ( v20 < 0 )
  {
    v21 = VidPnSourceId;
    v22 = v20;
    WdLogSingleEntry5(2LL, v20, v18, v5, v21, v71);
    WdLogGlobalForLineNumber = 5008;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Status=0x%I64x pfnGetTopology failed hVidPn=0x%I64x pAdapter=0x%I64x VidPnSrcId=%0x%I64x pDmmVidPnInterface=0x%I64x",
      v22,
      (__int64)v18,
      (__int64)v5,
      v21,
      (__int64)v71);
    if ( v19 )
      v17(v5, v18);
    return *(unsigned int *)&v69[7];
  }
  v23 = (ADAPTER_DISPLAY *)*((_QWORD *)v5 + 390);
  v24 = 0LL;
  v69[2] = 0;
  v75 = 0LL;
  SessionViewOwner = ADAPTER_DISPLAY::GetSessionViewOwner(v23, VidPnSourceId);
  if ( !SessionViewOwner
    || *((_DWORD *)SessionViewOwner + 10) <= 1u
    || SESSION_VIEW::IsCrossAdapterView(SessionViewOwner)
    || v69[1] )
  {
    goto LABEL_39;
  }
  PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(v26);
  if ( PrimaryDisplaySource != (struct DISPLAY_SOURCE *)(*(_QWORD *)(*((_QWORD *)v5 + 390) + 128LL)
                                                       + 3984 * VidPnSourceId) )
    goto LABEL_38;
  v29 = 0;
  *(_QWORD *)&v69[7] = v27 + 48;
  do
  {
    v30 = *((_QWORD *)PrimaryDisplaySource + 1);
    v69[0] = 0;
    if ( *(DXGADAPTER **)(v30 + 16) != v5 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 5044;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"pDisplaySource->GetAdapter() == pAdapter",
        5044LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( (int)DxgkQueryMonitorTypeLockHeld(
                v5,
                *((_DWORD *)PrimaryDisplaySource + 268),
                0LL,
                0LL,
                0LL,
                v69,
                0LL,
                0LL,
                0LL,
                0LL) < 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 5059;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"NT_SUCCESS(Status)", 5059LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( v24 )
    {
      if ( v29 != v69[0] )
        goto LABEL_29;
      if ( v24 >= *(unsigned int *)(*((_QWORD *)v5 + 390) + 96LL) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 5070;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          0xFFFFFFFFLL,
          L"NumPathsFromSource < pAdapter->GetDisplayCore()->GetNumVidPnSources()",
          5070LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v111[v24++] = *((_DWORD *)PrimaryDisplaySource + 4);
    }
    else
    {
      v24 = 1LL;
      v29 = v69[0];
      v112[0] = *((_DWORD *)PrimaryDisplaySource + 268);
      v111[0] = *((_DWORD *)PrimaryDisplaySource + 4);
    }
    v75 = v24;
LABEL_29:
    v31 = *((_QWORD *)PrimaryDisplaySource + 7);
    PrimaryDisplaySource = 0LL;
    if ( v31 != *(_QWORD *)&v69[7] )
      PrimaryDisplaySource = (struct DISPLAY_SOURCE *)(v31 - 56);
  }
  while ( PrimaryDisplaySource );
  v32 = v68;
  if ( v24 > 1 )
  {
    v33 = 1;
    v34 = DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource(v5, v111, v24, v18, v112);
    if ( v34 < 0 )
    {
      v35 = v34;
      WdLogSingleEntry4(2LL, VidPnSourceId, v5, v34, -1071775483LL);
      WdLogGlobalForLineNumber = 5101;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Failed to convert DWM clone to hardware clone from source 0x%I64x of adapter 0x%I64x (status = 0x%I64x), returni"
         "ng 0x%I64x to rety the cross adapter clone way.",
        VidPnSourceId,
        (__int64)v5,
        v35,
        -1071775483LL,
        0LL);
      if ( v68 )
        v73(v5, v18);
      return 3223191813LL;
    }
LABEL_51:
    v39 = *((_QWORD *)v5 + 391) == 0LL;
    v94[2] = v71;
    v94[3] = v77;
    v94[4] = v78;
    v95 = v82->VidPnSourceId;
    v102 = 0LL;
    v107 = 0LL;
    v94[0] = v5;
    v94[1] = v18;
    v96 = v39;
    v97 = 1;
    v98 = -1;
    v99 = 0;
    v100 = 0;
    v103 = 0;
    v104 = 1;
    v105 = 0LL;
    v108 = 0;
    v109 = 1;
    v110 = 0LL;
    v101 = 0LL;
    v106 = 0LL;
    if ( p_pModeList )
      v40 = p_pModeList + 2;
    else
      v40 = 0LL;
    *(_QWORD *)&v69[7] = &v82->ModeCount;
    p_pModeList = (const void **)&v82->pModeList;
    v41 = (int)OBTAIN_MODES_ON_SOURCE::operator()((OBTAIN_MODES_ON_SOURCE *)v94, (__int64)v40);
    MODE_UNION_LIST::~MODE_UNION_LIST((void **)&v106);
    MODE_UNION_LIST::~MODE_UNION_LIST((void **)&v101);
    if ( (int)v41 >= 0 )
    {
      v42 = *(unsigned int **)&v69[7];
      if ( v33 )
      {
        v43 = 0;
        if ( v24 )
        {
          v44 = 0LL;
          do
          {
            v45 = v112[v44];
            v79 = 0LL;
            v72 = 0;
            v85 = v5;
            v86 = v82->VidPnSourceId;
            v91 = 0;
            v93 = 0LL;
            v90 = 0LL;
            v87 = v45;
            v88 = 1;
            v89 = 0LL;
            v92 = 1;
            v46 = (int)OBTAIN_PREFERRED_MODES_ON_PATH::operator()(&v85, (struct _D3DKMT_DISPLAYMODE **)&v79, &v72);
            MODE_UNION_LIST::~MODE_UNION_LIST((void **)&v89);
            if ( (int)v46 >= 0 )
            {
              if ( v79 )
              {
                v47 = (int)CombineModeList(v42, p_pModeList, v72, (unsigned int *)v79, 0);
                DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v79);
                if ( (int)v47 < 0 )
                {
                  WdLogSingleEntry4(3LL, VidPnSourceId, v45, v5, v47);
                  WdLogGlobalForLineNumber = 5314;
                }
              }
            }
            else
            {
              WdLogSingleEntry4(3LL, VidPnSourceId, (unsigned int)v45, v5, v46);
              WdLogGlobalForLineNumber = 5253;
            }
            v44 = ++v43;
          }
          while ( v43 < v24 );
        }
      }
      _InterlockedAdd64((volatile signed __int64 *)DXGGLOBAL::GetGlobal() + 8, *v42);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 8) != 0 )
      {
        p_pModeList = (const void **)*((_QWORD *)DXGGLOBAL::GetGlobal() + 17);
        *(_DWORD *)&v69[7] = *((_DWORD *)DXGGLOBAL::GetGlobal() + 33);
        v70 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 32);
        v48 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 29);
        v49 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 28);
        v50 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 25);
        v51 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 24);
        v52 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 23);
        v53 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 20);
        v54 = *((_QWORD *)DXGGLOBAL::GetGlobal() + 9);
        v55 = DXGGLOBAL::GetGlobal();
        LODWORD(v67) = *(_DWORD *)&v69[7];
        LODWORD(v66) = v70;
        LODWORD(v65) = v48;
        *(_DWORD *)v64 = v49;
        *(_DWORD *)v63 = v50;
        *(_DWORD *)v62 = v51;
        v61[0] = v52;
        LODWORD(v60) = v53;
        McTemplateK0xxqqqqqqqqx_EtwWriteTransfer(
          v57,
          v56,
          v58,
          *((_QWORD *)v55 + 8),
          v54,
          v60,
          *(_QWORD *)v61,
          *(_QWORD *)v62,
          *(_QWORD *)v63,
          *(_QWORD *)v64,
          v65,
          v66,
          v67,
          p_pModeList);
        v5 = v84;
      }
      if ( v68 )
        v73(v5, v80);
      return 0LL;
    }
    else
    {
      WdLogSingleEntry5(3LL, v41, v18, v5, VidPnSourceId, v24);
      WdLogGlobalForLineNumber = 5168;
      if ( v32 )
        v73(v5, v18);
      return (unsigned int)v41;
    }
  }
  v69[2] = 0;
LABEL_38:
  v17 = v73;
LABEL_39:
  *(__m128i *)v111 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
  *(_OWORD *)&v111[4] = *(_OWORD *)v111;
  *(_OWORD *)&v111[8] = *(_OWORD *)v111;
  *(_OWORD *)&v111[12] = *(_OWORD *)v111;
  v36 = PrepareUnpinnedPathsFromSource(
          v83,
          (unsigned __int64)v5,
          v18,
          v71,
          v77,
          v78,
          VidPnSourceId,
          1u,
          1u,
          1u,
          &v75,
          (__m128i *)v111,
          0LL);
  v37 = v36;
  v38 = -1071774925;
  if ( v36 == -1071774925 )
  {
    WdLogSingleEntry2(7LL, VidPnSourceId, v5);
    WdLogGlobalForLineNumber = 5130;
LABEL_41:
    if ( v68 )
      v17(v5, v18);
    return v38;
  }
  v38 = -1071774886;
  if ( v36 == -1071774886 )
  {
    WdLogSingleEntry2(7LL, VidPnSourceId, v5);
    WdLogGlobalForLineNumber = 5137;
    goto LABEL_41;
  }
  if ( v36 >= 0 )
  {
    v24 = v75;
    v32 = v68;
    v33 = v69[2];
    goto LABEL_51;
  }
  WdLogSingleEntry3(2LL, VidPnSourceId, v5, v36);
  WdLogGlobalForLineNumber = 5144;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    0xFFFFFFFFLL,
    L"Failed to ensure unpinned paths from source 0x%I64x of adapter 0x%I64x (status = 0x%I64x)",
    VidPnSourceId,
    (__int64)v5,
    v37,
    0LL,
    0LL);
  if ( v68 )
    v17(v5, v18);
  return (unsigned int)v37;
}
