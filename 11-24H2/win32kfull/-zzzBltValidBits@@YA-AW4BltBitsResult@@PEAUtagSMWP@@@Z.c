/*
 * XREFs of ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x14022C6A8
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x140076014 (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     GreBitBltInternal @ 0x14001970C (GreBitBltInternal.c)
 *     DeleteOldRedirectionBitmap @ 0x14002D554 (DeleteOldRedirectionBitmap.c)
 *     GetOldRedirectionBitmap @ 0x14002D5AC (GetOldRedirectionBitmap.c)
 *     SpbCheck @ 0x14002D9F4 (SpbCheck.c)
 *     GetStyleWindow @ 0x14002F5E0 (GetStyleWindow.c)
 *     ?IsThreadDesktopComposed@@YAHPEBUtagTHREADINFO@@@Z @ 0x140031030 (-IsThreadDesktopComposed@@YAHPEBUtagTHREADINFO@@@Z.c)
 *     UpdateSpriteArea @ 0x14003A40C (UpdateSpriteArea.c)
 *     xxxInternalInvalidate @ 0x1400428C0 (xxxInternalInvalidate.c)
 *     PhysicalToLogicalInPlaceRgn @ 0x1400435E0 (PhysicalToLogicalInPlaceRgn.c)
 *     ?SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1400463C0 (-SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     _GetDesktopWindow @ 0x140046470 (_GetDesktopWindow.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x14005F724 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x140061FD0 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     GetRedirectionBitmap @ 0x140063BA0 (GetRedirectionBitmap.c)
 *     HMValidateHandleNoSecure @ 0x14008CDA0 (HMValidateHandleNoSecure.c)
 *     ?zzzEndDeferWinEventNotify@@YAXXZ @ 0x140092FE8 (-zzzEndDeferWinEventNotify@@YAXXZ.c)
 *     SpbCheckRect @ 0x140097868 (SpbCheckRect.c)
 *     FreeSpb @ 0x1400979B0 (FreeSpb.c)
 *     GreHintDCWnd @ 0x1400CDA90 (GreHintDCWnd.c)
 *     GreRedrawSpriteOverlapPresent @ 0x1400D4F5C (GreRedrawSpriteOverlapPresent.c)
 *     UnionRect @ 0x140156E48 (UnionRect.c)
 *     ?BltValidInit@@YAHPEAUtagSMWP@@@Z @ 0x140171754 (-BltValidInit@@YAHPEAUtagSMWP@@@Z.c)
 *     ?IsStillWindowC@@YAHPEAUHWND__@@@Z @ 0x1401719B4 (-IsStillWindowC@@YAHPEAUHWND__@@@Z.c)
 *     LogicalToPhysicalInPlaceRgnWorker @ 0x14019E0E8 (LogicalToPhysicalInPlaceRgnWorker.c)
 *     ?CombineOldNewVis@@YAHPEAUHRGN__@@00II@Z @ 0x1401BED10 (-CombineOldNewVis@@YAHPEAUHRGN__@@00II@Z.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x14022D690 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x14026F748 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     FindSpb @ 0x1402AF418 (FindSpb.c)
 *     RestoreSpb @ 0x1402AF460 (RestoreSpb.c)
 *     GreClientRgnDone @ 0x140301574 (GreClientRgnDone.c)
 *     GreUnlockDisplayArea @ 0x14032EDE0 (GreUnlockDisplayArea.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall zzzBltValidBits(__int64 a1, __int64 a2)
{
  unsigned int v2; // r12d
  __int64 v3; // r15
  __int64 UserSessionState; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // r14
  int v12; // esi
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rdi
  struct tagWND *v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // r14d
  __int64 v20; // rdx
  __int64 v21; // rcx
  struct tagTHREADINFO *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // edi
  __int64 v26; // rbx
  __m128i v27; // xmm0
  int v28; // ecx
  int v29; // edx
  char v30; // bl
  unsigned int v31; // edi
  unsigned int v32; // r12d
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 *v37; // r13
  HRGN v38; // rdx
  int v39; // eax
  __int64 v40; // rax
  __int64 v41; // rcx
  int v42; // r14d
  __int64 v43; // rsi
  __int64 RedirectionBitmap; // rax
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // rcx
  int v50; // r15d
  int v51; // r12d
  int v52; // edi
  int v53; // ebx
  __int64 v54; // rax
  __int64 v55; // rdi
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rbx
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // rax
  __int64 v62; // rdi
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rbx
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // rax
  unsigned int v69; // edi
  unsigned int v70; // ebx
  __int64 v71; // rax
  __int64 v72; // r15
  __int64 v73; // r8
  __int64 v74; // rax
  HRGN v75; // rdi
  int v76; // eax
  int v77; // r12d
  __int64 v78; // rbx
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // rax
  unsigned int v82; // ebx
  __int64 v83; // rdi
  __int64 v84; // rbx
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // rax
  __int64 v88; // rdi
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // rbx
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // rax
  struct tagWND *StyleWindow; // rax
  struct tagWND *v96; // rbx
  HDC v97; // rdi
  __int64 OldRedirectionBitmap; // r15
  int v99; // r12d
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // rax
  HDC v107; // r9
  __int64 v108; // rax
  HRGN v109; // rdi
  HRGN v110; // rbx
  __int64 v111; // rdx
  __int64 v112; // rcx
  __int64 v113; // rax
  __int64 v114; // rax
  int v115; // eax
  __int64 v116; // rcx
  __int64 v117; // rax
  int v118; // r12d
  int v119; // esi
  int v120; // r15d
  __int64 v121; // rdi
  __int64 v122; // rdx
  __int64 v123; // rcx
  HDC v124; // rbx
  __int64 v125; // rdx
  __int64 v126; // rcx
  __int64 v127; // rax
  HDC v128; // rbx
  __int64 v129; // rdx
  __int64 v130; // rcx
  __int64 v131; // rax
  __int64 v132; // rdi
  __int64 v133; // rdx
  __int64 v134; // rcx
  __int64 v135; // rbx
  __int64 v136; // rdx
  __int64 v137; // rcx
  __int64 v138; // rax
  __int64 v139; // rdi
  __int64 v140; // rdx
  __int64 v141; // rcx
  __int64 v142; // rbx
  __int64 v143; // rdx
  __int64 v144; // rcx
  __int64 v145; // rax
  __int64 v146; // rdi
  __int64 v147; // rdx
  __int64 v148; // rcx
  __int64 v149; // rbx
  __int64 v150; // rdx
  __int64 v151; // rcx
  __int64 v152; // rax
  __int64 v153; // rdx
  __int64 v154; // rcx
  __int64 v155; // rax
  __int64 v156; // rax
  HRGN v157; // rdi
  HRGN v158; // rbx
  __int64 v159; // rdx
  __int64 v160; // rcx
  __int64 v161; // rax
  __int64 v162; // rax
  __int64 v163; // rdx
  __int64 v164; // rcx
  __int64 v165; // rbx
  __int64 v166; // rax
  __int64 v167; // r9
  __int64 v168; // r8
  __int64 v169; // rdi
  __int64 v170; // rdx
  __int64 v171; // rcx
  __int64 v172; // rdx
  __int64 v173; // rcx
  __int64 v174; // rdi
  __int64 v175; // rbx
  __int64 v176; // rdx
  __int64 v177; // rcx
  __int64 v178; // rax
  int v179; // eax
  char *Spb; // rax
  __int64 v181; // rdx
  int v182; // eax
  __int64 v183; // rdx
  __int64 v184; // rcx
  int v185; // edi
  __int64 v186; // rax
  __int64 v187; // r9
  __int64 v188; // r8
  __int64 v189; // rbx
  __int64 v190; // rdx
  __int64 v191; // rcx
  HRGN v192; // rbx
  __int64 v193; // rax
  __int64 *v194; // rdi
  int v195; // ebx
  __int64 v196; // rdx
  __int64 v197; // rcx
  __int64 v198; // rax
  HDC v199; // rbx
  __int64 v200; // rax
  int v202; // edi
  __int64 *v203; // rbx
  int v204; // [rsp+68h] [rbp-A0h]
  int valid; // [rsp+6Ch] [rbp-9Ch]
  int v206; // [rsp+6Ch] [rbp-9Ch]
  int v207; // [rsp+70h] [rbp-98h]
  char v208; // [rsp+74h] [rbp-94h]
  int v209; // [rsp+74h] [rbp-94h]
  int v210; // [rsp+78h] [rbp-90h]
  HRGN v211; // [rsp+80h] [rbp-88h] BYREF
  int v212; // [rsp+88h] [rbp-80h]
  int v213; // [rsp+8Ch] [rbp-7Ch]
  __int128 v214; // [rsp+98h] [rbp-70h] BYREF
  HDC v215; // [rsp+A8h] [rbp-60h] BYREF
  struct tagWND *v216; // [rsp+B0h] [rbp-58h]
  HDC v217; // [rsp+B8h] [rbp-50h]
  struct tagWND *v218; // [rsp+C0h] [rbp-48h]
  HRGN v219; // [rsp+C8h] [rbp-40h]
  _QWORD v220[3]; // [rsp+D0h] [rbp-38h] BYREF
  __m128i v221; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v222; // [rsp+F8h] [rbp-10h] BYREF
  __int128 v223; // [rsp+108h] [rbp+0h] BYREF

  v220[0] = a1;
  v215 = 0LL;
  v223 = 0LL;
  v2 = 0;
  v3 = a1;
  UserSessionState = W32GetUserSessionState(a1, a2);
  ++*(_DWORD *)(UserSessionState + 70856);
  v7 = W32GetUserSessionState(v6, v5);
  GreLockVisRgn(*(_QWORD *)(*(_QWORD *)(v7 + 57008) + 48LL));
  valid = BltValidInit((struct tagSMWP *)v3, v8);
  if ( !valid )
    goto LABEL_151;
  v11 = 0LL;
  v12 = *(_DWORD *)(v3 + 28) - 1;
  v13 = *(_QWORD *)(v3 + 40);
  if ( v12 < 0 )
    goto LABEL_151;
  do
  {
    LOBYTE(v9) = 1;
    v14 = HMValidateHandleNoSecure(*(_QWORD *)v13, v9);
    v15 = v14;
    if ( v14 && *(_QWORD *)(v14 + 104) && (unsigned int)IsStillWindowC(*(HWND *)(v13 + 8), v9) )
    {
      if ( *(_QWORD *)(v13 + 112) == 2LL
        && ((*(_BYTE *)(*(_QWORD *)(v15 + 40) + 31LL) & 1) == 0 || *(_QWORD *)(v15 + 104) != GetDesktopWindow(v15)) )
      {
        *(_QWORD *)(v13 + 112) = 0LL;
      }
      if ( !v11 )
        v11 = (_QWORD *)v13;
    }
    else
    {
      *(_QWORD *)v13 = 0LL;
      *(_DWORD *)(v13 + 32) = 6159;
    }
    v13 += 168LL;
    --v12;
  }
  while ( v12 >= 0 );
  if ( v11 )
  {
    v16 = *(struct tagWND **)(_HMObjectFromHandle(*v11) + 104);
    v218 = v16;
    if ( *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v18, v17) + 57008) + 40LL) )
      SpbCheck();
    zzzChangeStates(v16, (struct tagSMWP *)v3);
    v19 = 0;
    v210 = 0;
    v22 = PtiCurrent(v21, v20);
    if ( !(unsigned int)IsThreadDesktopComposed(v22) )
    {
      v25 = *(_DWORD *)(v3 + 28) - 1;
      v26 = *(_QWORD *)(v3 + 40);
      if ( v25 >= 0 )
      {
        do
        {
          v24 = *(_QWORD *)v26;
          if ( *(_QWORD *)v26 )
          {
            if ( (*(_DWORD *)(v26 + 32) & 8) == 0 )
            {
              _HMObjectFromHandle(v24);
              v23 = *(unsigned int *)(v26 + 72);
              if ( *(_QWORD *)(v26 + 72) )
              {
                v28 = -*(_DWORD *)(v26 + 76);
                v29 = -(int)v23;
                v214 = *(_OWORD *)(v26 + 56);
                v27 = (__m128i)v214;
                DWORD2(v214) += v29;
                HIDWORD(v214) += v28;
                DWORD1(v214) += v28;
                v221 = v27;
                LODWORD(v214) = v29 + _mm_cvtsi128_si32(v27);
                UnionRect(&v223, v221.m128i_i32, (int *)&v214);
                v19 = 1;
              }
            }
          }
          v26 += 168LL;
          --v25;
        }
        while ( v25 >= 0 );
        v210 = v19;
      }
    }
    v30 = *(_BYTE *)(*((_QWORD *)v16 + 5) + 31LL) & 2;
    v31 = ~((unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)PtiCurrent(v24, v23) + 132, 0, 0) >> 14) & 2;
    v207 = v31;
    zzzLockDisplayAreaAndInvalidateDCCache(
      (__int64)v16,
      v30 != 0 ? 28 : 26,
      (int *)((unsigned __int64)&v223 & -(__int64)(v19 != 0)));
    v32 = 96;
    v204 = 96;
    v35 = W32GetUserSessionState(v34, v33);
    v37 = *(__int64 **)(v3 + 40);
    v38 = *(HRGN *)(v35 + 63352);
    LODWORD(v35) = *(_DWORD *)(v3 + 28) - 1;
    v219 = v38;
    v213 = v35;
    if ( (int)v35 >= 0 )
    {
      v39 = valid;
      v207 = v31;
      while ( 1 )
      {
        v36 = *v37;
        v206 = --v39;
        if ( *v37 )
          break;
LABEL_131:
        v37 += 21;
        if ( --v213 < 0 )
        {
          v3 = v220[0];
          v16 = v218;
          v19 = v210;
          goto LABEL_133;
        }
      }
      if ( (v37[4] & 8) != 0 )
      {
LABEL_130:
        v39 = v206;
        goto LABEL_131;
      }
      _HMObjectFromHandle(v36);
      v207 = v31 | 1;
      v40 = _HMObjectFromHandle(*v37);
      v42 = *((_DWORD *)v37 + 22);
      v43 = v40;
      *(_QWORD *)&v214 = v40;
      v208 = v42;
      if ( (*(_BYTE *)(*(_QWORD *)(v40 + 40) + 26LL) & 8) != 0 )
      {
        RedirectionBitmap = GetRedirectionBitmap(v40, (__int64)v38);
        v41 = *(_QWORD *)(v43 + 40);
        if ( !RedirectionBitmap && (*(_BYTE *)(v41 + 27) & 0x20) == 0
          || (*(_DWORD *)(v41 + 232) & 2) == 0 && (*((_DWORD *)v37 + 39) & 7) == 0 )
        {
          goto LABEL_84;
        }
        *(_DWORD *)(v43 + 380) |= 0x4000u;
      }
      v45 = W32GetUserSessionState(v41, v38);
      if ( !(unsigned int)SwpCalcVisRgn((struct tagWND *)v43, *(HRGN *)(v45 + 63360)) )
      {
        LOBYTE(v42) = v42 | 1;
        v208 = v42;
      }
      v49 = *(_QWORD *)(W32GetUserSessionState(v47, v46) + 57008);
      if ( *(_QWORD *)(v49 + 40) )
        SpbCheckRect((struct tagWND *)v43, (struct tagRECT *)(*(_QWORD *)(v43 + 40) + 88LL));
      if ( (v42 & 3) == 0 && *(_QWORD *)(*(_QWORD *)(v43 + 40) + 136LL) != 1LL )
      {
        v50 = *((_DWORD *)v37 + 16);
        v51 = *((_DWORD *)v37 + 14);
        if ( v50 > v51 )
        {
          v49 = *((unsigned int *)v37 + 15);
          v212 = *((_DWORD *)v37 + 17);
          LODWORD(v211) = v49;
          if ( v212 > (int)v49 )
          {
            v52 = *((_DWORD *)v37 + 19);
            v53 = *((_DWORD *)v37 + 18);
            v54 = W32GetUserSessionState(v49, v48);
            GreSetRectRgn(
              *(_QWORD *)(v54 + 63368),
              (unsigned int)(v51 - v53),
              (unsigned int)((_DWORD)v211 - v52),
              (unsigned int)(v50 - v53),
              v212 - v52);
            v55 = v37[12];
            v58 = *(_QWORD *)(W32GetUserSessionState(v57, v56) + 63368);
            v61 = W32GetUserSessionState(v60, v59);
            if ( (unsigned int)GreCombineRgn(*(_QWORD *)(v61 + 63376), v58, v55, 1LL) >= 2 )
            {
              if ( (v204 & 0x20) != 0
                || (v62 = *(_QWORD *)(W32GetUserSessionState(v49, v48) + 63384),
                    v65 = *(_QWORD *)(W32GetUserSessionState(v64, v63) + 63376),
                    v68 = W32GetUserSessionState(v67, v66),
                    (unsigned int)GreCombineRgn(*(_QWORD *)(v68 + 63376), v65, v62, 4LL) >= 2) )
              {
                v69 = *((_DWORD *)v37 + 18);
                if ( v69 || *((_DWORD *)v37 + 19) )
                {
                  v70 = *((_DWORD *)v37 + 19);
                  v71 = W32GetUserSessionState(v49, v48);
                  GreOffsetRgn(*(_QWORD *)(v71 + 63376), v69, v70);
                }
                v72 = v43;
                v73 = 0LL;
                while ( 1 )
                {
                  v74 = *(_QWORD *)(v72 + 40);
                  v75 = *(HRGN *)(v74 + 136);
                  if ( v75 == (HRGN)1 )
                    break;
                  if ( v75 )
                  {
                    v211 = *(HRGN *)(v74 + 136);
                    if ( v73 )
                    {
                      v76 = PhysicalToLogicalInPlaceRgn(v73, (__int64)&v211);
                      v75 = v211;
                      v77 = v76;
                    }
                    else
                    {
                      v77 = 0;
                    }
                    v78 = *(_QWORD *)(W32GetUserSessionState(v49, v48) + 63376);
                    v81 = W32GetUserSessionState(v80, v79);
                    v82 = GreCombineRgn(*(_QWORD *)(v81 + 63376), v78, v75, 4LL);
                    if ( v77 )
                      GreDeleteObject(v75);
                    if ( v82 < 2 )
                      break;
                    v73 = v72;
                  }
                  v72 = *(_QWORD *)(v72 + 104);
                  if ( !v72 || (*(_BYTE *)(*(_QWORD *)(v72 + 40) + 31LL) & 2) != 0 )
                  {
                    v83 = v37[15];
                    if ( !v83
                      || (v84 = *(_QWORD *)(W32GetUserSessionState(v49, v48) + 63376),
                          v87 = W32GetUserSessionState(v86, v85),
                          (unsigned int)GreCombineRgn(*(_QWORD *)(v87 + 63376), v84, v83, 4LL) >= 2) )
                    {
                      v88 = *(_QWORD *)(W32GetUserSessionState(v49, v48) + 63360);
                      v91 = *(_QWORD *)(W32GetUserSessionState(v90, v89) + 63376);
                      v94 = W32GetUserSessionState(v93, v92);
                      if ( (unsigned int)GreCombineRgn(*(_QWORD *)(v94 + 63376), v91, v88, 1LL) > 1 )
                        goto LABEL_65;
                    }
                    break;
                  }
                }
              }
            }
          }
        }
      }
      LOBYTE(v42) = v42 | 4;
      v208 = v42;
LABEL_65:
      if ( (v42 & 4) == 0 && (*((_DWORD *)v37 + 18) || *((_DWORD *)v37 + 19)) )
      {
        StyleWindow = (struct tagWND *)GetStyleWindow(v43, 2568);
        v216 = StyleWindow;
        v96 = StyleWindow;
        if ( StyleWindow && (v217 = (HDC)GetRedirectionBitmap((__int64)StyleWindow, v48), (v97 = v217) != 0LL) )
        {
          if ( (struct tagWND *)v43 == v96 )
          {
            if ( (*((_DWORD *)v37 + 39) & 1) != 0
              || *((_DWORD *)v37 + 18) != *((_DWORD *)v37 + 4) - *((_DWORD *)v37 + 20)
              || (v49 = (unsigned int)(*((_DWORD *)v37 + 5) - *((_DWORD *)v37 + 21)),
                  *((_DWORD *)v37 + 19) != (_DWORD)v49) )
            {
              OldRedirectionBitmap = GetOldRedirectionBitmap((__int64)v96);
              v99 = -*((_DWORD *)v37 + 19);
              LODWORD(v211) = *((_DWORD *)v37 + 21);
              v212 = *((_DWORD *)v37 + 20);
              v209 = -*((_DWORD *)v37 + 18);
              v216 = *(struct tagWND **)(W32GetUserSessionState(v101, v100) + 63376);
              v217 = *(HDC *)(W32GetUserSessionState(v103, v102) + 43296);
              v106 = W32GetUserSessionState(v105, v104);
              if ( OldRedirectionBitmap )
              {
                v107 = *(HDC *)(v106 + 43288);
              }
              else
              {
                v107 = *(HDC *)(v106 + 43296);
                OldRedirectionBitmap = (__int64)v97;
              }
              UpdateSpriteArea(
                v96,
                (__int64)v97,
                OldRedirectionBitmap,
                v107,
                v217,
                (__int64)v216,
                (__m128i *)(v37 + 7),
                v209,
                v99,
                v212,
                (int)v211);
            }
          }
          else
          {
            v117 = *((_QWORD *)v96 + 5);
            v118 = -*((_DWORD *)v37 + 19);
            v119 = -*((_DWORD *)v37 + 18);
            v42 = *(_DWORD *)(v117 + 92);
            v120 = *(_DWORD *)(v117 + 88);
            v121 = *(_QWORD *)(W32GetUserSessionState(v49, v48) + 63376);
            v124 = *(HDC *)(W32GetUserSessionState(v123, v122) + 43288);
            v127 = W32GetUserSessionState(v126, v125);
            UpdateSpriteArea(
              v216,
              (__int64)v217,
              (__int64)v217,
              *(HDC *)(v127 + 43288),
              v124,
              v121,
              (__m128i *)(v37 + 7),
              v119,
              v118,
              v120,
              v42);
            v43 = v214;
            LOBYTE(v42) = v208;
          }
        }
        else if ( (*(_BYTE *)(*(_QWORD *)(v43 + 40) + 26LL) & 8) == 0 )
        {
          v128 = v215;
          if ( !v215 )
          {
            v128 = *(HDC *)(*(_QWORD *)(W32GetUserSessionState(v49, v48) + 57008) + 64LL);
            v215 = v128;
          }
          GreHintDCWnd(v128, *(_QWORD *)v43, 0LL, 0, 0);
          v131 = W32GetUserSessionState(v130, v129);
          GreSelectVisRgn(v128, *(_QWORD *)(v131 + 63376), 2LL);
          GreBitBltInternal(
            v128,
            *((_DWORD *)v37 + 14),
            *((_DWORD *)v37 + 15),
            *((_DWORD *)v37 + 16) - *((_DWORD *)v37 + 14),
            *((_DWORD *)v37 + 17) - *((_DWORD *)v37 + 15),
            v128,
            *((_DWORD *)v37 + 14) - *((_DWORD *)v37 + 18),
            *((_DWORD *)v37 + 15) - *((_DWORD *)v37 + 19),
            0xCC0020u,
            0,
            1u);
          GreHintDCWnd(v128, 0LL, 0LL, 0, 0);
        }
      }
      if ( *(char *)(*(_QWORD *)(v43 + 40) + 16LL) >= 0
        || (v42 & 2) != 0
        || (v108 = W32GetUserSessionState(v49, v48),
            v109 = (HRGN)v37[12],
            v110 = *(HRGN *)(v108 + 63360),
            v113 = W32GetUserSessionState(v112, v111),
            !CombineOldNewVis(*(HRGN *)(v113 + 63392), v109, v110, 4LL, v42)) )
      {
        if ( v37[12] )
        {
          v156 = W32GetUserSessionState(v49, v48);
          v157 = (HRGN)v37[12];
          v158 = *(HRGN *)(v156 + 63360);
          v161 = W32GetUserSessionState(v160, v159);
          if ( !CombineOldNewVis(*(HRGN *)(v161 + 63392), v157, v158, 2LL, v42) )
            goto LABEL_83;
        }
        else
        {
          v222 = *(_OWORD *)(*((_QWORD *)v218 + 5) + 88LL);
          TransformRectBetweenCoordinateSpaces(&v222, &v222, v43, v218);
          v155 = W32GetUserSessionState(v154, v153);
          SetRectRgnIndirect(*(_QWORD *)(v155 + 63392), &v222);
        }
LABEL_101:
        v32 = v204;
        if ( (v42 & 4) == 0 )
        {
          v162 = W32GetUserSessionState(v116, v38);
          if ( (v204 & 0x20) != 0 )
          {
            v165 = *(_QWORD *)(v162 + 63376);
            v166 = W32GetUserSessionState(v164, v163);
            v167 = 5LL;
            v168 = 0LL;
          }
          else
          {
            v169 = *(_QWORD *)(v162 + 63384);
            v165 = *(_QWORD *)(W32GetUserSessionState(v164, v163) + 63376);
            v166 = W32GetUserSessionState(v171, v170);
            v167 = 2LL;
            v168 = v169;
          }
          GreCombineRgn(*(_QWORD *)(v166 + 63384), v165, v168, v167);
          v32 = v204 & 0xFFFFFFDF;
          v204 &= ~0x20u;
        }
        if ( (v32 & 0x20) != 0 )
        {
          if ( (v42 & 4) != 0 )
            goto LABEL_111;
          v174 = *(_QWORD *)(W32GetUserSessionState(v116, v38) + 63376);
        }
        else
        {
          v174 = *(_QWORD *)(W32GetUserSessionState(v116, v38) + 63384);
        }
        v175 = *(_QWORD *)(W32GetUserSessionState(v173, v172) + 63392);
        v178 = W32GetUserSessionState(v177, v176);
        if ( (unsigned int)GreCombineRgn(*(_QWORD *)(v178 + 63392), v175, v174, 4LL) > 1 )
          goto LABEL_111;
LABEL_84:
        *(_DWORD *)(v43 + 380) &= ~0x4000u;
        LOBYTE(v42) = v42 | 8;
LABEL_111:
        if ( *(char *)(*(_QWORD *)(v43 + 40) + 16LL) < 0 )
        {
          v179 = *((_DWORD *)v37 + 8);
          if ( (v179 & 0x40) == 0 && (v179 & 0x87) != 7 )
          {
            Spb = (char *)FindSpb(v43);
            FreeSpb(Spb, v181);
          }
        }
        v36 = v37[12];
        if ( v36 )
        {
          GreDeleteObject(v36);
          v37[12] = 0LL;
        }
        if ( (v42 & 8) != 0 )
          goto LABEL_129;
        if ( (v42 & 5) == 4 )
        {
          v221.m128i_i8[0] = 0;
          v221.m128i_i64[1] = 0LL;
          AtomicExecutionCheck::Arm((AtomicExecutionCheck *)&v221);
          xxxInternalInvalidate((struct tagWND *)v43, (HRGN)1, 0x485u);
          AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v221);
        }
        v211 = *(HRGN *)(W32GetUserSessionState(v36, v38) + 63392);
        v182 = LogicalToPhysicalInPlaceRgnWorker((const struct tagWND *)v43, &v211, 0LL);
        v185 = v182;
        if ( (v32 & 0x40) != 0 )
        {
          if ( !v206 && !v182 )
          {
            v219 = *(HRGN *)(W32GetUserSessionState(v184, v183) + 63392);
LABEL_128:
            v32 &= ~0x40u;
            v204 = v32;
LABEL_129:
            v31 = v207;
            goto LABEL_130;
          }
          v186 = W32GetUserSessionState(v184, v183);
          v187 = 5LL;
          v188 = 0LL;
        }
        else
        {
          v189 = *(_QWORD *)(W32GetUserSessionState(v184, v183) + 63352);
          v186 = W32GetUserSessionState(v191, v190);
          v187 = 2LL;
          v188 = v189;
        }
        v192 = v211;
        GreCombineRgn(*(_QWORD *)(v186 + 63352), v211, v188, v187);
        if ( v185 )
          GreDeleteObject(v192);
        goto LABEL_128;
      }
      v114 = W32GetUserSessionState(v49, v48);
      v115 = RestoreSpb(v43, *(_QWORD *)(v114 + 63392), &v215);
      if ( v115 )
      {
        if ( v115 == 2 && (v204 & 0x20) == 0 )
        {
          v132 = *(_QWORD *)(W32GetUserSessionState(v116, v38) + 63392);
          v135 = *(_QWORD *)(W32GetUserSessionState(v134, v133) + 63384);
          v138 = W32GetUserSessionState(v137, v136);
          GreCombineRgn(*(_QWORD *)(v138 + 63384), v135, v132, 4LL);
        }
        if ( (v42 & 1) != 0 )
          goto LABEL_95;
      }
      else if ( (v42 & 1) != 0 )
      {
LABEL_83:
        v32 = v204;
        goto LABEL_84;
      }
      v139 = *(_QWORD *)(W32GetUserSessionState(v116, v38) + 63360);
      v142 = *(_QWORD *)(W32GetUserSessionState(v141, v140) + 63392);
      v145 = W32GetUserSessionState(v144, v143);
      GreCombineRgn(*(_QWORD *)(v145 + 63392), v142, v139, 2LL);
LABEL_95:
      if ( (v42 & 0x20) == 0 )
      {
        v146 = *(_QWORD *)(W32GetUserSessionState(v116, v38) + 63392);
        v149 = *(_QWORD *)(W32GetUserSessionState(v148, v147) + 63376);
        v152 = W32GetUserSessionState(v151, v150);
        if ( (unsigned int)GreCombineRgn(*(_QWORD *)(v152 + 63376), v149, v146, 4LL) <= 1 )
          LOBYTE(v42) = v42 | 0x20;
      }
      goto LABEL_101;
    }
LABEL_133:
    if ( v19 )
    {
      v193 = W32GetUserSessionState(v36, v38);
      GreUnlockDisplayArea(*(_QWORD *)(*(_QWORD *)(v193 + 57008) + 48LL), &v223);
    }
    v194 = *(__int64 **)(v3 + 40);
    v195 = *(_DWORD *)(v3 + 28);
    while ( --v195 >= 0 )
    {
      v36 = *v194;
      if ( *v194 )
      {
        v38 = (HRGN)_HMObjectFromHandle(v36);
        if ( (*(_BYTE *)(*((_QWORD *)v38 + 5) + 26LL) & 8) != 0 )
          DeleteOldRedirectionBitmap((__int64)v38);
      }
      v194 += 21;
    }
    if ( (v32 & 0x40) == 0 )
    {
      if ( !*(_DWORD *)(v3 + 28) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5192LL);
      LOBYTE(v220[0]) = 0;
      v220[1] = 0LL;
      AtomicExecutionCheck::Arm((AtomicExecutionCheck *)v220);
      xxxInternalInvalidate(v16, v219, 0x85u);
      AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v220);
    }
    if ( *(_DWORD *)(W32GetUserSessionState(v36, v38) + 43312) )
      GreClientRgnDone();
    v198 = W32GetUserSessionState(v197, v196);
    GreRedrawSpriteOverlapPresent(*(_QWORD *)(*(_QWORD *)(v198 + 57008) + 48LL));
    v199 = v215;
    if ( v215 )
    {
      GreSelectVisRgn(v215, 0LL, 1LL);
      GreGetBounds(v199, 0LL, 0LL);
    }
    v2 = v207;
  }
  else
  {
LABEL_151:
    v202 = *(_DWORD *)(v3 + 28) - 1;
    if ( v202 >= 0 )
    {
      v203 = (__int64 *)(*(_QWORD *)(v3 + 40) + 96LL);
      do
      {
        v10 = *v203;
        if ( *v203 )
        {
          GreDeleteObject(v10);
          *v203 = 0LL;
        }
        v203 += 21;
        --v202;
      }
      while ( v202 >= 0 );
    }
  }
  v200 = W32GetUserSessionState(v10, v9);
  GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v200 + 57008) + 48LL));
  zzzEndDeferWinEventNotify();
  return v2;
}
