/*
 * XREFs of xxxInitSendValidateMinMaxInfoEx @ 0x1C00EA700
 * Callers:
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1C005E99C (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     ?xxxEndGetWidnowTrackInfoAsync@@YAXPEAUtagWND@@@Z @ 0x1C0093210 (-xxxEndGetWidnowTrackInfoAsync@@YAXPEAUtagWND@@@Z.c)
 *     xxxRealDefWindowProc @ 0x1C0109880 (xxxRealDefWindowProc.c)
 *     xxxAdjustSize @ 0x1C013C3A0 (xxxAdjustSize.c)
 *     ?xxxGetMinMaxTrackInfo@@YAXPEAUMOVESIZEDATA@@H@Z @ 0x1C01ECF3C (-xxxGetMinMaxTrackInfo@@YAXPEAUMOVESIZEDATA@@H@Z.c)
 *     ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1C01F04DC (-xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOption.c)
 * Callees:
 *     GetDPIServerInfo @ 0x1C00899B8 (GetDPIServerInfo.c)
 *     GetMonitorRectForWindow @ 0x1C00ABC60 (GetMonitorRectForWindow.c)
 *     GetScreenRectForDpi @ 0x1C00AE544 (GetScreenRectForDpi.c)
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C00AE83C (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     ExpandMonitorSpaceVertex @ 0x1C00AF3A8 (ExpandMonitorSpaceVertex.c)
 *     ScaleDPIRect @ 0x1C00B1710 (ScaleDPIRect.c)
 *     SetOrClrWF @ 0x1C00B5D8C (SetOrClrWF.c)
 *     _GetProp @ 0x1C00B6E24 (_GetProp.c)
 *     _GetClientRect @ 0x1C00D8AE8 (_GetClientRect.c)
 *     _HasCaptionIcon @ 0x1C00E62B8 (_HasCaptionIcon.c)
 *     ?GetMonitorMaxArea@@YA?AUtagRECT@@PEBUtagWND@@PEAUtagMONITOR@@@Z @ 0x1C00E82C4 (-GetMonitorMaxArea@@YA-AUtagRECT@@PEBUtagWND@@PEAUtagMONITOR@@@Z.c)
 *     GetDpiDependentMetric @ 0x1C00E91E0 (GetDpiDependentMetric.c)
 *     GetDpiCacheSlot @ 0x1C00EB0D0 (GetDpiCacheSlot.c)
 *     ?GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z @ 0x1C00EB200 (-GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z.c)
 *     GetWindowBordersForDpiWithCompatFlags2 @ 0x1C00EB23C (GetWindowBordersForDpiWithCompatFlags2.c)
 *     ?GetWindowCompositedDpi@@YAGPEBUtagWND@@@Z @ 0x1C00ECAA0 (-GetWindowCompositedDpi@@YAGPEBUtagWND@@@Z.c)
 *     GetWindowDpiLastNotify @ 0x1C00EDCC0 (GetWindowDpiLastNotify.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C011E808 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1C0122A54 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     xxxSendMessage @ 0x1C0127888 (xxxSendMessage.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     _EnsureDpiDepSysMetCacheForPlateau @ 0x1C01BEDAC (_EnsureDpiDepSysMetCacheForPlateau.c)
 */

