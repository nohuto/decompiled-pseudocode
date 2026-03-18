/*
 * XREFs of ProcessKeyboardInputWorker @ 0x1C01EA8C0
 * Callers:
 *     ?ProcessInputNoLock@CKeyboardProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_INPUT_DATA@@K_NPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@@Z @ 0x1C000242C (-ProcessInputNoLock@CKeyboardProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYB.c)
 *     ?MapFlexibleKeys@@YAHPEAUtagKE@@EPEAUDEVICEINFO@@@Z @ 0x1C01E9F38 (-MapFlexibleKeys@@YAHPEAUtagKE@@EPEAUDEVICEINFO@@@Z.c)
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C0048330 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     isChildPartition @ 0x1C004FE70 (isChildPartition.c)
 *     HMUnlockObject @ 0x1C0056D70 (HMUnlockObject.c)
 *     GetActiveHKL @ 0x1C006B1A0 (GetActiveHKL.c)
 *     InternalMapVirtualKeyEx @ 0x1C006BBB0 (InternalMapVirtualKeyEx.c)
 *     xxxProcessKeyEvent @ 0x1C00C90C0 (xxxProcessKeyEvent.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 *     ?AccessProceduresStream@@YAHPEAUtagKE@@KH@Z @ 0x1C00E39D0 (-AccessProceduresStream@@YAHPEAUtagKE@@KH@Z.c)
 *     ?AccessTimeOut@@YAXXZ @ 0x1C00E3A50 (-AccessTimeOut@@YAXXZ.c)
 *     PtiKbdFromQ @ 0x1C00E5C1E (PtiKbdFromQ.c)
 *     ?DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z @ 0x1C01B5B4C (-DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z.c)
 *     ?MapScancode@@YAHPEAUtagKE@@PEAEPEAUDEVICEINFO@@@Z @ 0x1C01EA3DC (-MapScancode@@YAHPEAUtagKE@@PEAEPEAUDEVICEINFO@@@Z.c)
 *     ?RemoteSyncToggleKeys@@YAXK@Z @ 0x1C01EA4E4 (-RemoteSyncToggleKeys@@YAXK@Z.c)
 *     VKFromVSC @ 0x1C01EB350 (VKFromVSC.c)
 *     ApiSetEditionRawInputRequestedForKeyboard @ 0x1C02076C8 (ApiSetEditionRawInputRequestedForKeyboard.c)
 *     ApiSetEditionUserBeep @ 0x1C0207A90 (ApiSetEditionUserBeep.c)
 */

