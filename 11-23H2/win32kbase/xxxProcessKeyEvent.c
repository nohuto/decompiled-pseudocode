/*
 * XREFs of xxxProcessKeyEvent @ 0x1C00C90C0
 * Callers:
 *     ProcessKeyboardInjectedInput @ 0x1C0002558 (ProcessKeyboardInjectedInput.c)
 *     ?xxxFKAcceptanceDelayTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01B6770 (-xxxFKAcceptanceDelayTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxFKRepeatRateTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01B6830 (-xxxFKRepeatRateTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxStickyKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C01B6F50 (-xxxStickyKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?xxxToggleKeysTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01B7380 (-xxxToggleKeysTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxUpdateModifierState@@YAXHH@Z @ 0x1C01B7610 (-xxxUpdateModifierState@@YAXHH@Z.c)
 *     ?xxxDownlevelInput@CPTPProcessor@@CAJPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@@Z @ 0x1C01E1050 (-xxxDownlevelInput@CPTPProcessor@@CAJPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@@Z.c)
 *     ?RemoteSyncToggleKeys@@YAXK@Z @ 0x1C01EA4E4 (-RemoteSyncToggleKeys@@YAXK@Z.c)
 *     ?SendKeyUpDown@@YAXEE@Z @ 0x1C01EA7D8 (-SendKeyUpDown@@YAXEE@Z.c)
 *     ProcessKeyboardInputWorker @ 0x1C01EA8C0 (ProcessKeyboardInputWorker.c)
 * Callees:
 *     ?GetLastInputTime@CInputGlobals@@QEBA_KXZ @ 0x1C00113C0 (-GetLastInputTime@CInputGlobals@@QEBA_KXZ.c)
 *     xxxKeyEventEx @ 0x1C006A7C8 (xxxKeyEventEx.c)
 *     GetActiveHKL @ 0x1C006B1A0 (GetActiveHKL.c)
 *     ApiSetEditionIsGpqForegroundAccessibleCurrent @ 0x1C0070C58 (ApiSetEditionIsGpqForegroundAccessibleCurrent.c)
 *     UpdateRawKeyState @ 0x1C00AD178 (UpdateRawKeyState.c)
 *     KEOEMProcs @ 0x1C00AF534 (KEOEMProcs.c)
 *     xxxKELocaleProcs @ 0x1C00B042C (xxxKELocaleProcs.c)
 *     ?UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z @ 0x1C00BFBB0 (-UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z.c)
 *     ?EndInertia@CInertiaManager@@QEAA_NXZ @ 0x1C00D5060 (-EndInertia@CInertiaManager@@QEAA_NXZ.c)
 *     Feature_EndInertiaOnKeyPress__private_IsEnabledDeviceUsage @ 0x1C00D53EC (Feature_EndInertiaOnKeyPress__private_IsEnabledDeviceUsage.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 *     ?DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z @ 0x1C01B5B4C (-DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z.c)
 *     ?OnKeyEvent@CPTPProcessor@@SAXE_N@Z @ 0x1C01DFA94 (-OnKeyEvent@CPTPProcessor@@SAXE_N@Z.c)
 */

void __fastcall xxxProcessKeyEvent(
        unsigned __int16 *a1,
        __int64 a2,
        unsigned __int8 a3,
        unsigned __int8 a4,
        __int64 a5,
        struct _KEYBOARD_VIRTUAL_DEVICE_INFO *a6)
{
  unsigned int v6; // esi
  unsigned int v8; // r12d
  __int16 ActiveHKL; // ax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int64 v14; // rcx
  __int64 v15; // rax
  unsigned int v16; // r15d
  void *v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // r9d
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // r14
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rcx
  __int64 v44; // rbp
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // r9
  int v48; // edx
  _BYTE *v49; // rcx
  __int64 v50; // rax
  int v51; // ebp
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rax
  __int64 v57; // [rsp+28h] [rbp-50h]