__int64 __fastcall xxxInitSendValidateMinMaxInfoEx(struct tagWND *a1, __int64 a2, struct tagMONITOR *a3)
{
  __int64 v6; // rcx
  unsigned int v7; // r14d
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned __int16 v11; // r14
  __int64 v12; // rax
  __m128i v13; // xmm6
  unsigned __int16 v14; // dx
  unsigned __int16 v15; // r12
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rcx
  struct tagMONITOR *v20; // rbx
  int v21; // r14d
  _DWORD *v22; // r8
  int v23; // r15d
  int v24; // ecx
  int v25; // r14d
  int WindowDpiLastNotify; // eax
  __int64 v27; // rcx
  int v28; // r9d
  int WindowBordersForDpiWithCompatFlags2; // r13d
  __int32 v30; // r8d
  __int64 v31; // r12
  int v32; // ecx
  __int32 v33; // eax
  __int64 v34; // rbx
  struct tagRECT v35; // xmm0
  __int64 v36; // xmm1_8
  __int64 Prop; // rbx
  __int64 v38; // rax
  int v39; // ebx
  __int64 v40; // rcx
  int v41; // edx
  unsigned int v42; // r10d
  unsigned int v43; // r10d
  __int64 v44; // r14
  int v45; // ecx
  __int64 v46; // rax
  int v47; // ecx
  unsigned int v48; // r10d
  _QWORD *v49; // r11
  unsigned int v50; // r10d
  __int64 v51; // r14
  int v52; // ecx
  unsigned __int16 WindowCompositedDpi; // r14
  const struct tagWND *v54; // rcx
  unsigned int WindowCompositedDpiContext; // eax
  __int64 v56; // r8
  __int64 v57; // r12
  int v58; // r15d
  __int64 v59; // r12
  __int64 v60; // r10
  int v61; // eax
  __int32 v62; // r12d
  __int64 v63; // r13
  __int64 v64; // r10
  int v65; // r15d
  __int64 v66; // r13
  __int64 v67; // r10
  int v68; // eax
  __int64 v69; // r14
  struct tagMONITOR *v70; // r13
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // rdx
  __int64 v74; // rcx
  int v75; // r14d
  signed int v76; // r15d
  __int64 v77; // r9
  __int64 v78; // rax
  __int64 v79; // rdx
  int v80; // r12d
  int v81; // ecx
  __int64 v82; // rax
  int v83; // eax
  unsigned __int64 v84; // rcx
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // r8
  __int64 v88; // rdx
  int v89; // r14d
  int v90; // eax
  __int64 result; // rax
  __int64 v92; // rax
  __int64 v93; // rax
  __int64 v94; // rax
  __int64 v95; // rax
  int v96; // ecx
  int v97; // eax
  int DpiDependentMetric; // eax
  __int64 v99; // rcx
  char v100; // dl
  int v101; // edx
  int v102; // eax
  int v103; // eax
  __int64 v104; // rdx
  int v105; // ecx
  int v106; // eax
  int v107; // r8d
  int v108; // ecx
  int v109; // edx
  __int64 v110; // rax
  tagObjLock **v111; // rbx
  int v112; // edx
  int v113; // eax
  __int64 v114; // rax
  __int64 v115; // rax
  int v116; // edx
  int v117; // eax
  __int64 v118; // rax
  __int64 v119; // rax
  __m128i v120; // [rsp+38h] [rbp-D0h] BYREF
  int v121; // [rsp+48h] [rbp-C0h]
  __m128i v122; // [rsp+58h] [rbp-B0h] BYREF
  int v123; // [rsp+68h] [rbp-A0h]
  __int64 v124; // [rsp+78h] [rbp-90h]
  struct tagMONITOR *v125; // [rsp+80h] [rbp-88h]
  __int64 v126; // [rsp+88h] [rbp-80h]
  __int64 v127; // [rsp+90h] [rbp-78h]
  struct tagRECT v128; // [rsp+98h] [rbp-70h] BYREF
  __int64 v129; // [rsp+A8h] [rbp-60h]
  _QWORD v130[3]; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD v131[4]; // [rsp+D0h] [rbp-38h] BYREF
  char v132; // [rsp+F0h] [rbp-18h]
  __int128 v133; // [rsp+F8h] [rbp-10h] BYREF
  char v134; // [rsp+108h] [rbp+0h]
  char v135; // [rsp+110h] [rbp+8h]

  v130[2] = 0LL;
  v131[2] = 0LL;
  v126 = gptiCurrent;
  v120 = 0LL;
  *(_DWORD *)a2 = *(_DWORD *)(gpsi + 2124LL);
  v6 = *(unsigned int *)(gpsi + 2128LL);
  *(_DWORD *)(a2 + 4) = v6;
  v7 = 18;
  v8 = *(_QWORD *)(GetDispInfo(v6, gpsi, a3) + 96);
  v9 = *((_QWORD *)a1 + 2);
  v127 = v8;
  v10 = *(_QWORD *)(v9 + 456);
  if ( v10 && (*(_DWORD *)(**(_QWORD **)(v10 + 8) + 64LL) & 1) != 0 )
    v7 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL);
  v11 = (v7 >> 8) & 0x1FF;
  v12 = *(_QWORD *)(v8 + 40);
  v13 = *(__m128i *)(v12 + 28);
  v14 = *(_WORD *)(v12 + 62);
  v15 = *(_WORD *)(v12 + 60);
  v122 = v13;
  if ( v11 )
  {
    v92 = ExpandMonitorSpaceVertex(v11, v14, v122.m128i_i64[0]);
    ScaleDPIRect(&v122, &v122, v11, v15, v92, v122.m128i_i64[0]);
    v13 = v122;
  }
  v16 = *((_QWORD *)a1 + 3);
  v17 = 0LL;
  v122 = v13;
  if ( v16 )
  {
    v18 = *(_QWORD *)(v16 + 8);
    if ( v18 )
      v17 = *(_QWORD *)(v18 + 24);
  }
  v19 = *((_QWORD *)a1 + 13);
  if ( v19 == v17 )
  {
    v120 = v13;
    v20 = _MonitorFromWindowInternal(a1, 1LL, 1LL);
    v21 = 1;
    if ( a3 )
      v20 = a3;
    v121 = 1;
    v125 = v20;
  }
  else
  {
    v121 = 0;
    v21 = 0;
    v125 = 0LL;
    GetClientRect(v19, (__int64)&v120);
  }
  v22 = (_DWORD *)*((_QWORD *)a1 + 5);
  v23 = v21;
  v24 = v22[72] & 0xF;
  if ( v24 == 3 )
  {
    WindowDpiLastNotify = (v22[72] >> 8) & 0x1FF;
    goto LABEL_75;
  }
  if ( (v22[58] & 0x400) != 0 )
  {
    WindowDpiLastNotify = GetWindowDpiLastNotify(a1);
LABEL_75:
    v25 = 0;
    goto LABEL_17;
  }
  v25 = 0;
  if ( !v24
    && (v93 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL)) != 0
    && (*(_DWORD *)(**(_QWORD **)(v93 + 8) + 64LL) & 1) != 0 )
  {
    WindowDpiLastNotify = 96;
  }
  else
  {
    WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 284LL);
  }
