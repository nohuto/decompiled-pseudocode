/*
 * XREFs of ?xxxApplyGlobalInputSettings@@YAXH@Z @ 0x140238488
 * Callers:
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x14023413C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     xxxProcessEventMessage @ 0x14023DDAC (xxxProcessEventMessage.c)
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x14027662C (_anonymous_namespace_--xxxSendFocusMessages.c)
 *     EditionKeyboardInputDelegationChanged @ 0x140277950 (EditionKeyboardInputDelegationChanged.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140076C10 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??1?$Win32HMThreadLockBase@UtagKL@@$0A@$0A@@@QEAA@XZ @ 0x14009D218 (--1-$Win32HMThreadLockBase@UtagKL@@$0A@$0A@@@QEAA@XZ.c)
 *     _GetProcessWindowStation @ 0x1401038C0 (_GetProcessWindowStation.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x140118D30 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 */

void __fastcall xxxApplyGlobalInputSettings()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // rdx
  __int64 v3; // rcx
  struct tagQ *KeyboardDelegationTargetQ; // rdi
  __int64 v5; // rbx
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct tagTHREADINFO *v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 UserSessionState; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 ProcessWindowStation; // rax
  __int64 v19; // rdx
  ULONG_PTR BugCheckParameter3[3]; // [rsp+40h] [rbp-18h] BYREF

  if ( (GetDelegationFlags() & 1) != 0 )
    KeyboardDelegationTargetQ = (struct tagQ *)GetKeyboardDelegationTargetQ();
  else
    KeyboardDelegationTargetQ = *(struct tagQ **)(W32GetUserSessionState(v1, v0) + 18944);
  if ( KeyboardDelegationTargetQ )
  {
    v5 = *((_QWORD *)KeyboardDelegationTargetQ + 15);
    if ( v5 )
    {
      v6 = *(_QWORD *)(v5 + 16);
      if ( v6 )
      {
        if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v6 + 528), 0, 0) & 1) == 0
          && *(_QWORD *)(v6 + 824) )
        {
          v9 = PtiCurrent(v3, v2);
          if ( (struct tagTHREADINFO *)v6 == v9 )
          {
            if ( *(_QWORD *)(W32GetUserSessionState(v8, v7) + 14240) )
            {
              v13 = *(_QWORD *)(W32GetUserSessionState(v11, v10) + 14240);
              if ( v13 != *((_QWORD *)v9 + 60) )
              {
                UserSessionState = W32GetUserSessionState(v13, v12);
                Win32HM_LockIntoThread<0>((__int64)v9, *(_QWORD *)(UserSessionState + 14240), BugCheckParameter3);
                v17 = *(_QWORD *)(W32GetUserSessionState(v16, v15) + 14240);
                ProcessWindowStation = GetProcessWindowStation(0LL);
                xxxInternalActivateKeyboardLayout(ProcessWindowStation, v17, 0LL, 0LL);
                Win32HMThreadLockBase<tagKL,0,0>::~Win32HMThreadLockBase<tagKL,0,0>(BugCheckParameter3, v19);
              }
            }
          }
          else
          {
            PostEventMessageEx((struct tagTHREADINFO *)v6, KeyboardDelegationTargetQ, 0x12u, 0LL, 0, 0LL, 0LL, 0LL);
          }
        }
      }
    }
  }
}
