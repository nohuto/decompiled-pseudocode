/*
 * XREFs of ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1C005E99C
 * Callers:
 *     ?xxxShowWindowViaMinMax@@YAXPEAUtagWND@@UShowCommandAndSource@@W4MinMaxOptions@@@Z @ 0x1C00123A4 (-xxxShowWindowViaMinMax@@YAXPEAUtagWND@@UShowCommandAndSource@@W4MinMaxOptions@@@Z.c)
 *     ?xxxMinMaximize@@YAXPEAUtagWND@@IW4MinMaxOptions@@@Z @ 0x1C005E948 (-xxxMinMaximize@@YAXPEAUtagWND@@IW4MinMaxOptions@@@Z.c)
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z @ 0x1C01EB3CC (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxMoveDragRectFromMaximize@@YAXPEAUMOVESIZEDATA@@UtagPOINT@@AEBUtagRECT@@W4THRESHOLD_MARGIN_DIRECTION@@PEAU3@PEAI@Z @ 0x1C01EEF2C (-xxxMoveDragRectFromMaximize@@YAXPEAUMOVESIZEDATA@@UtagPOINT@@AEBUtagRECT@@W4THRESHOLD_MARGIN_DI.c)
 *     _anonymous_namespace_::xxxAwpMinMaximizeEx @ 0x1C023BFBC (_anonymous_namespace_--xxxAwpMinMaximizeEx.c)
 * Callees:
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C0008AF0 (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     xxxSendMinRectMessages @ 0x1C000E178 (xxxSendMinRectMessages.c)
 *     DwmSyncNotifyMinimizing @ 0x1C001382C (DwmSyncNotifyMinimizing.c)
 *     ?s_xxxOnWindowRestoreFromMinimized@CRecalcProp@@SA_NPEAUtagWND@@_NPEA_NPEAKPEAUtagRECT@@@Z @ 0x1C0015D98 (-s_xxxOnWindowRestoreFromMinimized@CRecalcProp@@SA_NPEAUtagWND@@_NPEA_NPEAKPEAUtagRECT@@@Z.c)
 *     DwmAsyncNotifyAnimationChange @ 0x1C0016ADC (DwmAsyncNotifyAnimationChange.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C002D8F8 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C002E5BC (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00310B0 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00374DC (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     InternalBeginDeferWindowPos @ 0x1C0045644 (InternalBeginDeferWindowPos.c)
 *     ?_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z @ 0x1C0045FC8 (-_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C005C068 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     GetMonitorWorkRectForWindow @ 0x1C005E89C (GetMonitorWorkRectForWindow.c)
 *     IsThreadDesktopComposed @ 0x1C005F7D4 (IsThreadDesktopComposed.c)
 *     ?OnBecomingMinMaximized@WindowMargins@@YAXPEAUtagWND@@@Z @ 0x1C005F7F8 (-OnBecomingMinMaximized@WindowMargins@@YAXPEAUtagWND@@@Z.c)
 *     SetMinimize @ 0x1C005F990 (SetMinimize.c)
 *     xxxShowOwnedWindows @ 0x1C005FA00 (xxxShowOwnedWindows.c)
 *     ?CalcMinZOrder@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C005FC2C (-CalcMinZOrder@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?IsVerticallyMaximized@@YA_NPEBUtagWND@@@Z @ 0x1C005FE74 (-IsVerticallyMaximized@@YA_NPEBUtagWND@@@Z.c)
 *     ?IsLeftSemiMaximized@@YA_NPEBUtagWND@@@Z @ 0x1C005FE90 (-IsLeftSemiMaximized@@YA_NPEBUtagWND@@@Z.c)
 *     ?IsRightSemiMaximized@@YA_NPEBUtagWND@@@Z @ 0x1C005FEAC (-IsRightSemiMaximized@@YA_NPEBUtagWND@@@Z.c)
 *     ParkIcon @ 0x1C005FEC8 (ParkIcon.c)
 *     ClrFTrueVis @ 0x1C0061890 (ClrFTrueVis.c)
 *     ?RemoveSemiMaximizedState@@YAXPEAUtagWND@@@Z @ 0x1C0061934 (-RemoveSemiMaximizedState@@YAXPEAUtagWND@@@Z.c)
 *     _PostMessage @ 0x1C00983E0 (_PostMessage.c)
 *     HMValidateHandleNoSecure @ 0x1C00B02D0 (HMValidateHandleNoSecure.c)
 *     ?IsSemiMaximized@@YA_NPEBUtagWND@@@Z @ 0x1C00B04A0 (-IsSemiMaximized@@YA_NPEBUtagWND@@@Z.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C00B29B8 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     PostShellHookMessagesEx @ 0x1C00B2C00 (PostShellHookMessagesEx.c)
 *     PostIAMShellHookMessage @ 0x1C00B2D78 (PostIAMShellHookMessage.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C00B4B3C (IsToplevelWindowDesktopComposed.c)
 *     SetOrClrWF @ 0x1C00B5D8C (SetOrClrWF.c)
 *     _GetProp @ 0x1C00B6E24 (_GetProp.c)
 *     CkptRestore @ 0x1C00E1D4C (CkptRestore.c)
 *     GetRect @ 0x1C00E1ED0 (GetRect.c)
 *     IsVisible @ 0x1C00E2A5C (IsVisible.c)
 *     _GetDesktopWindow @ 0x1C00EA360 (_GetDesktopWindow.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C00EA700 (xxxInitSendValidateMinMaxInfoEx.c)
 *     ?IsTrayWindow@@YA_NPEAUtagWND@@W4TrayCheckOption@@@Z @ 0x1C00EF6FC (-IsTrayWindow@@YA_NPEAUtagWND@@W4TrayCheckOption@@@Z.c)
 *     xxxWindowEvent @ 0x1C00F0BC0 (xxxWindowEvent.c)
 *     _IsTopLevelWindow @ 0x1C0122A20 (_IsTopLevelWindow.c)
 *     xxxEndDeferWindowPosEx @ 0x1C01236C0 (xxxEndDeferWindowPosEx.c)
 *     xxxSendMessage @ 0x1C0127888 (xxxSendMessage.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     ?RestoreSemimaximizedState@@YAXPEAUtagWND@@PEBUtagCHECKPOINT@@@Z @ 0x1C01E9DB4 (-RestoreSemimaximizedState@@YAXPEAUtagWND@@PEBUtagCHECKPOINT@@@Z.c)
 *     xxxFlushPalette @ 0x1C0214570 (xxxFlushPalette.c)
 *     xxxDrawAnimatedRects @ 0x1C0224180 (xxxDrawAnimatedRects.c)
 */