LABEL_17:
  v27 = *((_QWORD *)a1 + 2);
  v28 = 0;
  if ( *(_DWORD *)(v27 + 632) <= 0x9900u )
    v28 = *(_DWORD *)(v27 + 648);
  WindowBordersForDpiWithCompatFlags2 = GetWindowBordersForDpiWithCompatFlags2(
                                          v22[7],
                                          v22[6],
                                          (_DWORD)v22,
                                          0,
                                          WindowDpiLastNotify,
                                          v28);
  v30 = v120.m128i_i32[1] - WindowBordersForDpiWithCompatFlags2;
  v31 = *((unsigned __int16 *)&WPP_MAIN_CB.AlignmentRequirement + 2);
  v123 = v120.m128i_i32[0] - WindowBordersForDpiWithCompatFlags2;
  v32 = WindowBordersForDpiWithCompatFlags2 - (v120.m128i_i32[0] - WindowBordersForDpiWithCompatFlags2);
  v120.m128i_i32[0] -= WindowBordersForDpiWithCompatFlags2;
  v33 = v120.m128i_i32[3];
  *(_DWORD *)(a2 + 8) = v32 + v120.m128i_i32[2];
  v132 = 0;
  v134 = 0;
  *(_DWORD *)(a2 + 12) = WindowBordersForDpiWithCompatFlags2 - v30 + v33;
  v34 = *((_QWORD *)a1 + 18);
  v131[3] = gDomainDummyLock;
  v133 = 0LL;
  LODWORD(v124) = v30;
  v35 = *(struct tagRECT *)v34;
  v120.m128i_i32[1] = v30;
  v36 = *(_QWORD *)(v34 + 16);
  v128 = v35;
  v135 = 0;
  v129 = v36;
  if ( !IS_USERCRIT_OWNED_EXCLUSIVE() && IS_USERCRIT_OWNED_AT_ALL() )
  {
    v135 = 1;
    if ( v34 == gObjDummyLock )
      v34 = 0LL;
    v121 = v23;
    *(_QWORD *)&v133 = v34;
    if ( !v134 )
    {
      v111 = (tagObjLock **)&v133;
      v121 = v23;
      do
      {
        if ( *v111 )
          tagObjLock::LockExclusive(*v111);
        ++v25;
        ++v111;
      }
      while ( !v25 );
      v134 = 1;
    }
  }
  Prop = RealGetProp(*((_QWORD *)a1 + 18), v31, 1LL);
  if ( v135 && v134 )
  {
    if ( (_QWORD)v133 )
      tagObjLock::UnLockExclusive((tagObjLock *)v133);
    v134 = 0;
  }
  if ( Prop && (*(_DWORD *)(Prop + 48) & 0x40) != 0 )
    v38 = *(_QWORD *)(Prop + 40);
  else
    v38 = v120.m128i_i64[0];
  *(_QWORD *)(a2 + 16) = v38;
  v39 = 2 * WindowBordersForDpiWithCompatFlags2;
  v40 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v40 + 30) & 0xC0) != 0 && *(char *)(v40 + 24) >= 0 )
  {
    v41 = *(_DWORD *)(v40 + 288) & 0xF;
    if ( v41 == 3 )
    {
      v42 = (*(_DWORD *)(v40 + 288) >> 8) & 0x1FF;
    }
    else if ( (*(_DWORD *)(v40 + 232) & 0x400) != 0 )
    {
      v42 = GetWindowDpiLastNotify(a1);
    }
    else if ( !v41
           && (v94 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v94 + 8) + 64LL) & 1) != 0 )
    {
      v42 = 96;
    }
    else
    {
      v42 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 284LL);
    }
    v44 = 120LL * (int)GetDpiCacheSlot(v42);
    v45 = *(_DWORD *)(v44 + gpsi + 2348);
    if ( v45 == -1 )
    {
      EnsureDpiDepSysMetCacheForPlateau(v43);
      v45 = *(_DWORD *)(v44 + gpsi + 2348);
      if ( v45 == -1 )
        v45 = 0;
    }
    *(_DWORD *)(a2 + 24) = v45;
    v46 = *((_QWORD *)a1 + 5);
    v47 = *(_DWORD *)(v46 + 288) & 0xF;
    if ( v47 == 3 )
    {
      v48 = (*(_DWORD *)(v46 + 288) >> 8) & 0x1FF;
    }
    else if ( (*(_DWORD *)(v46 + 232) & 0x400) != 0 )
    {
      v48 = GetWindowDpiLastNotify(a1);
    }
    else if ( !v47
           && (v95 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v95 + 8) + 64LL) & 1) != 0 )
    {
      v48 = 96;
    }
    else
    {
      v48 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 284LL);
    }
    v51 = 120LL * (int)GetDpiCacheSlot(v48);
    v52 = *(_DWORD *)(v51 + *v49 + 2352);
    if ( v52 == -1 )
    {
      EnsureDpiDepSysMetCacheForPlateau(v50);
      v52 = *(_DWORD *)(v51 + gpsi + 2352);
      if ( v52 == -1 )
        v52 = 0;
    }
  }
  else
  {
    v52 = 2;
    if ( v39 >= 2 )
      v52 = 2 * WindowBordersForDpiWithCompatFlags2;
    *(_DWORD *)(a2 + 24) = v52;
  }
  *(_DWORD *)(a2 + 28) = v52;
  WindowCompositedDpi = GetWindowCompositedDpi(a1);
  WindowCompositedDpiContext = GetWindowCompositedDpiContext(v54);
  GetScreenRectForDpi((__m128i *)&v128, (WindowCompositedDpiContext >> 8) & 0x1FF, v56);
  if ( !WindowCompositedDpi )
    WindowCompositedDpi = *(_WORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 284LL);
  v120 = (__m128i)v128;
  v57 = 120LL * (int)GetDpiCacheSlot(WindowCompositedDpi);
  v58 = *(_DWORD *)(v57 + gpsi + 2340);
  if ( v58 == -1 )
  {
    EnsureDpiDepSysMetCacheForPlateau(WindowCompositedDpi);
    v58 = *(_DWORD *)(v57 + gpsi + 2340);
    if ( v58 == -1 )
      v58 = 0;
  }
  v59 = 120 * ((int)GetDpiCacheSlot(WindowCompositedDpi) + 20LL);
  v61 = *(_DWORD *)(v59 + v60);
  if ( v61 == -1 )
  {
    EnsureDpiDepSysMetCacheForPlateau(WindowCompositedDpi);
    v61 = *(_DWORD *)(gpsi + v59);
    if ( v61 == -1 )
      v61 = 0;
  }
  v62 = v120.m128i_i32[2] + 2 * (v58 + v61) + 4 - v120.m128i_i32[0];
  v63 = 120LL * (int)GetDpiCacheSlot(WindowCompositedDpi);
  v65 = *(_DWORD *)(v64 + v63 + 2344);
  if ( v65 == -1 )
  {
    EnsureDpiDepSysMetCacheForPlateau(WindowCompositedDpi);
    v65 = *(_DWORD *)(gpsi + v63 + 2344);
    if ( v65 == -1 )
      v65 = 0;
  }
  v66 = 120 * ((int)GetDpiCacheSlot(WindowCompositedDpi) + 20LL);
  v68 = *(_DWORD *)(v67 + v66);
  if ( v68 == -1 )
  {
    EnsureDpiDepSysMetCacheForPlateau(WindowCompositedDpi);
    v68 = *(_DWORD *)(gpsi + v66);
    if ( v68 == -1 )
      v68 = 0;
  }
  v69 = v126;
  v70 = v125;
  *(_DWORD *)(a2 + 32) = v62;
  *(_DWORD *)(a2 + 36) = v120.m128i_i32[3] + 2 * (v65 + v68) + 4 - v120.m128i_i32[1];
  v130[0] = *(_QWORD *)(v69 + 416);
  *(_QWORD *)(v69 + 416) = v130;
  v130[1] = v70;
  if ( v70 )
    HMLockObject(v70);
  v71 = v127;
  v131[0] = *(_QWORD *)(v69 + 416);
  *(_QWORD *)(v69 + 416) = v131;
  v131[1] = v71;
  HMLockObject(v71);
  xxxSendMessage(a1, 36LL, 0LL, a2);
  v73 = gpsi;
  *(_DWORD *)a2 = *(_DWORD *)(gpsi + 2124LL);
  v74 = *(unsigned int *)(gpsi + 2128LL);
  *(_DWORD *)(a2 + 4) = v74;
  if ( v121 )
  {
    v120 = *GetMonitorMaxArea((__m128i *)&v128, a1, v70);
    if ( *(_DWORD *)(a2 + 8) < v122.m128i_i32[2] - v122.m128i_i32[0]
      || (v75 = v122.m128i_i32[3], v76 = v122.m128i_i32[1], *(_DWORD *)(a2 + 12) < v122.m128i_i32[3] - v122.m128i_i32[1]) )
    {
      SetOrClrWF(0, (__int64 *)a1, 0x340u, 1);
      v73 = v120.m128i_i64[0];
    }
    else
    {
      SetOrClrWF(1, (__int64 *)a1, 0x340u, 1);
      v78 = GetProp((__int64)a1, *((unsigned __int16 *)&WPP_MAIN_CB.AlignmentRequirement + 2), 1LL, v77);
      if ( v78 )
      {
        v107 = *(_DWORD *)(v78 + 48);
        if ( (v107 & 0x40) != 0 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 30LL) & 4) != 0 )
        {
          v108 = *(_DWORD *)(a2 + 16);
          v109 = v123;
          if ( v108 != v123 && *(_DWORD *)(v78 + 40) == v108 )
          {
            *(_DWORD *)(v78 + 48) = v107 & 0xFFFFFFBF;
            *(_DWORD *)(a2 + 20) = v124;
            *(_DWORD *)(a2 + 16) = v109;
          }
        }
      }
      v79 = *((_QWORD *)a1 + 5);
      v80 = *(_DWORD *)(a2 + 20);
      v81 = *(_DWORD *)(v79 + 288) & 0xF;
      if ( v81 == 3 )
      {
        v83 = (*(_DWORD *)(v79 + 288) >> 8) & 0x1FF;
      }
      else if ( (*(_DWORD *)(v79 + 232) & 0x400) != 0 )
      {
        v83 = GetWindowDpiLastNotify(a1);
      }
      else if ( !v81
             && (v82 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL)) != 0
             && (*(_DWORD *)(**(_QWORD **)(v82 + 8) + 64LL) & 1) != 0 )
      {
        v83 = 96;
      }
      else
      {
        v83 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 284LL);
      }
      if ( (int)(v80 + GetDpiDependentMetric(2, v83)) <= v76 && *(_DWORD *)(a2 + 20) + *(_DWORD *)(a2 + 12) >= v75 )
        v120 = *(__m128i *)GetMonitorRectForWindow((__int64)&v128, (__int64)v70, a1);
      v73 = v120.m128i_i64[0];
      v84 = HIDWORD(v120.m128i_i64[1]);
      *(_DWORD *)(a2 + 8) += v122.m128i_i32[0] + v120.m128i_i32[2] - v120.m128i_i32[0] - v122.m128i_i32[2];
      v74 = (unsigned int)(v76 + v84 - HIDWORD(v73) - v75);
      *(_DWORD *)(a2 + 12) += v74;
    }
    *(_DWORD *)(a2 + 16) += v73;
    *(_DWORD *)(a2 + 20) += v120.m128i_i32[1];
  }
  ThreadUnlock1(v74, v73, v72);
  ThreadUnlock1(v86, v85, v87);
  v88 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v88 + 16) & 8) != 0 )
  {
    v96 = *(_DWORD *)(v88 + 288) & 0xF;
    if ( v96 == 3 )
    {
      v97 = (*(_DWORD *)(v88 + 288) >> 8) & 0x1FF;
    }
    else if ( (*(_DWORD *)(v88 + 232) & 0x400) != 0 )
    {
      v97 = GetWindowDpiLastNotify(a1);
    }
    else if ( !v96
           && (v110 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v110 + 8) + 64LL) & 1) != 0 )
    {
      v97 = 96;
    }
    else
    {
      v97 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 284LL);
    }
    DpiDependentMetric = GetDpiDependentMetric(17, v97);
    v99 = *((_QWORD *)a1 + 5);
    v89 = DpiDependentMetric;
    v100 = *(_BYTE *)(v99 + 30) & 8;
    if ( *(char *)(v99 + 24) < 0 )
    {
      if ( v100 )
      {
        v112 = *(_DWORD *)(v99 + 288) & 0xF;
        if ( v112 == 3 )
        {
          v113 = (*(_DWORD *)(v99 + 288) >> 8) & 0x1FF;
        }
        else if ( (*(_DWORD *)(v99 + 232) & 0x400) != 0 )
        {
          v113 = GetWindowDpiLastNotify(a1);
        }
        else if ( !v112
               && (v114 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL)) != 0
               && (*(_DWORD *)(**(_QWORD **)(v114 + 8) + 64LL) & 1) != 0 )
        {
          v113 = 96;
        }
        else
        {
          v113 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 284LL);
        }
        v39 += GetDpiDependentMetric(23, v113);
      }
    }
    else
    {
      if ( v100 )
      {
        if ( (*(_BYTE *)(v99 + 30) & 3) != 0 )
        {
          v101 = *(_DWORD *)(v99 + 288) & 0xF;
          if ( v101 == 3 )
          {
            v102 = (*(_DWORD *)(v99 + 288) >> 8) & 0x1FF;
          }
          else if ( (*(_DWORD *)(v99 + 232) & 0x400) != 0 )
          {
            v102 = GetWindowDpiLastNotify(a1);
          }
          else if ( !v101
                 && (v115 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL)) != 0
                 && (*(_DWORD *)(**(_QWORD **)(v115 + 8) + 64LL) & 1) != 0 )
          {
            v102 = 96;
          }
          else
          {
            v102 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 284LL);
          }
          v103 = GetDpiDependentMetric(12, v102);
          v39 += v103 + 2 * v103;
        }
        else if ( (*(_BYTE *)(v99 + 25) & 4) != 0 )
        {
          v116 = *(_DWORD *)(v99 + 288) & 0xF;
          if ( v116 == 3 )
          {
            v117 = (*(_DWORD *)(v99 + 288) >> 8) & 0x1FF;
          }
          else if ( (*(_DWORD *)(v99 + 232) & 0x400) != 0 )
          {
            v117 = GetWindowDpiLastNotify(a1);
          }
          else if ( !v116
                 && (v118 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL)) != 0
                 && (*(_DWORD *)(**(_QWORD **)(v118 + 8) + 64LL) & 1) != 0 )
          {
            v117 = 96;
          }
          else
          {
            v117 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 284LL);
          }
          v39 += 2 * GetDpiDependentMetric(12, v117);
        }
        if ( (unsigned int)HasCaptionIcon((__int64)a1) )
        {
          v104 = *((_QWORD *)a1 + 5);
          v105 = *(_DWORD *)(v104 + 288) & 0xF;
          if ( v105 == 3 )
          {
            v106 = (*(_DWORD *)(v104 + 288) >> 8) & 0x1FF;
          }
          else if ( (*(_DWORD *)(v104 + 232) & 0x400) != 0 )
          {
            v106 = GetWindowDpiLastNotify(a1);
          }
          else if ( !v105
                 && (v119 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL)) != 0
                 && (*(_DWORD *)(**(_QWORD **)(v119 + 8) + 64LL) & 1) != 0 )
          {
            v106 = 96;
          }
          else
          {
            v106 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 284LL);
          }
          v39 += GetDpiDependentMetric(13, v106);
        }
      }
      v39 += 4 * *(_DWORD *)(GetDPIServerInfo(v99) + 16);
    }
    v39 += 4;
  }
  else
  {
    v89 = v39;
  }
  v90 = *(_DWORD *)(a2 + 24);
  if ( v90 <= v39 )
    v90 = v39;
  *(_DWORD *)(a2 + 24) = v90;
  result = *(unsigned int *)(a2 + 28);
  if ( (int)result <= v89 )
    result = (unsigned int)v89;
  *(_DWORD *)(a2 + 28) = result;
  return result;
}
