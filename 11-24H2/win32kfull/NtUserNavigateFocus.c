/*
 * XREFs of NtUserNavigateFocus @ 0x140299E00
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14003F108 (--0-$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140040874 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _GetTopLevelWindow @ 0x140049F30 (_GetTopLevelWindow.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x1400616D0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140076C10 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1400F6DEC (-GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     xxxSendNotifyMessage @ 0x140119930 (xxxSendNotifyMessage.c)
 *     ?xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z @ 0x140232970 (-xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z.c)
 *     ?CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x140252698 (-CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?IsPwndComponentWebview@@YA_NPEBUtagWND@@@Z @ 0x1402AAFFC (-IsPwndComponentWebview@@YA_NPEBUtagWND@@@Z.c)
 */

__int64 __fastcall NtUserNavigateFocus(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  struct _LARGE_STRING **TopLevelWindow; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdx
  ULONG_PTR v31[2]; // [rsp+30h] [rbp-28h] BYREF
  ULONG_PTR BugCheckParameter3[3]; // [rsp+40h] [rbp-18h] BYREF

  v2 = EnterCrit(0LL, 1LL);
  v3 = ValidateHwnd(a1);
  v5 = v3;
  if ( !v3 || (v4 = (*(_WORD *)(*(_QWORD *)(v3 + 40) + 42LL) & 0x2FFFu) - 669, (v4 & 0xFFFFFFFD) == 0) )
  {
    v6 = 0LL;
    goto LABEL_30;
  }
  Win32HM_LockIntoThread<0>(v2, v3, v31);
  v6 = 0LL;
  if ( *(_QWORD *)(W32GetUserSessionState(v8, v7) + 18944)
    && !(unsigned int)CoreWindowProp::CompositeAppHasForeground((const struct tagWND *)v5, v9) )
  {
    goto LABEL_5;
  }
  v11 = *((_QWORD *)CoreWindowProp::GetCompositeAppFrameWindowOrSelf((const struct tagWND *)v5, v9) + 2);
  if ( *(_QWORD *)(v11 + 472) == *(_QWORD *)(W32GetUserSessionState(v13, v12) + 18944) )
  {
    if ( *(_QWORD *)(v11 + 712) )
      goto LABEL_5;
  }
  v14 = *(_QWORD *)(v5 + 16);
  if ( v14 == v2 )
  {
    if ( (unsigned int)IsImmersiveAppRestricted(*(_QWORD *)(v14 + 464)) && (*(_DWORD *)(v5 + 380) & 0x1000) != 0 )
    {
LABEL_19:
      TopLevelWindow = (struct _LARGE_STRING **)GetTopLevelWindow(v5);
      if ( *(_QWORD *)(W32GetUserSessionState(v22, v21) + 18944)
        && (v26 = *(_QWORD *)(W32GetUserSessionState(v24, v23) + 18944),
            *(struct _LARGE_STRING ***)(v26 + 128) == TopLevelWindow) )
      {
        v28 = *((_QWORD *)PtiCurrent(v26, v25) + 59);
        if ( *(_QWORD *)(v28 + 120) )
          v6 = **(_QWORD **)(*((_QWORD *)PtiCurrent(v28, v27) + 59) + 120LL);
        else
          v6 = 0LL;
        if ( IsPwndComponentWebview((const struct tagWND *)v5) )
          xxxSendNotifyMessage((struct tagWND *)v5, 6u, 1uLL, *TopLevelWindow, 0);
      }
      else if ( TopLevelWindow == (struct _LARGE_STRING **)v5 )
      {
        xxxForceForegroundWindowNoRestoreFocus((__int64)TopLevelWindow, 8LL);
      }
      else
      {
        Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(
          BugCheckParameter3,
          (__int64)TopLevelWindow);
        xxxForceForegroundWindowNoRestoreFocus((__int64)TopLevelWindow, 8LL);
        Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v29);
      }
      goto LABEL_6;
    }
  }
  else
  {
    if ( (unsigned int)IsImmersiveBroker(*(_QWORD *)(v2 + 464)) )
    {
      v15 = IsImmersiveAppRestricted(*(_QWORD *)(*(_QWORD *)(v5 + 16) + 464LL));
    }
    else
    {
      if ( !(unsigned int)IsImmersiveAppRestricted(*(_QWORD *)(v2 + 464)) )
        goto LABEL_5;
      v15 = IsImmersiveBroker(*(_QWORD *)(*(_QWORD *)(v5 + 16) + 464LL));
    }
    if ( v15 )
    {
      v19 = *((_QWORD *)PtiCurrent(v17, v16) + 59);
      if ( *(_QWORD *)(v19 + 120) )
        v6 = **(_QWORD **)(*((_QWORD *)PtiCurrent(v19, v18) + 59) + 120LL);
      goto LABEL_19;
    }
  }
LABEL_5:
  UserSetLastError(5);
LABEL_6:
  Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)v31, v10);
LABEL_30:
  UserSessionSwitchLeaveCrit(v4);
  return v6;
}
