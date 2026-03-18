/*
 * XREFs of ProcessKeyboardInputWorker @ 0x1400FA4E4
 * Callers:
 *     ?MapFlexibleKeys@@YAHPEAUtagKE@@EPEAUDEVICEINFO@@@Z @ 0x1400C88E8 (-MapFlexibleKeys@@YAHPEAUtagKE@@EPEAUDEVICEINFO@@@Z.c)
 *     ?ProcessInputNoLock@CKeyboardProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_INPUT_DATA@@K_NPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@@Z @ 0x1400FA26C (-ProcessInputNoLock@CKeyboardProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYB.c)
 * Callees:
 *     GetActiveHKL @ 0x1400489F0 (GetActiveHKL.c)
 *     isChildPartition @ 0x1400525E0 (isChildPartition.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140091E28 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     InternalMapVirtualKeyEx @ 0x1400969C0 (InternalMapVirtualKeyEx.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400C0560 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ?MapScancode@@YAHPEAUtagKE@@PEAEPEAUDEVICEINFO@@@Z @ 0x1400C8800 (-MapScancode@@YAHPEAUtagKE@@PEAEPEAUDEVICEINFO@@@Z.c)
 *     IsRemoteConnection @ 0x1400C88B4 (IsRemoteConnection.c)
 *     ?AccessProceduresStream@@YAHPEAUtagKE@@KH@Z @ 0x1400FB410 (-AccessProceduresStream@@YAHPEAUtagKE@@KH@Z.c)
 *     ?DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z @ 0x1400FB48C (-DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z.c)
 *     xxxProcessKeyEvent @ 0x1400FB6E0 (xxxProcessKeyEvent.c)
 *     PtiKbdFromQ @ 0x1401098D4 (PtiKbdFromQ.c)
 *     VKFromVSC @ 0x1401157C0 (VKFromVSC.c)
 *     ?AccessTimeOut@@YAXXZ @ 0x14011C3E0 (-AccessTimeOut@@YAXXZ.c)
 *     ?RemoteSyncToggleKeys@@YAXK@Z @ 0x14015B30C (-RemoteSyncToggleKeys@@YAXK@Z.c)
 *     ApiSetEditionRawInputRequestedForKeyboard @ 0x140193128 (ApiSetEditionRawInputRequestedForKeyboard.c)
 *     ApiSetEditionUserBeep @ 0x140193788 (ApiSetEditionUserBeep.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1401A2B00 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     Feature_SkipRepeatedModifiers2__private_IsEnabledDeviceUsageNoInline @ 0x1402142BC (Feature_SkipRepeatedModifiers2__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

void __fastcall ProcessKeyboardInputWorker(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // rcx
  char v7; // si
  int v8; // eax
  __int64 v9; // rcx
  __int64 UserSessionState; // rax
  __int16 v11; // ax
  unsigned __int8 v12; // r14
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned __int8 v16; // r15
  __int64 v17; // rcx
  __int16 v18; // bx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int16 ActiveHKL; // ax
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // r14
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rcx
  char v35; // dl
  int v36; // r8d
  int v37; // r9d
  __int64 v38; // r14
  __int64 v39; // rcx
  __int64 v40; // rax
  char v41; // bl
  __int64 v42; // rax
  int v43; // r8d
  int v44; // r9d
  int v45; // r8d
  __int16 v46; // cx
  unsigned __int8 v47[4]; // [rsp+50h] [rbp-19h] BYREF
  int v48; // [rsp+54h] [rbp-15h]
  int v49; // [rsp+58h] [rbp-11h]
  _DWORD v50[2]; // [rsp+60h] [rbp-9h] BYREF
  __int64 v51; // [rsp+68h] [rbp-1h]
  __int128 v52; // [rsp+70h] [rbp+7h]

  v4 = *(unsigned __int16 *)(a1 + 4);
  v50[0] = 0;
  v49 = 0;
  v7 = 1;
  v52 = 0LL;
  if ( (v4 & 0x10) != 0 || a2 && (*(_DWORD *)(a2 + 168) & 0x2000) != 0 || *(_WORD *)a1 == 0xFFFE )
    v49 = 1;
  if ( a2 )
    v51 = *(_QWORD *)a2;
  else
    v51 = 0LL;
  v8 = *(_DWORD *)(a1 + 8);
  *(_QWORD *)&v52 = *(_QWORD *)a1;
  DWORD2(v52) = v8;
  v50[1] = 0;
  if ( (v4 & 0x28) != 0 )
  {
    if ( (v4 & 8) != 0 )
    {
      if ( (v4 & 0x10) != 0 )
        *(_DWORD *)(a1 + 8) |= 0x4000u;
      RemoteSyncToggleKeys(*(_DWORD *)(a1 + 8));
    }
    v45 = *(unsigned __int16 *)(a1 + 4);
    if ( (v45 & 0x20) != 0 )
    {
      v46 = (_WORD)v45 << 15;
      LOBYTE(v45) = (v45 & 0x10) != 0;
      LOWORD(v50[0]) = *(_WORD *)(a1 + 2);
      HIWORD(v50[0]) = v46 | 0x10E7;
      xxxProcessKeyEvent((unsigned int)v50, 0, v45, 0, a2, 0LL);
    }
    return;
  }
  if ( (*(_DWORD *)(W32GetUserSessionState(v4) + 12924) & 0x8000) != 0 )
  {
    UserSessionState = W32GetUserSessionState(v9);
    RemoteSyncToggleKeys(*(_DWORD *)(UserSessionState + 12924));
  }
  v11 = *(_WORD *)(a1 + 4);
  if ( (v11 & 2) != 0 )
    v12 = -32;
  else
    v12 = (v11 & 4) != 0 ? 0xE1 : 0;
  v47[0] = v12;
  if ( *(_WORD *)(a1 + 2) == 255 )
  {
    LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)v47, 1);
    ApiSetEditionUserBeep();
    LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)v47);
    v13 = 6LL;
LABEL_17:
    InputTraceLogging::Keyboard::DropInput(v13);
    return;
  }
  if ( isChildPartition(v9) && (*(_BYTE *)(a1 + 4) & 0x40) != 0 )
  {
    HIWORD(v50[0]) = *(_WORD *)(a1 + 2);
    v16 = BYTE2(v50[0]);
  }
  else
  {
    LOBYTE(v50[0]) = *(_BYTE *)(a1 + 2) & 0x7F;
    if ( a3 && (*(_QWORD *)(W32GetUserSessionState(v15) + 12896) || *(_QWORD *)(W32GetUserSessionState(v17) + 12904)) )
    {
      HIWORD(v50[0]) = 0;
      if ( (*(_BYTE *)(a1 + 4) & 1) != 0 )
        HIWORD(v50[0]) = 0x8000;
      if ( !(unsigned int)MapScancode((struct tagKE *)v50, v47, (struct DEVICEINFO *)a2) )
      {
        v13 = 7LL;
        goto LABEL_17;
      }
      v12 = v47[0];
    }
    LOBYTE(v14) = v12;
    v16 = VKFromVSC(v50, v14);
  }
  v18 = 0;
  *(_BYTE *)(W32GetUserSessionState(v15) + 13992) = v16;
  if ( !v16 )
  {
    if ( *(_QWORD *)(W32GetUserSessionState(v19) + 18944) )
      v20 = PtiKbdFromQ();
    else
      v20 = 0LL;
    if ( !(unsigned int)ApiSetEditionRawInputRequestedForKeyboard(v20) )
    {
      v13 = 8LL;
      goto LABEL_17;
    }
    v48 = 1;
    goto LABEL_36;
  }
  v48 = 0;
  if ( (unsigned __int8)(v16 - 91) > 1u || (*(_BYTE *)(a1 + 4) & 1) != 0 )
  {
LABEL_36:
    if ( *(_WORD *)(W32GetUserSessionState(v19) + 12920) )
    {
      v23 = *(unsigned __int16 *)(W32GetUserSessionState(v22) + 12920);
      if ( *(_WORD *)(a1 + 2) == (_WORD)v23 )
      {
        v16 = 76;
        *(_BYTE *)(W32GetUserSessionState(v23) + 13992) = 76;
        HIWORD(v50[0]) = 76;
        v18 = 0;
      }
      v22 = *(unsigned int *)(W32GetUserSessionState(v23) + 14012);
      if ( (v22 & 8) == 0 )
        goto LABEL_42;
      if ( (*(_BYTE *)(a1 + 4) & 1) == 0 )
        goto LABEL_60;
      if ( (unsigned __int8)(v16 - 91) <= 1u )
        goto LABEL_42;
    }
    goto LABEL_43;
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v19) + 18960)
    && (v25 = *(_QWORD *)(W32GetUserSessionState(v25) + 18960), *(_QWORD *)(v25 + 480)) )
  {
    v26 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v25) + 18960) + 480LL) + 48LL);
    v27 = *(_QWORD *)(v26 + 32);
  }
  else
  {
    v27 = *(_QWORD *)(W32GetUserSessionState(v25) + 14064);
  }
  v28 = W32GetUserSessionState(v26);
  v22 = 0LL;
  if ( !*(_WORD *)(v28 + 12920) )
  {
    v18 = InternalMapVirtualKeyEx(0x4Cu, 0, v27);
LABEL_42:
    *(_WORD *)(W32GetUserSessionState(v22) + 12920) = v18;
  }
LABEL_43:
  if ( (*(_BYTE *)(a1 + 4) & 1) == 0 )
    goto LABEL_60;
  ActiveHKL = GetActiveHKL(v22);
  LOBYTE(v22) = LOBYTE(v50[0]) + 15;
  if ( (unsigned __int8)(LOBYTE(v50[0]) + 15) <= 1u )
  {
    v22 = 1023LL;
    if ( (unsigned __int16)((ActiveHKL & 0x3FF) - 17) <= 1u )
    {
      if ( ((v16 - 22) & 0xFB) != 0 )
      {
        if ( v12 == 0xE1 )
          return;
      }
      else if ( v12 != 0xE1 )
      {
        goto LABEL_60;
      }
    }
  }
  HIWORD(v50[0]) |= 0x8000u;
LABEL_60:
  if ( (unsigned int)IsRemoteConnection(v22, v21)
    && (unsigned __int8)(BYTE2(v50[0]) - 91) <= 1u
    && !*(_DWORD *)(W32GetUserSessionState(v29) + 14036) )
  {
    v13 = 9LL;
    goto LABEL_17;
  }
  if ( !(unsigned int)Feature_SkipRepeatedModifiers2__private_IsEnabledDeviceUsageNoInline() )
  {
    v31 = W32GetUserSessionState(v30);
    v33 = W32GetUserSessionState(v32);
    if ( v16 == 91 )
    {
      v35 = 64;
    }
    else if ( v16 == 92 )
    {
      v35 = 0x80;
    }
    else if ( v16 == 160 || v16 == 161 || v16 == 162 || v16 == 163 || (unsigned int)v16 - 164 < 2 )
    {
      LOBYTE(v34) = v16 & 0xF;
      v35 = 1 << (v16 & 0xF);
    }
    else
    {
      v35 = 0;
    }
    *(_BYTE *)(v31 + 21902) = v35;
    if ( !v35 )
      goto LABEL_79;
    LOBYTE(v34) = *(_BYTE *)(v33 + 21901);
    if ( (*(_BYTE *)(a1 + 4) & 1) != 0 )
      goto LABEL_78;
    LOBYTE(v34) = v35 | v34;
    *(_BYTE *)(v33 + 21901) = v34;
LABEL_79:
    if ( v16 == 13 && (*(_BYTE *)(a1 + 4) & 1) == 0 )
      PoLatencySensitivityHint(1LL);
    if ( (*(_DWORD *)(W32GetUserSessionState(v34) + 67056) & 0x100) != 0 )
    {
      AccessTimeOut();
      if ( (unsigned int)AccessProceduresStream((struct tagKE *)v50, *(_DWORD *)(a1 + 8), 0) )
      {
        LOBYTE(v44) = v48;
        LOBYTE(v43) = (*(_BYTE *)(a1 + 4) & 0x10) != 0;
        xxxProcessKeyEvent((unsigned int)v50, *(_DWORD *)(a1 + 8), v43, v44, a2, 0LL);
      }
    }
    else
    {
      LOBYTE(v36) = v49;
      LOBYTE(v37) = v48 != 0;
      xxxProcessKeyEvent((unsigned int)v50, *(_DWORD *)(a1 + 8), v36, v37, a2, 0LL);
    }
    return;
  }
  v38 = W32GetUserSessionState(v30);
  v33 = W32GetUserSessionState(v39);
  if ( v16 == 91 )
  {
    v35 = 64;
  }
  else if ( v16 == 92 )
  {
    v35 = 0x80;
  }
  else if ( v16 == 160 || v16 == 161 || v16 == 162 || v16 == 163 || (unsigned int)v16 - 164 < 2 )
  {
    LOBYTE(v34) = v16 & 0xF;
    v35 = 1 << (v16 & 0xF);
  }
  else
  {
    v35 = 0;
  }
  *(_BYTE *)(v38 + 21902) = v35;
  if ( !v35 )
    goto LABEL_79;
  LOBYTE(v34) = *(_BYTE *)(v33 + 21901);
  if ( (*(_BYTE *)(a1 + 4) & 1) != 0 )
  {
LABEL_78:
    *(_BYTE *)(v33 + 21901) = v34 & ~v35;
    goto LABEL_79;
  }
  if ( ((unsigned __int8)v35 & (unsigned __int8)v34) != v35 )
  {
    LOBYTE(v34) = v35 | v34;
    *(_BYTE *)(v33 + 21901) = v34;
    goto LABEL_79;
  }
  v34 = *(_QWORD *)(W32GetUserSessionState(v34) + 18944);
  if ( v34 )
  {
    v40 = *(_QWORD *)(v34 + 104);
    if ( v40 )
    {
      if ( (*(_DWORD *)(v40 + 688) & 0x80000000) != 0 )
        goto LABEL_79;
    }
  }
  InputTraceLogging::Keyboard::DropInput(14LL);
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
  {
    v7 = 0;
  }
  v41 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v42 = W32GetUserSessionState(WPP_GLOBAL_Control);
    WPP_RECORDER_AND_TRACE_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v7,
      v41,
      *(_QWORD *)(v42 + 69400),
      3u,
      7u,
      0xAu,
      (__int64)&WPP_f07bfea603843ed443aaa2e0dff9e79e_Traceguids,
      v16);
  }
}
