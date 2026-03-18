/*
 * XREFs of ?zzzUpdateUserScreen@@YAJXZ @ 0x1400A2D78
 * Callers:
 *     xxxResetDisplayDevice @ 0x1400A2770 (xxxResetDisplayDevice.c)
 *     ?SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14015A320 (-SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     InitUserScreen @ 0x140162CD0 (InitUserScreen.c)
 * Callees:
 *     ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x14000C568 (-SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z.c)
 *     GreDeleteObject @ 0x140010390 (GreDeleteObject.c)
 *     GreGetDeviceCaps @ 0x14001D350 (GreGetDeviceCaps.c)
 *     GreCombineRgn @ 0x140025D30 (GreCombineRgn.c)
 *     SetOrCreateRectRgnIndirectPublic @ 0x14002C870 (SetOrCreateRectRgnIndirectPublic.c)
 *     GreCreateRectRgnIndirect @ 0x14002D480 (GreCreateRectRgnIndirect.c)
 *     W32SetCurrentThreadDpiAwarenessContext @ 0x140045080 (W32SetCurrentThreadDpiAwarenessContext.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x140045170 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     InitLoadResources @ 0x14005548C (InitLoadResources.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     DestroyMonitor @ 0x1400638E0 (DestroyMonitor.c)
 *     ?MonitorFromHdev@@YAPEAUtagMONITOR@@PEAX@Z @ 0x1400997AC (-MonitorFromHdev@@YAPEAUtagMONITOR@@PEAX@Z.c)
 *     HdevFromMonitor @ 0x140141C20 (HdevFromMonitor.c)
 *     EnforceColorDependentSettings @ 0x140146F10 (EnforceColorDependentSettings.c)
 *     GetPhysicalScreenRect @ 0x14014E974 (GetPhysicalScreenRect.c)
 *     ??4?$SharedMixedObjectPointerFieldpMonitorNext@UtagMONITOR@@@tagMONITOR@@QEAAPEAU1@PEAU1@@Z @ 0x140150A9C (--4-$SharedMixedObjectPointerFieldpMonitorNext@UtagMONITOR@@@tagMONITOR@@QEAAPEAU1@PEAU1@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??4?$SharedMixedObjectPointerFieldpMonitorFirst@UtagMONITOR@@@tagKERNELDISPLAYINFO@@QEAAPEAUtagMONITOR@@PEAU2@@Z @ 0x14019FA88 (--4-$SharedMixedObjectPointerFieldpMonitorFirst@UtagMONITOR@@@tagKERNELDISPLAYINFO@@QEAAPEAUtagM.c)
 *     ?zzzOnDisplayStateChange@CInputConfig@@QEAAXXZ @ 0x1401F50FC (-zzzOnDisplayStateChange@CInputConfig@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 *     memset @ 0x14023F500 (memset.c)
 */