__int64 __fastcall xxxMinMaximizeEx(struct tagWND *a1, unsigned int a2, int a3, __int64 a4)
{
  __int64 v4; // r13
  __int128 *v7; // r12
  __int64 v8; // rax
  char v9; // cl
  __int64 result; // rax
  int v11; // edx
  int v12; // ecx
  int v13; // edx
  int v14; // ecx
  int v15; // edx
  int v16; // r15d
  int v17; // r8d
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rbx
  void *v21; // rax
  struct tagWND *v22; // rdx
  __int64 v23; // rsi
  int v24; // ebx
  __int64 v25; // rdx
  int v26; // edx
  int v27; // eax
  __int128 v28; // xmm6
  __int128 v29; // xmm7
  int v30; // r13d
  __int64 v31; // r15
  int v32; // edx
  char v33; // cl
  struct tagWND *v34; // rcx
  __int64 v35; // rax
  int v36; // edx
  char v37; // dl
  int v38; // ebx
  struct tagWND *v39; // rax
  int v40; // ecx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  void *v47; // r14
  int v48; // eax
  _DWORD *v49; // r14
  struct tagWND *i; // rcx
  struct _DEVICE_OBJECT *v51; // rdx
  __int64 v52; // r8
  __int64 v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  unsigned int v60; // edx
  unsigned int v61; // edx
  int v62; // edx
  struct tagWND *v63; // rcx
  unsigned int v64; // edx
  int v65; // edx
  unsigned int v66; // edx
  bool v67; // al
  int v68; // edx
  char v69; // r14
  char v70; // dl
  __int64 v71; // rdx
  __int64 j; // rsi
  __int64 DesktopWindow; // rax
  char v74; // cl
  __int64 v75; // rcx
  char v76; // si
  __int64 v77; // rsi
  char v78; // cl
  __int64 v79; // rax
  __int64 v80; // rcx
  char v81; // r9
  __int64 v82; // r10
  int v83; // r11d
  __int128 v84; // xmm6
  __int64 v85; // rcx
  int v86; // edx
  struct tagWND *v87; // rcx
  __int64 v88; // rsi
  unsigned __int64 v89; // r8
  void *v90; // r15
  __int64 *v91; // r8
  __int64 v92; // rax
  __int64 v93; // rdx
  __int64 v94; // rax
  __m128i *MonitorWorkRectForWindow; // rax
  __int64 v96; // r11
  unsigned __int64 v97; // xmm0_8
  __int64 v98; // r8
  __int64 v99; // rdx
  __int64 v100; // rax
  unsigned int v101; // ecx
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // rbx
  void *v105; // rax
  bool v106; // [rsp+50h] [rbp-B0h]
  char v107; // [rsp+51h] [rbp-AFh]
  char v109; // [rsp+60h] [rbp-A0h]
  char v110; // [rsp+61h] [rbp-9Fh]
  int v111; // [rsp+64h] [rbp-9Ch]
  char v112; // [rsp+68h] [rbp-98h]
  __int128 v113; // [rsp+70h] [rbp-90h]
  int v114; // [rsp+80h] [rbp-80h]
  int v115; // [rsp+84h] [rbp-7Ch]
  int v116; // [rsp+88h] [rbp-78h]
  unsigned int v117; // [rsp+8Ch] [rbp-74h]
  BOOL v118; // [rsp+90h] [rbp-70h]
  int v119; // [rsp+94h] [rbp-6Ch]
  int v120; // [rsp+98h] [rbp-68h]
  int v121; // [rsp+9Ch] [rbp-64h]
  int v122; // [rsp+A0h] [rbp-60h]
  __int64 v123; // [rsp+A8h] [rbp-58h]
  __int128 v124; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v125; // [rsp+C0h] [rbp-40h]
  __int128 v126; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v127; // [rsp+D8h] [rbp-28h]
  __int128 v128; // [rsp+E0h] [rbp-20h] BYREF
  struct tagRECT v129; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v130; // [rsp+100h] [rbp+0h]
  __int128 v131; // [rsp+110h] [rbp+10h]
  __int64 v132; // [rsp+120h] [rbp+20h]

  v4 = *((_QWORD *)a1 + 13);
  v122 = 0;
  v119 = 0;
  v111 = 0;
  v121 = 0;
  v120 = 0;
  v118 = 0;
  v116 = 0;
  v7 = *(__int128 **)(a4 + 8);
  v115 = 0;
  v127 = 0LL;
  v125 = 0LL;
  v106 = 0;
  v132 = 0LL;
  v117 = 0;
  v8 = *((_QWORD *)a1 + 5);
  v126 = 0LL;
  v112 = a3;
  v124 = 0LL;
  v130 = 0LL;
  v114 = 1;
  v131 = 0LL;
  v9 = *(_BYTE *)(v8 + 31);
  v110 = v9 & 0x20;
  v123 = *(_QWORD *)(a4 + 16);
  *(_QWORD *)&v129.left = *(_QWORD *)a4;
  v109 = v9 & 1;
  v113 = 0LL;
  v128 = 0LL;
  if ( !v7 || (v107 = 1, (a3 & 8) == 0) )
    v107 = 0;
  if ( (a3 & 0x20000) != 0 )
    return PostEventMessageEx(
             *((struct tagTHREADINFO **)a1 + 2),
             *(struct tagQ **)(*((_QWORD *)a1 + 2) + 432LL),
             0x17u,
             a1,
             0,
             a2,
             a3 & 0xFFFFFFFFFFFDFFFFuLL,
             0LL);
  v11 = ((a3 & 0x20) << 15) | 0x10;
  if ( (a3 & 0x10) == 0 )
    v11 = (a3 & 0x20) << 15;
  v12 = v11 | 4;
  if ( (a3 & 0x40) == 0 )
    v12 = v11;
  v13 = v12 | 0x80000;
  if ( (a3 & 0x80u) == 0 )
    v13 = v12;
  v14 = v13 | 0x400000;
  if ( (a3 & 0x100) == 0 )
    v14 = v13;
  v15 = v14 | 0x800000;
  if ( (a3 & 0x200) == 0 )
    v15 = v14;
  v16 = v15 | 0x200000;
  if ( (a3 & 0x400) == 0 )
    v16 = v15;
  if ( (unsigned int)IsThreadDesktopComposed(gptiCurrent) )
  {
    v112 = v17;
    if ( (*((_DWORD *)a1 + 80) & 0x40000000) != 0 )
    {
      v114 = 1;
    }
    else
    {
      v114 = v17 & 0x10000;
      if ( (v17 & 0x10000) == 0 )
      {
        v114 = 0;
        if ( (unsigned int)IsToplevelWindowDesktopComposed(a1) )
        {
          v20 = *(_QWORD *)a1;
          v21 = (void *)ReferenceDwmApiPort(v19, v18);
          DwmAsyncNotifyAnimationChange(v21, 0, v20);
          v114 = 0;
        }
      }
    }
  }
  GetRect(a1, &v128, 66LL);
  if ( (v112 & 4) != 0 )
    result = GetProp(a1, *((unsigned __int16 *)&WPP_MAIN_CB.AlignmentRequirement + 2), 1LL);
  else
    result = CkptRestore(a1);
  v23 = result;
  if ( !result )
    goto LABEL_237;
  v24 = v16;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) != 0
    && CRecalcProp::s_xxxOnWindowRestoreFromMinimized(
         a1,
         v107,
         (bool *)(a4 + 28),
         (unsigned int *)(a4 + 24),
         (struct tagRECT *)(a4 + 32)) )
  {
    v24 = v16 | 0x80000;
  }
  WindowMargins::OnBecomingMinMaximized(a1, v22);
  v25 = *(_QWORD *)(v4 + 40);
  if ( (*(_BYTE *)(v25 + 26) & 0x40) != 0 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x40) == 0 )
  {
    v26 = *(_DWORD *)(v25 + 96);
    v27 = v26 - DWORD2(v128);
    DWORD2(v128) = v26 - v128;
    LODWORD(v128) = v27;
    v119 = 1;
  }
  if ( v107 )
  {
    v28 = *v7;
    *(_DWORD *)(v23 + 48) &= 0xFFFFFFE1;
  }
  else
  {
    v28 = *(_OWORD *)v23;
  }
  v29 = *(_OWORD *)(v23 + 16);
  if ( (((unsigned __int8)*(_DWORD *)(gptiCurrent + 680LL) | *(_BYTE *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL)) & 0x40) != 0 )
  {
    v30 = a2;
    result = xxxCallHook(1, *(_QWORD *)a1, a2, 5);
    if ( (_DWORD)result )
      goto LABEL_237;
  }
  else
  {
    v30 = a2;
  }
  if ( v30 == 204 )
  {
    v24 |= 0x14u;
    if ( (*(_DWORD *)(v23 + 48) & 4) != 0 )
    {
      v30 = 2;
      v31 = gptiCurrent;
      goto LABEL_44;
    }
    v30 = 1;
    goto LABEL_48;
  }
  v31 = gptiCurrent;
  if ( v30 == 1 )
    goto LABEL_48;
  if ( v30 != 2 )
  {
    if ( v30 == 3 )
    {
LABEL_50:
      v35 = *((_QWORD *)a1 + 5);
      v36 = v24;
      if ( v30 == 3 )
      {
        result = ValidateHmonitorNoRip(*(_QWORD *)(v35 + 256));
        v37 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
        if ( (v37 & 1) != 0
          && (!*(_QWORD *)&v129.left || result == *(_QWORD *)&v129.left)
          && (v37 & 0x10) != 0
          && (v112 & 2) == 0 )
        {
          goto LABEL_237;
        }
        v38 = v24 | 0x8000;
        v116 = 1;
        if ( (v37 & 0x20) != 0 )
          *(_DWORD *)(v23 + 48) |= 4u;
        xxxInitSendValidateMinMaxInfoEx(a1);
      }
      else
      {
        v74 = *(_BYTE *)(v35 + 31);
        v38 = v24 | 0x8000;
        if ( (v74 & 0x21) == 0 )
          v38 = v36;
        if ( (v74 & 1) != 0 )
          v116 = 1;
      }
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) != 0 )
      {
        result = xxxSendMessage(a1, 19LL, 0LL, 0LL);
        if ( !result )
          goto LABEL_237;
        v115 = 1;
        v120 = 1;
        if ( (v38 & 0x10) == 0 )
        {
          v121 = 1;
          v118 = (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x40) == 0;
        }
        v38 |= 0x100u;
      }
      else
      {
        v115 = 3;
      }
      if ( v30 == 3 )
      {
        *(_QWORD *)&v113 = v131;
        DWORD2(v113) = DWORD2(v130) + v131;
        HIDWORD(v113) = DWORD1(v131) + HIDWORD(v130);
        SetOrClrWF(1LL, a1, 3841LL, 1LL);
        RemoveSemiMaximizedState(a1);
      }
      else
      {
        if ( v30 == 12 || (unsigned int)(v30 - 13) < 2 )
        {
          v113 = v29;
          RestoreSemimaximizedState(a1, (const struct tagCHECKPOINT *)v23);
        }
        else
        {
          v113 = v28;
        }
        SetOrClrWF(0LL, a1, 3841LL, 1LL);
      }
      v75 = *((_QWORD *)a1 + 5);
      if ( (*(_BYTE *)(v75 + 31) & 0x20) != 0 )
      {
        if ( (*(_BYTE *)(v75 + 21) & 2) != 0 )
          v76 = 0;
        else
          v76 = IsTrayWindow(a1, 1LL);
        SetMinimize(a1);
        v117 = 23;
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 2) == 0
          && v76 != (unsigned __int8)IsTrayWindow(a1, 1LL)
          && (*(_DWORD *)(gpsi + 2120LL) & 8) != 0 )
        {
          v77 = *(_QWORD *)a1;
          if ( ((*(_DWORD *)(gptiCurrent + 680LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL)) & 0x800) != 0 )
            xxxCallHook(2, *(_QWORD *)a1, 0LL, 10);
          if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 192LL) )
            PostShellHookMessagesEx(2uLL, v77, 0LL);
        }
        v106 = 0;
        v78 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
        if ( (v78 & 0xC0) != 0x40 && (v78 & 0x10) != 0 )
        {
          v79 = *((_QWORD *)a1 + 2);
          if ( *(_DWORD *)(v79 + 908) == 1 )
          {
            v80 = *(_QWORD *)(v79 + 432);
            if ( v80 != gpqForeground
              && ((v38 & 0x10) == 0 || *(struct tagWND **)(v80 + 128) == a1)
              && (v112 & 0x40) == 0 )
            {
              xxxSetForegroundWindowWithOptions((__int64)a1, 6u, 4097, 0);
            }
          }
        }
      }
      v24 = v38 | 0x20;
      goto LABEL_167;
    }
    if ( v30 == 4 )
    {
      if ( gpqForeground && *(_QWORD *)(gpqForeground + 128LL) )
        v24 |= 0x10u;
      goto LABEL_78;
    }
    if ( v30 != 6 && v30 != 7 )
    {
      if ( v30 != 9 )
        goto LABEL_167;
LABEL_78:
      v30 = 1;
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) != 0 )
      {
        v40 = *(_DWORD *)(v23 + 48);
        if ( (v40 & 2) != 0 )
        {
          v30 = 3;
          goto LABEL_50;
        }
        if ( (v40 & 0x18) == 0x18 )
        {
          v30 = 12;
          goto LABEL_50;
        }
        if ( (v40 & 8) != 0 )
        {
          v30 = 14;
          goto LABEL_50;
        }
        if ( (v40 & 0x10) != 0 )
        {
          v30 = 13;
          goto LABEL_50;
        }
      }
