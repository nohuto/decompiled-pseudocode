/*
 * XREFs of ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C00F88D0
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x1C01236C0 (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     SpbCheckRect @ 0x1C000BF1C (SpbCheckRect.c)
 *     FreeSpb @ 0x1C000C170 (FreeSpb.c)
 *     SpbCheck @ 0x1C0015958 (SpbCheck.c)
 *     GreHintDCWnd @ 0x1C00225F0 (GreHintDCWnd.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C004E3A0 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     PhysicalToLogicalInPlaceRgn @ 0x1C004F3FC (PhysicalToLogicalInPlaceRgn.c)
 *     xxxInternalInvalidate @ 0x1C004FB80 (xxxInternalInvalidate.c)
 *     xxxFlushDeferredWindowEvents @ 0x1C00802E4 (xxxFlushDeferredWindowEvents.c)
 *     LogicalToPhysicalInPlaceRgnWorker @ 0x1C0082684 (LogicalToPhysicalInPlaceRgnWorker.c)
 *     ?CombineOldNewVis@@YAHPEAUHRGN__@@00II@Z @ 0x1C0082BCC (-CombineOldNewVis@@YAHPEAUHRGN__@@00II@Z.c)
 *     UpdateSpriteArea @ 0x1C00836B4 (UpdateSpriteArea.c)
 *     UnionRect @ 0x1C00ABC9C (UnionRect.c)
 *     HMValidateHandleNoSecure @ 0x1C00B02D0 (HMValidateHandleNoSecure.c)
 *     DeleteOldRedirectionBitmap @ 0x1C00B5428 (DeleteOldRedirectionBitmap.c)
 *     ??0SEMOBJEXORSHARED@@QEAA@PEAUHSEMAPHORE__@@H@Z @ 0x1C00C414C (--0SEMOBJEXORSHARED@@QEAA@PEAUHSEMAPHORE__@@H@Z.c)
 *     _GetDesktopWindow @ 0x1C00EA360 (_GetDesktopWindow.c)
 *     ?SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C00F4D5C (-SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     ?EnforceConsistency@AtomicExecutionCheck@@AEAAXXZ @ 0x1C00F6584 (-EnforceConsistency@AtomicExecutionCheck@@AEAAXXZ.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00F6650 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     ?vSpRedrawSpriteOverlapPresent@@YAXPEAUHDEV__@@@Z @ 0x1C00F9720 (-vSpRedrawSpriteOverlapPresent@@YAXPEAUHDEV__@@@Z.c)
 *     NtGdiBitBltInternal @ 0x1C0105030 (NtGdiBitBltInternal.c)
 *     GetStyleWindow @ 0x1C01199B0 (GetStyleWindow.c)
 *     GetRedirectionBitmap @ 0x1C011E440 (GetRedirectionBitmap.c)
 *     W32GetThreadWin32Thread @ 0x1C011E7DC (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     ?PreventInterMonitorBlts@@YAXPEAUtagCVR@@@Z @ 0x1C01A57F8 (-PreventInterMonitorBlts@@YAXPEAUtagCVR@@@Z.c)
 *     GetOldRedirectionBitmap @ 0x1C01BC518 (GetOldRedirectionBitmap.c)
 *     FindSpb @ 0x1C01F8AAC (FindSpb.c)
 *     RestoreSpb @ 0x1C01F8ADC (RestoreSpb.c)
 *     GreUnlockDisplayArea @ 0x1C0283338 (GreUnlockDisplayArea.c)
 *     GreClientRgnDone @ 0x1C0287734 (GreClientRgnDone.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzBltValidBits(__int64 a1)
{
  int v2; // r14d
  int v3; // esi
  int v4; // r13d
  __int64 *v5; // rbx
  int v6; // r15d
  __int64 v7; // rdi
  int v8; // r12d
  __int64 v9; // rsi
  HRGN v10; // rax
  __int64 v11; // r8
  HRGN v12; // rcx
  struct tagWND *v13; // rdi
  unsigned __int64 v14; // rcx
  struct tagSMWP *v15; // r13
  _QWORD *v16; // r12
  __int64 *v17; // rbx
  int v18; // edi
  __int64 v19; // r15
  __int64 v20; // rdi
  __int64 v21; // rdx
  HRGN v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rdi
  unsigned __int64 v25; // rcx
  _QWORD *v26; // rax
  struct tagWND *v27; // r15
  int v28; // r12d
  __int64 v29; // rax
  char v30; // dl
  __int128 *v31; // r8
  AtomicExecutionCheck *v32; // rcx
  _QWORD *v33; // rdi
  int v34; // ebx
  struct tagWND *v35; // r13
  int v36; // ebx
  AtomicExecutionCheck **i; // rdi
  __int64 v38; // rdx
  __int64 v39; // rdi
  struct Gre::Base::SESSION_GLOBALS *v40; // rsi
  int v41; // eax
  __int64 v42; // rbx
  HDC v43; // rbx
  unsigned int DLT; // eax
  char *v45; // rbx
  tagDomLock *v46; // rcx
  int v48; // ebx
  _QWORD *v49; // rdi
  __int64 v50; // rcx
  HRGN EmptyRgn; // rax
  __int64 v52; // r8
  __int64 v53; // rax
  __int64 v54; // r8
  int v55; // r15d
  __int64 v56; // r12
  HRGN v57; // rdx
  char v58; // cl
  int v59; // eax
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // rax
  int v68; // eax
  int v69; // r15d
  unsigned int v70; // ebx
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // rax
  HRGN v75; // rdx
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // rax
  __int64 RedirectionBitmap; // rax
  __int64 v81; // rcx
  int v82; // r9d
  int v83; // edx
  int v84; // r10d
  int v85; // r8d
  __int64 v86; // rbx
  __int64 v87; // r9
  __int64 v88; // rax
  __int64 v89; // r8
  __int64 v90; // r8
  _QWORD *v91; // r8
  _QWORD *StyleWindow; // rax
  __int64 v93; // r9
  __int64 v94; // r8
  __int64 v95; // rcx
  int v96; // edi
  __int64 v97; // rbx
  int v98; // edx
  __int64 v99; // r9
  __int64 v100; // rcx
  __int64 v101; // r8
  unsigned int v102; // ecx
  int v103; // ebx
  __m128i v104; // xmm0
  int v105; // ecx
  int v106; // edx
  __int64 OldRedirectionBitmap; // r8
  int v108; // r10d
  int v109; // r11d
  HDC v110; // r9
  HDC v111; // rax
  int v112; // eax
  int v113; // eax
  char *Spb; // rax
  unsigned int v115; // r15d
  int v116; // eax
  int v117; // [rsp+68h] [rbp-A0h]
  int v118; // [rsp+68h] [rbp-A0h]
  int v119; // [rsp+6Ch] [rbp-9Ch]
  int v120; // [rsp+6Ch] [rbp-9Ch]
  int v121; // [rsp+6Ch] [rbp-9Ch]
  unsigned int v122; // [rsp+70h] [rbp-98h]
  HRGN v123; // [rsp+78h] [rbp-90h] BYREF
  int v124; // [rsp+80h] [rbp-88h]
  HDC v125; // [rsp+88h] [rbp-80h] BYREF
  struct tagSMWP *v126; // [rsp+90h] [rbp-78h] BYREF
  __int64 v127; // [rsp+98h] [rbp-70h]
  _QWORD *v128; // [rsp+A0h] [rbp-68h] BYREF
  int v129; // [rsp+A8h] [rbp-60h]
  __int128 v130; // [rsp+B8h] [rbp-50h] BYREF
  HRGN v131[2]; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v132; // [rsp+D8h] [rbp-30h] BYREF
  struct tagWND *v133; // [rsp+E0h] [rbp-28h]
  __int128 v134; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v135; // [rsp+F8h] [rbp-10h] BYREF
  tagDomLock *DomainLockRef; // [rsp+108h] [rbp+0h]
  char v137; // [rsp+110h] [rbp+8h] BYREF
  __int64 v138; // [rsp+118h] [rbp+10h]
  char v139; // [rsp+120h] [rbp+18h]
  __int64 v140; // [rsp+128h] [rbp+20h]
  char v141; // [rsp+130h] [rbp+28h]

  v135 = 0LL;
  ++gdwDeferWinEvent;
  v126 = (struct tagSMWP *)a1;
  v2 = 0;
  v125 = 0LL;
  v122 = 0;
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  v3 = 0;
  v4 = *(_DWORD *)(a1 + 28) - 1;
  v5 = *(__int64 **)(a1 + 40);
  v117 = 0;
  v6 = 0;
  if ( v4 >= 0 )
  {
    while ( 1 )
    {
      v7 = *v5;
      v8 = *((_DWORD *)v5 + 8);
      v5[12] = 0LL;
      if ( v7 )
        break;
LABEL_17:
      v5 += 21;
      if ( --v4 < 0 )
        goto LABEL_18;
    }
    PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( (unsigned __int64)(unsigned __int16)v7 >= *(_QWORD *)(gpsi + 8LL) )
    {
LABEL_189:
      *v5 = 0LL;
      *((_DWORD *)v5 + 8) = 6159;
      goto LABEL_17;
    }
    v9 = gSharedInfo[1] + LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)v7;
    v10 = (HRGN)HMPkheFromPhe(v9);
    LOWORD(v7) = WORD1(v7) & 0x7FFF;
    v131[0] = v10;
    v12 = v10;
    if ( (WORD1(v7) & 0x7FFF) != *(_WORD *)(v9 + 26) && (_WORD)v7 != 0x7FFF )
    {
      if ( (_WORD)v7 || !PsGetCurrentProcessWow64Process(v10, 0x7FFFLL, v11) )
      {
LABEL_188:
        v3 = v117;
        goto LABEL_189;
      }
      v12 = v131[0];
    }
    if ( (*(_BYTE *)(v9 + 25) & 1) == 0 && *(_BYTE *)(v9 + 24) == 1 )
    {
      v13 = *(struct tagWND **)v12;
      if ( *(_QWORD *)v12 )
      {
        v14 = v5[1];
        if ( v14 <= 1 || v14 == -2LL || v14 == -1LL || HMValidateHandleNoSecure(v14, 1) )
        {
          if ( *(_QWORD *)(gpDispInfo + 32LL) && (v8 & 8) == 0 )
            SpbCheckRect(v13, (struct tagRECT *)(*((_QWORD *)v13 + 5) + 88LL), 1u);
          v3 = ++v117;
          if ( (v8 & 0x18E7) != 0x1807 )
            v6 = 1;
          if ( (v5[4] & 8) == 0 )
          {
            v50 = gpsi;
            if ( !*(_DWORD *)(gpsi + 2220LL) )
              PreventInterMonitorBlts((struct tagCVR *)v5);
            *((_DWORD *)v5 + 22) = 0;
            EmptyRgn = (HRGN)CreateEmptyRgn(v50);
            v5[12] = (__int64)EmptyRgn;
            if ( !EmptyRgn || !(unsigned int)SwpCalcVisRgn(v13, EmptyRgn, v52) )
              *((_DWORD *)v5 + 22) = 2;
          }
          goto LABEL_17;
        }
      }
    }
    goto LABEL_188;
  }
LABEL_18:
  v15 = v126;
  if ( !v6 )
    v3 = 0;
  if ( !v3 )
    goto LABEL_79;
  v16 = 0LL;
  v17 = (__int64 *)*((_QWORD *)v126 + 5);
  v18 = *((_DWORD *)v126 + 7) - 1;
  v119 = v18;
  if ( v18 < 0 )
    goto LABEL_79;
  do
  {
    v19 = *v17;
    PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( (unsigned __int64)(unsigned __int16)v19 >= *(_QWORD *)(gpsi + 8LL) )
      goto LABEL_196;
    v20 = gSharedInfo[1] + LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)v19;
    v22 = (HRGN)HMPkheFromPhe(v20);
    LOWORD(v19) = WORD1(v19) & 0x7FFF;
    v131[0] = v22;
    if ( (WORD1(v19) & 0x7FFF) != *(_WORD *)(v20 + 26) && (_WORD)v19 != 0x7FFF )
    {
      if ( (_WORD)v19 || !PsGetCurrentProcessWow64Process(v22, v21, v23) )
      {
LABEL_195:
        v18 = v119;
LABEL_196:
        *v17 = 0LL;
        *((_DWORD *)v17 + 8) = 6159;
        goto LABEL_36;
      }
      v22 = v131[0];
    }
    if ( (*(_BYTE *)(v20 + 25) & 1) != 0 )
      goto LABEL_195;
    if ( *(_BYTE *)(v20 + 24) != 1 )
      goto LABEL_195;
    v24 = *(_QWORD *)v22;
    if ( !*(_QWORD *)v22 )
      goto LABEL_195;
    if ( !*(_QWORD *)(v24 + 104) )
      goto LABEL_195;
    v25 = v17[1];
    if ( v25 >= 2 && v25 != -2LL && v25 != -1LL && !HMValidateHandleNoSecure(v25, 1) )
      goto LABEL_195;
    if ( v17[14] == 2
      && ((*(_BYTE *)(*(_QWORD *)(v24 + 40) + 31LL) & 1) == 0 || *(_QWORD *)(v24 + 104) != GetDesktopWindow(v24)) )
    {
      v17[14] = 0LL;
    }
    v18 = v119;
    v26 = v17;
    if ( v16 )
      v26 = v16;
    v16 = v26;
LABEL_36:
    v17 += 21;
    v119 = --v18;
  }
  while ( v18 >= 0 );
  v15 = v126;
  if ( !v16 )
  {
LABEL_79:
    v48 = *((_DWORD *)v15 + 7) - 1;
    if ( v48 >= 0 )
    {
      v49 = (_QWORD *)(*((_QWORD *)v15 + 5) + 96LL);
      do
      {
        if ( *v49 )
        {
          GreDeleteObject(*v49);
          *v49 = 0LL;
        }
        v49 += 21;
        --v48;
      }
      while ( v48 >= 0 );
    }
    goto LABEL_70;
  }
  v27 = *(struct tagWND **)(_HMObjectFromHandle(*v16) + 104);
  v133 = v27;
  if ( *(_QWORD *)(gpDispInfo + 32LL) )
    SpbCheck();
  zzzChangeStates(v27, v126);
  v28 = 0;
  v129 = 0;
  v29 = *(_QWORD *)(gptiCurrent + 456LL);
  if ( !v29 || (*(_DWORD *)(**(_QWORD **)(v29 + 8) + 64LL) & 1) == 0 )
  {
    v96 = *((_DWORD *)v126 + 7) - 1;
    v97 = *((_QWORD *)v126 + 5);
    if ( v96 >= 0 )
    {
      do
      {
        if ( *(_QWORD *)v97 )
        {
          if ( (*(_DWORD *)(v97 + 32) & 8) == 0 )
          {
            _HMObjectFromHandle(*(_QWORD *)v97);
            v98 = *(_DWORD *)(v97 + 72);
            if ( v98 || *(_DWORD *)(v97 + 76) )
            {
              v105 = -*(_DWORD *)(v97 + 76);
              v106 = -v98;
              v130 = *(_OWORD *)(v97 + 56);
              v104 = (__m128i)v130;
              DWORD2(v130) += v106;
              HIDWORD(v130) += v105;
              DWORD1(v130) += v105;
              *(__m128i *)v131 = v104;
              LODWORD(v130) = v106 + _mm_cvtsi128_si32(v104);
              UnionRect(&v135, (int *)v131, (int *)&v130);
              v28 = 1;
            }
          }
        }
        v97 += 168LL;
        --v96;
      }
      while ( v96 >= 0 );
      v15 = v126;
      v129 = v28;
    }
  }
  v30 = 28;
  if ( (*(_BYTE *)(*((_QWORD *)v27 + 5) + 31LL) & 2) == 0 )
    v30 = 26;
  if ( (*(_DWORD *)(gptiCurrent + 488LL) & 0x8000) == 0 )
    v122 = 2;
  if ( v28 )
    v31 = &v135;
  else
    v31 = 0LL;
  zzzLockDisplayAreaAndInvalidateDCCache((__int64)v27, v30, (__int64)v31);
  v33 = (_QWORD *)*((_QWORD *)v15 + 5);
  v34 = *((_DWORD *)v15 + 7) - 1;
  v118 = 96;
  v131[0] = (HRGN)ghrgnInvalidSum;
  v124 = 0;
  v120 = v34;
  if ( v34 >= 0 )
  {
    v35 = v27;
    while ( 2 )
    {
      v32 = (AtomicExecutionCheck *)*v33;
      --v3;
      if ( !*v33 || (v33[4] & 8) != 0 )
        goto LABEL_52;
      _HMObjectFromHandle(v32);
      v122 |= 1u;
      v53 = _HMObjectFromHandle(*v33);
      v55 = *((_DWORD *)v33 + 22);
      v56 = v53;
      if ( (*(_BYTE *)(*(_QWORD *)(v53 + 40) + 26LL) & 8) != 0 )
      {
        RedirectionBitmap = GetRedirectionBitmap(v53);
        v81 = *(_QWORD *)(v56 + 40);
        if ( (RedirectionBitmap || (*(_BYTE *)(v81 + 27) & 0x20) != 0)
          && ((*(_DWORD *)(v81 + 232) & 2) != 0 || (*((_DWORD *)v33 + 39) & 7) != 0) )
        {
          *(_DWORD *)(v56 + 320) |= 0x4000u;
          goto LABEL_91;
        }
LABEL_139:
        *(_DWORD *)(v56 + 320) &= ~0x4000u;
        LOBYTE(v55) = v55 | 8;
      }
      else
      {
LABEL_91:
        if ( !(unsigned int)SwpCalcVisRgn((struct tagWND *)v56, ghrgnVisNew, v54) )
          LOBYTE(v55) = v55 | 1;
        if ( *(_QWORD *)(gpDispInfo + 32LL) )
          SpbCheckRect((struct tagWND *)v56, (struct tagRECT *)(*(_QWORD *)(v56 + 40) + 88LL), 1u);
        if ( (v55 & 3) == 0 && *(_QWORD *)(*(_QWORD *)(v56 + 40) + 136LL) != 1LL )
        {
          v82 = *((_DWORD *)v33 + 16);
          v83 = *((_DWORD *)v33 + 14);
          if ( v82 > v83 )
          {
            v84 = *((_DWORD *)v33 + 17);
            v85 = *((_DWORD *)v33 + 15);
            if ( v84 > v85 )
            {
              GreSetRectRgn(
                ghrgnSWP1,
                (unsigned int)(v83 - *((_DWORD *)v33 + 18)),
                (unsigned int)(v85 - *((_DWORD *)v33 + 19)),
                (unsigned int)(v82 - *((_DWORD *)v33 + 18)),
                v84 - *((_DWORD *)v33 + 19));
              if ( (unsigned int)GreCombineRgn(ghrgnValid, ghrgnSWP1, v33[12], 1LL) >= 2
                && ((v118 & 0x20) != 0 || (unsigned int)GreCombineRgn(ghrgnValid, ghrgnValid, ghrgnValidSum, 4LL) > 1) )
              {
                if ( v33[9] )
                  GreOffsetRgn(ghrgnValid, *((unsigned int *)v33 + 18), *((unsigned int *)v33 + 19));
                v86 = v56;
                v87 = 0LL;
                v127 = v56;
                do
                {
                  v88 = *(_QWORD *)(v86 + 40);
                  v89 = *(_QWORD *)(v88 + 136);
                  if ( v89 == 1 )
                    goto LABEL_175;
                  if ( v89 )
                  {
                    v128 = *(_QWORD **)(v88 + 136);
                    if ( v87 )
                    {
                      v103 = PhysicalToLogicalInPlaceRgn(v87, (__int64)&v128);
                      LODWORD(v123) = GreCombineRgn(ghrgnValid, ghrgnValid, v128, 4LL);
                      v102 = (unsigned int)v123;
                      if ( v103 )
                      {
                        GreDeleteObject(v128);
                        v102 = (unsigned int)v123;
                      }
                      v86 = v127;
                    }
                    else
                    {
                      v102 = GreCombineRgn(ghrgnValid, ghrgnValid, v89, 4LL);
                    }
                    if ( v102 < 2 )
                      goto LABEL_175;
                    v87 = v86;
                  }
                  v86 = *(_QWORD *)(v86 + 104);
                  v127 = v86;
                }
                while ( v86 && (*(_BYTE *)(*(_QWORD *)(v86 + 40) + 31LL) & 2) == 0 );
                v90 = v33[15];
                if ( v90 && (unsigned int)GreCombineRgn(ghrgnValid, ghrgnValid, v90, 4LL) < 2 )
                {
LABEL_175:
                  v34 = v120;
                  goto LABEL_97;
                }
                v34 = v120;
                if ( (unsigned int)GreCombineRgn(ghrgnValid, ghrgnValid, ghrgnVisNew, 1LL) > 1 )
                  goto LABEL_98;
              }
            }
          }
        }
LABEL_97:
        LOBYTE(v55) = v55 | 4;
LABEL_98:
        if ( (v55 & 4) == 0 && (*((_DWORD *)v33 + 18) || *((_DWORD *)v33 + 19)) )
        {
          StyleWindow = (_QWORD *)GetStyleWindow(v56, 2568LL);
          v128 = StyleWindow;
          if ( StyleWindow && (v127 = GetRedirectionBitmap(StyleWindow)) != 0 )
          {
            if ( (_QWORD *)v56 == v128 )
            {
              if ( (*((_DWORD *)v33 + 39) & 1) != 0
                || *((_DWORD *)v33 + 18) != *((_DWORD *)v33 + 4) - *((_DWORD *)v33 + 20)
                || *((_DWORD *)v33 + 19) != *((_DWORD *)v33 + 5) - *((_DWORD *)v33 + 21) )
              {
                OldRedirectionBitmap = GetOldRedirectionBitmap(v128);
                v108 = -*((_DWORD *)v33 + 19);
                v109 = -*((_DWORD *)v33 + 18);
                LODWORD(v123) = *((_DWORD *)v33 + 21);
                v121 = *((_DWORD *)v33 + 20);
                *(_QWORD *)&v130 = ghrgnValid;
                if ( OldRedirectionBitmap )
                {
                  v110 = (HDC)ghdcMem;
                }
                else
                {
                  v110 = (HDC)ghdcMem2;
                  OldRedirectionBitmap = v127;
                }
                UpdateSpriteArea(
                  v128,
                  v127,
                  OldRedirectionBitmap,
                  v110,
                  ghdcMem2,
                  v130,
                  v33 + 7,
                  v109,
                  v108,
                  v121,
                  (int)v123);
              }
            }
            else
            {
              UpdateSpriteArea(
                v128,
                v127,
                v127,
                ghdcMem,
                ghdcMem,
                ghrgnValid,
                v33 + 7,
                -*((_DWORD *)v33 + 18),
                -*((_DWORD *)v33 + 19),
                *(_DWORD *)(v128[5] + 88LL),
                *(_DWORD *)(v128[5] + 92LL));
            }
          }
          else if ( (*(_BYTE *)(*(_QWORD *)(v56 + 40) + 26LL) & 8) == 0 )
          {
            v111 = v125;
            if ( !v125 )
            {
              v111 = *(HDC *)(gpDispInfo + 56LL);
              v125 = v111;
            }
            GreHintDCWnd((__int64)v111, *(_QWORD *)v56, 0LL, 0, 0);
            GreSelectVisRgn(v125, ghrgnValid, 2LL);
            NtGdiBitBltInternal(
              v125,
              *((_DWORD *)v33 + 14),
              *((_DWORD *)v33 + 15),
              *((_DWORD *)v33 + 16) - *((_DWORD *)v33 + 14),
              *((_DWORD *)v33 + 17) - *((_DWORD *)v33 + 15),
              (__int64)v125,
              *((_DWORD *)v33 + 14) - *((_DWORD *)v33 + 18),
              *((_DWORD *)v33 + 15) - *((_DWORD *)v33 + 19),
              13369376,
              0,
              1);
            GreHintDCWnd((__int64)v125, 0LL, 0LL, 0, 0);
          }
        }
        if ( *(char *)(*(_QWORD *)(v56 + 40) + 16LL) >= 0
          || (v55 & 2) != 0
          || !CombineOldNewVis(ghrgnInvalid, (HRGN)v33[12], ghrgnVisNew, 4LL, v55) )
        {
          v57 = (HRGN)v33[12];
          if ( v57 )
          {
            if ( !CombineOldNewVis(ghrgnInvalid, v57, ghrgnVisNew, 2LL, v55) )
              goto LABEL_139;
          }
          else
          {
            v134 = *(_OWORD *)(*((_QWORD *)v35 + 5) + 88LL);
            TransformRectBetweenCoordinateSpaces(&v134, &v134, v56, v35);
            SetRectRgnIndirect(ghrgnInvalid, &v134);
          }
LABEL_102:
          v58 = v118;
        }
        else
        {
          v112 = RestoreSpb(v56, ghrgnInvalid, &v125);
          if ( v112 )
          {
            v58 = v118;
            if ( v112 == 2 && (v118 & 0x20) == 0 )
            {
              GreCombineRgn(ghrgnValidSum, ghrgnValidSum, ghrgnInvalid, 4LL);
              v58 = v118;
            }
            if ( (v55 & 1) == 0 )
              goto LABEL_220;
          }
          else
          {
            if ( (v55 & 1) != 0 )
              goto LABEL_139;
LABEL_220:
            GreCombineRgn(ghrgnInvalid, ghrgnInvalid, ghrgnVisNew, 2LL);
            v58 = v118;
          }
          if ( (v55 & 0x20) == 0 )
          {
            if ( (unsigned int)GreCombineRgn(ghrgnValid, ghrgnValid, ghrgnInvalid, 4LL) <= 1 )
              LOBYTE(v55) = v55 | 0x20;
            goto LABEL_102;
          }
        }
        v59 = v55 & 4;
        LODWORD(v123) = v59;
        if ( (v55 & 4) == 0 )
        {
          if ( (v58 & 0x20) != 0 )
          {
            v93 = 5LL;
            v94 = 0LL;
            v95 = ghrgnValidSum;
          }
          else
          {
            v93 = 2LL;
            v95 = ghrgnValidSum;
            v94 = ghrgnValidSum;
          }
          GreCombineRgn(v95, ghrgnValid, v94, v93);
          v59 = (int)v123;
          v58 = v118 & 0xDF;
          v118 &= ~0x20u;
        }
        if ( (v58 & 0x20) != 0 )
        {
          if ( v59 )
            goto LABEL_106;
          v91 = (_QWORD *)ghrgnValid;
        }
        else
        {
          v91 = (_QWORD *)ghrgnValidSum;
        }
        if ( (unsigned int)GreCombineRgn(ghrgnInvalid, ghrgnInvalid, *v91, 4LL) <= 1 )
          goto LABEL_139;
      }
LABEL_106:
      if ( *(char *)(*(_QWORD *)(v56 + 40) + 16LL) < 0 )
      {
        v113 = *((_DWORD *)v33 + 8);
        if ( (v113 & 0x40) == 0 && (v113 & 0x87) != 7 )
        {
          Spb = (char *)FindSpb(v56);
          FreeSpb(Spb);
        }
      }
      v32 = (AtomicExecutionCheck *)v33[12];
      if ( v32 )
      {
        GreDeleteObject(v32);
        v33[12] = 0LL;
      }
      if ( (*(_BYTE *)(*(_QWORD *)(v56 + 40) + 21LL) & 1) == 0 && (v33[4] & 0x40) != 0 )
        ++v124;
      if ( (v55 & 8) != 0 )
        goto LABEL_52;
      if ( (v55 & 5) == 4 )
      {
        AtomicExecutionCheck::EnforceConsistency(v32);
        CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v61, v60, v62);
        ++*(_DWORD *)(CurrentThreadWin32Thread + 48);
        xxxInternalInvalidate((struct tagWND *)v56, (HRGN)1, 0x485u);
        v67 = PsGetCurrentThreadWin32Thread(v65, v64, v66);
        --*(_DWORD *)(v67 + 48);
      }
      v123 = (HRGN)ghrgnInvalid;
      v68 = LogicalToPhysicalInPlaceRgnWorker((const struct tagWND *)v56, &v123, 0);
      v69 = v68;
      if ( (v118 & 0x40) != 0 )
      {
        if ( !v3 && !v68 )
        {
          v131[0] = (HRGN)ghrgnInvalid;
          goto LABEL_117;
        }
        v99 = 5LL;
        v101 = 0LL;
        v100 = ghrgnInvalidSum;
      }
      else
      {
        v99 = 2LL;
        v100 = ghrgnInvalidSum;
        v101 = ghrgnInvalidSum;
      }
      GreCombineRgn(v100, v123, v101, v99);
      if ( v69 )
        GreDeleteObject(v123);
LABEL_117:
      v118 &= ~0x40u;
LABEL_52:
      v33 += 21;
      v120 = --v34;
      if ( v34 < 0 )
      {
        v15 = v126;
        v27 = v133;
        v28 = v129;
        break;
      }
      continue;
    }
  }
  if ( v28 )
    GreUnlockDisplayArea(*(_QWORD *)(gpDispInfo + 40LL), &v135);
  v36 = *((_DWORD *)v15 + 7) - 1;
  for ( i = (AtomicExecutionCheck **)*((_QWORD *)v15 + 5); v36 >= 0; --v36 )
  {
    v32 = *i;
    if ( *i )
    {
      v38 = _HMObjectFromHandle(v32);
      if ( (*(_BYTE *)(*(_QWORD *)(v38 + 40) + 26LL) & 8) != 0 )
        DeleteOldRedirectionBitmap(v38);
    }
    i += 21;
  }
  if ( (v118 & 0x40) == 0 )
  {
    if ( v124 != *((_DWORD *)v15 + 7) || (v70 = 69, v27 == (struct tagWND *)GetDesktopWindow((__int64)v27)) )
      v70 = 133;
    AtomicExecutionCheck::EnforceConsistency(v32);
    v74 = PsGetCurrentThreadWin32Thread(v72, v71, v73);
    v75 = v131[0];
    ++*(_DWORD *)(v74 + 48);
    xxxInternalInvalidate(v27, v75, v70);
    v79 = PsGetCurrentThreadWin32Thread(v77, v76, v78);
    --*(_DWORD *)(v79 + 48);
  }
  if ( WPP_MAIN_CB.AlignmentRequirement )
    GreClientRgnDone();
  v39 = *(_QWORD *)(gpDispInfo + 40LL);
  v40 = Gre::Base::Globals(gpDispInfo);
  GreIncNonRBLockCount(*((_QWORD *)v40 + 14));
  if ( *(_DWORD *)(v39 + 140) )
  {
    v115 = 0;
    do
    {
      v126 = *(struct tagSMWP **)(8LL * v115 + *(_QWORD *)(v39 + 144));
      v116 = PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v126);
      SEMOBJEXORSHARED::SEMOBJEXORSHARED((SEMOBJEXORSHARED *)&v132, *((HSEMAPHORE *)v40 + 14), v116);
      vSpRedrawSpriteOverlapPresent(*(HDEV *)(*(_QWORD *)(v39 + 144) + 8LL * v115));
      EtwTraceGreLockReleaseSemaphore(L"hsem");
      GreReleaseSemaphoreInternal(v132);
      ++v115;
    }
    while ( v115 < *(_DWORD *)(v39 + 140) );
  }
  else
  {
    v132 = *(_QWORD *)(v39 + 80);
    v41 = PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v132);
    v42 = *((_QWORD *)v40 + 14);
    if ( v41 == 1 )
    {
      GreAcquireSemaphoreSharedInternal(v42);
      EtwTraceGreLockAcquireSemaphoreShared(L"hsem", v42);
    }
    else
    {
      GreAcquireSemaphore(v42);
    }
    vSpRedrawSpriteOverlapPresent(*(HDEV *)(v39 + 80));
    EtwTraceGreLockReleaseSemaphore(L"hsem");
    GreReleaseSemaphoreInternal(v42);
  }
  GreDecNonRBLockCount(*((_QWORD *)v40 + 14));
  v43 = v125;
  if ( v125 )
  {
    GreSelectVisRgn(v125, 0LL, 1LL);
    GreGetBounds(v43, 0LL, 0LL);
  }
LABEL_70:
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  DLT = DLT_WINEVENT::getDLT();
  v45 = &v137;
  DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
  v138 = gDomainDummyLock;
  v140 = 0LL;
  v141 = 0;
  v137 = 1;
  v139 = 0;
  do
  {
    v46 = (tagDomLock *)*((_QWORD *)v45 - 1);
    if ( v46 )
    {
      if ( *v45 )
        tagDomLock::LockExclusive(v46);
      else
        tagDomLock::LockShared(v46);
    }
    ++v2;
    v45 += 16;
  }
  while ( !v2 );
  v141 = 1;
  --gdwDeferWinEvent;
  if ( DomainLockRef )
  {
    if ( v137 )
      tagDomLock::UnLockExclusive(DomainLockRef);
    else
      tagDomLock::UnLockShared(DomainLockRef);
  }
  return v122;
}
