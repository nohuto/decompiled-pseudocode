/*
 * XREFs of _GetDCEx @ 0x140099850
 * Callers:
 *     UserGetDesktopDC @ 0x14000EDE0 (UserGetDesktopDC.c)
 *     UserGetMonitorDC @ 0x140099680 (UserGetMonitorDC.c)
 *     _GetDC @ 0x1400997F0 (_GetDC.c)
 * Callees:
 *     CreateCacheDC @ 0x14000E010 (CreateCacheDC.c)
 *     ?SetPwndOrg@tagDCE@@QEAAXPEAUtagWND@@@Z @ 0x14000EF9C (-SetPwndOrg@tagDCE@@QEAAXPEAUtagWND@@@Z.c)
 *     ?dwSetLayout@DC@@QEAAKJK@Z @ 0x14000F240 (-dwSetLayout@DC@@QEAAKJK@Z.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x14000F604 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     GreSelectVisRgnShared @ 0x14000FDA0 (GreSelectVisRgnShared.c)
 *     GreGetBounds @ 0x14000FF10 (GreGetBounds.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1400101A0 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x140010220 (--1DCOBJA@@QEAA@XZ.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x140010520 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     CreateEmptyRgnPublic @ 0x140010E60 (CreateEmptyRgnPublic.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14001D9D8 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     GreUnlockVisRgn @ 0x140021330 (GreUnlockVisRgn.c)
 *     GreLockVisRgn @ 0x140021770 (GreLockVisRgn.c)
 *     GreValidateVisrgn @ 0x140022F24 (GreValidateVisrgn.c)
 *     GreCombineRgn @ 0x140025D30 (GreCombineRgn.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x140026760 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x140026B80 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1400281B0 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x14002A080 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x14002A1F0 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 *     ?vCopy@RGNCOREOBJ@@QEBAXAEBV1@@Z @ 0x14002AF10 (-vCopy@RGNCOREOBJ@@QEBAXAEBV1@@Z.c)
 *     ?get_sizeScan@REGION_CORE@@IEBAKXZ @ 0x14002B150 (-get_sizeScan@REGION_CORE@@IEBAKXZ.c)
 *     GreOffsetRgn @ 0x14002C0D0 (GreOffsetRgn.c)
 *     GreSetRectRgn @ 0x14002C480 (GreSetRectRgn.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x14002D0C0 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x14002D140 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 *     GreCreateRectRgnIndirect @ 0x14002D480 (GreCreateRectRgnIndirect.c)
 *     EngSetLastError @ 0x14002DB90 (EngSetLastError.c)
 *     HmgSetOwner @ 0x14002DC20 (HmgSetOwner.c)
 *     ?bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z @ 0x14002E480 (-bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z.c)
 *     ?HmgShareLockEx@@YAPEAU_BASEOBJECT@@PEAUHOBJ__@@EW4HandleLockOptions@@@Z @ 0x14002EB90 (-HmgShareLockEx@@YAPEAU_BASEOBJECT@@PEAUHOBJ__@@EW4HandleLockOptions@@@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1400349F0 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     GreGetStockObject @ 0x140043F10 (GreGetStockObject.c)
 *     ?get_sizeScanAlloc@REGION_CORE@@IEBAKXZ @ 0x140065B50 (-get_sizeScanAlloc@REGION_CORE@@IEBAKXZ.c)
 *     PushThreadGuardedObject @ 0x140068920 (PushThreadGuardedObject.c)
 *     UpdateDCEInUseCount @ 0x1400C2468 (UpdateDCEInUseCount.c)
 *     ?RegionCore_vCopy@Win32kRS@@YAXPEAVREGION_CORE@@PEBV2@@Z @ 0x1400CE774 (-RegionCore_vCopy@Win32kRS@@YAXPEAVREGION_CORE@@PEBV2@@Z.c)
 *     GreHintDCWnd @ 0x1400D625C (GreHintDCWnd.c)
 *     GreSelectRedirectionBitmap @ 0x1400E07B4 (GreSelectRedirectionBitmap.c)
 *     GetRedirectionBitmap @ 0x1400E1754 (GetRedirectionBitmap.c)
 *     SpbCheckDce @ 0x14010441C (SpbCheckDce.c)
 *     DeleteHrgnClip @ 0x140109100 (DeleteHrgnClip.c)
 *     HmgMarkUndeletable @ 0x14010BC90 (HmgMarkUndeletable.c)
 *     FlushWEFCOMPOSITEDDCEBounds @ 0x14011FDD0 (FlushWEFCOMPOSITEDDCEBounds.c)
 *     DelayedDestroyCacheDC @ 0x1401688B0 (DelayedDestroyCacheDC.c)
 *     DestroyCacheDC @ 0x1401689F0 (DestroyCacheDC.c)
 *     ?ReportOverflow@OBJECT@@QEAAXK@Z @ 0x1401C1EE0 (-ReportOverflow@OBJECT@@QEAAXK@Z.c)
 *     ?GreSetDCOwnerExFastOpt@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@KHH@Z @ 0x1401C5800 (-GreSetDCOwnerExFastOpt@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@KHH@Z.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GetDCEx(struct tagWND *a1, HRGN a2, unsigned int a3)
{
  __int64 v3; // r13
  unsigned int v4; // r12d
  HRGN v5; // rsi
  struct tagWND *v6; // r15
  char v7; // bl
  __int64 UserSessionState; // rax
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v10; // rax
  __int64 v11; // r14
  REGION_CORE *v12; // rdi
  struct tagWND *v13; // rcx
  __int64 v14; // rdx
  char v15; // al
  int v16; // r15d
  __int64 CurrentProcessWin32Process; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned int v20; // r12d
  struct tagWND *v21; // rbx
  _QWORD *v22; // r9
  int v23; // r12d
  char v24; // cl
  unsigned int v25; // r8d
  __int64 v26; // rax
  int v27; // r12d
  __int64 i; // rcx
  int (*v29)(void); // rax
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rax
  REGION_CORE *v33; // rdi
  int (*v34)(void); // rax
  HRGN v35; // rdx
  REGION_CORE *v36; // rdx
  _QWORD *v37; // rax
  unsigned __int8 v38; // r8
  _QWORD *v39; // rax
  __int64 *v40; // rsi
  __int64 v41; // rcx
  __int64 v42; // rbx
  struct REGION_CORE *v43; // rax
  int v44; // ebx
  __int64 v45; // rdx
  struct tagWND *v46; // rbx
  int (*v47)(void); // rax
  __int64 v48; // rcx
  int (*v49)(void); // rax
  int (*v50)(void); // rax
  REGION_CORE *v51; // r13
  struct tagWND *v52; // r15
  __int64 v53; // rcx
  __int64 v54; // rbx
  struct REGION_CORE *v55; // rax
  int v56; // ebx
  __int64 v57; // rcx
  __int64 *v58; // rdi
  __int64 v59; // rcx
  __int64 v60; // rbx
  __int64 v61; // rax
  int v62; // ebx
  int v63; // eax
  bool v64; // zf
  int (*v65)(void); // rax
  __int64 **v66; // rcx
  __int64 *v67; // rax
  __int64 v68; // rcx
  __int64 v69; // rax
  __int64 **v70; // rcx
  __int64 v71; // rdx
  __int64 v72; // rcx
  HRGN v73; // r14
  __int64 v74; // rax
  struct HOBJ__ *v75; // rax
  __int64 v76; // rbx
  HRGN v77; // rdi
  __int64 v78; // rcx
  __int64 v79; // rcx
  int (*v80)(void); // rax
  __int64 v81; // rdx
  __int64 v82; // rcx
  void (__fastcall *v83)(__int64 *); // rax
  unsigned int v84; // r14d
  HDC v85; // rcx
  __int64 v86; // rdx
  __int64 v87; // rcx
  int (*v88)(void); // rax
  __int64 v89; // rdx
  __int64 v90; // rcx
  unsigned int (__fastcall *v91)(HRGN *, struct tagWND *, REGION_CORE *, _QWORD); // rax
  char *v92; // rax
  char *v93; // rcx
  char *v94; // rdx
  char **v95; // r8
  char **v96; // rdx
  char *v97; // rax
  char *v98; // rcx
  char *v99; // rdx
  char **v100; // r8
  char **v101; // rdx
  char *v102; // rax
  char *v103; // rcx
  char *v104; // rdx
  char **v105; // r8
  char **v106; // rdx
  int v107; // eax
  HRGN v108; // rbx
  __int64 v109; // rax
  struct HOBJ__ *v110; // rbx
  __int64 *v111; // rdi
  char *v112; // r15
  char *v113; // r14
  char *v114; // rbx
  __int64 v115; // rdi
  int v116; // r15d
  const struct REGION_CORE *v117; // rdx
  int v118; // ebx
  REGION_CORE *v119; // rbx
  REGION_CORE *v120; // rdi
  unsigned int v121; // r14d
  unsigned int v122; // eax
  const struct REGION_CORE *v123; // r8
  struct REGION_CORE *v124; // rdx
  REGION_CORE *v125; // rcx
  _QWORD *v126; // rcx
  __int64 v127; // rdx
  _QWORD *v128; // rax
  OBJECT *v129; // rcx
  __int64 v130; // rcx
  __int64 *v131; // rax
  OBJECT *v132; // rcx
  _QWORD **v133; // rax
  __int64 v134; // rdx
  __int64 v135; // rax
  __int64 v136; // rbx
  HRGN v137; // rdi
  __int64 v138; // rcx
  struct REGION_CORE *v139; // rdx
  Win32kRS *v140; // rcx
  const struct REGION_CORE *v141; // rdx
  REGION_CORE *v142; // rcx
  REGION_CORE *v143; // rcx
  HRGN v144; // r15
  __int64 v145; // rax
  struct HOBJ__ *RectRgnIndirect; // rax
  __int64 v147; // rbx
  HRGN v148; // rdi
  __int64 v149; // rcx
  __int64 v150; // rcx
  HRGN v151; // rbx
  __int64 v152; // rax
  struct HOBJ__ *v153; // rbx
  __int64 *SystemArgument1; // rdi
  __int64 v155; // r15
  char *v156; // r14
  char *v157; // rbx
  __int64 v158; // rdi
  int v159; // r15d
  const struct REGION_CORE *v160; // rdx
  int v161; // ebx
  REGION_CORE *v162; // rbx
  REGION_CORE *v163; // rdi
  unsigned int sizeScan; // r14d
  unsigned int v165; // eax
  const struct REGION_CORE *v166; // r8
  struct REGION_CORE *v167; // rdx
  REGION_CORE *v168; // rcx
  HRGN v169; // rcx
  HRGN v170; // rdx
  HRGN *v171; // rax
  struct REGION_CORE *v172; // rdx
  Win32kRS *v173; // rcx
  const struct REGION_CORE *v174; // rdx
  REGION_CORE *v175; // rcx
  HRGN v176; // rcx
  const struct REGION_CORE *v177; // rdx
  __int64 v178; // rdx
  __int64 v179; // rax
  int (*v180)(void); // rax
  __int64 v181; // rdx
  __int64 v182; // rcx
  __int64 v183; // rbx
  unsigned int (__fastcall *v184)(__int64, __int64); // rax
  struct HOBJ__ *v185; // rbx
  __int64 SessionState; // rax
  __int64 *v187; // rax
  __int64 v188; // rcx
  __int64 v189; // rax
  __int64 v190; // rdx
  __int64 v191; // rdx
  __int64 v192; // rdx
  __int64 v193; // rcx
  int (*v194)(void); // rax
  __int64 StockObject; // rax
  __int64 v196; // rdi
  __int64 v197; // rbx
  __int64 v198; // rdx
  __int64 v199; // rcx
  void (__fastcall *v200)(__int64, __int64); // rax
  struct tagWND *v201; // r15
  __int64 v202; // rcx
  __int64 *v203; // rax
  __int64 v204; // rcx
  _QWORD **v205; // rax
  __int64 v206; // rdx
  __int64 v207; // rcx
  __int64 v208; // rdx
  __int64 v209; // rcx
  int (*v210)(void); // rax
  __int64 v211; // rax
  int (*v213)(void); // rax
  __int64 v214; // rax
  __int64 v215; // rcx
  _QWORD *v216; // rax
  __int64 v217; // rax
  struct REGION_CORE *v218; // [rsp+20h] [rbp-E0h]
  REGION_CORE *v219; // [rsp+50h] [rbp-B0h] BYREF
  HRGN EmptyRgnPublic; // [rsp+58h] [rbp-A8h] BYREF
  REGION_CORE *v221; // [rsp+60h] [rbp-A0h] BYREF
  struct tagWND *v222; // [rsp+68h] [rbp-98h]
  int v223; // [rsp+70h] [rbp-90h]
  int v224; // [rsp+74h] [rbp-8Ch]
  Win32kRS *v225; // [rsp+78h] [rbp-88h] BYREF
  HRGN v226[2]; // [rsp+80h] [rbp-80h] BYREF
  struct REGION_CORE *v227; // [rsp+90h] [rbp-70h] BYREF
  int v228; // [rsp+98h] [rbp-68h]
  __int64 v229; // [rsp+A0h] [rbp-60h]
  __int64 v230; // [rsp+A8h] [rbp-58h]
  int v231; // [rsp+B0h] [rbp-50h]
  __int128 v232; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v233; // [rsp+C8h] [rbp-38h]
  __int64 RedirectionBitmap; // [rsp+E0h] [rbp-20h]
  DC *v235; // [rsp+F0h] [rbp-10h] BYREF
  int v236; // [rsp+F8h] [rbp-8h]
  __int64 v237; // [rsp+100h] [rbp+0h]
  __int64 v238; // [rsp+108h] [rbp+8h]
  int v239; // [rsp+110h] [rbp+10h]
  __int128 v240; // [rsp+118h] [rbp+18h] BYREF
  __int128 v241; // [rsp+128h] [rbp+28h]
  DC *v242[5]; // [rsp+140h] [rbp+40h] BYREF
  __int64 v243; // [rsp+168h] [rbp+68h] BYREF
  _QWORD **v244; // [rsp+170h] [rbp+70h]
  __int64 v245; // [rsp+188h] [rbp+88h] BYREF
  __int64 *v246; // [rsp+190h] [rbp+90h]
  char v247; // [rsp+1A8h] [rbp+A8h]
  OBJECT *v248; // [rsp+1B0h] [rbp+B0h] BYREF
  __int64 v249; // [rsp+1B8h] [rbp+B8h] BYREF
  __int64 *v250; // [rsp+1C0h] [rbp+C0h]
  int v251; // [rsp+1E0h] [rbp+E0h]
  __int64 v252; // [rsp+1F0h] [rbp+F0h] BYREF
  int v253; // [rsp+1F8h] [rbp+F8h]
  __int64 v254; // [rsp+200h] [rbp+100h]
  __int64 v255; // [rsp+208h] [rbp+108h]
  int v256; // [rsp+210h] [rbp+110h]
  _OWORD v257[2]; // [rsp+218h] [rbp+118h] BYREF
  OBJECT *v258; // [rsp+240h] [rbp+140h] BYREF
  __int64 v259; // [rsp+248h] [rbp+148h] BYREF
  _QWORD **v260; // [rsp+250h] [rbp+150h]
  int v261; // [rsp+270h] [rbp+170h]
  __int128 v262; // [rsp+278h] [rbp+178h] BYREF
  __int128 v263; // [rsp+288h] [rbp+188h] BYREF

  v3 = 0LL;
  EmptyRgnPublic = a2;
  v226[0] = 0LL;
  v4 = a3;
  v219 = 0LL;
  v5 = a2;
  RedirectionBitmap = 0LL;
  v6 = a1;
  v223 = 0;
  v7 = a3;
  v224 = 0;
  v222 = a1;
  UserSessionState = W32GetUserSessionState(a1);
  GreLockVisRgn(*(_QWORD *)(*(_QWORD *)(UserSessionState + 57008) + 48LL));
  if ( !v6 )
  {
    CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread();
    if ( CurrentThreadWin32Thread )
      v10 = *CurrentThreadWin32Thread;
    else
      v10 = 0LL;
    v6 = *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(v10 + 496) + 8LL) + 24LL);
    v222 = v6;
  }
  v221 = v6;
  v11 = 0LL;
  v12 = v6;
  v13 = v6;
  if ( v6 )
  {
    while ( 1 )
    {
      v14 = *((_QWORD *)v13 + 5);
      v15 = *(_BYTE *)(v14 + 31);
      if ( (v15 & 0x10) == 0 || (v15 & 0x20) != 0 && v13 != v6 )
        break;
      if ( (*(_WORD *)(v14 + 42) & 0x2FFF) != 0x29D )
      {
        v13 = (struct tagWND *)*((_QWORD *)v13 + 13);
        if ( v13 )
          continue;
      }
      goto LABEL_12;
    }
    v16 = 0;
  }
  else
  {
LABEL_12:
    v16 = 1;
    v3 = 1LL;
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v13);
  if ( CurrentProcessWin32Process )
  {
    v19 = 0LL;
    if ( !*(_QWORD *)CurrentProcessWin32Process )
      CurrentProcessWin32Process = 0LL;
  }
  if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x200) != 0 )
    DelayedDestroyCacheDC(0LL);
  if ( (v4 & 0x10000) != 0 )
  {
    v20 = v4 & 0xFFFFFFC7;
    v64 = (v7 & 1) == 0;
    v18 = v20;
    v21 = v222;
    if ( v64 )
    {
      v22 = (_QWORD *)*((_QWORD *)v222 + 17);
      v23 = v20 | 0x20;
      v24 = *(_BYTE *)(v22[1] + 8LL);
      if ( v24 >= 0 )
        v23 = v18;
      v25 = v23;
      if ( (v23 & 2) == 0 && (v24 & 0x20) == 0 )
      {
        if ( (v24 & 0x40) != 0 )
        {
          v26 = v22[5];
          if ( v26 )
            v11 = *(_QWORD *)(v26 + 16);
        }
        else
        {
          v25 = v23 | 2;
        }
      }
      v19 = v25 | 8;
      v18 = *(unsigned __int8 *)(*((_QWORD *)v222 + 5) + 31LL);
      if ( (v18 & 2) == 0 )
        v19 = v25;
      v4 = v19 | 0x10;
      if ( (v18 & 4) == 0 )
        v4 = v19;
      if ( (v18 & 0x20) != 0 )
      {
        v4 &= ~8u;
        if ( v22[10] )
          v4 |= 2u;
      }
    }
    else
    {
      v27 = v20 | 0x10;
      if ( (*(_BYTE *)(*((_QWORD *)v222 + 5) + 31LL) & 4) == 0 )
        v27 = v18;
      v4 = v27 | 2;
    }
  }
  else
  {
    v21 = v222;
  }
  if ( (v4 & 0x80000) != 0 )
    v4 = v4 & 0xFFFFFFD5 | 2;
  i = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v19, v18) + 48);
  v29 = *(int (**)(void))(i + 2560);
  if ( v29 && v29() >= 0 )
  {
    i = *(_QWORD *)(W32GetWin32kBaseApiSetTable(i, v30) + 48);
    v32 = *(_QWORD *)(i + 2568);
    if ( v32 )
      v32 = ((__int64 (__fastcall *)(struct tagWND *))v32)(v21);
    v33 = (REGION_CORE *)v32;
    if ( !v32 || (*(_DWORD *)(*(_QWORD *)(v32 + 40) + 24LL) & 0x20000000) == 0 )
      goto LABEL_61;
    i = *(_QWORD *)(W32GetWin32kBaseApiSetTable(i, v31) + 48);
    v34 = *(int (**)(void))(i + 2576);
    if ( v34 && v34() >= 0 )
    {
      RedirectionBitmap = GetRedirectionBitmap(v33);
      if ( RedirectionBitmap )
        goto LABEL_54;
    }
    else
    {
      RedirectionBitmap = 0LL;
    }
    if ( (*(_BYTE *)(*((_QWORD *)v33 + 5) + 26LL) & 0x20) == 0 )
    {
LABEL_61:
      v12 = v221;
      goto LABEL_62;
    }
LABEL_54:
    v4 |= 0x4000u;
    v219 = v33;
    if ( v21 == v33 && (v4 & 0x20) != 0 )
      v4 = v4 & 0xFFFFFFDD | 2;
    if ( (unsigned __int64)v5 > 2 )
    {
      if ( (v4 & 0x40000) != 0 )
      {
        EmptyRgnPublic = (HRGN)CreateEmptyRgnPublic();
        v35 = v5;
        v5 = EmptyRgnPublic;
        GreCombineRgn(EmptyRgnPublic, v35, 0LL, 5);
        v21 = v222;
        v4 &= ~0x40000u;
      }
      GreOffsetRgn(v5, -*(_DWORD *)(*((_QWORD *)v33 + 5) + 88LL), -*(_DWORD *)(*((_QWORD *)v33 + 5) + 92LL));
    }
    goto LABEL_61;
  }
LABEL_62:
  if ( (v4 & 0x20) != 0 )
  {
    v36 = (REGION_CORE *)*((_QWORD *)v21 + 13);
    if ( !v36 )
    {
      v37 = (_QWORD *)PsGetCurrentThreadWin32Thread();
      if ( v37 )
        v37 = (_QWORD *)*v37;
      i = *(_QWORD *)(v37[62] + 8LL);
      v36 = *(REGION_CORE **)(i + 24);
    }
    v4 |= 2u;
    if ( (v4 & 0x18) == 0 )
    {
      v38 = *(_BYTE *)(*((_QWORD *)v36 + 5) + 31LL);
      i = v38;
      LOBYTE(i) = *(_BYTE *)(*((_QWORD *)v21 + 5) + 31LL) ^ v38;
      if ( (i & 0x10) == 0 )
      {
        v4 &= 0xFFFFFFE7;
        v221 = v36;
        v12 = v36;
        if ( (v38 & 4) != 0 )
          v4 |= 0x10u;
      }
    }
  }
  if ( (v4 & 2) == 0 )
  {
    if ( !v21 )
      goto LABEL_76;
    v39 = (_QWORD *)PsGetCurrentThreadWin32Thread();
    if ( v39 )
      v39 = (_QWORD *)*v39;
    if ( *((_QWORD **)v21 + 2) != v39 )
LABEL_76:
      v4 |= 2u;
  }
  LODWORD(v225) = v4 & 0x8080441F;
  if ( (v4 & 2) != 0 )
  {
    v52 = v222;
    while ( 1 )
    {
      v40 = *(__int64 **)(*(_QWORD *)(W32GetUserSessionState(i) + 57008) + 24LL);
      for ( i = *(_QWORD *)(W32GetUserSessionState(v53) + 57008) + 24LL;
            v40 != (__int64 *)i;
            i = *(_QWORD *)(W32GetUserSessionState(i) + 57008) + 24LL )
      {
        if ( (REGION_CORE *)v40[11] == v12 && (REGION_CORE *)v40[12] == v219 && !v40[9] )
        {
          v54 = v40[2];
          v229 = *(_QWORD *)(W32GetSessionState(i) + 88);
          v230 = 0LL;
          v227 = 0LL;
          v228 = 0;
          v231 = 0;
          v232 = 0LL;
          v233 = 0LL;
          PushThreadGuardedObject(
            &v232,
            (__int64)&v227,
            (__int64)UnexpectedThreadTerminationHandler<DCOBJA>::OnUnexpectedThreadTerminationStatic);
          v55 = (struct REGION_CORE *)HmgShareLockEx(v54, 1, 0);
          v227 = v55;
          if ( !v55 )
          {
            DCOBJA::~DCOBJA((DCOBJA *)&v227);
LABEL_117:
            v45 = *((unsigned int *)v40 + 12);
            if ( (_DWORD)v225 == (v40[6] & 0x80C05C1F)
              && ((*(_BYTE *)(*((_QWORD *)v12 + 5) + 31LL) & 0x20) == 0 || v40[10] == v40[11])
              && (!v3 || (v45 & 0x10000000) == 0) )
            {
              LODWORD(v45) = v45 | 0x1000;
              v46 = v222;
              *((_DWORD *)v40 + 12) = v45;
              if ( v52 != (struct tagWND *)v40[10] )
              {
                v65 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(i, v45) + 48) + 2656LL);
                if ( v65 && v65() >= 0 )
                  SpbCheckDce(v40);
                tagDCE::SetPwndOrg((tagDCE *)v40, v52);
                ResetOrg(0LL, (struct tagDCE *)v40, 0);
              }
              v51 = v219;
              goto LABEL_144;
            }
            goto LABEL_122;
          }
          v56 = *((_DWORD *)v55 + 10);
          DCOBJA::~DCOBJA((DCOBJA *)&v227);
          if ( (v56 & 1) == 0 )
            goto LABEL_117;
        }
LABEL_122:
        v40 = (__int64 *)*v40;
      }
      v40 = 0LL;
      v57 = *(_QWORD *)(W32GetUserSessionState(i) + 57008);
      v58 = *(__int64 **)(v57 + 24);
      v59 = *(_QWORD *)(W32GetUserSessionState(v57) + 57008) + 24LL;
      if ( v58 != (__int64 *)v59 )
        break;
LABEL_134:
      i = *(_QWORD *)(W32GetUserSessionState(v59) + 57008) + 24LL;
      v64 = v58 == (__int64 *)i;
      if ( v58 != (__int64 *)i )
        goto LABEL_161;
      if ( v40 )
      {
        v64 = v58 == (__int64 *)i;
LABEL_161:
        v51 = v219;
        if ( !v64 )
          v40 = v58;
        v12 = v221;
        v46 = v222;
        goto LABEL_164;
      }
      if ( !CreateCacheDC(v222, v4 & 0x4000 | 0x802, 0LL) )
        goto LABEL_367;
      v12 = v221;
    }
    while ( 1 )
    {
      if ( (v58[6] & 0x400002) == 2 )
      {
        v60 = v58[2];
        v254 = *(_QWORD *)(W32GetSessionState(v59) + 88);
        v255 = 0LL;
        v252 = 0LL;
        v253 = 0;
        v256 = 0;
        memset(v257, 0, sizeof(v257));
        PushThreadGuardedObject(
          v257,
          (__int64)&v252,
          (__int64)UnexpectedThreadTerminationHandler<DCOBJA>::OnUnexpectedThreadTerminationStatic);
        v61 = HmgShareLockEx(v60, 1, 0);
        v252 = v61;
        if ( !v61 )
        {
          DCOBJA::~DCOBJA((DCOBJA *)&v252);
LABEL_129:
          if ( !v58[9] )
          {
            v63 = *((_DWORD *)v58 + 12);
            if ( (v63 & 0x800) != 0 )
              goto LABEL_134;
            if ( (v63 & 0x1000) == 0 )
              v40 = v58;
          }
          goto LABEL_133;
        }
        v62 = *(_DWORD *)(v61 + 40);
        DCOBJA::~DCOBJA((DCOBJA *)&v252);
        if ( (v62 & 1) == 0 )
          goto LABEL_129;
      }
LABEL_133:
      v58 = (__int64 *)*v58;
      v59 = *(_QWORD *)(W32GetUserSessionState(v59) + 57008) + 24LL;
      if ( v58 == (__int64 *)v59 )
        goto LABEL_134;
    }
  }
  v40 = *(__int64 **)(*(_QWORD *)(W32GetUserSessionState(i) + 57008) + 24LL);
  i = *(_QWORD *)(W32GetUserSessionState(v41) + 57008) + 24LL;
  if ( v40 == (__int64 *)i )
    goto LABEL_367;
  while ( 1 )
  {
    if ( (v40[6] & 0x400002) != 0 )
      goto LABEL_86;
    v42 = v40[2];
    v229 = *(_QWORD *)(W32GetSessionState(i) + 88);
    v230 = 0LL;
    v227 = 0LL;
    v228 = 0;
    v231 = 0;
    v232 = 0LL;
    v233 = 0LL;
    PushThreadGuardedObject(
      &v232,
      (__int64)&v227,
      (__int64)UnexpectedThreadTerminationHandler<DCOBJA>::OnUnexpectedThreadTerminationStatic);
    v43 = (struct REGION_CORE *)HmgShareLockEx(v42, 1, 0);
    v227 = v43;
    if ( !v43 )
      break;
    v44 = *((_DWORD *)v43 + 10);
    DCOBJA::~DCOBJA((DCOBJA *)&v227);
    if ( (v44 & 1) == 0 )
      goto LABEL_84;
LABEL_86:
    v40 = (__int64 *)*v40;
    i = *(_QWORD *)(W32GetUserSessionState(i) + 57008) + 24LL;
    if ( v40 == (__int64 *)i )
      goto LABEL_367;
  }
  DCOBJA::~DCOBJA((DCOBJA *)&v227);
LABEL_84:
  v46 = v222;
  if ( (struct tagWND *)v40[10] != v222 && v40[2] != v11 )
    goto LABEL_86;
  if ( v40[5] )
  {
    if ( (v4 & 0xC0) != 0 )
    {
      i = *(_QWORD *)(W32GetWin32kBaseApiSetTable(i, v45) + 48);
      v47 = *(int (**)(void))(i + 2624);
      if ( v47 )
      {
        if ( v47() >= 0 )
          DeleteHrgnClip(v40);
      }
    }
  }
  if ( (v40[6] & 0x4000) != 0 )
  {
    v48 = *(_QWORD *)(v40[12] + 40);
    if ( (*(_BYTE *)(v48 + 27) & 2) != 0 )
    {
      v48 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v48, v45) + 48);
      v49 = *(int (**)(void))(v48 + 2640);
      if ( v49 )
      {
        if ( v49() >= 0 )
          FlushWEFCOMPOSITEDDCEBounds(v40);
      }
    }
    i = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v48, v45) + 24);
    v50 = *(int (**)(void))(i + 2584);
    if ( v50 && v50() >= 0 )
      GreSelectRedirectionBitmap(v40[2], 0LL);
  }
  v51 = v219;
  if ( (struct tagWND *)v40[10] == v222 && (REGION_CORE *)v40[12] == v219 && (REGION_CORE *)v40[11] == v12 )
  {
    if ( v16 )
    {
      i = *((unsigned int *)v40 + 12);
      if ( ((v4 ^ *((_DWORD *)v40 + 12)) & 0x4000) == 0 && (i & 0x10000000) == 0 )
        goto LABEL_144;
    }
  }
  do
  {
LABEL_164:
    v64 = (v40[6] & 0x800) == 0;
    v224 = 1;
    if ( v64 )
    {
      v80 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(i, v45) + 48) + 2656LL);
      if ( v80 )
      {
        if ( v80() >= 0 )
        {
          v83 = *(void (__fastcall **)(__int64 *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v82, v81) + 48) + 2664LL);
          if ( v83 )
            v83(v40);
        }
      }
    }
    v84 = (unsigned int)v225;
    v85 = (HDC)v40[2];
    *((_DWORD *)v40 + 12) = (unsigned int)v225 | 0x1000;
    GreValidateVisrgn(v85, 0);
    v226[0] = 0LL;
    v88 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v87, v86) + 48) + 2592LL);
    if ( !v88
      || v88() < 0
      || (v91 = *(unsigned int (__fastcall **)(HRGN *, struct tagWND *, REGION_CORE *, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v90, v89) + 48)
                                                                                              + 2600LL)) == 0LL
      || !v91(v226, v46, v12, v84) )
    {
      *((_DWORD *)v40 + 12) |= 0x10000000u;
    }
    v40[10] = (__int64)v46;
    v92 = (char *)(v40 + 13);
    v93 = (char *)v46 + 320;
    if ( !v46 )
      v93 = 0LL;
    v94 = *(char **)v92;
    if ( *(char **)v92 != v92 )
    {
      if ( *((char **)v94 + 1) != v92 )
        goto LABEL_368;
      v95 = (char **)v40[14];
      if ( *v95 != v92 )
        goto LABEL_368;
      *v95 = v94;
      *((_QWORD *)v94 + 1) = v95;
    }
    if ( v93 )
    {
      v96 = (char **)*((_QWORD *)v93 + 1);
      if ( *v96 != v93 )
        goto LABEL_368;
      *(_QWORD *)v92 = v93;
      v40[14] = (__int64)v96;
      *v96 = v92;
      *((_QWORD *)v93 + 1) = v92;
    }
    else
    {
      v40[14] = (__int64)(v40 + 13);
      *(_QWORD *)v92 = v92;
    }
    v40[11] = (__int64)v12;
    v97 = (char *)(v40 + 15);
    v98 = (char *)v12 + 336;
    if ( !v12 )
      v98 = 0LL;
    v99 = *(char **)v97;
    if ( *(char **)v97 != v97 )
    {
      if ( *((char **)v99 + 1) != v97 )
        goto LABEL_368;
      v100 = (char **)v40[16];
      if ( *v100 != v97 )
        goto LABEL_368;
      *v100 = v99;
      *((_QWORD *)v99 + 1) = v100;
    }
    if ( v98 )
    {
      v101 = (char **)*((_QWORD *)v98 + 1);
      if ( *v101 != v98 )
        goto LABEL_368;
      *(_QWORD *)v97 = v98;
      v40[16] = (__int64)v101;
      *v101 = v97;
      *((_QWORD *)v98 + 1) = v97;
    }
    else
    {
      v40[16] = (__int64)(v40 + 15);
      *(_QWORD *)v97 = v97;
    }
    v40[12] = (__int64)v51;
    v102 = (char *)(v40 + 17);
    v103 = (char *)v51 + 352;
    if ( !v51 )
      v103 = 0LL;
    v104 = *(char **)v102;
    if ( *(char **)v102 != v102 )
    {
      if ( *((char **)v104 + 1) != v102 )
        goto LABEL_368;
      v105 = (char **)v40[18];
      if ( *v105 != v102 )
        goto LABEL_368;
      *v105 = v104;
      *((_QWORD *)v104 + 1) = v105;
    }
    if ( v103 )
    {
      v106 = (char **)*((_QWORD *)v103 + 1);
      if ( *v106 != v103 )
        goto LABEL_368;
      *(_QWORD *)v102 = v103;
      v40[18] = (__int64)v106;
      *v106 = v102;
      *((_QWORD *)v103 + 1) = v102;
    }
    else
    {
      v40[18] = (__int64)(v40 + 17);
      *(_QWORD *)v102 = v102;
    }
    v40[3] = 0LL;
    v40[4] = 0LL;
    ResetOrg(v226[0], (struct tagDCE *)v40, 1);
    v107 = v223;
    if ( !v226[0] )
      v107 = 1;
    v223 = v107;
LABEL_144:
    ;
  }
  while ( ((*((_DWORD *)v40 + 12) ^ v4) & 0x8080441F) != 0 );
  v66 = *(__int64 ***)(W32GetUserSessionState(i) + 57008);
  if ( v66[3] != v40 )
  {
    v67 = (__int64 *)*v40;
    if ( (__int64 *)*v40 == v40 )
      goto LABEL_150;
    if ( (__int64 *)v67[1] == v40 )
    {
      v66 = (__int64 **)v40[1];
      if ( *v66 == v40 )
      {
        *v66 = v67;
        v67[1] = (__int64)v66;
LABEL_150:
        v68 = *(_QWORD *)(W32GetUserSessionState(v66) + 57008);
        v69 = *(_QWORD *)(v68 + 24);
        v70 = (__int64 **)(v68 + 24);
        if ( *(__int64 ***)(v69 + 8) == v70 )
        {
          *v40 = v69;
          v40[1] = (__int64)v70;
          *(_QWORD *)(v69 + 8) = v40;
          *v70 = v40;
          goto LABEL_152;
        }
      }
    }
LABEL_368:
    __fastfail(3u);
  }
LABEL_152:
  GreValidateVisrgn((HDC)v40[2], 0);
  if ( (v4 & 0x80u) == 0 )
  {
    if ( (v4 & 0x40) == 0 )
      goto LABEL_328;
    v144 = EmptyRgnPublic;
    if ( !EmptyRgnPublic )
      goto LABEL_328;
    v145 = W32GetUserSessionState(v72);
    LODWORD(v218) = 0;
    GreSetRectRgn(*(HRGN *)(v145 + 43104), 0, 0, 0, v218);
    v262 = 0LL;
    RectRgnIndirect = GreCreateRectRgnIndirect((struct REGION_CORE *)&v262);
    v147 = v40[2];
    v148 = (HRGN)RectRgnIndirect;
    v40[5] = (__int64)RectRgnIndirect;
    v237 = *(_QWORD *)(W32GetSessionState(v149) + 88);
    v238 = 0LL;
    v235 = 0LL;
    v236 = 0;
    v239 = 0;
    v240 = 0LL;
    v241 = 0LL;
    PushThreadGuardedObject(
      &v240,
      (__int64)&v235,
      (__int64)UnexpectedThreadTerminationHandler<DCOBJA>::OnUnexpectedThreadTerminationStatic);
    v235 = (DC *)HmgShareLockEx(v147, 1, 0);
    if ( v235 )
      GreSelectVisRgnInternal(&v235, v148, 4);
    DCOBJA::~DCOBJA((DCOBJA *)&v235);
    v40[3] = (__int64)v144;
    if ( (v4 & 0x40000) != 0 )
      *((_DWORD *)v40 + 12) |= 0x40000u;
    *((_DWORD *)v40 + 12) |= 0x40u;
    if ( v144 == (HRGN)1 )
    {
      v40[4] = 1LL;
LABEL_327:
      *((_DWORD *)v40 + 12) &= ~0x2000u;
      v179 = W32GetUserSessionState(v150);
      GreSelectVisRgnShared((HDC)v40[2], *(_QWORD *)(v179 + 43104), 4u);
      goto LABEL_328;
    }
    v151 = (HRGN)v40[5];
    v152 = W32GetUserSessionState(v150);
    GreCombineRgn(*(HRGN *)(v152 + 43104), v151, v144, 4);
    v262 = 0LL;
    v153 = GreCreateRectRgnIndirect((struct REGION_CORE *)&v262);
    if ( v153 )
    {
      PsGetCurrentProcessId();
      HmgSetOwner((__int64)v153, 0, 4);
    }
    v40[4] = (__int64)v153;
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)&v227, (HRGN)v153, 0, 1);
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)&v252, v144, 1, 0);
    if ( v252 && v227 )
    {
      SystemArgument1 = (__int64 *)WPP_MAIN_CB.Dpc.SystemArgument1;
      if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
      {
        v155 = v252 + 24;
        v156 = (char *)v227 + 24;
        v157 = (char *)WPP_MAIN_CB.Dpc.SystemArgument1 + 8;
        KeEnterCriticalRegion();
        ExAcquirePushLockSharedEx(SystemArgument1 + 1, 2LL);
        v158 = *SystemArgument1;
        v159 = (*(unsigned __int8 (__fastcall **)(char *, __int64))(v158 + 96))(v156, v155);
        if ( !(*(unsigned int (__fastcall **)(char *))(v158 + 216))(v156) )
          DbgkWerCaptureLiveKernelDump(L"GreLKD", 400LL, 64LL, v156, 0LL, 0LL, 0LL, 0LL, 0);
        ExReleasePushLockSharedEx(v157, 2LL);
        KeLeaveCriticalRegion();
        v161 = v159;
        v144 = EmptyRgnPublic;
LABEL_309:
        if ( v161 )
          RGNOBJ::iComplexity((RGNOBJ *)&v227, v160);
        goto LABEL_324;
      }
      v162 = (REGION_CORE *)(v252 + 24);
      v163 = (struct REGION_CORE *)((char *)v227 + 24);
      sizeScan = REGION_CORE::get_sizeScan((REGION_CORE *)(v252 + 24));
      if ( ((unsigned int)REGION_CORE::get_sizeScanAlloc(v163) >= sizeScan
         || (unsigned int)REGION_CORE::get_sizeScanAlloc(v162) <= 0x70)
        && ((unsigned int)REGION_CORE::get_sizeScanAlloc(v163) <= 0x70
         || (unsigned int)REGION_CORE::get_sizeScanAlloc(v162) > 0x70) )
      {
        if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
        {
          v172 = (struct REGION_CORE *)(v252 + 24);
          if ( !v252 )
            v172 = 0LL;
          v173 = (struct REGION_CORE *)((char *)v227 + 24);
          if ( !v227 )
            v173 = 0LL;
          Win32kRS::RegionCore_vCopy(v173, v172, v227);
          RGNOBJ::iComplexity((RGNOBJ *)&v227, v174);
        }
        else
        {
          v175 = (struct REGION_CORE *)((char *)v227 + 24);
          if ( !v227 )
            v175 = 0LL;
          v219 = v175;
          v176 = (HRGN)(v252 + 24);
          if ( !v252 )
            v176 = 0LL;
          EmptyRgnPublic = v176;
          RGNCOREOBJ::vCopy(&v219, (REGION_CORE **)&EmptyRgnPublic);
          RGNOBJ::iComplexity((RGNOBJ *)&v227, v177);
        }
        goto LABEL_324;
      }
      if ( (unsigned int)REGION_CORE::get_sizeScan(v162) <= 0x70 )
        v165 = 112;
      else
        v165 = REGION_CORE::get_sizeScan(v162);
      EmptyRgnPublic = 0LL;
      RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&EmptyRgnPublic, v165);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&EmptyRgnPublic);
      if ( EmptyRgnPublic )
      {
        if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
        {
          v167 = (struct REGION_CORE *)(v252 + 24);
          if ( !v252 )
            v167 = 0LL;
          Win32kRS::RegionCore_vCopy((Win32kRS *)(EmptyRgnPublic + 6), v167, v166);
        }
        else
        {
          v221 = (REGION_CORE *)(EmptyRgnPublic + 6);
          v168 = (REGION_CORE *)(v252 + 24);
          if ( !v252 )
            v168 = 0LL;
          v219 = v168;
          RGNCOREOBJ::vCopy(&v221, &v219);
        }
        v161 = RGNOBJAPI::bSwap((RGNOBJAPI *)&v227, (struct RGNOBJ *)&EmptyRgnPublic);
        if ( EmptyRgnPublic )
        {
          v169 = EmptyRgnPublic + 20;
          if ( EmptyRgnPublic != (HRGN)-80LL )
          {
            v170 = *(HRGN *)v169;
            if ( *(HRGN *)(*(_QWORD *)v169 + 8LL) != v169 )
              goto LABEL_368;
            v171 = (HRGN *)*((_QWORD *)EmptyRgnPublic + 11);
            if ( *v171 != v169 )
              goto LABEL_368;
            *v171 = v170;
            *((_QWORD *)v170 + 1) = v171;
            *((_QWORD *)v169 + 1) = v169;
            *(_QWORD *)v169 = v169;
          }
        }
        RGNOBJ::vDeleteRGNOBJ((ULONG_PTR *)&EmptyRgnPublic);
        goto LABEL_309;
      }
      RGNOBJ::vDeleteRGNOBJ((ULONG_PTR *)&EmptyRgnPublic);
    }
    else
    {
      EngSetLastError(6u);
    }
LABEL_324:
    RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)&v252);
    RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)&v227);
    if ( (unsigned __int64)v144 > 2 && (v40[6] & 0x40000) == 0 )
    {
      PsGetCurrentProcessId();
      LOBYTE(v178) = 4;
      HmgMarkUndeletable(v144, v178);
    }
    goto LABEL_327;
  }
  v73 = EmptyRgnPublic;
  if ( EmptyRgnPublic == (HRGN)1 )
    goto LABEL_328;
  v74 = W32GetUserSessionState(v72);
  LODWORD(v218) = 0;
  GreSetRectRgn(*(HRGN *)(v74 + 43104), 0, 0, 0, v218);
  v263 = 0LL;
  v75 = GreCreateRectRgnIndirect((struct REGION_CORE *)&v263);
  v76 = v40[2];
  v77 = (HRGN)v75;
  v40[5] = (__int64)v75;
  v237 = *(_QWORD *)(W32GetSessionState(v78) + 88);
  v238 = 0LL;
  v235 = 0LL;
  v236 = 0;
  v239 = 0;
  v240 = 0LL;
  v241 = 0LL;
  PushThreadGuardedObject(
    &v240,
    (__int64)&v235,
    (__int64)UnexpectedThreadTerminationHandler<DCOBJA>::OnUnexpectedThreadTerminationStatic);
  v235 = (DC *)HmgShareLockEx(v76, 1, 0);
  if ( v235 )
    GreSelectVisRgnInternal(&v235, v77, 4);
  DCOBJA::~DCOBJA((DCOBJA *)&v235);
  v40[3] = (__int64)v73;
  if ( (v4 & 0x40000) != 0 )
    *((_DWORD *)v40 + 12) |= 0x40000u;
  *((_DWORD *)v40 + 12) |= 0x80u;
  if ( !v73 )
  {
    v40[4] = 0LL;
    goto LABEL_255;
  }
  v108 = (HRGN)v40[5];
  v109 = W32GetUserSessionState(v79);
  GreCombineRgn(*(HRGN *)(v109 + 43104), v108, v73, 1);
  v262 = 0LL;
  v110 = GreCreateRectRgnIndirect((struct REGION_CORE *)&v262);
  if ( v110 )
  {
    PsGetCurrentProcessId();
    HmgSetOwner((__int64)v110, 0, 4);
  }
  v40[4] = (__int64)v110;
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)&v258, (HRGN)v110, 0, 1);
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)&v248, v73, 1, 0);
  if ( !v248 || !v258 )
  {
    EngSetLastError(6u);
    goto LABEL_238;
  }
  v111 = (__int64 *)WPP_MAIN_CB.Dpc.SystemArgument1;
  if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
  {
    v112 = (char *)v248 + 24;
    v113 = (char *)v258 + 24;
    v114 = (char *)WPP_MAIN_CB.Dpc.SystemArgument1 + 8;
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v111 + 1, 2LL);
    v115 = *v111;
    v116 = (*(unsigned __int8 (__fastcall **)(char *, char *))(v115 + 96))(v113, v112);
    if ( !(*(unsigned int (__fastcall **)(char *))(v115 + 216))(v113) )
      DbgkWerCaptureLiveKernelDump(L"GreLKD", 400LL, 64LL, v113, 0LL, 0LL, 0LL, 0LL, 0);
    ExReleasePushLockSharedEx(v114, 2LL);
    KeLeaveCriticalRegion();
    v118 = v116;
    goto LABEL_236;
  }
  v119 = (OBJECT *)((char *)v248 + 24);
  v120 = (OBJECT *)((char *)v258 + 24);
  v121 = REGION_CORE::get_sizeScan((OBJECT *)((char *)v248 + 24));
  if ( ((unsigned int)REGION_CORE::get_sizeScanAlloc(v120) >= v121
     || (unsigned int)REGION_CORE::get_sizeScanAlloc(v119) <= 0x70)
    && ((unsigned int)REGION_CORE::get_sizeScanAlloc(v120) <= 0x70
     || (unsigned int)REGION_CORE::get_sizeScanAlloc(v119) > 0x70) )
  {
    if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
    {
      v139 = (OBJECT *)((char *)v248 + 24);
      if ( !v248 )
        v139 = 0LL;
      v140 = (OBJECT *)((char *)v258 + 24);
      if ( !v258 )
        v140 = 0LL;
      Win32kRS::RegionCore_vCopy(v140, v139, v258);
      RGNOBJ::iComplexity((RGNOBJ *)&v258, v141);
      goto LABEL_237;
    }
    v142 = (OBJECT *)((char *)v258 + 24);
    if ( !v258 )
      v142 = 0LL;
    v221 = v142;
    v143 = (OBJECT *)((char *)v248 + 24);
    if ( !v248 )
      v143 = 0LL;
    v219 = v143;
    RGNCOREOBJ::vCopy(&v221, &v219);
LABEL_270:
    RGNOBJ::iComplexity((RGNOBJ *)&v258, v117);
    goto LABEL_237;
  }
  if ( (unsigned int)REGION_CORE::get_sizeScan(v119) <= 0x70 )
    v122 = 112;
  else
    v122 = REGION_CORE::get_sizeScan(v119);
  v219 = 0LL;
  RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v219, v122);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v219);
  if ( !v219 )
  {
    RGNOBJ::vDeleteRGNOBJ((ULONG_PTR *)&v219);
    goto LABEL_237;
  }
  if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
  {
    v124 = (OBJECT *)((char *)v248 + 24);
    if ( !v248 )
      v124 = 0LL;
    Win32kRS::RegionCore_vCopy((REGION_CORE *)((char *)v219 + 24), v124, v123);
  }
  else
  {
    v225 = (REGION_CORE *)((char *)v219 + 24);
    v125 = (OBJECT *)((char *)v248 + 24);
    if ( !v248 )
      v125 = 0LL;
    v221 = v125;
    RGNCOREOBJ::vCopy(&v225, &v221);
  }
  v118 = RGNOBJAPI::bSwap((RGNOBJAPI *)&v258, (struct RGNOBJ *)&v219);
  if ( v219 )
  {
    v126 = (_QWORD *)((char *)v219 + 80);
    if ( v219 != (REGION_CORE *)-80LL )
    {
      v127 = *v126;
      if ( *(_QWORD **)(*v126 + 8LL) != v126 )
        goto LABEL_368;
      v128 = (_QWORD *)*((_QWORD *)v219 + 11);
      if ( (_QWORD *)*v128 != v126 )
        goto LABEL_368;
      *v128 = v127;
      *(_QWORD *)(v127 + 8) = v128;
      v126[1] = v126;
      *v126 = v126;
    }
  }
  RGNOBJ::vDeleteRGNOBJ((ULONG_PTR *)&v219);
LABEL_236:
  if ( v118 )
    goto LABEL_270;
LABEL_237:
  v73 = EmptyRgnPublic;
LABEL_238:
  if ( !v251 )
    RGNOBJ::UpdateUserRgn((RGNOBJ *)&v248);
  v129 = v248;
  if ( v248 )
  {
    _InterlockedDecrement((volatile signed __int32 *)v248 + 3);
    if ( *((_WORD *)v129 + 6) == 0xFFFF )
      OBJECT::ReportOverflow(v129, 3u);
  }
  v130 = v249;
  v131 = v250;
  if ( *(__int64 **)(v249 + 8) != &v249 || (__int64 *)*v250 != &v249 )
    goto LABEL_368;
  *v250 = v249;
  *(_QWORD *)(v130 + 8) = v131;
  v250 = &v249;
  v249 = (__int64)&v249;
  if ( !v261 )
    RGNOBJ::UpdateUserRgn((RGNOBJ *)&v258);
  v132 = v258;
  if ( v258 )
  {
    _InterlockedDecrement((volatile signed __int32 *)v258 + 3);
    if ( *((_WORD *)v132 + 6) == 0xFFFF )
      OBJECT::ReportOverflow(v132, 3u);
  }
  v79 = v259;
  v133 = v260;
  if ( *(__int64 **)(v259 + 8) != &v259 || *v260 != &v259 )
    goto LABEL_368;
  *v260 = (_QWORD *)v259;
  *(_QWORD *)(v79 + 8) = v133;
  if ( (unsigned __int64)v73 > 2 && (v40[6] & 0x40000) == 0 )
  {
    PsGetCurrentProcessId();
    LOBYTE(v134) = 4;
    HmgMarkUndeletable(v73, v134);
  }
LABEL_255:
  *((_DWORD *)v40 + 12) &= ~0x2000u;
  v135 = W32GetUserSessionState(v79);
  v136 = v40[2];
  v137 = *(HRGN *)(v135 + 43104);
  v229 = *(_QWORD *)(W32GetSessionState(v138) + 88);
  v230 = 0LL;
  v227 = 0LL;
  v228 = 0;
  v231 = 0;
  v232 = 0LL;
  v233 = 0LL;
  PushThreadGuardedObject(
    &v232,
    (__int64)&v227,
    (__int64)UnexpectedThreadTerminationHandler<DCOBJA>::OnUnexpectedThreadTerminationStatic);
  v227 = (struct REGION_CORE *)HmgShareLockEx(v136, 1, 0);
  if ( v227 )
    GreSelectVisRgnInternal(&v227, v137, 4);
  DCOBJA::~DCOBJA((DCOBJA *)&v227);
LABEL_328:
  if ( (v40[6] & 0x4000) != 0 )
  {
    v180 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v72, v71) + 24) + 2584LL);
    if ( v180 )
    {
      if ( v180() >= 0 )
      {
        v183 = v40[2];
        v184 = *(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v182, v181) + 24)
                                                               + 2592LL);
        if ( !v184 || !v184(v183, RedirectionBitmap) )
        {
          GreGetBounds((HDC)v40[2], 0LL, 5);
          goto LABEL_335;
        }
      }
    }
    GreGetBounds((HDC)v40[2], 0LL, 5);
    if ( v223 )
    {
LABEL_335:
      DCOBJA::DCOBJA((DCOBJA *)&v235, (HDC)v40[2]);
      if ( v235 )
        GreSelectVisRgnInternal(&v235, 0LL, 1);
      DCOBJA::~DCOBJA((DCOBJA *)&v235);
    }
  }
  if ( (v40[6] & 2) != 0 )
  {
    v185 = (struct HOBJ__ *)v40[2];
    SessionState = W32GetSessionState(v72);
    if ( GreSetDCOwnerExFastOpt(*(struct Gre::Base::SESSION_GLOBALS **)(SessionState + 88), v185, 0x80000002, 0, 0) )
    {
      v187 = (__int64 *)PsGetCurrentThreadWin32Thread();
      if ( v187 )
        v188 = *v187;
      else
        v188 = 0LL;
      v40[7] = v188;
      v40[8] = 0LL;
      v189 = W32GetUserSessionState(v188);
      --*(_DWORD *)(v189 + 19716);
      v190 = v40[7];
      if ( v190 )
        v191 = *(_QWORD *)(v190 + 464);
      else
        v191 = v40[8];
      UpdateDCEInUseCount(1LL, v191);
      if ( v224 )
      {
        v194 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v193, v192) + 24) + 2600LL);
        if ( v194 )
        {
          if ( v194() >= 0 )
          {
            StockObject = GreGetStockObject(13LL);
            v196 = v40[2];
            v197 = StockObject;
            v200 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v199, v198) + 24)
                                                           + 2608LL);
            if ( v200 )
              v200(v196, v197);
          }
        }
      }
      goto LABEL_352;
    }
    *((_DWORD *)v40 + 12) &= ~0x1000u;
    DestroyCacheDC(v40);
LABEL_367:
    v211 = W32GetUserSessionState(i);
    GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v211 + 57008) + 48LL));
    return 0LL;
  }
  else
  {
LABEL_352:
    v201 = v222;
    if ( (*(_BYTE *)(*((_QWORD *)v222 + 5) + 26LL) & 0x40) != 0 && (v4 & 0x40000000) == 0 )
    {
      APIDCOBJ::APIDCOBJ((APIDCOBJ *)v242, (HDC)v40[2]);
      if ( v242[0] )
        DC::dwSetLayout(v242[0], -1, 1);
      if ( v247 )
        XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v242);
      v202 = v245;
      v242[0] = 0LL;
      v203 = v246;
      if ( *(__int64 **)(v245 + 8) != &v245 )
        goto LABEL_368;
      if ( (__int64 *)*v246 != &v245 )
        goto LABEL_368;
      *v246 = v245;
      *(_QWORD *)(v202 + 8) = v203;
      v246 = &v245;
      v245 = (__int64)&v245;
      XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v242);
      v204 = v243;
      v205 = v244;
      if ( *(__int64 **)(v243 + 8) != &v243 || *v244 != &v243 )
        goto LABEL_368;
      *v244 = (_QWORD *)v243;
      *(_QWORD *)(v204 + 8) = v205;
    }
    GreValidateVisrgn((HDC)v40[2], 1);
    v209 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v207, v206) + 24);
    v210 = *(int (**)(void))(v209 + 2616);
    if ( v210 && v210() >= 0 )
      GreHintDCWnd(v40[2], *(_QWORD *)v201, 0, 0, 0);
    if ( v51 )
    {
      if ( (*(_BYTE *)(*((_QWORD *)v51 + 5) + 26LL) & 8) != 0 )
      {
        v209 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v209, v208) + 24);
        v213 = *(int (**)(void))(v209 + 2616);
        if ( v213 )
        {
          if ( v213() >= 0 )
            GreHintDCWnd(
              v40[2],
              *(_QWORD *)v201,
              *(_QWORD *)v51,
              ((unsigned __int8)~*(_BYTE *)(*((_QWORD *)v51 + 5) + 27LL) >> 1) & 1,
              (*(_WORD *)(*((_QWORD *)v51 + 5) + 42LL) & 0x2FFF) == 669);
        }
      }
    }
    if ( *((int *)v40 + 12) < 0 )
    {
      v214 = PsGetCurrentProcessWin32Process(v209);
      if ( v214 && !*(_QWORD *)v214 )
        v214 = 0LL;
      *(_DWORD *)(v214 + 12) |= 0x200u;
      v40[7] = 0LL;
      v216 = (_QWORD *)PsGetCurrentProcessWin32Process(v215);
      if ( v216 )
      {
        if ( !*v216 )
          v216 = 0LL;
      }
      v40[8] = (__int64)v216;
      UpdateDCEInUseCount(1LL, v216);
    }
    v217 = W32GetUserSessionState(v209);
    GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v217 + 57008) + 48LL));
    return v40[2];
  }
}
