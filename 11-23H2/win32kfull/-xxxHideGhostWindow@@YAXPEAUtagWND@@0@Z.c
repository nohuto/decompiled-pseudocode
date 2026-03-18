/*
 * XREFs of ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C01F410C
 * Callers:
 *     ?xxxDestroyCorrespondingGhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C01F3C74 (-xxxDestroyCorrespondingGhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxHandleDestroyGhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C01F3EF8 (-xxxHandleDestroyGhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxRegisterGhostWindow@@YAHPEAUHWND__@@0@Z @ 0x1C01F4878 (-xxxRegisterGhostWindow@@YAHPEAUHWND__@@0@Z.c)
 *     ?xxxRegisterSiblingFrostWindow@@YAHPEAUHWND__@@0@Z @ 0x1C01F4B48 (-xxxRegisterSiblingFrostWindow@@YAHPEAUHWND__@@0@Z.c)
 * Callees:
 *     DwmAsyncNotifyAnimationChange @ 0x1C0016ADC (DwmAsyncNotifyAnimationChange.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C002D8F8 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     AdjustPwndPtiPqForDelegation @ 0x1C003703C (AdjustPwndPtiPqForDelegation.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00374DC (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     xxxSetWindowPos @ 0x1C0045448 (xxxSetWindowPos.c)
 *     xxxRedrawWindow @ 0x1C004E1B4 (xxxRedrawWindow.c)
 *     ?xxxMinMaximize@@YAXPEAUtagWND@@IW4MinMaxOptions@@@Z @ 0x1C005E948 (-xxxMinMaximize@@YAXPEAUtagWND@@IW4MinMaxOptions@@@Z.c)
 *     INPUTDEST_FROM_PWND @ 0x1C008D070 (INPUTDEST_FROM_PWND.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1C00AABCC (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     IsWindowBeingDestroyed @ 0x1C00AD46C (IsWindowBeingDestroyed.c)
 *     PostShellHookMessagesEx @ 0x1C00B2C00 (PostShellHookMessagesEx.c)
 *     PostIAMShellHookMessage @ 0x1C00B2D78 (PostIAMShellHookMessage.c)
 *     SetOrClrWF @ 0x1C00B5D8C (SetOrClrWF.c)
 *     CkptRestore @ 0x1C00E1D4C (CkptRestore.c)
 *     SetVisible @ 0x1C00EDEE8 (SetVisible.c)
 *     xxxWindowEvent @ 0x1C00F0BC0 (xxxWindowEvent.c)
 *     PostInputMessage @ 0x1C0117FD8 (PostInputMessage.c)
 *     _IsTopLevelWindow @ 0x1C0122A20 (_IsTopLevelWindow.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     Feature_MissingShowWinEventOnUnGhost__private_IsEnabledDeviceUsage @ 0x1C013BF20 (Feature_MissingShowWinEventOnUnGhost__private_IsEnabledDeviceUsage.c)
 *     ?_CopyWindowCheckpoint@@YAHPEAUtagWND@@0@Z @ 0x1C01F3604 (-_CopyWindowCheckpoint@@YAHPEAUtagWND@@0@Z.c)
 *     ?xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z @ 0x1C01F4804 (-xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z.c)
 */

