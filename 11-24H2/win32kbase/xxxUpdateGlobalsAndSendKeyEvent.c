/*
 * XREFs of xxxUpdateGlobalsAndSendKeyEvent @ 0x140189DE4
 * Callers:
 *     NtMITSynthesizeKeyboardInput @ 0x1401053D0 (NtMITSynthesizeKeyboardInput.c)
 *     xxxKeyEventEx @ 0x14014BF54 (xxxKeyEventEx.c)
 * Callees:
 *     GetActiveHKL @ 0x1400489F0 (GetActiveHKL.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     IsKeyboardDelegationEnabledForThread @ 0x1400C23B0 (IsKeyboardDelegationEnabledForThread.c)
 *     HasHidTable @ 0x1400E3A64 (HasHidTable.c)
 *     ApiSetEditionIsGpqForegroundAccessibleExplicit @ 0x1400FAC58 (ApiSetEditionIsGpqForegroundAccessibleExplicit.c)
 *     ?DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z @ 0x1400FB48C (-DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z.c)
 *     PtiKbdFromQ @ 0x1401098D4 (PtiKbdFromQ.c)
 *     ApiSetEditionIsSAS @ 0x1401107FC (ApiSetEditionIsSAS.c)
 *     ?HandleLeftRightVKs@CKeyboardProcessor@@SAEE@Z @ 0x14011ACFC (-HandleLeftRightVKs@CKeyboardProcessor@@SAEE@Z.c)
 *     xxxWindowEvent @ 0x140140F70 (xxxWindowEvent.c)
 *     ?HandleHotkey@Keyboard@InputTraceLogging@@SAXXZ @ 0x1401568A0 (-HandleHotkey@Keyboard@InputTraceLogging@@SAXXZ.c)
 *     UpdateAsyncKeyState @ 0x140189B10 (UpdateAsyncKeyState.c)
 *     UpdateKeyLights @ 0x140189CD0 (UpdateKeyLights.c)
 *     ApiSetEditionDoHotKeys @ 0x140191714 (ApiSetEditionDoHotKeys.c)
 *     ApiSetEditionHandleAndPostKeyEvent @ 0x140191CE4 (ApiSetEditionHandleAndPostKeyEvent.c)
 *     ApiSetEditionHandleRawInput @ 0x140191F00 (ApiSetEditionHandleRawInput.c)
 *     GetKeyboardDelegationTargetQ @ 0x140212810 (GetKeyboardDelegationTargetQ.c)
 *     ?LowLevelHexNumpad@@YAXGEHG@Z @ 0x14021404C (-LowLevelHexNumpad@@YAXGEHG@Z.c)
 */