void __fastcall ProcessKeyboardInputWorker(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // r13d
  __int64 v7; // rcx
  char v8; // bl
  __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int16 v19; // ax
  unsigned __int8 v20; // si
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  struct tagTHREADINFO *v24; // rax
  __int64 v25; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v27; // rax
  __int64 *v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int16 v33; // ax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  unsigned __int8 v38; // r14
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int16 v48; // bx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rdx
  __int64 v54; // r8
  __int64 v55; // r9
  __int16 ActiveHKL; // ax
  __int64 v57; // rax
  __int64 v58; // rbx
  __int64 v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  char v64; // dl
  __int16 v65; // dx
  unsigned __int8 v66[4]; // [rsp+30h] [rbp-30h] BYREF
  int v67; // [rsp+34h] [rbp-2Ch]
  _DWORD v68[2]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v69; // [rsp+40h] [rbp-20h]
  __int128 v70; // [rsp+48h] [rbp-18h]

  v4 = 0;
  v68[0] = 0;
  v7 = *(unsigned __int16 *)(a1 + 4);
  v9 = (unsigned __int16)v7;
  v67 = 0;
  v8 = a3;
  v70 = 0LL;
  LOWORD(v9) = v7 & 0x10;
  if ( (v7 & 0x10) != 0 || a2 && (*(_DWORD *)(a2 + 184) & 0x2000) != 0 || *(_WORD *)a1 == 0xFFFE )
    v67 = 1;
  if ( a2 )
    v69 = *(_QWORD *)a2;
  else
    v69 = 0LL;
  v10 = *(_DWORD *)(a1 + 8);
  *(_QWORD *)&v70 = *(_QWORD *)a1;
  DWORD2(v70) = v10;
  v68[1] = 0;
  if ( (v7 & 0x28) == 0 )
  {
    if ( (*(_DWORD *)(SGDGetUserSessionState(v7, v9, a3, a4) + 12668) & 0x8000) != 0 )
    {
      v15 = SGDGetUserSessionState(v12, v11, v13, v14);
      RemoteSyncToggleKeys(*(unsigned int *)(v15 + 12668), v16, v17, v18);
    }
    v19 = *(_WORD *)(a1 + 4);
    if ( (v19 & 2) != 0 )
      v20 = -32;
    else
      v20 = (v19 & 4) != 0 ? 0xE1 : 0;
    v66[0] = v20;
    if ( *(_WORD *)(a1 + 2) == 255 )
    {
      UserSessionSwitchLeaveCrit(2LL, v11, v13, v14);
      ApiSetEditionUserBeep();
      v24 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(0LL, v21, v22, v23);
      gptiCurrent = v24;
      if ( v24 )
      {
        *((_DWORD *)v24 + 387) = 1;
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v25);
        if ( CurrentProcessWin32Process )
        {
          if ( *(_QWORD *)CurrentProcessWin32Process
            && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
            && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
            && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
          {
            while ( 1 )
            {
              v28 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
              if ( !gpSharedUserCritDeferredUnlockListHead )
                break;
              gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                           + 2);
              v27 = *v28;
              v28[2] = 0LL;
              if ( !*(_DWORD *)(v27 + 8) )
              {
                v67 = 0x20000;
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4237);
              }
              HMUnlockObject(*v28);
            }
          }
        }
      }
      goto LABEL_27;
    }
    if ( isChildPartition() && (*(_BYTE *)(a1 + 4) & 0x40) != 0 )
    {
      v33 = *(_WORD *)(a1 + 2);
      HIWORD(v68[0]) = v33;
    }
    else
    {
      LOBYTE(v68[0]) = *(_BYTE *)(a1 + 2) & 0x7F;
      if ( v8
        && (*(_QWORD *)(SGDGetUserSessionState(v30, v29, v31, v32) + 12640)
         || *(_QWORD *)(SGDGetUserSessionState(v35, v34, v36, v37) + 12648)) )
      {
        HIWORD(v68[0]) = 0;
        if ( (*(_BYTE *)(a1 + 4) & 1) != 0 )
          HIWORD(v68[0]) = 0x8000;
        if ( !(unsigned int)MapScancode((struct tagKE *)v68, v66, (struct DEVICEINFO *)a2, v37) )
          goto LABEL_27;
        v20 = v66[0];
      }
      LOBYTE(v29) = v20;
      LOBYTE(v33) = VKFromVSC(v68, v29, v31);
    }
    v38 = v33;
    *(_BYTE *)(SGDGetUserSessionState(v30, v29, v31, v32) + 13776) = v33;
    if ( v38 )
    {
      if ( (unsigned __int8)(v38 - 91) <= 1u && (*(_BYTE *)(a1 + 4) & 1) == 0 )
      {
        if ( gptiForeground && (v57 = *((_QWORD *)gptiForeground + 55)) != 0 )
          v58 = *(_QWORD *)(*(_QWORD *)(v57 + 48) + 32LL);
        else
          v58 = *(_QWORD *)(SGDGetUserSessionState(v40, v39, v41, v42) + 13840);
        v59 = SGDGetUserSessionState(v40, v39, v41, v42);
        v45 = 0LL;
        if ( *(_WORD *)(v59 + 12664) )
          goto LABEL_52;
        v48 = InternalMapVirtualKeyEx(0x4Cu, 0, v58);
LABEL_51:
        *(_WORD *)(SGDGetUserSessionState(v45, v53, v54, v55) + 12664) = v48;
LABEL_52:
        if ( (*(_BYTE *)(a1 + 4) & 1) != 0 )
        {
          ActiveHKL = GetActiveHKL();
          LOBYTE(v45) = LOBYTE(v68[0]) + 15;
          if ( (unsigned __int8)(LOBYTE(v68[0]) + 15) > 1u )
            goto LABEL_68;
          v45 = 1023LL;
          if ( (unsigned __int16)((ActiveHKL & 0x3FF) - 17) > 1u )
            goto LABEL_68;
          if ( ((v38 - 22) & 0xFB) != 0 )
          {
            if ( v20 == 0xE1 )
              return;
            goto LABEL_68;
          }
          if ( v20 == 0xE1 )
LABEL_68:
            HIWORD(v68[0]) |= 0x8000u;
        }
        if ( !qword_1C02962C0
          || !(unsigned int)qword_1C02962C0(v45)
          || (unsigned __int8)(BYTE2(v68[0]) - 91) > 1u
          || *(_DWORD *)(SGDGetUserSessionState(v61, v60, v62, v63) + 13820) )
        {
          if ( v38 == 91 )
          {
            v64 = 64;
          }
          else
          {
            if ( v38 != 92 )
            {
              if ( v38 != 160 && v38 != 161 && v38 != 162 && v38 != 163 && (unsigned int)v38 - 164 >= 2 )
              {
                gCurrentModifierBit = 0;
                goto LABEL_89;
              }
              v64 = 1 << (v38 & 0xF);
              gCurrentModifierBit = v64;
              if ( !v64 )
              {
LABEL_89:
                if ( v38 == 13 && (*(_BYTE *)(a1 + 4) & 1) == 0 )
                  PoLatencySensitivityHint(1LL);
                if ( (gdwPUDFlags & 0x100) != 0 )
                {
                  AccessTimeOut();
                  if ( (unsigned int)AccessProceduresStream((struct tagKE *)v68, *(_DWORD *)(a1 + 8), 0) )
                    xxxProcessKeyEvent(
                      (unsigned __int16 *)v68,
                      *(unsigned int *)(a1 + 8),
                      (*(_BYTE *)(a1 + 4) & 0x10) != 0,
                      v4,
                      a2,
                      0LL);
                }
                else
                {
                  xxxProcessKeyEvent((unsigned __int16 *)v68, *(unsigned int *)(a1 + 8), v67, v4 != 0, a2, 0LL);
                }
                return;
              }
LABEL_86:
              if ( (*(_BYTE *)(a1 + 4) & 1) != 0 )
                gPhysModifierState &= ~v64;
              else
                gPhysModifierState |= v64;
              goto LABEL_89;
            }
            v64 = 0x80;
          }
          gCurrentModifierBit = v64;
          goto LABEL_86;
        }
LABEL_27:
        InputTraceLogging::Keyboard::DropInput();
        return;
      }
    }
    else
    {
      if ( gpqForeground )
        v43 = PtiKbdFromQ(gpqForeground);
      else
        v43 = 0LL;
      if ( !(unsigned int)ApiSetEditionRawInputRequestedForKeyboard(v43) )
        goto LABEL_27;
      v4 = 1;
    }
    v48 = 0;
    if ( !*(_WORD *)(SGDGetUserSessionState(v40, v39, v41, v42) + 12664) )
      goto LABEL_52;
    v50 = *(unsigned __int16 *)(SGDGetUserSessionState(v45, v44, v46, v47) + 12664);
    if ( *(_WORD *)(a1 + 2) == (_WORD)v50 )
    {
      v38 = 76;
      *(_BYTE *)(SGDGetUserSessionState(v50, v49, v51, v52) + 13776) = 76;
      HIWORD(v68[0]) = 76;
      v48 = 0;
    }
    v45 = *(unsigned int *)(SGDGetUserSessionState(v50, v49, v51, v52) + 13796);
    if ( (v45 & 8) != 0 && ((*(_BYTE *)(a1 + 4) & 1) == 0 || (unsigned __int8)(v38 - 91) > 1u) )
      goto LABEL_52;
    goto LABEL_51;
  }
  if ( (v7 & 8) != 0 )
  {
    if ( (v7 & 0x10) != 0 )
      *(_DWORD *)(a1 + 8) |= 0x4000u;
    RemoteSyncToggleKeys(*(unsigned int *)(a1 + 8), v9, a3, a4);
  }
  v65 = *(_WORD *)(a1 + 4);
  if ( (v65 & 0x20) != 0 )
  {
    LOWORD(v68[0]) = *(_WORD *)(a1 + 2);
    HIWORD(v68[0]) = (v65 << 15) | 0x10E7;
    xxxProcessKeyEvent((unsigned __int16 *)v68, 0LL, (v65 & 0x10) != 0, 0, a2, 0LL);
  }
}