void __fastcall xxxHideGhostWindow(struct tagWND *a1, struct tagWND *a2)
{
  __int64 v2; // rdi
  struct tagWND *v4; // rsi
  BOOL v5; // r12d
  int v6; // r14d
  char v7; // cl
  __int128 *v8; // rax
  unsigned __int8 v9; // al
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rbx
  void *v18; // rax
  int v19; // r13d
  struct tagQ **v20; // rbx
  __int64 v21; // rcx
  struct tagWND *v22; // rcx
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 v25; // r8
  unsigned int v26; // ebx
  __int64 v27; // rdx
  _DWORD *v28; // rax
  __int64 v29; // rdx
  int v30; // ecx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rdx
  struct tagWND *v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rbx
  __int64 v37; // r8
  __int64 v38; // r14
  __int128 *v39; // rax
  __int64 v40; // rax
  unsigned __int16 v41; // bx
  void *v42; // rax
  int v43; // [rsp+80h] [rbp-80h] BYREF
  int v44; // [rsp+84h] [rbp-7Ch] BYREF
  int v45; // [rsp+88h] [rbp-78h]
  __int64 v46; // [rsp+90h] [rbp-70h] BYREF
  struct tagQ *v47; // [rsp+98h] [rbp-68h] BYREF
  __int64 v48; // [rsp+A0h] [rbp-60h] BYREF
  struct tagWND *v49; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v50; // [rsp+B0h] [rbp-50h]
  __int128 v51; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v52; // [rsp+C8h] [rbp-38h]
  _DWORD v53[28]; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v54; // [rsp+140h] [rbp+40h] BYREF
  __int128 v55; // [rsp+150h] [rbp+50h] BYREF
  __int128 v56; // [rsp+160h] [rbp+60h]
  __int128 v57; // [rsp+170h] [rbp+70h]
  __int128 v58; // [rsp+180h] [rbp+80h]
  __int128 v59; // [rsp+190h] [rbp+90h]
  __int128 v60; // [rsp+1A0h] [rbp+A0h]
  __int128 v61; // [rsp+1B0h] [rbp+B0h]

  v2 = 0LL;
  v48 = 0LL;
  v49 = a2;
  v54 = 0LL;
  v4 = a2;
  v43 = 0;
  v5 = 0;
  v45 = 0;
  v6 = 49185;
  v44 = *(_DWORD *)(gptiCurrent + 488LL) & 1;
  v7 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
  if ( (v7 & 0x20) != 0 )
    v43 = 1;
  else
    v5 = (v7 & 1) != 0;
  v8 = (__int128 *)INPUTDEST_FROM_PWND(v53, (__int64)a1);
  v55 = *v8;
  v56 = v8[1];
  v57 = v8[2];
  v58 = v8[3];
  v59 = v8[4];
  v60 = v8[5];
  v61 = v8[6];
  v9 = IsCapturedBySystem(&v55);
  v10 = *((_QWORD *)v4 + 2);
  v11 = *((_QWORD *)a1 + 2);
  LODWORD(v46) = v9;
  if ( v10 && v11 )
  {
    v12 = *(_QWORD *)(v11 + 432);
    if ( v12 == gpqForeground && *(struct tagWND **)(v12 + 128) == a1
      || gpqForeground && (v13 = *(_QWORD *)(gpqForeground + 128LL)) != 0 && *(struct tagWND **)(v13 + 120) == a1 )
    {
      *(_DWORD *)(v10 + 488) |= 0x20u;
    }
    else
    {
      v6 = 49201;
    }
  }
  v14 = *((_QWORD *)a1 + 5);
  v54 = *(_OWORD *)(v14 + 88);
  if ( (*(_DWORD *)(*((_QWORD *)v4 + 5) + 288LL) & 0xF) != 2 )
  {
    v47 = (struct tagQ *)ValidateHmonitor(*(_QWORD *)(v14 + 256));
    PhysicalToLogicalDPIRect(&v54, &v54, *(unsigned int *)(*((_QWORD *)v4 + 5) + 288LL), &v47);
  }
  if ( (unsigned int)IsWindowDesktopComposed(v4) )
  {
    v45 = IsWindowDesktopComposed(v4);
    if ( v45 )
    {
      v17 = *(_QWORD *)a1;
      v18 = (void *)ReferenceDwmApiPort(v16, v15);
      DwmAsyncNotifyAnimationChange(v18, 0, v17);
    }
  }
  v19 = 3;
  if ( !(unsigned int)IsWindowBeingDestroyed((__int64)a1) )
  {
    v20 = (struct tagQ **)*((_QWORD *)a1 + 2);
    if ( v20 )
    {
      xxxWindowEvent(0x8003u, a1, 0, 0, 3);
      PostEventMessageEx((struct tagTHREADINFO *)v20, v20[54], 8u, 0LL, 0, *(_QWORD *)a1, 0LL, 0LL);
    }
  }
  if ( !(unsigned int)IsWindowBeingDestroyed((__int64)v4) && IsTopLevelWindow(v21) )
  {
    v24 = *((_QWORD *)v4 + 5);
    v25 = (unsigned int)((v44 << 17) + 17);
    v26 = (v44 << 17) + 1;
    if ( v43 )
    {
      if ( (*(_BYTE *)(v24 + 31) & 0x20) == 0 )
      {
        v25 = v26;
        v27 = 7LL;
LABEL_26:
        xxxMinMaximize((__int64)v22, v27, v25);
      }
    }
    else
    {
      if ( !v5 )
      {
        if ( (*(_BYTE *)(v24 + 31) & 0x21) == 0 )
        {
LABEL_36:
          v29 = *((_QWORD *)v4 + 5);
          v30 = v6 | 0x40;
          if ( (*(_BYTE *)(v29 + 25) & 8) == 0 )
            v30 = v6;
          v6 = v30;
          if ( (_QWORD)v54 == *(_QWORD *)(v29 + 88) )
            v6 = v30 | 2;
          goto LABEL_40;
        }
        v28 = CkptRestore(v22, &v54);
        if ( v28 )
          *(_OWORD *)v28 = v54;
        xxxMinMaximize((__int64)v4, 9LL, v26);
LABEL_35:
        v6 |= 2u;
        goto LABEL_36;
      }
      if ( (*(_BYTE *)(v24 + 31) & 1) == 0 )
      {
        v27 = 3LL;
        goto LABEL_26;
      }
    }
    _CopyWindowCheckpoint(a1, v4, v25, v23);
    goto LABEL_35;
  }
LABEL_40:
  if ( v44 || !(unsigned int)IsWindowBeingDestroyed((__int64)v4) && IsTopLevelWindow(v31) && (v6 & 0x40) != 0 )
    SetVisible(a1, 0);
  else
    xxxShowWindowEx(a1, 0, 0);
  if ( !(unsigned int)IsWindowBeingDestroyed((__int64)v4) )
  {
    if ( !IsTopLevelWindow(v32) )
    {
      if ( (*(_BYTE *)(*((_QWORD *)v4 + 5) + 25LL) & 8) != 0 )
      {
        SetVisible(v34, 0x11u);
        if ( !gdwDeferWinEvent )
          v19 = 1;
        xxxWindowEvent(0x8002u, v4, 0, 0, v19);
        xxxRedrawWindow(v4, 0LL, 0LL, 1157);
      }
      goto LABEL_73;
    }
    v43 = 0;
    v52 = 0LL;
    v35 = *((_QWORD *)a1 + 5);
    v51 = 0LL;
    if ( (*(_BYTE *)(v35 + 20) & 0x20) != 0 )
    {
      SetOrClrWF(0, (__int64 *)a1, 0x420u, 1);
      SetOrClrWF(1, (__int64 *)v4, 0x420u, 1);
      v36 = 1LL;
      goto LABEL_57;
    }
    v36 = *((_QWORD *)a1 + 12);
    if ( v36 )
    {
      if ( (struct tagWND *)v36 == v4 )
      {
        v6 |= 4u;
      }
      else if ( (*(_BYTE *)(*(_QWORD *)(v36 + 40) + 24LL) & 8) == 0 || (*(_BYTE *)(*((_QWORD *)v4 + 5) + 24LL) & 8) != 0 )
      {
        ThreadLock(*((_QWORD *)a1 + 12), &v51);
        v43 = 1;
        goto LABEL_57;
      }
    }
    v36 = 0LL;
LABEL_57:
    if ( (v6 & 0x40) != 0 )
    {
      SetVisible(v4, 1u);
      if ( (unsigned int)Feature_MissingShowWinEventOnUnGhost__private_IsEnabledDeviceUsage() )
      {
        if ( !gdwDeferWinEvent )
          v19 = 1;
        xxxWindowEvent(0x8002u, v4, 0, 0, v19);
      }
    }
    xxxSetWindowPos(v4, v36, (unsigned int)v54, DWORD1(v54), 0, 0, v6);
    if ( v43 )
      ThreadUnlock1(v34, v33, v37);
    if ( (v6 & 0x40) != 0 )
      xxxRedrawWindow(v4, 0LL, 0LL, 1157);
    if ( (v6 & 0x10) == 0 && !v44 )
      xxxActivateWindowWithOptions(v4, 0, 0LL, 1);
    if ( (_DWORD)v46 )
    {
      v38 = *((_QWORD *)v4 + 2);
      v46 = v38;
      if ( v38 )
      {
        v39 = (__int128 *)INPUTDEST_FROM_PWND(v53, (__int64)v4);
        v55 = *v39;
        v56 = v39[1];
        v57 = v39[2];
        v58 = v39[3];
        v59 = v39[4];
        v60 = v39[5];
        v61 = v39[6];
        ForceCapture(0LL);
        SetSystemInputSource(&v48);
        v40 = LogicalCursorPosFromDpiAwarenessContext(*(unsigned int *)(*((_QWORD *)v4 + 5) + 288LL));
        v44 = 0;
        v41 = v40;
        v50 = v40;
        v47 = *(struct tagQ **)(v38 + 432);
        v43 = 0;
        if ( (unsigned int)AdjustPwndPtiPqForDelegation(
                             (__int64 *)&v47,
                             (__int64 *)&v49,
                             (struct tagTHREADINFO **)&v46,
                             0x201u,
                             &v48,
                             &v44,
                             &v43) )
        {
          v4 = v49;
          PostInputMessage(
            v47,
            v49,
            0x201u,
            0LL,
            v41 | (WORD2(v50) << 16),
            0,
            0LL,
            0LL,
            0,
            (struct tagINPUT_MESSAGE_SOURCE *)&v48,
            0LL,
            0LL,
            v44,
            v43,
            v46);
        }
        else
        {
          v4 = v49;
        }
      }
    }
LABEL_73:
    if ( v45 )
    {
      if ( v4 )
        v2 = *(_QWORD *)v4;
      v42 = (void *)ReferenceDwmApiPort(v34, v33);
      DwmAsyncNotifyAnimationChange(v42, 1, v2);
    }
    xxxNotifyShellOfWindowSwap(a1, v4);
    return;
  }
  PostShellHookMessagesEx(2u, *(_QWORD *)a1, 0LL);
  PostIAMShellHookMessage(0x12u);
  if ( (*(_BYTE *)(*((_QWORD *)v4 + 5) + 25LL) & 8) != 0 )
    PostIAMShellHookMessage(0x12u);
}