  v6 = *((unsigned __int8 *)a1 + 2);
  v8 = a3;
  ActiveHKL = GetActiveHKL();
  v14 = a1[1];
  if ( (ActiveHKL & 0x3FF) == 0x12 )
  {
    LOWORD(v14) = v14 & 0x9000;
    if ( (_WORD)v14 == 0x8000 && (*(_BYTE *)a1 == 0xF1 || *(_BYTE *)a1 == 0xF2) )
    {
      v15 = SGDGetUserSessionState(v14, v11, v12, v13);
      v14 = (unsigned __int64)v6 >> 2;
      if ( ((unsigned __int8)(1 << (2 * (v6 & 3))) & *(_BYTE *)(v14 + v15 + 14056)) == 0 )
      {
        a1[1] &= ~0x8000u;
        goto LABEL_9;
      }
    }
    v11 = a1[1] >> 15;
  }
  else
  {
    LOWORD(v14) = (unsigned __int16)v14 >> 15;
    LOBYTE(v11) = v14;
  }
  LOBYTE(v14) = v6;
  UpdateRawKeyState(v14, v11, v12, v13);
LABEL_9:
  if ( (unsigned __int8)(v6 + 96) <= 5u )
  {
    LOBYTE(v6) = (int)(v6 - 160) / 2 + 16;
    LOBYTE(v14) = v6;
    UpdateRawKeyState(v14, a1[1] >> 15, v12, v13);
  }
  v16 = 8 * v8;
  v17 = 0LL;
  if ( a5 )
    v18 = -(*(_DWORD *)(a5 + 492) & 1);
  else
    v18 = 0LL;
  if ( (unsigned __int8)v6 == 173
    || (unsigned __int8)v6 == 174
    || (unsigned __int8)v6 == 175
    || (unsigned __int8)v6 == 176
    || (unsigned __int8)v6 == 177
    || (v19 = (unsigned int)(unsigned __int8)v6 - 178, (unsigned int)v19 < 2) )
  {
    v20 = 8 * v8;
  }
  else
  {
    v20 = 8 * v8;
    if ( !(_DWORD)v18 )
    {
      v21 = SGDGetUserSessionState(v19, v18, v12, v16);
      v20 = 8 * v8;
      if ( ((unsigned __int8)(1 << (2 * (v6 & 3))) & *(_BYTE *)(((unsigned __int64)(unsigned __int8)v6 >> 2)
                                                              + v21
                                                              + 14056)) != 0 )
        v20 = v16 | 0x20;
    }
  }
  v22 = v20 | 0x40;
  if ( a1[8] != 0xFFFD )
    v22 = v20;
  LODWORD(v57) = v22;
  CInputGlobals::UpdateInputGlobals(
    *((__int64 *)&WPP_MAIN_CB.Reserved + 1),
    (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
   * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
    1u,
    0,
    0,
    v57);
  if ( !(_BYTE)v8 || !*((_DWORD *)a1 + 1) )
    *((_DWORD *)a1 + 1) = CInputGlobals::GetLastInputTime(*((CInputGlobals **)&WPP_MAIN_CB.Reserved + 1));
  if ( qword_1C0296730 && (int)qword_1C0296730() >= 0 && qword_1C0296738 )
  {
    LOBYTE(v23) = v6;
    qword_1C0296738(a1, v23);
  }
  if ( a5 && (*(_DWORD *)(a5 + 184) & 0x2000) != 0 )
    v27 = a5 + 392;
  else
    v27 = 0LL;
  if ( _bittest16((const signed __int16 *)a1 + 1, 0xCu) )
  {
    if ( *(_BYTE *)(SGDGetUserSessionState(v24, v23, v25, v26) + 14160) )
      v17 = (void *)*((_QWORD *)a1 + 1);
    xxxKeyEventEx(
      a1[1],
      *a1,
      *((unsigned int *)a1 + 1),
      a2,
      v17,
      (unsigned __int16 *)((unsigned __int64)(a1 + 8) & -(__int64)((_BYTE)v8 != 0)),
      v8,
      a4,
      v27,
      a6);
    return;
  }
  if ( !KEOEMProcs((struct tagKE *)a1) || !xxxKELocaleProcs((struct tagKE *)a1, v28, v29, v30) )
    return;
  if ( *(_QWORD *)(SGDGetUserSessionState(v32, v31, v33, v34) + 13848) )
  {
    v40 = *(_QWORD *)(SGDGetUserSessionState(v36, v35, v37, v38) + 13848);
    if ( *(_QWORD *)(v40 + 8) )
    {
      v43 = *(_QWORD *)(SGDGetUserSessionState(v40, v39, v41, v42) + 13848);
      v44 = *(_QWORD *)(v43 + 8);
      v48 = *(_DWORD *)(*(_QWORD *)(SGDGetUserSessionState(v43, v45, v46, v47) + 13848) + 4LL);
      if ( v48 )
      {
        while ( 1 )
        {
          v49 = (_BYTE *)(v44 + 132LL * (unsigned int)--v48);
          if ( *v49 == *((_BYTE *)a1 + 2) )
            break;
          if ( !v48 )
            goto LABEL_54;
        }
        v50 = (unsigned __int8)v49[1];
        if ( (unsigned __int8)v50 < 3u )
        {
          v51 = ((__int64 (__fastcall *)(_BYTE *, unsigned __int16 *, __int64))*(&off_1C02430F8 + v50))(v49, a1, a2);
          if ( v51 )
            goto LABEL_53;
        }
        else
        {
          v51 = 0;
        }
        InputTraceLogging::Keyboard::DropInput(13LL);
LABEL_53:
        if ( !v51 )
          return;
      }
    }
  }
LABEL_54:
  if ( (unsigned int)ApiSetEditionIsGpqForegroundAccessibleCurrent(v8) )
  {
    if ( !a4 && !(_BYTE)v8 )
      CPTPProcessor::OnKeyEvent(v6, (a1[1] & 0x8000u) == 0);
    if ( (unsigned int)Feature_EndInertiaOnKeyPress__private_IsEnabledDeviceUsage() && !a4 )
    {
      v56 = SGDGetUserSessionState(v53, v52, v54, v55);
      CInertiaManager::EndInertia((CInertiaManager *)(v56 + 16904));
    }
    xxxKeyEventEx(
      a1[1],
      *(unsigned __int8 *)a1,
      *((unsigned int *)a1 + 1),
      a2,
      *((void **)a1 + 1),
      a1 + 8,
      v8,
      a4,
      v27,
      a6);
  }
  else
  {
    InputTraceLogging::Keyboard::DropInput(0LL);
  }
}
