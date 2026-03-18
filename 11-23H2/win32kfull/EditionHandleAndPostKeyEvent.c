/*
 * XREFs of EditionHandleAndPostKeyEvent @ 0x1C0036950
 * Callers:
 *     <none>
 * Callees:
 *     PtiKbdFromQ @ 0x1C003701C (PtiKbdFromQ.c)
 *     AdjustPwndPtiPqForDelegation @ 0x1C003703C (AdjustPwndPtiPqForDelegation.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00374DC (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     IsProcessedByInputService @ 0x1C0039D60 (IsProcessedByInputService.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0044724 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     PushW32ThreadLock @ 0x1C00AD510 (PushW32ThreadLock.c)
 *     ?_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00B2C58 (-_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00E0550 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EB194 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     PostInputMessage @ 0x1C0117FD8 (PostInputMessage.c)
 *     ?WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z @ 0x1C0118E18 (-WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z.c)
 *     HasHidTable @ 0x1C0119210 (HasHidTable.c)
 *     xxxNextWindow @ 0x1C01C9C54 (xxxNextWindow.c)
 */

__int64 __fastcall EditionHandleAndPostKeyEvent(
        int a1,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned __int8 a5,
        char a6,
        unsigned __int16 a7,
        unsigned __int16 a8,
        unsigned __int16 a9,
        unsigned __int16 a10,
        struct tagINPUT_MESSAGE_SOURCE *a11,
        unsigned int a12,
        void *a13,
        unsigned __int64 a14,
        unsigned __int16 a15,
        struct _KEYBOARD_VIRTUAL_DEVICE_INFO *a16)
{
  char v17; // di
  __int64 v18; // rdx
  int v19; // r8d
  __int64 v20; // rcx
  __int64 v21; // rbx
  struct tagTHREADINFO **v22; // rbx
  __int64 v23; // rcx
  int v24; // r15d
  __int64 v25; // r14
  __int64 KeyboardDelegationTargetQ; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  int v29; // eax
  int v30; // r12d
  __int64 v31; // rax
  __int64 v32; // rcx
  int v33; // edx
  int v34; // r8d
  unsigned __int64 v35; // r14
  __int64 v36; // rax
  int v38; // [rsp+88h] [rbp-39h] BYREF
  int v39; // [rsp+8Ch] [rbp-35h]
  int v40; // [rsp+90h] [rbp-31h] BYREF
  __int64 v41; // [rsp+98h] [rbp-29h] BYREF
  __int64 v42; // [rsp+A0h] [rbp-21h] BYREF
  struct tagTHREADINFO **v43; // [rsp+A8h] [rbp-19h] BYREF
  __int128 v44; // [rsp+B0h] [rbp-11h] BYREF
  __int64 v45; // [rsp+C0h] [rbp-1h]