LABEL_48:
      if ( IsSemiMaximized(a1) )
        RemoveSemiMaximizedState(v34);
      goto LABEL_50;
    }
    if ( gpqForeground && *(_QWORD *)(gpqForeground + 128LL) )
      v24 |= 0x10u;
    if ( (v112 & 0x40) == 0 )
    {
      v39 = CalcMinZOrder(a1);
      if ( v39 )
      {
        if ( !v123 )
          v123 = *(_QWORD *)v39;
      }
      else
      {
        v24 |= 4u;
      }
    }
  }
LABEL_44:
  v32 = 1;
  v111 = 1;
  result = *((_QWORD *)a1 + 5);
  v33 = *(_BYTE *)(result + 31);
  if ( (v33 & 0x20) == 0 )
  {
    if ( (unsigned int)IsToplevelWindowDesktopComposed(a1) )
    {
      v47 = (void *)ReferenceDwmApiPort(v42, v41);
      if ( v47 )
      {
        UserSessionSwitchLeaveCrit(v44, v43, v45, v46);
        DwmSyncNotifyMinimizing(v47, *(_QWORD *)a1);
        EnterCrit(1LL, 0LL);
      }
    }
    v48 = *(_DWORD *)(v23 + 48);
    v115 = 2;
    if ( (v48 & 1) == 0 )
    {
      v48 &= ~0x20u;
      *(_DWORD *)(v23 + 48) = v48;
    }
    v49 = (_DWORD *)(v23 + 32);
    if ( (v48 & 0x20) == 0 )
    {
      ParkIcon(a1, v23 + 32);
      *(_DWORD *)(v23 + 48) |= 0x20u;
    }
    LODWORD(v113) = *v49;
    DWORD1(v113) = *(_DWORD *)(v23 + 36);
    DWORD2(v113) = *(_DWORD *)(gpsi + 2124LL) + *v49;
    HIDWORD(v113) = DWORD1(v113) + *(_DWORD *)(gpsi + 2128LL);
    xxxShowOwnedWindows(a1, 1LL);
    for ( i = *(struct tagWND **)(*(_QWORD *)(v31 + 432) + 120LL); i; i = (struct tagWND *)*((_QWORD *)i + 13) )
    {
      if ( i == a1 )
      {
        *(_QWORD *)&v124 = *(_QWORD *)(v31 + 416);
        *(_QWORD *)(v31 + 416) = &v124;
        *((_QWORD *)&v124 + 1) = i;
        HMLockObject(i);
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) == 0x40 )
        {
          v53 = *((_QWORD *)a1 + 13);
          *(_QWORD *)&v126 = *(_QWORD *)(v31 + 416);
          *(_QWORD *)(v31 + 416) = &v126;
          *((_QWORD *)&v126 + 1) = v53;
          if ( v53 )
            HMLockObject(v53);
          xxxSetFocus(*((struct tagWND **)a1 + 13), v51, v52);
          ThreadUnlock1(v55, v54, v56);
        }
        else
        {
          xxxSetFocus(0LL, v51, v52);
        }
        ThreadUnlock1(v58, v57, v59);
        break;
      }
    }
    v60 = *(_DWORD *)(v23 + 48) & 0xFFFFFEFF | (4 * (*(_BYTE *)(*((_QWORD *)a1 + 5) + 20LL) & 0x40));
    *(_DWORD *)(v23 + 48) = v60;
    if ( v107 )
      goto LABEL_117;
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 1) != 0 )
    {
      v116 = 1;
      v61 = v60 & 0xFFFFFFE5 | 2;
LABEL_116:
      *(_DWORD *)(v23 + 48) = v61;
      goto LABEL_117;
    }
    if ( IsVerticallyMaximized(a1) )
    {
      v64 = v62 | 8;
    }
    else
    {
      if ( IsLeftSemiMaximized(v63) )
      {
        v66 = v65 & 0xFFFFFFE7 | 8;
LABEL_114:
        *(_DWORD *)(v23 + 48) = v66;
        RemoveSemiMaximizedState(v63);
LABEL_117:
        result = *((_QWORD *)a1 + 5);
        if ( (*(_BYTE *)(result + 21) & 2) != 0 )
        {
          v69 = 0;
        }
        else
        {
          result = IsTrayWindow(a1, 1LL);
          v69 = result;
          v106 = result;
        }
        v70 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
        if ( (v70 & 0x20) == 0 )
        {
          SetMinimize(a1);
          SetOrClrWF(0LL, a1, 3841LL, 1LL);
          v117 = 22;
          if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 2) == 0 )
            v106 = v69 != (char)IsTrayWindow(a1, 1LL);
          for ( j = *((_QWORD *)a1 + 14); j; j = *(_QWORD *)(j + 88) )
            ClrFTrueVis(j);
          v24 |= 0x8120u;
          DesktopWindow = GetDesktopWindow(a1, v71);
          v32 = 1;
          if ( *((_QWORD *)a1 + 13) == DesktopWindow )
            v122 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 18LL) & 0x20;