__int64 __fastcall zzzUpdateUserScreen(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // r15
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rsi
  unsigned int v6; // r12d
  CTouchProcessor *v7; // rcx
  char v8; // di
  bool v9; // r14
  __int64 UserSessionState; // rax
  int v11; // r8d
  int v12; // edx
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v15; // edi
  unsigned int v16; // r14d
  __int64 v17; // rcx
  int *v18; // rdi
  __int64 v19; // r14
  unsigned int v20; // eax
  unsigned int i; // ebx
  struct tagMONITOR *v22; // rdi
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  unsigned __int16 v28; // si
  unsigned __int16 v29; // di
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rbx
  int (*v33)(void); // rax
  __int64 v34; // rcx
  void (*v35)(void); // rax
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 j; // rdx
  BOOL v40; // ebx
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // r13
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // rcx
  _DWORD **v47; // rcx
  signed int v48; // edi
  signed int v49; // esi
  signed int v50; // r14d
  signed int v51; // r15d
  _QWORD *v52; // rbx
  __int64 v53; // rcx
  int v54; // eax
  int v55; // eax
  int v56; // eax
  int v57; // eax
  __int64 v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rax
  __int128 *PhysicalScreenRect; // rax
  __int128 v62; // xmm0
  __int64 v63; // rax
  __int64 v64; // rcx
  BOOL v65; // ebx
  __int64 v66; // rcx
  __int64 v67; // rax
  struct _KEVENT *v68; // rcx
  int **v69; // rcx
  int v70; // ebx
  __int64 v71; // rcx
  __int64 v72; // rax
  __int64 v73; // rcx
  __int64 v74; // rax
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // rcx
  int (*v78)(void); // rax
  __int64 v79; // rdx
  void (*v80)(void); // rax
  __int64 v81; // rax
  __int64 v82; // rcx
  __int64 v83; // rcx
  int v84; // ebx
  __int64 v85; // rcx
  __int64 k; // rdi
  struct HOBJ__ *RectRgnIndirect; // rsi
  __int64 v88; // rcx
  HRGN v89; // rbx
  __int64 v90; // rax
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // rbx
  __int64 v94; // rcx
  __int64 m; // r8
  __int64 n; // r9
  __int64 v97; // rax
  char DeviceCaps; // bl
  __int64 v99; // rcx
  __int64 v100; // rcx
  __int64 v101; // rax
  char v102; // bl
  __int64 v103; // rcx
  __int64 v104; // rcx
  __int64 v105; // rbx
  __int64 v106; // rcx
  __int64 v107; // rcx
  __int64 v108; // rcx
  __int64 v109; // rcx
  __int64 v110; // rcx
  __int64 v111; // rcx
  __int64 v112; // rdx
  __int64 v113; // rcx
  int (*v114)(void); // rax
  __int64 v115; // rdx
  __int64 v116; // rcx
  __int64 (*v117)(void); // rax
  __int128 v119; // [rsp+48h] [rbp-38h]
  __int128 v120; // [rsp+58h] [rbp-28h] BYREF
  __int128 v121; // [rsp+68h] [rbp-18h] BYREF

  v1 = *(_QWORD *)(W32GetUserSessionState(a1) + 57008);
  v2 = *(_QWORD *)(v1 + 16);
  v3 = *(_QWORD *)(W32GetUserSessionState(v1) + 57008);
  v4 = *(_QWORD *)(v3 + 112);
  v5 = *(_QWORD *)(W32GetUserSessionState(v3) + 57008) + 112LL;
  v6 = 0;
  v7 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) == 0
    || (v8 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v8 = 0;
  }
  v9 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v11) = v9;
    LOBYTE(v12) = v8;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v12,
      v11,
      *(_QWORD *)(UserSessionState + 69400),
      4,
      14,
      10,
      (__int64)&WPP_2a4b79c955e638d8cf604a8936dc0e34_Traceguids);
  }
  if ( !*(_QWORD *)(W32GetUserSessionState(v7) + 71464) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 458LL);
  if ( !*(_QWORD *)(W32GetUserSessionState(v13) + 71472) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 459LL);
  v15 = 0;
  v16 = 0;
  if ( (W32GetCurrentThreadDpiAwarenessContext(v14) & 0xF) == 0 )
  {
    v16 = W32SetCurrentThreadDpiAwarenessContext(18LL);
    v15 = 1;
  }
  InitLoadResources(1LL);
  if ( v15 )
    W32SetCurrentThreadDpiAwarenessContext(v16);
  while ( v4 )
  {
    v18 = (int *)v4;
    v19 = v4 + 56;
    v4 = *(_QWORD *)(v4 + 56);
    v20 = HdevFromMonitor(v18);
    if ( v20 == -1 )
    {
      DestroyMonitor(v18);
    }
    else
    {
      SetMonitorData((struct tagMONITOR *)v18, v20);
      v5 = v19;
    }
  }
  for ( i = 0; i < *(_DWORD *)(v2 + 20); ++i )
  {
    if ( !MonitorFromHdev(*(void **)(56LL * i + v2 + 40)) )
    {
      v22 = SetMonitorData(0LL, i);
      if ( v22 )
      {
        if ( *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v17) + 57008) + 112LL) )
        {
          tagMONITOR::SharedMixedObjectPointerFieldpMonitorNext<tagMONITOR>::operator=(v5, v22);
        }
        else
        {
          v24 = W32GetUserSessionState(v23);
          tagKERNELDISPLAYINFO::SharedMixedObjectPointerFieldpMonitorFirst<tagMONITOR>::operator=(
            *(_QWORD *)(v24 + 57008) + 112LL,
            v22);
        }
        v5 = (__int64)v22 + 56;
      }
      else
      {
        v6 = -1073741801;
      }
    }
  }
  v25 = *(_QWORD *)(W32GetUserSessionState(v17) + 57008);
  if ( !*(_QWORD *)(v25 + 112) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 532LL);
  if ( !*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v25) + 57008) + 104LL) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 533LL);
  v27 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v26) + 57008) + 112LL) + 40LL);
  v28 = *(_WORD *)(v27 + 60);
  v29 = v28;
  v31 = *(_QWORD *)(W32GetUserSessionState(v27) + 57008);
  v32 = *(_QWORD *)(v31 + 112);
  while ( v32 )
  {
    if ( v28 )
    {
      if ( v28 != *(_WORD *)(*(_QWORD *)(v32 + 40) + 60LL) )
      {
        v28 = 0;
        v33 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v31, v30) + 48) + 7456LL);
        if ( v33 )
        {
          if ( v33() >= 0 )
          {
            v35 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v34, v30) + 48) + 7464LL);
            if ( v35 )
              v35();
          }
        }
      }
    }
    v36 = *(_QWORD *)(v32 + 40);
    v32 = *(_QWORD *)(v32 + 56);
    v31 = *(unsigned __int16 *)(v36 + 60);
    if ( v29 >= (unsigned __int16)v31 )
      v29 = *(_WORD *)(v36 + 60);
  }
  *(_DWORD *)(W32GetUserSessionState(v31) + 71520) = v28;
  v38 = *(_QWORD *)(W32GetUserSessionState(v37) + 57008);
  for ( j = *(_QWORD *)(v38 + 112); j; j = *(_QWORD *)(j + 56) )
    *(_WORD *)(*(_QWORD *)(j + 40) + 62LL) = v29;
  v40 = (*(_DWORD *)(v2 + 16) & 1) == 0;
  v41 = *(_QWORD *)(W32GetUserSessionState(v38) + 19928);
  *(_DWORD *)(v41 + 2220) = v40;
  v42 = W32GetUserSessionState(v41);
  v43 = GreGetDeviceCaps(*(HDC *)(*(_QWORD *)(v42 + 57008) + 64LL), 38) & 0x100;
  v119 = 0LL;
  v45 = *(_QWORD *)(W32GetUserSessionState(v44) + 57008);
  v46 = *(_DWORD *)(v45 + 140) & 0xFFFFFFFD;
  *(_DWORD *)(v45 + 140) = v46 | ((_DWORD)v43 != 0 ? 2 : 0);
  v47 = *(_DWORD ***)(W32GetUserSessionState(v46) + 57008);
  **v47 = 0;
  v48 = 0;
  v49 = 0;
  v50 = 0;
  v51 = 0;
  v52 = *(_QWORD **)(*(_QWORD *)(W32GetUserSessionState(v47) + 57008) + 112LL);
  if ( v52 )
  {
    do
    {
      v53 = v52[5];
      if ( (*(_DWORD *)(v53 + 24) & 1) != 0 )
      {
        v54 = *(_DWORD *)(v53 + 28);
        if ( v51 < v54 )
          v54 = v51;
        v51 = v54;
        v55 = *(_DWORD *)(v53 + 32);
        if ( v50 < v55 )
          v55 = v50;
        v50 = v55;
        v56 = *(_DWORD *)(v53 + 36);
        if ( v49 > v56 )
          v56 = v49;
        v49 = v56;
        v57 = *(_DWORD *)(v53 + 40);
        if ( v48 > v57 )
          v57 = v48;
        v48 = v57;
        v53 = *(_QWORD *)(W32GetUserSessionState(v53) + 57008);
        ++**(_DWORD **)v53;
      }
      v58 = *(_QWORD *)(W32GetUserSessionState(v53) + 19928);
      if ( *(_DWORD *)(v58 + 2220) )
      {
        v59 = v52[5];
        if ( (_DWORD)v43 )
          *(_DWORD *)(v59 + 24) |= 2u;
        else
          *(_DWORD *)(v59 + 24) &= ~2u;
      }
      else if ( (*(_DWORD *)(v52[10] + 2156LL) & 0x100) != 0 )
      {
        *(_DWORD *)(v52[5] + 24LL) |= 2u;
        v60 = W32GetUserSessionState(v58);
        *(_DWORD *)(*(_QWORD *)(v60 + 57008) + 140LL) |= 2u;
      }
      v52 = (_QWORD *)v52[7];
    }
    while ( v52 );
    *((_QWORD *)&v119 + 1) = __PAIR64__(v48, v49);
    *(_QWORD *)&v119 = __PAIR64__(v50, v51);
  }
  PhysicalScreenRect = (__int128 *)GetPhysicalScreenRect(&v120);
  v62 = *PhysicalScreenRect;
  v63 = *(_QWORD *)PhysicalScreenRect;
  v120 = v62;
  v64 = v119 - v63;
  if ( (_QWORD)v119 == v63 )
    v64 = *((_QWORD *)&v119 + 1) - *((_QWORD *)&v120 + 1);
  v65 = v64 == 0;
  v66 = *(_QWORD *)(W32GetUserSessionState(v64) + 57008);
  *(_DWORD *)(*(_QWORD *)v66 + 24LL) = v51;
  *(_DWORD *)(*(_QWORD *)v66 + 28LL) = v50;
  *(_DWORD *)(*(_QWORD *)v66 + 32LL) = v49;
  *(_DWORD *)(*(_QWORD *)v66 + 36LL) = v48;
  v67 = W32GetUserSessionState(v66);
  if ( *(_DWORD *)(v67 + 69020) )
  {
    v68 = *(struct _KEVENT **)(v67 + 69072);
    if ( v68 )
    {
      if ( !v65 )
        KeSetEvent(v68, 1, 0);
    }
  }
  v69 = *(int ***)(W32GetUserSessionState(v68) + 57008);
  v70 = **v69;
  v71 = *(_QWORD *)(W32GetUserSessionState(v69) + 19928);
  *(_DWORD *)(v71 + 2216) = v70;
  v72 = W32GetUserSessionState(v71);
  CInputConfig::zzzOnDisplayStateChange(*(CInputConfig **)(v72 + 18688));
  v74 = W32GetUserSessionState(v73);
  memset((void *)(v74 + 14728), 0, 0x600uLL);
  v77 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v76, v75) + 48);
  v78 = *(int (**)(void))(v77 + 3664);
  if ( v78 )
  {
    if ( v78() >= 0 )
    {
      v77 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v77, v79) + 48);
      v80 = *(void (**)(void))(v77 + 3672);
      if ( v80 )
        v80();
    }
  }
  v121 = 0LL;
  v81 = W32GetUserSessionState(v77);
  SetOrCreateRectRgnIndirectPublic((HRGN *)(*(_QWORD *)(v81 + 57008) + 128LL), (struct REGION_CORE *)&v121);
  v83 = *(_QWORD *)(W32GetUserSessionState(v82) + 57008);
  if ( *(_QWORD *)(v83 + 128) )
  {
    v84 = 0;
    v85 = *(_QWORD *)(W32GetUserSessionState(v83) + 57008);
    for ( k = *(_QWORD *)(v85 + 112); k; k = *(_QWORD *)(k + 56) )
    {
      v85 = *(_QWORD *)(k + 40);
      if ( (*(_DWORD *)(v85 + 24) & 1) != 0 )
      {
        RectRgnIndirect = GreCreateRectRgnIndirect((struct REGION_CORE *)(v85 + 28));
        if ( RectRgnIndirect )
        {
          v88 = *(_QWORD *)(W32GetUserSessionState(v85) + 57008);
          v89 = *(HRGN *)(v88 + 128);
          v90 = W32GetUserSessionState(v88);
          v84 = GreCombineRgn(*(HRGN *)(*(_QWORD *)(v90 + 57008) + 128LL), v89, (HRGN)RectRgnIndirect, 2);
          GreDeleteObject((HRGN)RectRgnIndirect);
        }
      }
    }
    v91 = *(_QWORD *)(W32GetUserSessionState(v85) + 57008);
    v83 = *(_DWORD *)(v91 + 140) & 0xFFFFFFFE | (v84 == 2);
    *(_DWORD *)(v91 + 140) = v83;
  }
  v92 = *(_QWORD *)(W32GetUserSessionState(v83) + 57008);
  if ( (*(_DWORD *)(v92 + 140) & 1) != 0 )
  {
    v93 = 0LL;
  }
  else
  {
    v92 = *(_QWORD *)(W32GetUserSessionState(v92) + 57008);
    v93 = *(_QWORD *)(v92 + 128);
  }
  for ( m = *(_QWORD *)(W32GetUserSessionState(v92) + 63560); m; m = *(_QWORD *)(m + 8) )
  {
    for ( n = *(_QWORD *)(m + 16); n; n = *(_QWORD *)(n + 32) )
    {
      v94 = *(_QWORD *)(*(_QWORD *)(n + 8) + 24LL);
      *(_QWORD *)(*(_QWORD *)(v94 + 40) + 168LL) = v93;
    }
  }
  v97 = W32GetUserSessionState(v94);
  DeviceCaps = GreGetDeviceCaps(*(HDC *)(*(_QWORD *)(v97 + 57008) + 64LL), 14);
  v100 = *(_QWORD *)(W32GetUserSessionState(v99) + 19928);
  *(_BYTE *)(v100 + 7002) = DeviceCaps;
  v101 = W32GetUserSessionState(v100);
  v102 = GreGetDeviceCaps(*(HDC *)(*(_QWORD *)(v101 + 57008) + 64LL), 12);
  v104 = *(_QWORD *)(W32GetUserSessionState(v103) + 19928);
  *(_BYTE *)(v104 + 7003) = v102;
  v105 = *(_QWORD *)(W32GetUserSessionState(v104) + 19928);
  v107 = *(_QWORD *)(W32GetUserSessionState(v106) + 19928);
  LOWORD(v105) = *(unsigned __int8 *)(v105 + 7002) * *(unsigned __int8 *)(v107 + 7003);
  v108 = *(_QWORD *)(W32GetUserSessionState(v107) + 19928);
  *(_WORD *)(v108 + 6996) = v105;
  v109 = *(_QWORD *)(W32GetUserSessionState(v108) + 19928);
  LOWORD(v105) = *(_WORD *)(v109 + 6996);
  v110 = *(_QWORD *)(W32GetUserSessionState(v109) + 57008);
  *(_WORD *)(v110 + 136) = v105;
  v111 = *(_QWORD *)(W32GetUserSessionState(v110) + 19928);
  if ( (_DWORD)v43 )
    *(_DWORD *)(v111 + 7004) |= 1u;
  else
    *(_DWORD *)(v111 + 7004) &= ~1u;
  EnforceColorDependentSettings();
  v114 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v113, v112) + 48) + 7568LL);
  if ( v114 && v114() >= 0 )
  {
    v117 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v116, v115) + 48) + 7576LL);
    if ( v117 )
      LODWORD(v117) = v117();
    if ( !(_DWORD)v117 )
      return (unsigned int)-1073741801;
  }
  return v6;
}
