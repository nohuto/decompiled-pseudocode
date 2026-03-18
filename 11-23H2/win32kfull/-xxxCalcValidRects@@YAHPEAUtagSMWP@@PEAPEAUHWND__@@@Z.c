/*
 * XREFs of ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C01246F0
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x1C01236C0 (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     ?IsStillWindowC@@YAHPEAUHWND__@@@Z @ 0x1C00168B4 (-IsStillWindowC@@YAHPEAUHWND__@@@Z.c)
 *     ?IsSingleThreadAttached@tagQ@@QEBA_NXZ @ 0x1C0039D88 (-IsSingleThreadAttached@tagQ@@QEBA_NXZ.c)
 *     xxxCheckFullScreen @ 0x1C00621AC (xxxCheckFullScreen.c)
 *     GetAppCompatFlags @ 0x1C0082950 (GetAppCompatFlags.c)
 *     ?CuratedWindowHidden@NotifyShell@@YAXPEAUtagWND@@W4HideSource@1@@Z @ 0x1C00949FC (-CuratedWindowHidden@NotifyShell@@YAXPEAUtagWND@@W4HideSource@1@@Z.c)
 *     ?SetTopmostEnum@@YAXPEAUtagWND@@HH@Z @ 0x1C00A449C (-SetTopmostEnum@@YAXPEAUtagWND@@HH@Z.c)
 *     ?CheckTopmost@@YAHPEAUtagWINDOWPOS@@@Z @ 0x1C00AE204 (-CheckTopmost@@YAHPEAUtagWINDOWPOS@@@Z.c)
 *     GetMonitorRectForDpi @ 0x1C00AE4CC (GetMonitorRectForDpi.c)
 *     ?ValidateZorder@@YAHPEAUtagCVR@@@Z @ 0x1C00AF84C (-ValidateZorder@@YAHPEAUtagCVR@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C00B02D0 (HMValidateHandleNoSecure.c)
 *     PhysicalToLogicalInPlaceRectWithSubpixel @ 0x1C00B1464 (PhysicalToLogicalInPlaceRectWithSubpixel.c)
 *     LogicalToPhysicalInPlaceRectWithSubpixel @ 0x1C00B14A8 (LogicalToPhysicalInPlaceRectWithSubpixel.c)
 *     ?GetWindowCoordinateSpaceDpi@@YAGPEBUtagWND@@@Z @ 0x1C00B16C0 (-GetWindowCoordinateSpaceDpi@@YAGPEBUtagWND@@@Z.c)
 *     _GetProp @ 0x1C00B6E24 (_GetProp.c)
 *     GetRect @ 0x1C00E1ED0 (GetRect.c)
 *     _GetDesktopWindow @ 0x1C00EA360 (_GetDesktopWindow.c)
 *     ?IsTrayWindow@@YA_NPEAUtagWND@@W4TrayCheckOption@@@Z @ 0x1C00EF6FC (-IsTrayWindow@@YA_NPEAUtagWND@@W4TrayCheckOption@@@Z.c)
 *     GetNewMonitor @ 0x1C010C10C (GetNewMonitor.c)
 *     ?xxxProcessPreemptiveDpiChange@@YAXPEAUtagWND@@PEAUtagCVR@@@Z @ 0x1C01242E4 (-xxxProcessPreemptiveDpiChange@@YAXPEAUtagWND@@PEAUtagCVR@@@Z.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C01278C0 (xxxSendTransformableMessageTimeout.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C014083C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     xxxAppAdjustDpiCandidateRect @ 0x1C01B9FE4 (xxxAppAdjustDpiCandidateRect.c)
 *     DwmAsyncNotifyWindowMoveForWorkArea @ 0x1C026CA7C (DwmAsyncNotifyWindowMoveForWorkArea.c)
 */