LABEL_168:
          if ( (v112 & 1) == 0 )
          {
            if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) != 0 )
            {
              if ( v32 )
                v24 |= 0x40u;
              if ( !(unsigned int)IsVisible(a1)
                || (v83 & 0x10000) == 0
                || !v115
                || (v81 & 0x40) != 0 && (*(_BYTE *)(v82 + 23) & 0x10) != 0 )
              {
                goto LABEL_188;
              }
              v84 = 0LL;
              if ( v119 )
              {
                v84 = v113;
                v85 = *(_QWORD *)(*((_QWORD *)a1 + 13) + 40LL);
                v86 = *(_DWORD *)(v85 + 96) - v113;
                LODWORD(v113) = *(_DWORD *)(v85 + 96) - DWORD2(v113);
                DWORD2(v113) = v86;
              }
              if ( v115 == 3 || !(unsigned __int8)IsTrayWindow(a1, 1LL) )
              {
                v87 = a1;
              }
              else
              {
                v129 = 0LL;
                xxxSendMinRectMessages((unsigned __int64 *)a1, (__int64)&v129);
                if ( IsRectEmptyInl(&v129) )
                  goto LABEL_185;
                v87 = a1;
              }
              xxxDrawAnimatedRects(v87);
LABEL_185:
              if ( v119 )
                v113 = v84;
              goto LABEL_188;
            }
            v24 |= 0x40u;
          }
