/*
 * XREFs of InitUserScreen @ 0x140162CD0
 * Callers:
 *     InitVideo @ 0x1401B2E18 (InitVideo.c)
 * Callees:
 *     ?PreAllocateForPrimaryMonitorChange@@YAHXZ @ 0x14000B480 (-PreAllocateForPrimaryMonitorChange@@YAHXZ.c)
 *     CreateCacheDC @ 0x14000E010 (CreateCacheDC.c)
 *     GreCreateCompatibleDC @ 0x14000E310 (GreCreateCompatibleDC.c)
 *     GreCreateDisplayDC @ 0x14000E640 (GreCreateDisplayDC.c)
 *     GreSetDCOwnerEx @ 0x14000F100 (GreSetDCOwnerEx.c)
 *     CreateEmptyRgnPublic @ 0x140010E60 (CreateEmptyRgnPublic.c)
 *     GreUnlockVisRgn @ 0x140021330 (GreUnlockVisRgn.c)
 *     GreLockVisRgn @ 0x140021770 (GreLockVisRgn.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     xxxODI_ColorInit @ 0x14009F170 (xxxODI_ColorInit.c)
 *     ?CreateProfileUserName@@YAPEAU_UNICODE_STRING@@PEAU?$Win32RawOptionalLockedItemAlways@UtagPROFILEUSERNAME@@$1?Win32FreePool@@YAXPEAX@Z@@@Z @ 0x14009F5A0 (-CreateProfileUserName@@YAPEAU_UNICODE_STRING@@PEAU-$Win32RawOptionalLockedItemAlways@UtagPROFIL.c)
 *     ?zzzUpdateUserScreen@@YAJXZ @ 0x1400A2D78 (-zzzUpdateUserScreen@@YAJXZ.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1400D11B0 (PopAndFreeAlwaysW32ThreadLock.c)
 *     GreSelectFont @ 0x1400F80D0 (GreSelectFont.c)
 *     GreGetSystemFont @ 0x1401488C0 (GreGetSystemFont.c)
 *     GreMarkDCUnreadable @ 0x140152E84 (GreMarkDCUnreadable.c)
 *     ApiSetEditionInitGlobalCursorSizes @ 0x1401920BC (ApiSetEditionInitGlobalCursorSizes.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x1401A2C38 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 InitUserScreen()
{
  __int64 v0; // rcx
  char v1; // bl
  bool v2; // di
  __int64 UserSessionState; // rax
  int v4; // r8d
  int v5; // edx
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rax
  HDC DisplayDC; // rbx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  unsigned int v15; // ebx
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  HDC CompatibleDC; // rbx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  HDC v32; // rbx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rdi
  __int64 v36; // rcx
  __int64 v37; // rax
  HDC v38; // rbx
  __int64 v39; // rcx
  __int64 v40; // rcx
  _BOOL8 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int16 v47; // bx
  __int64 v48; // rcx
  __int64 i; // rcx
  __int64 v50; // rcx
  __int64 EmptyRgnPublic; // rbx
  __int64 v52; // rcx
  __int64 v53; // rcx
  __int64 v54; // rbx
  __int64 v55; // rcx
  __int64 v56; // rcx
  __int64 v57; // rbx
  __int64 v58; // rcx
  __int64 v59; // rcx
  __int64 v60; // rbx
  __int64 v61; // rcx
  __int64 v62; // rcx
  __int64 v63; // rbx
  __int64 v64; // rcx
  __int64 v65; // rcx
  __int64 v66; // rbx
  __int64 v67; // rcx
  __int64 v68; // rcx
  __int64 v69; // rbx
  __int64 v70; // rcx
  __int64 v71; // rcx
  __int64 v72; // rbx
  __int64 v73; // rcx
  __int64 v74; // rcx
  __int64 v75; // rbx
  __int64 v76; // rcx
  __int64 v77; // rcx
  __int64 v78; // rbx
  __int64 v79; // rcx
  __int64 v80; // rcx
  __int64 v81; // rbx
  __int64 v82; // rcx
  __int64 v83; // rcx
  __int64 v84; // rbx
  __int64 v85; // rcx
  __int64 v86; // rcx
  __int64 v87; // rbx
  __int64 v88; // rcx
  __int64 v89; // rcx
  __int64 v90; // rbx
  __int64 v91; // rcx
  __int64 v92; // rcx
  __int64 v93; // r13
  __int64 v94; // rbx
  __int64 v95; // rcx
  __int64 v96; // rcx
  __int64 v97; // r12
  __int64 v98; // rbx
  __int64 v99; // rcx
  __int64 v100; // rcx
  __int64 v101; // r15
  __int64 v102; // rbx
  __int64 v103; // rcx
  __int64 v104; // rcx
  __int64 v105; // r14
  __int64 v106; // rbx
  __int64 v107; // rcx
  __int64 v108; // rcx
  __int64 v109; // rsi
  __int64 v110; // rbx
  __int64 v111; // rcx
  __int64 v112; // rcx
  __int64 v113; // rdi
  __int64 v114; // rbx
  __int64 v115; // rcx
  __int64 v116; // rcx
  __int64 v117; // r8
  bool v118; // cf
  int v119; // edx
  int v120; // ecx
  __int64 v121; // rcx
  __int64 v122; // rax
  __int64 v123; // rdi
  __int64 v124; // rcx
  __int64 v125; // rax
  __int64 v126; // rcx
  __int64 v127; // rax
  __int64 v128; // rcx
  __int64 v129; // rcx
  __int64 v130; // rcx
  __int64 v131; // rdx
  __int64 v132; // rcx
  int (*v133)(void); // rax
  __int64 v134; // rdx
  __int64 v135; // rcx
  void (*v136)(void); // rax
  __int64 v138; // [rsp+40h] [rbp-69h] BYREF
  __int64 v139; // [rsp+48h] [rbp-61h]
  __int64 v140; // [rsp+50h] [rbp-59h]
  __int64 v141; // [rsp+58h] [rbp-51h]
  __int64 v142; // [rsp+60h] [rbp-49h]
  __int64 v143; // [rsp+68h] [rbp-41h]
  __int64 v144; // [rsp+70h] [rbp-39h]
  __int64 v145; // [rsp+78h] [rbp-31h]
  __int64 v146; // [rsp+80h] [rbp-29h]
  __int64 v147; // [rsp+88h] [rbp-21h]
  __int64 v148; // [rsp+90h] [rbp-19h]
  __int64 v149; // [rsp+98h] [rbp-11h]
  PCUNICODE_STRING Source; // [rsp+A0h] [rbp-9h]
  ULONG_PTR BugCheckParameter2[2]; // [rsp+A8h] [rbp-1h] BYREF
  __int64 v152; // [rsp+B8h] [rbp+Fh]
  bool v153; // [rsp+110h] [rbp+67h]
  __int64 v154; // [rsp+118h] [rbp+6Fh]
  __int64 v155; // [rsp+120h] [rbp+77h]
  __int64 v156; // [rsp+128h] [rbp+7Fh]

  v140 = 0LL;
  *(_OWORD *)BugCheckParameter2 = 0LL;
  v152 = -1LL;
  Source = CreateProfileUserName(BugCheckParameter2);
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) == 0
    || (v1 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v1 = 0;
  }
  v2 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v1 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(v0);
    LOBYTE(v4) = v2;
    LOBYTE(v5) = v1;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v5,
      v4,
      *(_QWORD *)(UserSessionState + 69400),
      4,
      14,
      11,
      (__int64)&WPP_2a4b79c955e638d8cf604a8936dc0e34_Traceguids);
  }
  v6 = *(_QWORD *)(W32GetUserSessionState(v0) + 19928);
  v8 = *(_QWORD *)(W32GetUserSessionState(v7) + 19928);
  *(_DWORD *)(v6 + 5100) = 1;
  *(_DWORD *)(v8 + 5204) = 1;
  *(_QWORD *)(v6 + 5120) = GreGetSystemFont(1LL);
  *(_QWORD *)(v8 + 5224) = GreGetSystemFont(0LL);
  v10 = W32GetUserSessionState(v9);
  DisplayDC = GreCreateDisplayDC(*(HDEV *)(*(_QWORD *)(v10 + 57008) + 48LL), 0, 0);
  v13 = *(_QWORD *)(W32GetUserSessionState(v12) + 57008);
  *(_QWORD *)(v13 + 64) = DisplayDC;
  v14 = *(_QWORD *)(W32GetUserSessionState(v13) + 57008);
  if ( !*(_QWORD *)(v14 + 64) )
    goto LABEL_9;
  v16 = *(_QWORD *)(v6 + 5120);
  v17 = W32GetUserSessionState(v14);
  GreSelectFont(*(_QWORD *)(*(_QWORD *)(v17 + 57008) + 64LL), v16);
  v19 = W32GetUserSessionState(v18);
  GreSetDCOwnerEx(*(struct HOBJ__ **)(*(_QWORD *)(v19 + 57008) + 64LL), 0, 0, 0);
  v21 = W32GetUserSessionState(v20);
  CompatibleDC = GreCreateCompatibleDC(*(HDC *)(*(_QWORD *)(v21 + 57008) + 64LL));
  v24 = *(_QWORD *)(W32GetUserSessionState(v23) + 57008);
  *(_QWORD *)(v24 + 72) = CompatibleDC;
  v25 = *(_QWORD *)(W32GetUserSessionState(v24) + 57008);
  if ( !*(_QWORD *)(v25 + 72) )
    goto LABEL_9;
  v26 = *(_QWORD *)(v6 + 5120);
  v27 = W32GetUserSessionState(v25);
  GreSelectFont(*(_QWORD *)(*(_QWORD *)(v27 + 57008) + 72LL), v26);
  v29 = W32GetUserSessionState(v28);
  GreSetDCOwnerEx(*(struct HOBJ__ **)(*(_QWORD *)(v29 + 57008) + 72LL), 0, 0, 0);
  v31 = W32GetUserSessionState(v30);
  v32 = GreCreateCompatibleDC(*(HDC *)(*(_QWORD *)(v31 + 57008) + 64LL));
  *(_QWORD *)(W32GetUserSessionState(v33) + 43288) = v32;
  v35 = *(_QWORD *)(W32GetUserSessionState(v34) + 43288);
  v37 = W32GetUserSessionState(v36);
  v38 = GreCreateCompatibleDC(*(HDC *)(*(_QWORD *)(v37 + 57008) + 64LL));
  *(_QWORD *)(W32GetUserSessionState(v39) + 43296) = v38;
  v41 = *(_QWORD *)(W32GetUserSessionState(v40) + 43296) != 0LL;
  v15 = v35 != 0 && v41;
  v153 = v35 != 0 && v41;
  if ( !v15 )
    goto LABEL_29;
  v42 = W32GetUserSessionState(v41);
  GreSetDCOwnerEx(*(struct HOBJ__ **)(v42 + 43288), 0, 0, 0);
  v44 = W32GetUserSessionState(v43);
  GreSetDCOwnerEx(*(struct HOBJ__ **)(v44 + 43296), 0, 0, 0);
  v46 = *(_QWORD *)(W32GetSessionState(v45) + 88);
  v47 = *(_WORD *)(v46 + 1080);
  v48 = *(_QWORD *)(W32GetUserSessionState(v46) + 19928);
  ++*(_WORD *)(v48 + 7014);
  *(_WORD *)(v48 + 6998) = v47;
  for ( i = *(_QWORD *)(W32GetUserSessionState(v48) + 36424); i; i = *(_QWORD *)(i + 368) )
    *(_WORD *)(i + 272) = v47;
  if ( !(unsigned int)ApiSetEditionInitGlobalCursorSizes() || !(unsigned int)PreAllocateForPrimaryMonitorChange() )
  {
LABEL_9:
    v15 = 0;
    goto LABEL_29;
  }
  LOBYTE(v138) = 0;
  v139 = 0LL;
  AtomicExecutionCheck::Arm((AtomicExecutionCheck *)&v138);
  if ( (int)zzzUpdateUserScreen(v50) >= 0 )
  {
    if ( (_BYTE)v138 )
      --*(_DWORD *)(v139 + 28);
    EmptyRgnPublic = CreateEmptyRgnPublic();
    *(_QWORD *)(W32GetUserSessionState(v52) + 63400) = EmptyRgnPublic;
    v144 = *(_QWORD *)(W32GetUserSessionState(v53) + 63400);
    v54 = CreateEmptyRgnPublic();
    *(_QWORD *)(W32GetUserSessionState(v55) + 63408) = v54;
    v154 = *(_QWORD *)(W32GetUserSessionState(v56) + 63408);
    v57 = CreateEmptyRgnPublic();
    *(_QWORD *)(W32GetUserSessionState(v58) + 63416) = v57;
    v145 = *(_QWORD *)(W32GetUserSessionState(v59) + 63416);
    v60 = CreateEmptyRgnPublic();
    *(_QWORD *)(W32GetUserSessionState(v61) + 43128) = v60;
    v155 = *(_QWORD *)(W32GetUserSessionState(v62) + 43128);
    v63 = CreateEmptyRgnPublic();
    *(_QWORD *)(W32GetUserSessionState(v64) + 43136) = v63;
    v146 = *(_QWORD *)(W32GetUserSessionState(v65) + 43136);
    v66 = CreateEmptyRgnPublic();
    *(_QWORD *)(W32GetUserSessionState(v67) + 43120) = v66;
    v156 = *(_QWORD *)(W32GetUserSessionState(v68) + 43120);
    v69 = CreateEmptyRgnPublic();
    *(_QWORD *)(W32GetUserSessionState(v70) + 43144) = v69;
    v147 = *(_QWORD *)(W32GetUserSessionState(v71) + 43144);
    v72 = CreateEmptyRgnPublic();
    *(_QWORD *)(W32GetUserSessionState(v73) + 43152) = v72;
    v141 = *(_QWORD *)(W32GetUserSessionState(v74) + 43152);
    v75 = CreateEmptyRgnPublic();
    *(_QWORD *)(W32GetUserSessionState(v76) + 43160) = v75;
    v148 = *(_QWORD *)(W32GetUserSessionState(v77) + 43160);
    v78 = CreateEmptyRgnPublic();
    *(_QWORD *)(W32GetUserSessionState(v79) + 43168) = v78;
    v142 = *(_QWORD *)(W32GetUserSessionState(v80) + 43168);
    v81 = CreateEmptyRgnPublic();
    *(_QWORD *)(W32GetUserSessionState(v82) + 43176) = v81;
    v149 = *(_QWORD *)(W32GetUserSessionState(v83) + 43176);
    v84 = CreateEmptyRgnPublic();
    *(_QWORD *)(W32GetUserSessionState(v85) + 43184) = v84;
    v143 = *(_QWORD *)(W32GetUserSessionState(v86) + 43184);
    v87 = CreateEmptyRgnPublic();
    *(_QWORD *)(W32GetUserSessionState(v88) + 43192) = v87;
    v138 = *(_QWORD *)(W32GetUserSessionState(v89) + 43192);
    v90 = CreateEmptyRgnPublic();
    *(_QWORD *)(W32GetUserSessionState(v91) + 63352) = v90;
    v93 = *(_QWORD *)(W32GetUserSessionState(v92) + 63352);
    v94 = CreateEmptyRgnPublic();
    *(_QWORD *)(W32GetUserSessionState(v95) + 63360) = v94;
    v97 = *(_QWORD *)(W32GetUserSessionState(v96) + 63360);
    v98 = CreateEmptyRgnPublic();
    *(_QWORD *)(W32GetUserSessionState(v99) + 63368) = v98;
    v101 = *(_QWORD *)(W32GetUserSessionState(v100) + 63368);
    v102 = CreateEmptyRgnPublic();
    *(_QWORD *)(W32GetUserSessionState(v103) + 63376) = v102;
    v105 = *(_QWORD *)(W32GetUserSessionState(v104) + 63376);
    v106 = CreateEmptyRgnPublic();
    *(_QWORD *)(W32GetUserSessionState(v107) + 63384) = v106;
    v109 = *(_QWORD *)(W32GetUserSessionState(v108) + 63384);
    v110 = CreateEmptyRgnPublic();
    *(_QWORD *)(W32GetUserSessionState(v111) + 63392) = v110;
    v113 = *(_QWORD *)(W32GetUserSessionState(v112) + 63392);
    v114 = CreateEmptyRgnPublic();
    *(_QWORD *)(W32GetUserSessionState(v115) + 43104) = v114;
    v117 = *(_QWORD *)(W32GetUserSessionState(v116) + 43104);
    v118 = v141 != 0;
    v141 = -v141;
    v119 = (v148 != 0) & (v147 != 0) & (v146 != 0) & (v145 != 0) & (v153 && v144 != 0) & (unsigned __int8)-(v154 != 0) & (unsigned __int8)-(v155 != 0) & (unsigned __int8)-(v156 != 0) & (unsigned __int8)-v118;
    v118 = v142 != 0;
    v142 = -v142;
    v120 = (v149 != 0) & (v118 ? v119 : 0);
    v118 = v143 != 0;
    v143 = -v143;
    v121 = (v113 != 0) & (unsigned __int8)(v109 != 0
                                        && v105 != 0
                                        && v101 != 0
                                        && v97 != 0
                                        && v93 != 0
                                        && (v138 != 0) & (v118 ? v120 : 0));
    v15 = v117 != 0 ? v121 : 0;
    v122 = W32GetUserSessionState(v121);
    GreLockVisRgn(*(_QWORD *)(*(_QWORD *)(v122 + 57008) + 48LL));
    v123 = 5LL;
    do
    {
      v124 = (unsigned int)-(CreateCacheDC(0LL, 0x802u, 0LL) != 0);
      v15 &= v124;
      --v123;
    }
    while ( v123 );
    v125 = W32GetUserSessionState(v124);
    GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v125 + 57008) + 48LL));
    if ( v15 )
    {
      v127 = W32GetUserSessionState(v126);
      GreMarkDCUnreadable(*(_QWORD *)(*(_QWORD *)(v127 + 57008) + 64LL));
      v129 = *(_QWORD *)(W32GetUserSessionState(v128) + 19928);
      *(_DWORD *)(v129 + 1984) = 0;
      v130 = *(_QWORD *)(W32GetUserSessionState(v129) + 19928);
      *(_DWORD *)(v130 + 2164) = InitSafeBootMode;
      *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v130) + 19928) + 2188LL) = 0;
      xxxODI_ColorInit(Source);
      v133 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v132, v131) + 48) + 3680LL);
      if ( v133 )
      {
        if ( v133() >= 0 )
        {
          v136 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v135, v134) + 48) + 3688LL);
          if ( v136 )
            v136();
        }
      }
    }
  }
  else
  {
    v15 = 0;
    if ( (_BYTE)v138 )
      --*(_DWORD *)(v139 + 28);
  }
LABEL_29:
  if ( v152 != -1 )
    PopAndFreeAlwaysW32ThreadLock((__int64)BugCheckParameter2);
  return v15;
}