__int64 __fastcall xxxCalcValidRects(struct tagSMWP *a1, HWND *a2)
{
  HWND *v3; // r12
  HWND v4; // r15
  __int64 v5; // rax
  int v6; // ecx
  __int64 v7; // r9
  _QWORD *v8; // rax
  __int64 v9; // r8
  _QWORD *v10; // rcx
  __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  __int64 v13; // r8
  unsigned __int64 *v14; // rbx
  int v15; // edi
  unsigned __int64 v16; // rsi
  ULONG_PTR v17; // r13
  __int64 v18; // rdi
  ULONG_PTR *v19; // r14
  bool v20; // zf
  unsigned __int64 v21; // rcx
  int v22; // edi
  unsigned __int64 v23; // r13
  int v24; // r12d
  int v25; // r14d
  int v26; // edi
  ULONG_PTR v27; // r10
  int v28; // r14d
  int v29; // r8d
  __int64 v30; // rdx
  ULONG_PTR v31; // r12
  __int64 v32; // rcx
  __int64 v33; // rax
  _QWORD *v34; // r15
  ULONG_PTR v35; // rdi
  ULONG_PTR v36; // r10
  ULONG_PTR v37; // rsi
  ULONG_PTR v38; // r14
  int v39; // edx
  int v40; // eax
  const struct tagWND *v41; // rcx
  __int64 v42; // rax
  int v43; // r8d
  _DWORD *v44; // rcx
  ULONG_PTR v45; // rsi
  __int64 v46; // r9
  int v47; // edi
  int v48; // ecx
  __int64 v49; // r8
  int v50; // r9d
  int v51; // ecx
  __int64 v52; // rdx
  _QWORD *v53; // r12
  int v54; // edx
  ULONG_PTR v55; // rdx
  int v56; // edx
  char v57; // cl
  ULONG_PTR v58; // r9
  __int64 v59; // r11
  int v60; // ecx
  __int64 v61; // rcx
  __int64 v62; // rax
  struct tagSIZERECT *v63; // r14
  __int64 v64; // rcx
  int v65; // edi
  int v66; // esi
  int v67; // r15d
  int v68; // ecx
  int v69; // edx
  const struct tagWND *v70; // r8
  __int64 v71; // rax
  const struct tagWND *v72; // r12
  __int64 v73; // rdx
  unsigned __int64 v74; // rcx
  __int64 v75; // r8
  int v76; // eax
  __int64 result; // rax
  __int64 v78; // rdx
  _BOOL8 v79; // rcx
  __int64 v80; // r8
  int v81; // eax
  int v82; // eax
  __int64 v83; // rcx
  __int128 v84; // xmm1
  unsigned __int64 v85; // xmm0_8
  unsigned int v86; // esi
  int v87; // r14d
  unsigned int v88; // r15d
  int v89; // r12d
  int v90; // eax
  unsigned __int64 v91; // rcx
  int v92; // edi
  __int64 v93; // r8
  __int64 v94; // rdx
  int v95; // eax
  int v96; // r11d
  int v97; // r14d
  int v98; // r9d
  int v99; // ecx
  char v100; // al
  __int64 v101; // rax
  int v102; // eax
  int v103; // eax
  int v104; // r9d
  int v105; // r10d
  __int64 v106; // r11
  __int64 v107; // rax
  __int64 v108; // rdi
  __int16 v109; // si
  LONG v110; // edx
  int v111; // ecx
  __int64 NewMonitor; // rax
  bool v113; // al
  __int64 Prop; // rax
  __int64 v115; // rax
  __int16 WindowCoordinateSpaceDpi; // di
  __int64 v117; // rdi
  void *v118; // rax
  ULONG_PTR v119; // rax
  __int64 AppCompatFlags; // rax
  bool v121; // cf
  int v122; // eax
  __int64 v123; // rdx
  int v124; // eax
  __int64 v125; // rdx
  __int64 v126; // rcx
  __int64 v127; // r8
  struct tagWND *BugCheckParameter2; // [rsp+50h] [rbp-B0h]
  ULONG_PTR BugCheckParameter2a; // [rsp+50h] [rbp-B0h]
  int v130; // [rsp+58h] [rbp-A8h]
  ULONG_PTR v131; // [rsp+60h] [rbp-A0h]
  __int64 v132; // [rsp+68h] [rbp-98h]
  int v133; // [rsp+70h] [rbp-90h]
  int v134; // [rsp+74h] [rbp-8Ch]
  _QWORD *v135; // [rsp+78h] [rbp-88h]
  ULONG_PTR v136; // [rsp+80h] [rbp-80h]
  int v137; // [rsp+88h] [rbp-78h]
  int v138; // [rsp+8Ch] [rbp-74h]
  unsigned int v139; // [rsp+90h] [rbp-70h]
  ULONG_PTR v140; // [rsp+98h] [rbp-68h]
  int v141; // [rsp+A0h] [rbp-60h]
  const struct tagWND *v142; // [rsp+A8h] [rbp-58h]
  int v143; // [rsp+B4h] [rbp-4Ch]
  int v144; // [rsp+B8h] [rbp-48h]
  __int128 v145; // [rsp+C0h] [rbp-40h] BYREF
  int v146; // [rsp+D0h] [rbp-30h]
  int v147; // [rsp+D4h] [rbp-2Ch]
  HWND v148; // [rsp+D8h] [rbp-28h]
  ULONG_PTR v149; // [rsp+E0h] [rbp-20h]
  __int64 v150; // [rsp+E8h] [rbp-18h]
  struct tagRECT v151; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v152; // [rsp+100h] [rbp+0h] BYREF
  HWND *v153; // [rsp+108h] [rbp+8h]
  __int128 v154; // [rsp+110h] [rbp+10h] BYREF
  __int128 v155; // [rsp+120h] [rbp+20h]
  unsigned __int64 v156; // [rsp+130h] [rbp+30h]
  __int64 v157; // [rsp+138h] [rbp+38h] BYREF
  __int128 v158; // [rsp+148h] [rbp+48h] BYREF
  __int64 v159; // [rsp+158h] [rbp+58h]
  __int128 v160; // [rsp+160h] [rbp+60h] BYREF
  __int64 v161; // [rsp+170h] [rbp+70h]
  __int128 v162; // [rsp+178h] [rbp+78h]
  __int128 v163; // [rsp+188h] [rbp+88h] BYREF
  __int128 v164; // [rsp+198h] [rbp+98h] BYREF
  __int128 *v165; // [rsp+1A8h] [rbp+A8h]

  v153 = a2;
  v148 = 0LL;
  v165 = 0LL;
  v159 = 0LL;
  v161 = 0LL;
  v3 = a2;
  v143 = 0;
  v4 = 0LL;
  v134 = 0;
  v5 = *((int *)a1 + 7);
  v6 = 0;
  v162 = 0LL;
  v163 = 0LL;
  v164 = 0LL;
  v158 = 0LL;
  v160 = 0LL;
  if ( (int)v5 <= 0 )
    return 0LL;
  v7 = v5;
  v8 = (_QWORD *)*((_QWORD *)a1 + 5);
  v9 = 0LL;
  while ( !*v8 )
  {
    ++v6;
    ++v9;
    v8 += 21;
    if ( v9 >= v7 )
      return 0LL;
  }
  v10 = (_QWORD *)(*((_QWORD *)a1 + 5) + 168LL * v6);
  if ( !v10 )
    return 0LL;
  v142 = *(const struct tagWND **)(_HMObjectFromHandle(*v10) + 104);
  ThreadLock(v142, &v158);
  v14 = (unsigned __int64 *)*((_QWORD *)a1 + 5);
  v15 = *((_DWORD *)a1 + 7) - 1;
  v141 = 1;
  v130 = v15;
  if ( v15 < 0 )
  {
LABEL_107:
    ThreadUnlock1(v12, v11, v13);
    result = 1LL;
    *v3 = v4;
    return result;
  }
  while ( 1 )
  {
    v16 = *v14;
    if ( *v14 )
      break;
LABEL_105:
    v14 += 21;
    v130 = --v15;
    if ( v15 < 0 )
    {
      v3 = v153;
      goto LABEL_107;
    }
  }
  v17 = 0LL;
  BugCheckParameter2 = 0LL;
  PsGetThreadWin32Thread(KeGetCurrentThread());
  v11 = (unsigned __int16)v16;
  v12 = gpsi;
  if ( (unsigned __int64)(unsigned __int16)v16 < *(_QWORD *)(gpsi + 8LL) )
  {
    v18 = gSharedInfo[1] + LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)v16;
    v19 = (ULONG_PTR *)HMPkheFromPhe(v18);
    v12 = v16 >> 16;
    LOWORD(v12) = WORD1(v16) & 0x7FFF;
    if ( ((WORD1(v16) & 0x7FFF) == *(_WORD *)(v18 + 26)
       || (_WORD)v12 == 0x7FFF
       || !(_WORD)v12 && PsGetCurrentProcessWow64Process(v12, v11, v13))
      && (*(_BYTE *)(v18 + 25) & 1) == 0 )
    {
      v20 = *(_BYTE *)(v18 + 24) == 1;
      v15 = v130;
      if ( v20 )
      {
        v17 = *v19;
        BugCheckParameter2 = (struct tagWND *)*v19;
      }
    }
    else
    {
      v15 = v130;
    }
  }
  if ( !v17
    || (v21 = v14[1], v21 >= 2)
    && v21 != -2LL
    && v21 != -1LL
    && (v12 = HMValidateHandleNoSecure(v21, 1) != 0, !(_DWORD)v12) )
  {
    *v14 = 0LL;
    *((_DWORD *)v14 + 8) = 6159;
    goto LABEL_105;
  }
  ThreadLockAlways(v17, &v160);
  xxxProcessPreemptiveDpiChange((struct tagWND *)v17, (struct tagCVR *)v14);
  v137 = 0;
  if ( !v4 && (v14[4] & 0x10) == 0 )
    v148 = *(HWND *)v17;
  v22 = *((_DWORD *)v14 + 8);
  if ( (v22 & 0x400) == 0 )
  {
    v23 = v14[1];
    v24 = v14[4] & 4;
    v25 = v22 & 0xFD0000;
    v26 = v14[4] & 0x40;
    if ( (*(_DWORD *)(gptiCurrent + 1272LL) & 0x40000) == 0 || gptiCurrent == *((_QWORD *)BugCheckParameter2 + 2) )
    {
      _InterlockedIncrement(&glSendMessage);
      xxxSendTransformableMessageTimeout((ULONG_PTR)BugCheckParameter2, 0, 0, 0LL, 1, 0);
    }
    else
    {
      if ( tagQ::IsSingleThreadAttached(*(tagQ **)(gptiCurrent + 432LL)) )
      {
        v115 = *(_QWORD *)(gptiCurrent + 1440LL);
        if ( v115 )
        {
          if ( *(_QWORD *)(v115 + 16) == gptiCurrent )
          {
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 425LL);
            v27 = (ULONG_PTR)BugCheckParameter2;
          }
          if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 1440LL) + 16LL) == *(_QWORD *)(v27 + 16) )
            goto LABEL_24;
        }
      }
      v152 = 0LL;
      xxxSendTransformableMessageTimeout(v27, 2, 100, (__int64)&v152, 1, 0);
    }
    v27 = (ULONG_PTR)BugCheckParameter2;