  v17 = 1;
  v18 = *((_QWORD *)PtiCurrentShared() + 58);
  if ( *(_QWORD *)(v18 + 56)
    || (v20 = *((_QWORD *)PtiCurrentShared() + 58), *(_QWORD *)(v20 + 48))
    || a4
    || (*(_BYTE *)(SGDGetUserSessionState(v20) + 13996) & 0x10) == 0
    || (a5 != 9 || (a6 & 1) != 0) && (a5 != 27 || (a6 & 2) != 0) )
  {
    v22 = (struct tagTHREADINFO **)gpqForeground;
    if ( !gpqForeground )
    {
      if ( !a4 && (*gpsi & 0x6000) != 0 && (unsigned __int8)(a5 + 83) <= 6u )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
        {
          v17 = 0;
        }
        if ( v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v18) = v17;
          LOBYTE(v19) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v18,
            v19,
            (unsigned int)&WPP_de8dbbd74b6f3353e3dc754537999fe8_Traceguids,
            4,
            2,
            14,
            (__int64)&WPP_de8dbbd74b6f3353e3dc754537999fe8_Traceguids);
        }
        CInputGlobals::ClearPtiLastWoken(gpInputGlobals);
        _PostShellHookMsgWorker(
          *(_DWORD *)(gpsi + 928LL),
          0xCuLL,
          (unsigned __int64)(unsigned __int16)(a5 - 165) << 16,
          0LL);
      }
      return 0LL;
    }
    v23 = *(_QWORD *)(gpqForeground + 104LL);
    v24 = a5;
    v25 = *(_QWORD *)(gpqForeground + 32LL);
    v39 = a5;
    if ( (unsigned __int8)IsKeyboardDelegationEnabledForThread(v23) )
    {
      KeyboardDelegationTargetQ = GetKeyboardDelegationTargetQ();
      if ( KeyboardDelegationTargetQ )
      {
        v25 = *(_QWORD *)(KeyboardDelegationTargetQ + 32);
        v22 = (struct tagTHREADINFO **)KeyboardDelegationTargetQ;
      }
    }
    v27 = PtiKbdFromQ(v22);
    if ( (unsigned int)HasHidTable(v27)
      && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(PtiKbdFromQ(v22) + 424) + 856LL) + 100LL) & 0x20) != 0 )
    {
      v28 = PtiKbdFromQ(v22);
      if ( !(unsigned int)HasHidTable(v28)
        || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(PtiKbdFromQ(v22) + 424) + 856LL) + 100LL) & 0x400) == 0
        || (unsigned __int8)(a5 + 90) > 0x11u )
      {
        return 1LL;
      }
    }
    else if ( a5 == 0xE7 && (a8 & 0x1000) != 0 )
    {
      v24 = (a7 << 16) | a5;
      v39 = v24;
      v29 = 0;
LABEL_22:
      v38 = v29;
      v30 = ((a9 | (unsigned __int16)v29) << 16) | 1;
      if ( v25
        && *(_DWORD *)(v25 + 24) == a15
        && ((a15 - 256) & 0xFFFB) == 0
        && *(_QWORD *)(v25 + 32) == v24
        && !(unsigned int)IsProcessedByInputService(v25)
        && *(_WORD *)(v25 + 42) == HIWORD(v30) )
      {
        if ( (unsigned int)GetKeyboardInputRoutingPolicy() == 1 )
          CKeyboardProcessor::ForwardInputToISM(a1 != 0, v38, a8, a10, a13, a12, 1, a14, a16);
        *(_QWORD *)(v25 + 40) = (HIWORD(v30) << 16) | (unsigned __int16)(*(_WORD *)(v25 + 40) + 1);
        WakeSomeone((struct tagQ *)v22, 0LL, a15, (struct tagQMSG *)v25);
        return 0LL;
      }
      if ( (unsigned __int8)(a5 + 90) > 0x11u || a4 || !v22 )
        goto LABEL_54;
      if ( (unsigned __int8)(a5 + 83) <= 2u )
      {
        if ( gpqForeground )
        {
          v31 = *(_QWORD *)(gpqForeground + 120LL);
          if ( v31 || (v31 = *(_QWORD *)(gpqForeground + 128LL)) != 0 )
          {
            v32 = *(_QWORD *)(*(_QWORD *)(v31 + 16) + 432LL);
            if ( v32 )
            {
              v35 = ((unsigned __int64)(unsigned __int16)(a5 - 165) << 16) | (unsigned __int16)GetMouseKeyFlags(v32);
              if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
                || (LOBYTE(v33) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
              {
                LOBYTE(v33) = 0;
              }
              if ( (_BYTE)v33 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v34) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                WPP_RECORDER_AND_TRACE_SF_(
                  WPP_GLOBAL_Control->AttachedDevice,
                  v33,
                  v34,
                  (unsigned int)&WPP_de8dbbd74b6f3353e3dc754537999fe8_Traceguids,
                  4,
                  2,
                  14,
                  (__int64)&WPP_de8dbbd74b6f3353e3dc754537999fe8_Traceguids);
              }
              CInputGlobals::ClearPtiLastWoken(gpInputGlobals);
              _PostShellHookMsgWorker(*(_DWORD *)(gpsi + 928LL), 0xCuLL, v35, 0LL);
            }
          }
        }
      }
      else
      {
        PostEventMessageEx(v22[13], (struct tagQ *)v22, 0xFu, 0LL, 0, 0LL, a5, a11);
      }
      v36 = PtiKbdFromQ(v22);
      if ( !(unsigned int)HasHidTable(v36)
        || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(PtiKbdFromQ(v22) + 424) + 856LL) + 100LL) & 0x20) == 0 )
      {
LABEL_54:
        if ( (unsigned int)GetKeyboardInputRoutingPolicy() == 1 )
          CKeyboardProcessor::ForwardInputToISM(a1 != 0, v38, a8, a10, a13, a12, 1, a14, a16);
        PostPendingMouseMove(v22);
        v42 = 0LL;
        v41 = 0LL;
        v40 = 0;
        v38 = 0;
        v43 = v22;
        if ( (unsigned int)AdjustPwndPtiPqForDelegation(
                             (unsigned int)&v43,
                             (unsigned int)&v42,
                             (unsigned int)&v41,
                             a15,
                             (__int64)a11,
                             (__int64)&v40,
                             (__int64)&v38) )
          PostInputMessage((struct tagQ *)v22, 0LL, a15, v30, a12, 0LL, a14, 0, a11, a13, 0LL, v40, v38, v41);
        return 0LL;
      }
      return 1LL;
    }
    v29 = a7;
    goto LABEL_22;
  }
  v45 = 0LL;
  v44 = 0LL;
  v21 = gpqForeground;
  if ( !gpqForeground )
    v21 = *(_QWORD *)(gptiRit + 432LL);
  ++*(_DWORD *)(v21 + 400);
  PushW32ThreadLock(v21, &v44, UnlockQueue);
  xxxNextWindow(v21, a5);
  PopAndFreeAlwaysW32ThreadLock(&v44);
  return 0LL;
}
