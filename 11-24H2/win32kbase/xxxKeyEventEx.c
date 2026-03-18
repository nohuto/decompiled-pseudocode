/*
 * XREFs of xxxKeyEventEx @ 0x14014BF54
 * Callers:
 *     xxxProcessKeyEvent @ 0x1400FB6E0 (xxxProcessKeyEvent.c)
 *     ?xxxAltGr@@YAXPEAUtagKE@@@Z @ 0x14010E948 (-xxxAltGr@@YAXPEAUtagKE@@@Z.c)
 *     ?xxxNumpadCursor@@YAHPEAUtagKE@@@Z @ 0x1401104B0 (-xxxNumpadCursor@@YAHPEAUtagKE@@@Z.c)
 *     ?xxxICO_00@@YAHPEAUtagKE@@@Z @ 0x140115E50 (-xxxICO_00@@YAHPEAUtagKE@@@Z.c)
 *     ?xxxManageKeyboardModifiers@@YAXPEAUtagKL@@0@Z @ 0x140149C2C (-xxxManageKeyboardModifiers@@YAXPEAUtagKL@@0@Z.c)
 *     ?xxxShiftLock@@YAHPEAUtagKE@@@Z @ 0x14014BCDC (-xxxShiftLock@@YAHPEAUtagKE@@@Z.c)
 *     ?NlsSbcsDbcsToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x14014BE20 (-NlsSbcsDbcsToggleProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?xxxAdjustPushState@@YAXPEAUtagTHREADINFO@@EEPEAUtagKL@@1@Z @ 0x1401585B4 (-xxxAdjustPushState@@YAXPEAUtagTHREADINFO@@EEPEAUtagKL@@1@Z.c)
 *     xxxKeyEvent @ 0x14019D350 (xxxKeyEvent.c)
 *     ?NlsAlphanumericModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1402146E0 (-NlsAlphanumericModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsCodeInputToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x140214800 (-NlsCodeInputToggleProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsHiraganaModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x140214A10 (-NlsHiraganaModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsKatakanaModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x140214C20 (-NlsKatakanaModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsRomanToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x140214E00 (-NlsRomanToggleProc@@YAHPEAUtagKE@@_KK@Z.c)
 * Callees:
 *     GetActiveHKL @ 0x1400489F0 (GetActiveHKL.c)
 *     ?KeyEvent@Keyboard@InputTraceLogging@@SAXAEBUtagINPUT_MESSAGE_SOURCE@@HPEAXKHHPEAUHKL__@@E@Z @ 0x140093810 (-KeyEvent@Keyboard@InputTraceLogging@@SAXAEBUtagINPUT_MESSAGE_SOURCE@@HPEAXKHHPEAUHKL__@@E@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?OnKeyEvent@CAsyncKeyEventMonitor@@QEAAXXZ @ 0x1400ED484 (-OnKeyEvent@CAsyncKeyEventMonitor@@QEAAXXZ.c)
 *     HMAssignmentLock @ 0x1400F47B0 (HMAssignmentLock.c)
 *     ?DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z @ 0x1400FB48C (-DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z.c)
 *     _anonymous_namespace_::GetKeyboardProcessor @ 0x140108298 (_anonymous_namespace_--GetKeyboardProcessor.c)
 *     EditionUpdateSASModifiers @ 0x140113EDC (EditionUpdateSASModifiers.c)
 *     ?HandleLeftRightVKs@CKeyboardProcessor@@SAEE@Z @ 0x14011ACFC (-HandleLeftRightVKs@CKeyboardProcessor@@SAEE@Z.c)
 *     ?ForwardInputToKeyboardOverrider@CKeyboardProcessor@@SAX_NGGGPEAXKGPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@@Z @ 0x14015B610 (-ForwardInputToKeyboardOverrider@CKeyboardProcessor@@SAX_NGGGPEAXKGPEAU_KEYBOARD_VIRTUAL_DEVICE_.c)
 *     GetKeyEventInputSource @ 0x1401891C4 (GetKeyEventInputSource.c)
 *     xxxUpdateGlobalsAndSendKeyEvent @ 0x140189DE4 (xxxUpdateGlobalsAndSendKeyEvent.c)
 *     ApiSetEditionKeyEventLLHook @ 0x140192534 (ApiSetEditionKeyEventLLHook.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

void __fastcall xxxKeyEventEx(
        __int64 a1,
        unsigned __int16 a2,
        unsigned int a3,
        __int64 a4,
        void *a5,
        unsigned __int16 *a6,
        unsigned __int8 a7,
        unsigned __int8 a8,
        __int64 a9,
        struct _KEYBOARD_VIRTUAL_DEVICE_INFO *a10)
{
  unsigned __int16 v11; // r15
  __int64 v12; // rcx
  unsigned int v13; // esi
  unsigned __int16 v14; // r13
  __int64 v15; // rcx
  __int64 UserSessionState; // rax
  int v17; // eax
  __int64 v18; // rax
  unsigned int v19; // esi
  __int64 v20; // rcx
  volatile signed __int32 *v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  HKL ActiveHKL; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rcx
  int (*v28)(void); // rax
  __int64 v29; // rdx
  __int64 KeyboardProcessor; // rax
  __int64 v31; // rcx
  __int64 v32; // rcx
  int v33; // esi
  unsigned int v34; // [rsp+50h] [rbp-69h]
  unsigned __int8 v35; // [rsp+60h] [rbp-59h]
  int v37; // [rsp+6Ch] [rbp-4Dh]
  unsigned __int16 v38; // [rsp+74h] [rbp-45h]
  struct tagTHREADINFO *v39; // [rsp+78h] [rbp-41h]
  __int64 v40; // [rsp+80h] [rbp-39h] BYREF
  void *v41; // [rsp+88h] [rbp-31h]
  __int64 v42[2]; // [rsp+90h] [rbp-29h] BYREF
  struct _KEYBOARD_VIRTUAL_DEVICE_INFO *v43; // [rsp+A0h] [rbp-19h]
  __int64 v44; // [rsp+A8h] [rbp-11h] BYREF
  int v45; // [rsp+B0h] [rbp-9h]

  v41 = a5;
  v43 = a10;
  v42[0] = a4;
  v11 = a1;
  v39 = PtiCurrent(a1);
  v40 = 0LL;
  v13 = 0;
  v45 = 0;
  if ( a6 )
    v14 = *a6;
  else
    v14 = -1;
  v44 = -1LL;
  if ( *(_QWORD *)(W32GetUserSessionState(v12) + 14496) )
  {
    UserSessionState = W32GetUserSessionState(v15);
    CAsyncKeyEventMonitor::OnKeyEvent(*(CAsyncKeyEventMonitor **)(UserSessionState + 14496));
  }
  if ( a7 )
  {
    if ( a9 )
    {
      v13 = *(_DWORD *)(a9 + 12);
      v17 = *(_DWORD *)(a9 + 8);
      v44 = *(_QWORD *)a9;
    }
    else
    {
      v18 = *((_QWORD *)v39 + 58);
      v19 = *(_DWORD *)(v18 + 12);
      v44 = *(_QWORD *)(v18 + 872);
      v17 = *(_DWORD *)(v18 + 880);
      v13 = v19 >> 31;
    }
    v45 = v17;
  }
  GetKeyEventInputSource(a7, v14, a9, &v40);
  v21 = *(volatile signed __int32 **)(W32GetUserSessionState(v20) + 19928);
  _InterlockedOr(v21, 0x40u);
  LOWORD(v21) = ((v11 & 0x8000) != 0) + 256;
  v38 = (unsigned __int16)v21;
  v37 = (unsigned __int16)v21;
  if ( (*(_BYTE *)(W32GetUserSessionState(v21) + 14404) & 0x10) != 0
    && (*(_BYTE *)(W32GetUserSessionState(v22) + 14404) & 4) == 0 )
  {
    v37 += 4;
  }
  v35 = CKeyboardProcessor::HandleLeftRightVKs(v11);
  ActiveHKL = (HKL)GetActiveHKL(v23);
  InputTraceLogging::Keyboard::KeyEvent(
    (const struct tagINPUT_MESSAGE_SOURCE *)&v40,
    v11 & 0x8000,
    v41,
    a3,
    a7,
    a8,
    ActiveHKL,
    v11);
  v27 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v26, v25) + 48);
  v28 = *(int (**)(void))(v27 + 5888);
  if ( v28 && v28() >= 0 )
  {
    LOBYTE(v29) = v35;
    EditionUpdateSASModifiers(a7, v29, a2, v11 & 0x8000);
  }
  if ( a8 )
    goto LABEL_27;
  KeyboardProcessor = anonymous_namespace_::GetKeyboardProcessor(v27);
  if ( !KeyboardProcessor || !*(_DWORD *)(KeyboardProcessor + 24) )
  {
    v34 = v13;
    v33 = v42[0];
    if ( (unsigned int)ApiSetEditionKeyEventLLHook(
                         (_DWORD)v39,
                         v11 & 0x100,
                         v38,
                         v37,
                         v11,
                         a2,
                         v11 & 0x8000,
                         a7,
                         a3,
                         v42[0],
                         v34,
                         (__int64)&v44) == 1 )
    {
      InputTraceLogging::Keyboard::DropInput();
      return;
    }
    goto LABEL_28;
  }
  if ( !a6 )
  {
LABEL_27:
    v33 = v42[0];
LABEL_28:
    xxxUpdateGlobalsAndSendKeyEvent(
      v11,
      a2,
      a3,
      v33,
      (__int64)v41,
      (__int64)a6,
      v14,
      a7,
      a8,
      a9,
      (__int64)&v40,
      (__int64)v43);
    return;
  }
  if ( !*((_QWORD *)v39 + 60) )
  {
    if ( *(_QWORD *)(W32GetUserSessionState(v31) + 14240) )
    {
      v42[0] = (__int64)v39 + 480;
      v42[1] = *(_QWORD *)(W32GetUserSessionState(v32) + 14240);
      HMAssignmentLock((__int64)v42, 0);
    }
  }
  CKeyboardProcessor::ForwardInputToKeyboardOverrider(a7, a2, v11, *a6, v41, a3, a6[2], v43);
}