LABEL_24:
    v28 = *((_DWORD *)v14 + 8) | v25;
    *((_DWORD *)v14 + 8) = v28;
    if ( v26 && (v28 & 0x40) == 0 )
    {
      NotifyShell::CuratedWindowHidden(v27);
      v27 = (ULONG_PTR)BugCheckParameter2;
    }
    v29 = *((_DWORD *)v14 + 8);
    v30 = *((unsigned int *)v14 + 39);
    if ( (v14[4] & 3) != 3 && (v30 & 0x20) == 0 )
    {
      v30 = (unsigned int)v30 | 0x20;
      v14[16] = *(_QWORD *)(*(_QWORD *)(v27 + 40) + 256LL);
      *((_DWORD *)v14 + 39) = v30;
    }
    *v14 = v16;
    if ( (v29 & 4) != 0 || !v24 && *((_WORD *)v14 + 4) == (_WORD)v23 )
      goto LABEL_28;
    if ( !(unsigned int)IsStillWindowC((HWND)v14[1], v30) )
      goto LABEL_226;
    if ( *((_WORD *)v14 + 4) == (_WORD)v23 && v14[1] < 0xFFFFFFFFFFFFFFFEuLL )
    {
LABEL_28:
      v17 = (ULONG_PTR)BugCheckParameter2;
    }
    else
    {
      v81 = CheckTopmost((struct tagWINDOWPOS *)v14);
      v17 = (ULONG_PTR)BugCheckParameter2;
      if ( v81 && *(_DWORD *)(*((_QWORD *)BugCheckParameter2 + 5) + 236LL) == 1 )
        SetTopmostEnum(BugCheckParameter2, v81 == 1, (*((_DWORD *)v14 + 8) >> 9) & 1);
    }
  }
  v31 = v17 + 24;
  v32 = *(_QWORD *)(v17 + 104);
  v145 = *(_OWORD *)(*((_QWORD *)v142 + 5) + 104LL);
  if ( !v32
    || (v136 = v17 + 24, *(_QWORD *)v31)
    && (v33 = *(_QWORD *)(*(_QWORD *)v31 + 8LL)) != 0
    && v32 == *(_QWORD *)(v33 + 24)
    || (v132 = v17 + 40,
        (((unsigned __int16)(*(_DWORD *)(*(_QWORD *)(v17 + 40) + 288LL) >> 8) ^ (unsigned __int16)(*(_DWORD *)(*(_QWORD *)(v32 + 40) + 288LL) >> 8)) & 0x1FF) == 0) )
  {
    v34 = (_QWORD *)(v17 + 40);
    v131 = v17 + 24;
    v135 = (_QWORD *)(v17 + 40);
    v35 = v17 + 40;
    v132 = v17 + 40;
    v36 = v17 + 40;
    BugCheckParameter2a = v17 + 40;
    v37 = v17 + 40;
    v136 = v17 + 24;
    v38 = v17 + 24;
    v140 = v17 + 24;
  }
  else
  {
    v131 = v17 + 24;
    v34 = (_QWORD *)(v17 + 40);
    v135 = (_QWORD *)(v17 + 40);
    v140 = v17 + 24;
    v38 = v17 + 24;
    BugCheckParameter2a = v17 + 40;
    v37 = v17 + 40;
    WindowCoordinateSpaceDpi = GetWindowCoordinateSpaceDpi((const struct tagWND *)v17);
    if ( WindowCoordinateSpaceDpi != (unsigned __int16)GetWindowCoordinateSpaceDpi(*(const struct tagWND **)(v17 + 104))
      || (v117 = ValidateHmonitorNoRip(*(_QWORD *)(*(_QWORD *)v37 + 256LL))) != 0
      && (GetMonitorRectForDpi(&v157, v117, (*(_DWORD *)(*(_QWORD *)v37 + 288LL) >> 8) & 0x1FF),
          *(_QWORD *)(*(_QWORD *)(v117 + 40) + 28LL) != v157) )
    {
      LogicalToPhysicalInPlaceRectWithSubpixel(v142, (int *)&v145, 0LL);
      PhysicalToLogicalInPlaceRectWithSubpixel((const struct tagWND *)v17, (int *)&v145, 0LL);
    }
    v36 = v17 + 40;
    v35 = v17 + 40;
  }
  v39 = *(_DWORD *)(*(_QWORD *)v37 + 88LL);
  v40 = *(_DWORD *)(*(_QWORD *)v37 + 92LL);
  *((_DWORD *)v14 + 20) = v39;
  v133 = v40;
  *((_DWORD *)v14 + 21) = v40;
  v138 = v39;
  v41 = 0LL;
  if ( *(_QWORD *)v38 )
  {
    v42 = *(_QWORD *)(*(_QWORD *)v38 + 8LL);
    if ( v42 )
      v41 = *(const struct tagWND **)(v42 + 24);
  }
  v146 = DWORD2(v145);
  v147 = DWORD1(v145);
  v144 = v145;
  if ( v142 != v41 )
  {
    v133 -= DWORD1(v145);
    v39 -= v145;
    v138 = v39;
    if ( (*(_BYTE *)(*((_QWORD *)v142 + 5) + 26LL) & 0x40) == 0 || (*(_BYTE *)(*(_QWORD *)v36 + 31LL) & 0xC0) != 0x40 )
    {
      v136 = v17 + 24;
      v43 = 0;
      v134 = 0;
      v132 = v35;
      v131 = v17 + 24;
      v135 = v34;
      v140 = v17 + 24;
      BugCheckParameter2a = v36;
      goto LABEL_41;
    }
    v134 = 1;
    v39 = DWORD2(v145) - *(_DWORD *)(*(_QWORD *)v36 + 96LL);
    v136 = v17 + 24;
    v132 = v35;
    v131 = v17 + 24;
    v135 = v34;
    v140 = v17 + 24;
    BugCheckParameter2a = v36;
  }
  v43 = v134;