LABEL_188:
          if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 2) == 0 && v106 && (*(_DWORD *)(gpsi + 2120LL) & 8) != 0 )
          {
            v88 = *(_QWORD *)a1;
            if ( ((*(_DWORD *)(gptiCurrent + 680LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL)) & 0x800) != 0 )
              xxxCallHook(1, *(_QWORD *)a1, 0LL, 10);
            if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 192LL) )
              PostShellHookMessagesEx(1uLL, v88, 0LL);
          }
          v90 = InternalBeginDeferWindowPos(1u);
          if ( v90 )
          {
            v91 = v123 ? (__int64 *)HMValidateHandleNoSecure(v123, 1LL) : 0LL;
            v89 = _DeferWindowPos(
                    (__int64)v90,
                    (__int64)a1,
                    v91,
                    v113,
                    DWORD1(v113),
                    DWORD2(v113) - (int)v113,
                    HIDWORD(v113) - DWORD1(v113),
                    v24,
                    0);
            if ( v89 )
            {
              if ( v116 && (unsigned int)IsTopLevelWindow(a1) )
              {
                v92 = *((_QWORD *)a1 + 5);
                if ( (*(_BYTE *)(v92 + 31) & 1) != 0 )
                {
                  *(_QWORD *)(*(_QWORD *)(v89 + 40) + 112LL) = 2LL;
                }
                else if ( (*(_BYTE *)(v92 + 21) & 8) != 0 )
                {
                  *(_QWORD *)(*(_QWORD *)(v89 + 40) + 112LL) = 1LL;
                }
              }
              xxxEndDeferWindowPosEx((struct tagSMWP *)v89);
            }
          }
          if ( v117 )
            xxxWindowEvent(v117, 1);
          *((_DWORD *)a1 + 80) &= ~0x200000u;
          v93 = *((_QWORD *)a1 + 5);
          if ( (*(_BYTE *)(v93 + 31) & 1) != 0 )
          {
            v94 = ValidateHmonitorNoRip(*(_QWORD *)(v93 + 256));
            MonitorWorkRectForWindow = (__m128i *)GetMonitorWorkRectForWindow((__int64)&v128, v94, a1);
            v93 = *((_QWORD *)a1 + 5);
            v96 = *(_QWORD *)(v93 + 88);
            v89 = _mm_srli_si128(*MonitorWorkRectForWindow, 8).m128i_u64[0];
            v97 = _mm_srli_si128(*(__m128i *)(v93 + 88), 8).m128i_u64[0];
            if ( (int)v97 - (int)v96 < (int)(v89 - MonitorWorkRectForWindow->m128i_i64[0]) )
            {
              v89 = (unsigned int)(HIDWORD(v89) - HIDWORD(MonitorWorkRectForWindow->m128i_i64[0]));
              if ( HIDWORD(v97) - HIDWORD(v96) < (int)v89 )
                *((_DWORD *)a1 + 80) |= 0x200000u;
            }
          }
          if ( v30 == 2
            && (*(_BYTE *)(v93 + 21) & 2) == 0
            && (*(_BYTE *)(v93 + 31) & 0x10) != 0
            && (*(_BYTE *)(v93 + 30) & 0x40) != 0 )
          {
            if ( *(_QWORD *)(*((_QWORD *)a1 + 17) + 80LL) )
            {
              v98 = 1LL;
              v99 = 38LL;
            }
            else
            {
              v98 = 0LL;
              v99 = 15LL;
            }
            PostMessage(a1, v99, v98, 0LL);
          }
          if ( v120 )
            xxxShowOwnedWindows(a1, 3LL);
          if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) != 0
            && v30 == 6
            && *((_QWORD *)a1 + 13) == GetDesktopWindow(a1, v93)
            && !(unsigned int)xxxActivateOnMinimize(a1) )
          {
            xxxActivateWindowWithOptions(a1, 2, 49LL, 1);
          }
          if ( v121 )
            xxxSetFocus(a1, (PDEVICE_OBJECT)v93, v89);
          if ( v118 )
            xxxSendMessage(a1, 6LL, 1LL, 0LL);
          if ( v122 )
            xxxFlushPalette(a1, v93, v89);
          v100 = *((_QWORD *)a1 + 5);
          v101 = *(unsigned __int8 *)(v100 + 31);
          if ( v109 != (*(_BYTE *)(v100 + 31) & 1) || (result = v110 != 0, (_DWORD)result != ((v101 >> 5) & 1)) )
            result = PostIAMShellHookMessage(40LL, *(_QWORD *)a1);
          goto LABEL_237;
        }
        if ( (v70 & 0x10) != 0 )
          goto LABEL_237;
        v24 |= 0x17u;
        v113 = 0LL;
LABEL_167:
        v32 = v111;
        goto LABEL_168;
      }
      v67 = IsRightSemiMaximized(v63);
      v64 = v68 & 0xFFFFFFF7;
      if ( !v67 )
      {
        v61 = v64 & 0xFFFFFFEF;
        goto LABEL_116;
      }
    }
    v66 = v64 | 0x10;
    goto LABEL_114;
  }
  if ( (v33 & 0x10) == 0 )
  {
    v24 |= 0x17u;
    goto LABEL_168;
  }
LABEL_237:
  if ( !v114 )
  {
    result = IsToplevelWindowDesktopComposed(a1);
    if ( (_DWORD)result )
    {
      v104 = *(_QWORD *)a1;
      v105 = (void *)ReferenceDwmApiPort(v103, v102);
      return DwmAsyncNotifyAnimationChange(v105, 1, v104);
    }
  }
  return result;
}