void __fastcall xxxUpdateGlobalsAndSendKeyEvent(
        __int64 a1,
        unsigned __int16 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int16 a7,
        unsigned __int8 a8,
        unsigned __int8 a9,
        __int64 a10,
        __int64 *a11,
        __int64 a12)
{
  __int16 v12; // r15
  unsigned __int16 v13; // si
  int v14; // r14d
  int v15; // r12d
  int v16; // ebx
  struct tagTHREADINFO *v17; // r13
  __int64 v18; // rcx
  unsigned int v19; // ecx
  __int64 v20; // xmm0_8
  __int64 v21; // rcx
  unsigned int v22; // edi
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  unsigned __int64 v27; // rcx
  __int64 v28; // rbx
  __int64 KeyboardDelegationTargetQ; // rax
  unsigned __int8 v30; // si
  __int64 UserSessionState; // rax
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rdx
  __int16 ActiveHKL; // ax
  int v38; // edx
  __int64 v39; // rcx
  int v40; // esi
  __int64 v41; // rcx
  __int64 v42; // rcx
  int v43; // r9d
  __int64 v44; // rax
  int v45; // r8d
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rax
  int v50; // ecx
  __int16 v51; // ax
  int v52; // [rsp+88h] [rbp-41h]
  int v53; // [rsp+8Ch] [rbp-3Dh] BYREF
  int v54; // [rsp+90h] [rbp-39h] BYREF
  __int64 v55; // [rsp+98h] [rbp-31h]
  __int64 v56; // [rsp+A8h] [rbp-21h]
  __int64 v57; // [rsp+B0h] [rbp-19h] BYREF
  __int64 v58; // [rsp+B8h] [rbp-11h] BYREF
  int v59; // [rsp+C0h] [rbp-9h]
  __int16 v60; // [rsp+118h] [rbp+4Fh]
  unsigned int v64; // [rsp+168h] [rbp+9Fh]

  v12 = a1;
  v13 = a1 & 0x100;
  v14 = a1 & 0x8000;
  v60 = a1 & 0x100;
  LOWORD(a1) = (v14 != 0) + 256;
  v15 = (unsigned __int16)a1;
  v16 = (unsigned __int16)a1;
  v52 = (unsigned __int16)a1;
  v53 = 0;
  v17 = PtiCurrent(a1);
  if ( a11 )
    v18 = *a11;
  else
    v18 = 0LL;
  v57 = v18;
  v55 = -1LL;
  v64 = 0;
  v56 = 0LL;
  if ( a8 )
  {
    if ( a10 )
    {
      v19 = *(_DWORD *)(a10 + 12);
      v20 = *(_QWORD *)a10;
      LODWORD(v56) = *(_DWORD *)(a10 + 8);
      v64 = v19;
    }
    else
    {
      v21 = *((_QWORD *)v17 + 58);
      v20 = *(_QWORD *)(v21 + 872);
      v64 = *(_DWORD *)(v21 + 12) >> 31;
      v16 = v15;
      LODWORD(v56) = *(_DWORD *)(v21 + 880);
    }
  }
  else
  {
    v20 = v55;
  }
  v55 = v20;
  v22 = CKeyboardProcessor::HandleLeftRightVKs(v12);
  if ( (*(_BYTE *)(W32GetUserSessionState(v23) + 14404) & 0x10) != 0 )
  {
    LOBYTE(v24) = *(_BYTE *)(W32GetUserSessionState(v24) + 14404);
    if ( (v24 & 4) == 0 )
      v52 = v16 + 4;
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v24) + 19000)
    && *(struct tagTHREADINFO **)(W32GetUserSessionState(v25) + 19000) != v17 )
  {
    v54 = 0;
    LOBYTE(v25) = v12;
    if ( !(unsigned int)ApiSetEditionIsSAS(v25, (__int64)&v54) )
      goto LABEL_40;
    *(_QWORD *)(W32GetUserSessionState(v26) + 19000) = 0LL;
  }
  v28 = *(_QWORD *)(W32GetUserSessionState(v25) + 18944);
  if ( v28 )
  {
    if ( IsKeyboardDelegationEnabledForThread(*(InputDelegation **)(v28 + 104)) )
    {
      KeyboardDelegationTargetQ = GetKeyboardDelegationTargetQ();
      if ( KeyboardDelegationTargetQ )
        v28 = KeyboardDelegationTargetQ;
    }
  }
  if ( (_BYTE)v22 != (_BYTE)v12 )
  {
    v30 = v12 ^ 1;
    if ( !v14
      || (UserSessionState = W32GetUserSessionState(v27),
          v27 = (unsigned __int64)v30 >> 2,
          ((unsigned __int8)(1 << (2 * (v30 & 3))) & *(_BYTE *)(v27 + UserSessionState + 14336)) == 0) )
    {
      if ( !*(_QWORD *)(W32GetUserSessionState(v27) + 19000)
        || *(struct tagTHREADINFO **)(W32GetUserSessionState(v32) + 19000) == v17 )
      {
        UpdateAsyncKeyState(v28, v22, v14 != 0);
      }
    }
    v13 = v60;
  }
  UpdateAsyncKeyState(v28, v12, v14 != 0);
  if ( *(_DWORD *)(W32GetUserSessionState(v33) + 14708) )
  {
    if ( v28 )
    {
      v35 = PtiKbdFromQ(v28);
      if ( !(unsigned int)HasHidTable(v35, v36)
        || (v34 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(PtiKbdFromQ(v28) + 464) + 832LL) + 100LL), (v34 & 0x20) == 0) )
      {
        LowLevelHexNumpad(a2, v22, v14, v13);
      }
    }
  }
  if ( !v14 )
  {
    if ( (_BYTE)v22 == 20
      || (unsigned __int8)(v22 + 112) <= 1u
      || (_BYTE)v22 == 21 && (ActiveHKL = GetActiveHKL(v34), v34 = 1023LL, (ActiveHKL & 0x3FF) == 0x11) )
    {
      UpdateKeyLights(a8);
      xxxWindowEvent(2147483654LL, 0LL, v22, 0, 0);
    }
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v34) + 18960) )
  {
    v39 = *(_QWORD *)(W32GetUserSessionState(v39) + 18960);
    v40 = *(_DWORD *)(v39 + 924);
  }
  else
  {
    v40 = 0;
  }
  LOBYTE(v38) = v12;
  LOBYTE(v39) = v22;
  if ( (unsigned int)ApiSetEditionDoHotKeys(v39, v38, v14, v40, (__int64)&v57, (__int64)&v53) )
  {
    InputTraceLogging::Keyboard::HandleHotkey();
    return;
  }
  v58 = v55;
  v59 = v56;
  if ( !(unsigned int)ApiSetEditionIsGpqForegroundAccessibleExplicit(a8, (__int64)v17, &v58, v64)
    || (v42 = *(_QWORD *)(W32GetUserSessionState(v41) + 19656), (*(_DWORD *)(v42 + 8) & 1) == 0)
    && ((v12 & 0x1000) == 0 || !a8 ? (v44 = a6) : (v44 = 0LL),
        v45 = a2,
        LOBYTE(v43) = v12,
        LOBYTE(v45) = v22,
        (unsigned int)ApiSetEditionHandleRawInput(a3, a9, v45, v43, v52, v44, a2, v12, v14, a5))
    || v53 )
  {
LABEL_40:
    InputTraceLogging::Keyboard::DropInput();
    return;
  }
  if ( (*(_BYTE *)(W32GetUserSessionState(v42) + 14340) & 0x10) == 0
    || (LOBYTE(v46) = *(_BYTE *)(W32GetUserSessionState(v46) + 14340), (v46 & 4) != 0)
    || (_BYTE)v22 == 23 )
  {
    if ( (_BYTE)v22 == 18 )
    {
      v49 = W32GetUserSessionState(v46);
      if ( v14 )
      {
        v50 = *(_DWORD *)(v49 + 14032);
        v51 = v15 + 4;
        if ( !v50 )
          v51 = v15;
        LOWORD(v15) = v51;
      }
      else
      {
        *(_QWORD *)(v49 + 18896) = 0LL;
      }
    }
  }
  else
  {
    LOWORD(v15) = v15 + 4;
    v60 |= 0x2000u;
    v47 = W32GetUserSessionState(v46);
    if ( (_BYTE)v22 == 18 )
    {
      *(_DWORD *)(v47 + 14032) = 1;
      if ( !v14 )
        *(_QWORD *)(W32GetUserSessionState(v48) + 18896) = 0LL;
    }
    else
    {
      *(_DWORD *)(v47 + 14032) = 0;
    }
  }
  if ( a8 && HIDWORD(v57) == 4 )
  {
    if ( a6 )
      a4 = *(unsigned __int16 *)(a6 + 6);
  }
  v59 = v56;
  v58 = v55;
  ApiSetEditionHandleAndPostKeyEvent(
    a8,
    (unsigned int)&v58,
    v64,
    v14,
    v22,
    v40,
    a2,
    v12,
    v60,
    a7,
    (__int64)&v57,
    a3,
    a5,
    a4,
    v15,
    a12);
}