LABEL_41:
  v44 = *(_DWORD **)v36;
  v45 = v36;
  v150 = v35;
  v149 = v136;
  v46 = (unsigned int)(v44[24] - v44[22]);
  v47 = v44[25] - v44[23];
  v48 = *((_DWORD *)v14 + 8);
  v139 = v46;
  *((_DWORD *)v14 + 8) = v48 | 0x1800;
  if ( (v48 & 2) != 0 )
  {
    *((_DWORD *)v14 + 39) |= 0x100u;
    *((_DWORD *)v14 + 5) = v133;
    *((_DWORD *)v14 + 4) = v39;
  }
  else
  {
    if ( *((_DWORD *)v14 + 4) == v39 && *((_DWORD *)v14 + 5) == v133 )
    {
      *((_DWORD *)v14 + 8) = v48 | 0x1802;
      if ( v43 )
        v143 = 1;
    }
    if ( (*(_BYTE *)(*(_QWORD *)v36 + 31LL) & 0x20) != 0 )
    {
      v113 = IsTrayWindow((struct tagWND *)v17, 1);
      v36 = BugCheckParameter2a;
      v46 = v139;
      if ( v113 )
      {
        *((_DWORD *)v14 + 4) = -32000;
        *((_DWORD *)v14 + 5) = -32000;
      }
    }
  }
  v49 = *((unsigned int *)v14 + 8);
  if ( (v49 & 1) != 0 )
  {
    *((_DWORD *)v14 + 6) = v46;
    v52 = (unsigned int)v49;
    *((_DWORD *)v14 + 7) = v47;
  }
  else
  {
    if ( (*(_BYTE *)(*(_QWORD *)v36 + 31LL) & 0x20) != 0
      && (Prop = GetProp(v17, *((unsigned __int16 *)&WPP_MAIN_CB.AlignmentRequirement + 2), 1LL, v46),
          v49 = *((unsigned int *)v14 + 8),
          v36 = BugCheckParameter2a,
          Prop) )
    {
      v50 = *(_DWORD *)(gpsi + 2124LL);
      *((_DWORD *)v14 + 6) = v50;
      v51 = *(_DWORD *)(gpsi + 2128LL);
      *((_DWORD *)v14 + 7) = v51;
    }
    else
    {
      v50 = *((_DWORD *)v14 + 6);
      if ( v50 < 0 )
      {
        *((_DWORD *)v14 + 6) = 0;
        v50 = 0;
      }
      v51 = *((_DWORD *)v14 + 7);
      if ( v51 < 0 )
      {
        *((_DWORD *)v14 + 7) = 0;
        v51 = 0;
      }
    }
    v52 = (unsigned int)v49;
    if ( v50 == v139 && v51 == v47 )
    {
      v52 = (unsigned int)v49 | 1;
      *((_DWORD *)v14 + 8) = v52;
      if ( (*(_BYTE *)(*(_QWORD *)v36 + 21LL) & 1) == 0 )
        v137 = 1;
    }
  }
  if ( (*(_DWORD *)(v17 + 320) & 0x40000000) != 0 )
  {
    v49 = v150;
    v136 = v149;
    v36 = v45;
    v132 = v150;
    v131 = v17 + 24;
    v135 = v34;
    v140 = v17 + 24;
    BugCheckParameter2a = v45;
    if ( (v52 & 3) != 3 )
    {
      v118 = (void *)ReferenceDwmApiPort(v149, v52);
      DwmAsyncNotifyWindowMoveForWorkArea(v118);
      v119 = v149;
      v36 = v45;
      v49 = v150;
      *(_DWORD *)(v17 + 320) &= ~0x40000000u;
      LODWORD(v52) = *((_DWORD *)v14 + 8);
      v136 = v119;
      v132 = v49;
      v131 = v17 + 24;
      v135 = v34;
      v140 = v17 + 24;
      BugCheckParameter2a = v45;
    }
    v53 = v34;
  }
  else
  {
    v53 = v135;
  }
  if ( v134 )
    *((_DWORD *)v14 + 4) = v146 - *((_DWORD *)v14 + 6) - v144 - *((_DWORD *)v14 + 4);
  if ( (*(_BYTE *)(*(_QWORD *)v36 + 31LL) & 0x10) != 0 )
  {
    v54 = v52 & 0xFFFFFFBF;
LABEL_64:
    *((_DWORD *)v14 + 8) = v54;
    goto LABEL_65;
  }
  v54 = v52 & 0xFFFFFF7F;
  *((_DWORD *)v14 + 8) = v54;
  if ( (v54 & 0x40) == 0 )
  {
    v54 |= 8u;
    goto LABEL_64;
  }
