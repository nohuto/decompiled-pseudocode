/*
 * XREFs of CleanupGDI @ 0x140165F88
 * Callers:
 *     CleanupResources @ 0x1401B7088 (CleanupResources.c)
 * Callees:
 *     GreDeleteObject @ 0x140010390 (GreDeleteObject.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     GreSelectBitmap @ 0x14001C680 (GreSelectBitmap.c)
 *     DestroyCacheDCEntries @ 0x140022480 (DestroyCacheDCEntries.c)
 *     HmgSetOwner @ 0x14002DC20 (HmgSetOwner.c)
 *     HmgShareLockCheck @ 0x14002F820 (HmgShareLockCheck.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x140036A58 (--1SURFREF@@QEAA@XZ.c)
 *     GreGetStockObject @ 0x140043F10 (GreGetStockObject.c)
 *     DestroyMonitor @ 0x1400638E0 (DestroyMonitor.c)
 *     DrvCleanupAndDestroyMDEV @ 0x14008968C (DrvCleanupAndDestroyMDEV.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?DestroyRegion@@YAXPEAPEAUHRGN__@@@Z @ 0x140144088 (-DestroyRegion@@YAXPEAPEAUHRGN__@@@Z.c)
 *     ?DestroyAllDPIMETRICSFonts@@YAXPEAUtagDPIMETRICS@@@Z @ 0x14014B9AC (-DestroyAllDPIMETRICSFonts@@YAXPEAUtagDPIMETRICS@@@Z.c)
 *     ?DestroyFont@@YAXPEAPEAUHFONT__@@@Z @ 0x14014B9F0 (-DestroyFont@@YAXPEAPEAUHFONT__@@@Z.c)
 *     ?DestroyDC@@YAXPEAPEAUHDC__@@@Z @ 0x1401527A0 (-DestroyDC@@YAXPEAPEAUHDC__@@@Z.c)
 *     DelayedDestroyCacheDC @ 0x1401688B0 (DelayedDestroyCacheDC.c)
 *     Get96DpiMetrics @ 0x1401940D0 (Get96DpiMetrics.c)
 *     GetSessionDpiMetrics @ 0x140194120 (GetSessionDpiMetrics.c)
 *     Feature_DpiMetricsInUserMode__private_IsEnabledDeviceUsageNoInline @ 0x1401B11B4 (Feature_DpiMetricsInUserMode__private_IsEnabledDeviceUsageNoInline.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x1401C0B88 (--0-$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

void __fastcall CleanupGDI(__int64 a1)
{
  __int64 UserSessionState; // rax
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbx
  int (*v14)(void); // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  void (*v17)(void); // rax
  __int64 v18; // rcx
  __int64 v19; // rbx
  HDC *v20; // rdi
  __int64 StockObject; // rax
  __int64 v22; // rcx
  struct tagTHREADINFO *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rbx
  __int64 v28; // rdi
  __int64 v29; // rcx
  int (*v30)(void); // rax
  __int64 v31; // rdx
  void (*v32)(void); // rax
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rbx
  __int64 v42; // rdi
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rcx
  __int64 v52; // rax
  __int64 v53; // rcx
  __int64 v54; // rax
  __int64 v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rcx
  __int64 v58; // rax
  __int64 v59; // rcx
  __int64 v60; // rax
  __int64 v61; // rcx
  __int64 v62; // rax
  __int64 v63; // rcx
  __int64 v64; // rax
  __int64 v65; // rcx
  __int64 v66; // rax
  __int64 v67; // rcx
  __int64 v68; // rax
  __int64 v69; // rcx
  __int64 v70; // rax
  __int64 v71; // rcx
  __int64 v72; // rax
  __int64 v73; // rcx
  __int64 v74; // rax
  __int64 v75; // rcx
  __int64 v76; // rax
  __int64 v77; // rcx
  __int64 v78; // rax
  __int64 v79; // rcx
  __int64 v80; // rax
  __int64 v81; // rcx
  __int64 v82; // rax
  __int64 v83; // rcx
  __int64 v84; // rax
  __int64 v85; // rcx
  HFONT *SessionDpiMetrics; // rax
  HFONT *v87; // rax
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // rcx
  int (*v91)(void); // rax
  __int64 v92; // rbx
  __int64 v93; // rdx
  __int64 v94; // rcx
  void (__fastcall *v95)(__int64); // rax
  __int64 v96; // rcx
  __int64 v97; // rax
  __int64 v98; // rcx
  __int64 v99; // rcx
  __int64 v100; // rax
  __int64 v101; // rcx
  __int64 v102; // rax
  __int64 v103; // rcx
  __int64 v104; // rcx
  __int64 v105; // rcx
  __int64 v106; // rbx
  __int64 v107; // rbx
  int *v108; // rcx
  char *v109; // rcx
  _BYTE v110[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v111; // [rsp+40h] [rbp-18h]

  UserSessionState = W32GetUserSessionState(a1);
  DestroyDC((HDC *)(*(_QWORD *)(UserSessionState + 57008) + 64LL));
  v3 = W32GetUserSessionState(v2);
  DestroyDC((HDC *)(*(_QWORD *)(v3 + 57008) + 72LL));
  v5 = W32GetUserSessionState(v4);
  DestroyDC((HDC *)(*(_QWORD *)(v5 + 57008) + 80LL));
  v7 = W32GetUserSessionState(v6);
  DestroyDC((HDC *)(v7 + 43288));
  v9 = W32GetUserSessionState(v8);
  DestroyDC((HDC *)(v9 + 43296));
  v13 = W32GetUserSessionState(v10);
  if ( *(_QWORD *)(v13 + 43024) )
  {
    v14 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v12, v11) + 48) + 216LL);
    if ( v14 )
    {
      if ( v14() >= 0 )
      {
        v17 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v16, v15) + 48) + 224LL);
        if ( v17 )
          v17();
      }
    }
  }
  DestroyDC((HDC *)(v13 + 43032));
  v19 = W32GetUserSessionState(v18);
  v20 = (HDC *)(v19 + 66064);
  if ( *(_QWORD *)(v19 + 66056) )
  {
    StockObject = GreGetStockObject(21LL);
    GreSelectBitmap(*v20, StockObject);
    GreDeleteObject(*(HRGN *)(v19 + 66056));
    *(_QWORD *)(v19 + 66056) = 0LL;
  }
  DestroyDC(v20);
  v23 = PtiCurrent(v22);
  DestroyCacheDCEntries((__int64)v23);
  DestroyCacheDCEntries(0LL);
  DelayedDestroyCacheDC(1LL);
  v27 = *(_QWORD *)(W32GetUserSessionState(v24) + 57008);
  v28 = *(_QWORD *)(v27 + 88);
  if ( v28 )
  {
    UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>(v110);
    v111 = 0LL;
    v111 = HmgShareLockCheck(v28, 5);
    if ( v111 && (v28 & 0x800000) == 0 )
      HmgSetOwner(v28, -2147483646, 5);
    SURFREF::~SURFREF((SURFREF *)v110);
    GreDeleteObject(*(HRGN *)(v27 + 88));
    *(_QWORD *)(v27 + 88) = 0LL;
  }
  v29 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v26, v25) + 48);
  v30 = *(int (**)(void))(v29 + 264);
  if ( v30 )
  {
    if ( v30() >= 0 )
    {
      v29 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v29, v31) + 48);
      v32 = *(void (**)(void))(v29 + 272);
      if ( v32 )
        v32();
    }
  }
  v33 = W32GetUserSessionState(v29);
  DestroyFont((HRGN *)(v33 + 43080));
  v35 = W32GetUserSessionState(v34);
  DestroyFont((HRGN *)(*(_QWORD *)(v35 + 19928) + 4944LL));
  v37 = W32GetUserSessionState(v36);
  DestroyFont((HRGN *)(v37 + 43088));
  v39 = W32GetUserSessionState(v38);
  DestroyFont((HRGN *)(v39 + 43096));
  v41 = 0LL;
  v42 = 31LL;
  do
  {
    v43 = W32GetUserSessionState(v40);
    DestroyFont((HRGN *)(v41 + *(_QWORD *)(v43 + 19928) + 4696LL));
    v41 += 8LL;
    --v42;
  }
  while ( v42 );
  v44 = W32GetUserSessionState(v40);
  DestroyRegion((HRGN *)(*(_QWORD *)(v44 + 57008) + 128LL));
  v46 = W32GetUserSessionState(v45);
  DestroyRegion((HRGN *)(v46 + 63352));
  v48 = W32GetUserSessionState(v47);
  DestroyRegion((HRGN *)(v48 + 63360));
  v50 = W32GetUserSessionState(v49);
  DestroyRegion((HRGN *)(v50 + 63368));
  v52 = W32GetUserSessionState(v51);
  DestroyRegion((HRGN *)(v52 + 63376));
  v54 = W32GetUserSessionState(v53);
  DestroyRegion((HRGN *)(v54 + 63384));
  v56 = W32GetUserSessionState(v55);
  DestroyRegion((HRGN *)(v56 + 63392));
  v58 = W32GetUserSessionState(v57);
  DestroyRegion((HRGN *)(v58 + 63400));
  v60 = W32GetUserSessionState(v59);
  DestroyRegion((HRGN *)(v60 + 63408));
  v62 = W32GetUserSessionState(v61);
  DestroyRegion((HRGN *)(v62 + 63416));
  v64 = W32GetUserSessionState(v63);
  DestroyRegion((HRGN *)(v64 + 43104));
  v66 = W32GetUserSessionState(v65);
  DestroyRegion((HRGN *)(v66 + 43120));
  v68 = W32GetUserSessionState(v67);
  DestroyRegion((HRGN *)(v68 + 43128));
  v70 = W32GetUserSessionState(v69);
  DestroyRegion((HRGN *)(v70 + 43136));
  v72 = W32GetUserSessionState(v71);
  DestroyRegion((HRGN *)(v72 + 43144));
  v74 = W32GetUserSessionState(v73);
  DestroyRegion((HRGN *)(v74 + 43152));
  v76 = W32GetUserSessionState(v75);
  DestroyRegion((HRGN *)(v76 + 43160));
  v78 = W32GetUserSessionState(v77);
  DestroyRegion((HRGN *)(v78 + 43168));
  v80 = W32GetUserSessionState(v79);
  DestroyRegion((HRGN *)(v80 + 43176));
  v82 = W32GetUserSessionState(v81);
  DestroyRegion((HRGN *)(v82 + 43184));
  v84 = W32GetUserSessionState(v83);
  DestroyRegion((HRGN *)(v84 + 43192));
  if ( !(unsigned int)Feature_DpiMetricsInUserMode__private_IsEnabledDeviceUsageNoInline() )
  {
    SessionDpiMetrics = (HFONT *)GetSessionDpiMetrics();
    DestroyAllDPIMETRICSFonts(SessionDpiMetrics);
    v87 = (HFONT *)Get96DpiMetrics();
    DestroyAllDPIMETRICSFonts(v87);
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v85) + 62832) )
  {
    v90 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v89, v88) + 48);
    v91 = *(int (**)(void))(v90 + 232);
    if ( v91 )
    {
      if ( v91() >= 0 )
      {
        v92 = *(_QWORD *)(W32GetUserSessionState(v90) + 62832);
        v95 = *(void (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v94, v93) + 48) + 240LL);
        if ( v95 )
          v95(v92);
      }
    }
    *(_QWORD *)(W32GetUserSessionState(v90) + 62832) = 0LL;
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v89) + 62840) )
  {
    v97 = W32GetUserSessionState(v96);
    GreDeleteObject(*(HRGN *)(v97 + 62840));
    *(_QWORD *)(W32GetUserSessionState(v98) + 62840) = 0LL;
  }
  v99 = *(_QWORD *)(W32GetUserSessionState(v96) + 57008);
  if ( *(_QWORD *)(v99 + 16) )
  {
    v100 = W32GetUserSessionState(v99);
    DrvCleanupAndDestroyMDEV(*(_QWORD *)(*(_QWORD *)(v100 + 57008) + 16LL));
    v102 = W32GetUserSessionState(v101);
    GreDeleteFastMutex(*(char **)(*(_QWORD *)(v102 + 57008) + 16LL));
    v104 = *(_QWORD *)(W32GetUserSessionState(v103) + 57008);
    *(_QWORD *)(v104 + 16) = 0LL;
    v99 = *(_QWORD *)(W32GetUserSessionState(v104) + 57008);
    *(_QWORD *)(v99 + 48) = 0LL;
  }
  v105 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v99) + 57008) + 112LL);
  if ( v105 )
  {
    do
    {
      v106 = *(_QWORD *)(v105 + 56);
      DestroyMonitor((int *)v105);
      v105 = v106;
    }
    while ( v106 );
  }
  v107 = W32GetUserSessionState(v105);
  v108 = *(int **)(v107 + 71464);
  if ( v108 )
    DestroyMonitor(v108);
  v109 = *(char **)(v107 + 71472);
  if ( v109 )
    GreDeleteFastMutex(v109);
}
