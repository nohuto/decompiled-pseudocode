/*
 * XREFs of EditionHandleAndPostKeyEvent @ 0x1402481C0
 * Callers:
 *     <none>
 * Callees:
 *     PopAndFreeW32ThreadLock @ 0x14003E6B0 (PopAndFreeW32ThreadLock.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     PostShellHookMessagesEx @ 0x140067280 (PostShellHookMessagesEx.c)
 *     IsProcessedByInputService @ 0x14008F9EC (IsProcessedByInputService.c)
 *     ?WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z @ 0x14008FB9C (-WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x140118D30 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     AdjustPwndPtiPqForDelegation @ 0x14012E3D4 (AdjustPwndPtiPqForDelegation.c)
 *     PostInputMessage @ 0x14012ED84 (PostInputMessage.c)
 *     PtiKbdFromQ @ 0x1401534FC (PtiKbdFromQ.c)
 *     HasHidTable @ 0x140172640 (HasHidTable.c)
 *     ?GetAppcommandQueue@@YAPEAUtagQ@@XZ @ 0x140248150 (-GetAppcommandQueue@@YAPEAUtagQ@@XZ.c)
 *     Feature_Bugfix_58938704__private_IsEnabledDeviceUsageNoInline @ 0x1402A4128 (Feature_Bugfix_58938704__private_IsEnabledDeviceUsageNoInline.c)
 *     ?xxxNextWindow@@YAXPEAUtagQ@@K@Z @ 0x1402DB524 (-xxxNextWindow@@YAXPEAUtagQ@@K@Z.c)
 */