LABEL_65:
  if ( (*(_BYTE *)(*(_QWORD *)v36 + 27LL) & 2) == 0 )
  {
    v55 = v17;
    while ( (*(_BYTE *)(*(_QWORD *)(v55 + 40) + 27LL) & 2) == 0 )
    {
      v55 = *(_QWORD *)(v55 + 104);
      if ( !v55 )
        goto LABEL_69;
    }
    *((_DWORD *)v14 + 8) |= 0x100u;
LABEL_69:
    v54 = *((_DWORD *)v14 + 8);
  }
  if ( (*(_BYTE *)(*(_QWORD *)v36 + 20LL) & 0x20) != 0 )
  {
    v54 &= ~4u;
    v14[1] = 1LL;
    *((_DWORD *)v14 + 8) = v54;
  }
  if ( v141 )
  {
    if ( (v54 & 4) == 0 )
    {
      v141 = 0;
      if ( (*(_BYTE *)(*(_QWORD *)v36 + 19LL) & 4) == 0 )
      {
        v82 = ValidateZorder((struct tagCVR *)v14);
        v36 = BugCheckParameter2a;
        if ( v82 )
        {
          *((_DWORD *)v14 + 8) |= 4u;
          v141 = 1;
        }
      }
    }
  }
  v56 = *((_DWORD *)v14 + 8);
  if ( (v56 & 8) == 0 )
  {
    if ( (v14[4] & 0x18E7) == 0x1807 )
    {
LABEL_81:
      *((_DWORD *)v14 + 8) = v56 | 8;
    }
    else
    {
      v49 = v17;
      if ( (*(_BYTE *)(*(_QWORD *)v36 + 31LL) & 0xC0) == 0x40 )
      {
        do
        {
          v49 = *(_QWORD *)(v49 + 104);
          if ( !v49 )
            break;
          v57 = *(_BYTE *)(*(_QWORD *)(v49 + 40) + 31LL);
          if ( (v57 & 0x10) == 0 )
            goto LABEL_81;
        }
        while ( (v57 & 0xC0) == 0x40 );
      }
    }
  }
  v58 = v131;
  v59 = v132;
  if ( (v14[4] & 2) == 0 && (*(_BYTE *)(*(_QWORD *)v36 + 21LL) & 1) == 0 )
  {
    AppCompatFlags = GetAppCompatFlags(0LL);
    v36 = BugCheckParameter2a;
    v121 = (AppCompatFlags & 0x20000) != 0;
    v122 = v137;
    if ( v121 )
      v122 = 1;
    v58 = v131;
    v137 = v122;
    v59 = v132;
  }
  if ( (v14[4] & 0x80000) != 0 || (*((_BYTE *)v14 + 156) & 0x20) == 0 )
    goto LABEL_90;
  v60 = *(_DWORD *)(*(_QWORD *)v36 + 288LL) & 0xF;
  if ( v60 != 3 )
  {
    if ( v60 == 2 )
    {
      v61 = *(_QWORD *)(v17 + 104);
      if ( v61 )
      {
        if ( *(_QWORD *)v140 )
        {
          v62 = *(_QWORD *)(*(_QWORD *)v140 + 8LL);
          if ( v62 )
          {
            if ( v61 == *(_QWORD *)(v62 + 24) )
            {
              v59 = v132;
              v58 = v131;
              v135 = v53;
              if ( (*(_DWORD *)(v17 + 320) & 0x100000) != 0 )
              {
                v135 = v53;
                goto LABEL_175;
              }
            }
          }
        }
      }
    }
LABEL_90:
    v63 = (struct tagSIZERECT *)(v14 + 2);
    goto LABEL_91;
  }
