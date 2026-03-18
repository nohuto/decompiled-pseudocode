/*
 * XREFs of xxxProcessKeyEvent @ 0x1400FB6E0
 * Callers:
 *     ?xxxDownlevelInput@CPTPProcessor@@CAJPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@@Z @ 0x1400D33A8 (-xxxDownlevelInput@CPTPProcessor@@CAJPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@@Z.c)
 *     ProcessKeyboardInputWorker @ 0x1400FA4E4 (ProcessKeyboardInputWorker.c)
 *     ?xxxStickyKeys@@YAHPEAUtagKE@@KH@Z @ 0x1400FAD40 (-xxxStickyKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?xxxUpdateModifierState@@YAXHH@Z @ 0x1400FB230 (-xxxUpdateModifierState@@YAXHH@Z.c)
 *     ProcessKeyboardInjectedInput @ 0x1400FB4F8 (ProcessKeyboardInjectedInput.c)
 *     ?RemoteSyncToggleKeys@@YAXK@Z @ 0x14015B30C (-RemoteSyncToggleKeys@@YAXK@Z.c)
 *     ?xxxFKAcceptanceDelayTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1401F57A0 (-xxxFKAcceptanceDelayTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxFKRepeatRateTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1401F58D0 (-xxxFKRepeatRateTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxToggleKeysTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1401F6080 (-xxxToggleKeysTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?SendKeyUpDown@@YAXEE@Z @ 0x140214224 (-SendKeyUpDown@@YAXEE@Z.c)
 * Callees:
 *     ApiSetEditionIsGpqForegroundAccessibleCurrent @ 0x140025314 (ApiSetEditionIsGpqForegroundAccessibleCurrent.c)
 *     GetActiveHKL @ 0x1400489F0 (GetActiveHKL.c)
 *     ?GetLastInputTime@CInputGlobals@@QEBA_KXZ @ 0x140068F50 (-GetLastInputTime@CInputGlobals@@QEBA_KXZ.c)
 *     ?UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z @ 0x1400D99A0 (-UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z.c)
 *     KEOEMProcs @ 0x1400FACF0 (KEOEMProcs.c)
 *     xxxKENLSProcs @ 0x1400FB32C (xxxKENLSProcs.c)
 *     ?DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z @ 0x1400FB48C (-DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z.c)
 *     ?OnKeyEvent@CPTPProcessor@@SAXE_N@Z @ 0x140106EC4 (-OnKeyEvent@CPTPProcessor@@SAXE_N@Z.c)
 *     UpdateRawKeyState @ 0x14010750C (UpdateRawKeyState.c)
 *     xxxKELocaleProcs @ 0x14010E8AC (xxxKELocaleProcs.c)
 *     xxxKeyEventEx @ 0x14014BF54 (xxxKeyEventEx.c)
 *     ?EndInertia@CInertiaManager@@QEAA_NXZ @ 0x14020ED30 (-EndInertia@CInertiaManager@@QEAA_NXZ.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

void __fastcall xxxProcessKeyEvent(
        unsigned __int16 *a1,
        struct _CLIPOBJ *a2,
        unsigned __int8 a3,
        char a4,
        __int64 a5,
        __int64 a6)
{
  unsigned int v6; // ebp
  unsigned int v8; // r12d
  __int16 ActiveHKL; // ax
  __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 UserSessionState; // rax
  int v14; // edx
  unsigned __int64 v15; // rcx
  int v16; // r14d
  __int64 v17; // rax
  unsigned __int16 v18; // bx
  __int64 v19; // r10
  unsigned int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  int (*v25)(void); // rax
  __int64 v26; // rdx
  __int64 v27; // rdx
  void (__fastcall *v28)(unsigned __int16 *, __int64); // rax
  __int64 v29; // r13
  __int64 v30; // rcx
  __int64 v31; // rax

  v6 = *((unsigned __int8 *)a1 + 2);
  v8 = a3;
  ActiveHKL = GetActiveHKL((__int64)a1);
  v10 = a1[1];
  v11 = 1023LL;
  v12 = 0LL;
  if ( (ActiveHKL & 0x3FF) == 0x12 )
  {
    if ( (v10 & 0x8000u) != 0LL && (v10 & 0x1000) == 0 && (*(_BYTE *)a1 == 0xF1 || *(_BYTE *)a1 == 0xF2) )
    {
      UserSessionState = W32GetUserSessionState(1023LL);
      v11 = (unsigned __int64)v6 >> 2;
      if ( ((unsigned __int8)(1 << (2 * (v6 & 3))) & *(_BYTE *)(v11 + UserSessionState + 14400)) == 0 )
      {
        a1[1] &= ~0x8000u;
        goto LABEL_9;
      }
    }
    v10 = a1[1];
  }
  LOWORD(v10) = (unsigned __int16)v10 >> 15;
  LOBYTE(v11) = v6;
  UpdateRawKeyState(v11, v10);
LABEL_9:
  if ( (unsigned __int8)(v6 + 96) <= 5u )
  {
    LOBYTE(v6) = (int)(v6 - 160) / 2 + 16;
    LOBYTE(v11) = v6;
    UpdateRawKeyState(v11, a1[1] >> 15);
  }
  if ( a5 )
    v14 = -(*(_DWORD *)(a5 + 476) & 1);
  else
    v14 = 0;
  v15 = (unsigned int)(unsigned __int8)v6 - 173;
  if ( (unsigned __int8)v6 == 173
    || (v15 = (unsigned int)(unsigned __int8)v6 - 174, (unsigned __int8)v6 == 174)
    || (v15 = (unsigned int)(unsigned __int8)v6 - 175, (unsigned __int8)v6 == 175)
    || (v15 = (unsigned int)(unsigned __int8)v6 - 176, (unsigned __int8)v6 == 176)
    || (v15 = (unsigned int)(unsigned __int8)v6 - 177, (unsigned __int8)v6 == 177)
    || (v15 = (unsigned int)(unsigned __int8)v6 - 178, (unsigned int)v15 < 2) )
  {
    v16 = 8 * v8;
  }
  else
  {
    v16 = 8 * v8;
    if ( !v14 )
    {
      v17 = W32GetUserSessionState(v15);
      v15 = (unsigned __int64)(unsigned __int8)v6 >> 2;
      if ( ((unsigned __int8)(1 << (2 * (v6 & 3))) & *(_BYTE *)(v15 + v17 + 14400)) != 0 )
        v16 = (8 * v8) | 0x20;
    }
  }
  v18 = a1[8];
  v19 = *(_QWORD *)(W32GetUserSessionState(v15) + 3064);
  v20 = v16 | 0x40;
  if ( v18 != 0xFFFD )
    v20 = v16;
  CInputGlobals::UpdateInputGlobals(
    v19,
    (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
   * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
    1u,
    0,
    0,
    v20);
  if ( !(_BYTE)v8 || !*((_DWORD *)a1 + 1) )
  {
    v23 = W32GetUserSessionState(v22);
    *((_DWORD *)a1 + 1) = CInputGlobals::GetLastInputTime(*(CInputGlobals **)(v23 + 3064));
  }
  v24 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v22, v21) + 48);
  v25 = *(int (**)(void))(v24 + 5712);
  if ( v25 )
  {
    if ( v25() >= 0 )
    {
      v24 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v24, v26) + 48);
      v28 = *(void (__fastcall **)(unsigned __int16 *, __int64))(v24 + 5720);
      if ( v28 )
      {
        LOBYTE(v27) = v6;
        v28(a1, v27);
      }
    }
  }
  if ( a5 && (*(_DWORD *)(a5 + 168) & 0x2000) != 0 )
    v29 = a5 + 376;
  else
    v29 = 0LL;
  if ( _bittest16((const signed __int16 *)a1 + 1, 0xCu) )
  {
    if ( *(_BYTE *)(W32GetUserSessionState(v24) + 14504) )
      v12 = *((_QWORD *)a1 + 1);
    xxxKeyEventEx(
      a1[1],
      *a1,
      *((_DWORD *)a1 + 1),
      (_DWORD)a2,
      v12,
      (unsigned __int64)(a1 + 8) & -(__int64)((_BYTE)v8 != 0),
      v8,
      a4,
      v29,
      a6);
  }
  else if ( KEOEMProcs((struct tagKE *)a1)
         && (unsigned __int8)xxxKELocaleProcs((struct tagKE *)a1)
         && (unsigned int)xxxKENLSProcs((struct _PATHOBJ *)a1, a2) )
  {
    if ( (unsigned int)ApiSetEditionIsGpqForegroundAccessibleCurrent(v8) )
    {
      if ( !a4 )
      {
        if ( !(_BYTE)v8 )
          CPTPProcessor::OnKeyEvent(v6, (a1[1] & 0x8000u) == 0);
        v31 = W32GetUserSessionState(v30);
        CInertiaManager::EndInertia((CInertiaManager *)(v31 + 16920));
      }
      xxxKeyEventEx(
        a1[1],
        *(unsigned __int8 *)a1,
        *((_DWORD *)a1 + 1),
        (_DWORD)a2,
        *((_QWORD *)a1 + 1),
        (__int64)(a1 + 8),
        v8,
        a4,
        v29,
        a6);
    }
    else
    {
      InputTraceLogging::Keyboard::DropInput();
    }
  }
}