__int64 __fastcall EditionHandleAndPostKeyEvent(
        __int64 a1,
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
  __int64 v16; // rbx
  int v17; // r15d
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  struct tagQ *v22; // rdi
  struct tagTHREADINFO *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rcx
  struct tagTHREADINFO **v27; // rdi
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rsi
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 UserSessionState; // rax
  __int64 v34; // rax
  __int64 KeyboardDelegationTargetQ; // rax
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rax
  unsigned __int16 v40; // r12
  int v41; // r14d
  unsigned int v42; // r13d
  struct tagINPUT_MESSAGE_SOURCE *v43; // r13
  struct tagQ *AppcommandQueue; // rax
  unsigned __int16 MouseKeyFlags; // ax
  __int64 v46; // rax
  int KeyboardInputRoutingPolicy; // eax
  unsigned __int64 v49; // rbx
  void *v50; // rsi
  unsigned int v51; // r15d
  unsigned int v52; // r12d
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rdx
  _DWORD *v56; // rcx
  unsigned int v57; // [rsp+88h] [rbp-39h]
  int v58; // [rsp+8Ch] [rbp-35h] BYREF
  __int64 v59; // [rsp+90h] [rbp-31h] BYREF
  __int64 v60; // [rsp+98h] [rbp-29h] BYREF
  struct tagTHREADINFO **v61; // [rsp+A0h] [rbp-21h] BYREF
  _QWORD v62[10]; // [rsp+A8h] [rbp-19h] BYREF
  int v63; // [rsp+108h] [rbp+47h]
  int v64; // [rsp+120h] [rbp+5Fh] BYREF

  v64 = a4;
  v63 = a1;
  v16 = a5;
  v17 = a4;
  if ( a4
    || (*(_BYTE *)(W32GetUserSessionState(a1, a2) + 14340) & 0x10) == 0
    || ((_BYTE)v16 != 9 || (a6 & 1) != 0) && ((_BYTE)v16 != 27 || (a6 & 2) != 0) )
  {
    if ( !*(_QWORD *)(W32GetUserSessionState(a1, a2) + 18944) )
    {
      if ( !v17 && !*(_QWORD *)(W32GetUserSessionState(v26, v25) + 18944) )
      {
        v56 = *(_DWORD **)(W32GetUserSessionState(v54, v53) + 19928);
        if ( ((*v56 & 0x2000) != 0 || (**(_DWORD **)(W32GetUserSessionState(v56, v55) + 19928) & 0x4000) != 0)
          && (unsigned __int8)(v16 + 83) <= 6u )
        {
          PostShellHookMessagesEx((LastWokenThread *)0xC, (unsigned __int64)(unsigned __int16)(v16 - 165) << 16);
        }
      }
      return 0LL;
    }
    v27 = *(struct tagTHREADINFO ***)(W32GetUserSessionState(v26, v25) + 18944);
    v57 = v16;
    v30 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v29, v28) + 18944) + 32LL);
    if ( (unsigned int)Feature_Bugfix_58938704__private_IsEnabledDeviceUsageNoInline()
      && *(_QWORD *)(W32GetUserSessionState(v32, v31) + 18960)
      && (UserSessionState = W32GetUserSessionState(v32, v31),
          (unsigned __int8)IsKeyboardDelegationEnabledForThread(*(_QWORD *)(UserSessionState + 18960)))
      || (v34 = W32GetUserSessionState(v32, v31),
          (unsigned __int8)IsKeyboardDelegationEnabledForThread(*(_QWORD *)(*(_QWORD *)(v34 + 18944) + 104LL))) )
    {
      KeyboardDelegationTargetQ = GetKeyboardDelegationTargetQ();
      if ( KeyboardDelegationTargetQ )
      {
        v30 = *(_QWORD *)(KeyboardDelegationTargetQ + 32);
        v27 = (struct tagTHREADINFO **)KeyboardDelegationTargetQ;
      }
    }
    v36 = PtiKbdFromQ((__int64)v27);
    if ( (unsigned int)HasHidTable(v36)
      && (v38 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(PtiKbdFromQ((__int64)v27) + 464) + 832LL) + 100LL),
          (v38 & 0x20) != 0) )
    {
      v39 = PtiKbdFromQ((__int64)v27);
      if ( !(unsigned int)HasHidTable(v39) )
        return 1LL;
      v38 = *(_QWORD *)(PtiKbdFromQ((__int64)v27) + 464);
      if ( (*(_DWORD *)(*(_QWORD *)(v38 + 832) + 100LL) & 0x400) == 0 || (unsigned __int8)(v16 + 90) > 0x11u )
        return 1LL;
    }
    else if ( (_BYTE)v16 == 0xE7 && (a8 & 0x1000) != 0 )
    {
      v40 = 0;
      v57 = (a7 << 16) | v16;
LABEL_24:
      v41 = ((a9 | v40) << 16) | 1;
      if ( v30 )
      {
        v42 = a15;
        if ( *(_DWORD *)(v30 + 24) == a15 )
        {
          v38 = 65531LL;
          if ( ((a15 - 256) & 0xFFFB) == 0 && *(_QWORD *)(v30 + 32) == v57 && !IsProcessedByInputService(v30) )
          {
            if ( *(_WORD *)(v30 + 42) == HIWORD(v41) )
            {
              if ( (unsigned int)GetKeyboardInputRoutingPolicy() == 1 )
                CKeyboardProcessor::ForwardInputToISM(v63 != 0, v40, a8, a10, a13, a12, 1, a14, a16);
              *(_QWORD *)(v30 + 40) = (HIWORD(v41) << 16) | (unsigned __int16)(*(_WORD *)(v30 + 40) + 1);
              WakeSomeone((struct tagQ *)v27, 0LL, v42, (struct tagQMSG *)v30);
              return 0LL;
            }
            v17 = v64;
          }
        }
      }
      v43 = a11;
      if ( (unsigned __int8)(v16 + 90) > 0x11u || v17 || !v27 )
        goto LABEL_47;
      if ( (unsigned __int8)(v16 + 83) <= 2u )
      {
        AppcommandQueue = GetAppcommandQueue(v38, v37);
        if ( AppcommandQueue )
        {
          MouseKeyFlags = GetMouseKeyFlags(AppcommandQueue);
          PostShellHookMessagesEx(
            (LastWokenThread *)0xC,
            ((unsigned __int64)(unsigned __int16)(v16 - 165) << 16) | MouseKeyFlags);
        }
      }
      else
      {
        PostEventMessageEx(v27[13], (struct tagQ *)v27, 0xFu, 0LL, 0, 0LL, v16, a11);
      }
      v46 = PtiKbdFromQ((__int64)v27);
      if ( !(unsigned int)HasHidTable(v46)
        || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(PtiKbdFromQ((__int64)v27) + 464) + 832LL) + 100LL) & 0x20) == 0 )
      {
LABEL_47:
        KeyboardInputRoutingPolicy = GetKeyboardInputRoutingPolicy();
        v49 = a14;
        v50 = a13;
        v51 = a12;
        if ( KeyboardInputRoutingPolicy == 1 )
          CKeyboardProcessor::ForwardInputToISM(v63 != 0, v40, a8, a10, a13, a12, 1, a14, a16);
        PostPendingMouseMove(v27);
        v52 = a15;
        v61 = v27;
        v60 = 0LL;
        v59 = 0LL;
        v58 = 0;
        v64 = 0;
        if ( (unsigned int)AdjustPwndPtiPqForDelegation((__int64 *)&v61, &v60, &v59, a15, v43, &v58, &v64) )
          PostInputMessage((struct tagQ *)v27, 0LL, v52, v57, v41, v51, 0LL, v49, 0, v43, v50, 0LL, v58, v64, v59);
        return 0LL;
      }
      return 1LL;
    }
    v40 = a7;
    goto LABEL_24;
  }
  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2) + 18944) )
  {
    v22 = *(struct tagQ **)(W32GetUserSessionState(v19, v18) + 18944);
  }
  else
  {
    v21 = *(_QWORD *)(W32GetUserSessionState(v19, v18) + 18704);
    v22 = *(struct tagQ **)(v21 + 472);
  }
  ++*((_DWORD *)v22 + 110);
  v23 = PtiCurrent(v21, v20);
  v62[0] = *((_QWORD *)v23 + 48);
  *((_QWORD *)v23 + 48) = v62;
  v62[2] = UnlockQueue;
  v62[1] = v22;
  xxxNextWindow(v22, v16);
  PopAndFreeW32ThreadLock((__int64)v62, v24);
  return 0LL;
}