LABEL_175:
  v107 = ValidateHmonitor(v14[16]);
  v108 = v107;
  if ( v107 )
    v109 = *(_WORD *)(*(_QWORD *)(v107 + 40) + 60LL);
  else
    v109 = 0;
  v63 = (struct tagSIZERECT *)(v14 + 2);
  v110 = *((_DWORD *)v14 + 5);
  v151.left = *((_DWORD *)v14 + 4);
  v151.right = *((_DWORD *)v14 + 6) + v151.left;
  v111 = *((_DWORD *)v14 + 7);
  v151.top = v110;
  v151.bottom = v110 + v111;
  NewMonitor = GetNewMonitor((struct tagWND *)v17, &v151, 0LL);
  if ( NewMonitor )
  {
    if ( v108 != NewMonitor )
    {
      v123 = *(unsigned __int16 *)(*(_QWORD *)(NewMonitor + 40) + 60LL);
      if ( v109 != (_WORD)v123 )
        *((_DWORD *)v14 + 39) ^= (*((_DWORD *)v14 + 39) ^ ((unsigned int)xxxAppAdjustDpiCandidateRect(
                                                                           v17,
                                                                           v123,
                                                                           &v151,
                                                                           v14 + 17) << 7)) & 0x80;
    }
  }
  v58 = v131;
  v59 = v132;
LABEL_91:
  LODWORD(v64) = *((_DWORD *)v14 + 8);
  if ( (v64 & 0x21) == 1 && !v137 )
  {
    v65 = v144;
    v66 = v147;
    v67 = v138;
    goto LABEL_94;
  }
  *((_DWORD *)v14 + 39) |= 4u;
  v83 = *v53;
  v154 = 0LL;
  v156 = 0LL;
  v155 = 0LL;
  if ( (*(_BYTE *)(v83 + 31) & 0x40) == 0 && *(char *)(v83 + 24) >= 0 )
    xxxCheckFullScreen((struct tagWND *)v17, v63, v49);
  v84 = *((_OWORD *)v14 + 1);
  v154 = *(_OWORD *)v14;
  v85 = v14[4];
  v165 = &v154;
  LODWORD(v162) = *(_DWORD *)v63;
  DWORD2(v162) = *((_DWORD *)v14 + 6) + v162;
  DWORD1(v162) = *((_DWORD *)v14 + 5);
  HIDWORD(v162) = *((_DWORD *)v14 + 7) + DWORD1(v162);
  v155 = v84;
  v156 = v85;
  GetRect((const struct tagWND *)v17, (__int64)&v163, 66);
  GetRect((const struct tagWND *)v17, (__int64)&v164, 65);
  v86 = v164;
  v87 = DWORD2(v164) - v164;
  v88 = DWORD1(v164);
  v89 = HIDWORD(v164) - DWORD1(v164);
  _InterlockedIncrement(&glSendMessage);
  v90 = xxxSendTransformableMessageTimeout(v17, 0, 0, 0LL, 1, 0);
  v91 = v14[1];
  v92 = v90;
  if ( v91 < 2 || v91 == -2LL || v91 == -1LL || (v79 = HMValidateHandleNoSecure(v91, 1) != 0) )
  {
    if ( (unsigned int)(v92 - 16) > 0x3F0 )
    {
      LOWORD(v92) = 48;
      v163 = v162;
    }
    if ( (*(_BYTE *)(*v135 + 26LL) & 0x40) != 0 )
      v93 = (unsigned int)(DWORD2(v163) - DWORD2(v164));
    else
      v93 = (unsigned int)(v163 - v164);
    *((_DWORD *)v14 + 18) = v93;
    *((_DWORD *)v14 + 19) = DWORD1(v163) - DWORD1(v164);
    v14[5] = v162;
    v94 = (unsigned int)(DWORD2(v162) - v162);
    *((_DWORD *)v14 + 12) = v94;
    v95 = HIDWORD(v162) - DWORD1(v162);
    *((_DWORD *)v14 + 13) = HIDWORD(v162) - DWORD1(v162);
    if ( __PAIR64__(v88, v86) != (_QWORD)v162 )
      *((_DWORD *)v14 + 8) &= ~0x1000u;
    v64 = *((unsigned int *)v14 + 8);
    if ( v87 == (_DWORD)v94 )
    {
      if ( v89 == v95 )
      {
LABEL_135:
        if ( (v64 & 0x100) != 0 || v143 || (*(_BYTE *)(*v135 + 24LL) & 0x20) != 0 )
          goto LABEL_167;
        if ( (v64 & 0x821) != 0x801
          || (v67 = v138, (_DWORD)v93 != *((_DWORD *)v14 + 4) - v138)
          || *((_DWORD *)v14 + 19) != *((_DWORD *)v14 + 5) - v133 )
        {
          if ( v87 != (_DWORD)v94
            && ((v92 & 0x100) != 0 || (v64 = *(_QWORD *)(*(_QWORD *)(v17 + 136) + 8LL), (*(_BYTE *)(v64 + 8) & 2) != 0))
            || v89 != *((_DWORD *)v14 + 13)
            && ((v92 & 0x200) != 0 || (v64 = *(_QWORD *)(*(_QWORD *)(v17 + 136) + 8LL), (*(_BYTE *)(v64 + 8) & 1) != 0)) )
          {
LABEL_167:
            *(_OWORD *)(v14 + 7) = 0LL;
            ThreadUnlock1(v64, v94, v93);
            v15 = v130;
            v4 = v148;
            goto LABEL_105;
          }
          v96 = v163;
          v75 = (unsigned int)(DWORD2(v163) - v163);
          v97 = DWORD1(v163);
          v98 = HIDWORD(v163) - DWORD1(v163);
          v99 = DWORD2(v164) - v164;
          v73 = (unsigned int)(HIDWORD(v164) - DWORD1(v164));
          v100 = *(_BYTE *)(*v135 + 26LL) & 0x40;
          if ( (v100 != 0) != ((v92 & 0x80u) != 0) )
          {
            if ( v100 && v99 > (int)v75 )
              v124 = v99 - v75;
            else
              v124 = v75 - v99;
            v96 = v124 + v163;
            LODWORD(v163) = v124 + v163;
          }
          if ( (v92 & 0x40) != 0 )
          {
            v97 = HIDWORD(v163) - v73;
            DWORD1(v163) = HIDWORD(v163) - v73;
          }
          if ( v99 < (int)v75 )
            DWORD2(v163) = v96 + v99;
          if ( (int)v73 < v98 )
            HIDWORD(v163) = v97 + v73;
          v74 = 0LL;
          *(_OWORD *)(v14 + 7) = v163;
          if ( *(_QWORD *)v136 )
          {
            v101 = *(_QWORD *)(*(_QWORD *)v136 + 8LL);
            if ( v101 )
              v74 = *(_QWORD *)(v101 + 24);
          }
          if ( v142 != (const struct tagWND *)v74 )
          {
            v102 = v145;
            *((_DWORD *)v14 + 14) += v145;
            *((_DWORD *)v14 + 16) += v102;
            v103 = DWORD1(v145);
            *((_DWORD *)v14 + 17) += DWORD1(v145);
            *((_DWORD *)v14 + 15) += v103;
          }
          goto LABEL_104;
        }
        v66 = DWORD1(v145);
        v63 = (struct tagSIZERECT *)(v14 + 2);
        v65 = v145;
        v58 = v131;
        v59 = v132;
LABEL_94:
        if ( (v64 & 0x100) != 0 )
        {
          v72 = v142;
          *(_OWORD *)(v14 + 7) = 0LL;
        }
        else
        {
          v68 = *(_DWORD *)v63;
          v69 = *((_DWORD *)v14 + 5);
          v70 = 0LL;
          *((_DWORD *)v14 + 14) = *(_DWORD *)v63;
          *((_DWORD *)v14 + 15) = v69;
          if ( *(_QWORD *)v58 )
          {
            v71 = *(_QWORD *)(*(_QWORD *)v58 + 8LL);
            if ( v71 )
              v70 = *(const struct tagWND **)(v71 + 24);
          }
          v72 = v142;
          if ( v142 != v70 )
          {
            v68 += v65;
            v69 += v66;
            *((_DWORD *)v14 + 14) = v68;
            *((_DWORD *)v14 + 15) = v69;
          }
          *((_DWORD *)v14 + 16) = *((_DWORD *)v14 + 6) + v68;
          *((_DWORD *)v14 + 17) = v69 + *((_DWORD *)v14 + 7);
        }
        v73 = *(unsigned int *)v63;
        if ( (*(_BYTE *)(*(_QWORD *)v59 + 26LL) & 0x40) != 0 )
          v74 = (unsigned int)v73 + *((_DWORD *)v14 + 6) - v139 - v67;
        else
          v74 = (unsigned int)(v73 - v67);
        *((_DWORD *)v14 + 18) = v74;
        v75 = (unsigned int)(*((_DWORD *)v14 + 5) - v133);
        v76 = *((_DWORD *)v14 + 8);
        *((_DWORD *)v14 + 19) = v75;
        if ( (v76 & 2) == 0 )
        {
          *((_DWORD *)v14 + 8) = v76 & 0xFFFFEFFF;
          *((_DWORD *)v14 + 10) = v74 + *(_DWORD *)(*(_QWORD *)v59 + 104LL);
          *((_DWORD *)v14 + 11) = v75 + *(_DWORD *)(*(_QWORD *)v59 + 108LL);
          if ( v72 != (const struct tagWND *)GetDesktopWindow(v17) )
          {
            *((_DWORD *)v14 + 10) = v104 - v65;
            *((_DWORD *)v14 + 11) = v105 - v66;
          }
          *((_DWORD *)v14 + 12) = *(_DWORD *)(*(_QWORD *)v106 + 112LL) - *(_DWORD *)(*(_QWORD *)v106 + 104LL);
          v73 = (unsigned int)(*(_DWORD *)(*(_QWORD *)v106 + 116LL) - *(_DWORD *)(*(_QWORD *)v106 + 108LL));
          *((_DWORD *)v14 + 13) = v73;
        }
LABEL_104:
        ThreadUnlock1(v74, v73, v75);
        v15 = v130;
        v4 = v148;
        goto LABEL_105;
      }
      v64 = *((unsigned int *)v14 + 8);
    }
    LODWORD(v64) = v64 & 0xFFFFF7FF;
    *((_DWORD *)v14 + 8) = v64;
    goto LABEL_135;
  }
LABEL_226:
  ThreadUnlock1(v79, v78, v80);
  ThreadUnlock1(v126, v125, v127);
  return 0LL;
}
