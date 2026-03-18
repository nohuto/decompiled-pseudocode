/*
 * XREFs of CalcWindowFullScreen @ 0x14002DB70
 * Callers:
 *     CalcWindowsFullScreen @ 0x14002DAC0 (CalcWindowsFullScreen.c)
 *     ?SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z @ 0x14002F994 (-SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z.c)
 *     ?UpdateWindowRects@@YAXPEAUtagWND@@PEBUtagPOINT@@PEBUtagSIZE@@PEAH3@Z @ 0x1400365E4 (-UpdateWindowRects@@YAXPEAUtagWND@@PEBUtagPOINT@@PEBUtagSIZE@@PEAH3@Z.c)
 *     xxxCreateWindowEx @ 0x14004B6FC (xxxCreateWindowEx.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x140088950 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x14022C22C (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 * Callees:
 *     GetMonitorRectForWindow @ 0x1400260CC (GetMonitorRectForWindow.c)
 *     GetWindowDpiLastNotify @ 0x140045FC8 (GetWindowDpiLastNotify.c)
 *     _IsTopLevelWindow @ 0x140049A60 (_IsTopLevelWindow.c)
 *     PostShellHookMessagesEx @ 0x140067280 (PostShellHookMessagesEx.c)
 *     GetDpiDependentMetric @ 0x140074FC4 (GetDpiDependentMetric.c)
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1400F74E0 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     UnionRect @ 0x140156E48 (UnionRect.c)
 *     RemoveWindowFullScreen @ 0x14020EDBC (RemoveWindowFullScreen.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

char __fastcall CalcWindowFullScreen(struct tagWND *a1)
{
  unsigned __int8 v2; // di
  __int64 v3; // rax
  struct tagMONITOR *v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rax
  int v7; // ecx
  unsigned int WindowDpiLastNotify; // eax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int128 v12; // [rsp+20h] [rbp-40h] BYREF
  __int128 v13; // [rsp+30h] [rbp-30h] BYREF
  __int128 v14; // [rsp+40h] [rbp-20h] BYREF

  v14 = 0LL;
  v2 = 0;
  LODWORD(v3) = IsTopLevelWindow(a1);
  if ( (_DWORD)v3 && (v3 = *((_QWORD *)a1 + 5), (*(_BYTE *)(v3 + 31) & 0x10) != 0) )
  {
    v4 = _MonitorFromWindowInternal(a1, 2u, 0);
    if ( v4 )
    {
      v5 = *((_QWORD *)a1 + 5);
      if ( (*(_BYTE *)(v5 + 30) & 0xC4) == 0xC4 )
      {
        v6 = *(_QWORD *)(v5 + 88);
        v13 = *(_OWORD *)(v5 + 104);
        if ( v6 != *(_QWORD *)(v5 + 104) || *(_QWORD *)(v5 + 96) != *(_QWORD *)(v5 + 112) )
        {
          v7 = *(_DWORD *)(v5 + 288) & 0xF;
          if ( v7 == 3 )
          {
            WindowDpiLastNotify = (*(_DWORD *)(v5 + 288) >> 8) & 0x1FF;
          }
          else if ( (*(_DWORD *)(v5 + 232) & 0x400) != 0 )
          {
            WindowDpiLastNotify = GetWindowDpiLastNotify(a1);
          }
          else if ( !v7
                 && (v9 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 496LL)) != 0
                 && (*(_DWORD *)(**(_QWORD **)(v9 + 8) + 64LL) & 1) != 0 )
          {
            WindowDpiLastNotify = 96;
          }
          else
          {
            WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 464LL) + 272LL);
          }
          DWORD1(v13) = *(_DWORD *)(*((_QWORD *)a1 + 5) + 92LL) + GetDpiDependentMetric(2LL, WindowDpiLastNotify);
        }
      }
      else
      {
        v13 = *(_OWORD *)(v5 + 88);
      }
      v12 = *(_OWORD *)GetMonitorRectForWindow((__int64)&v12, (__int64)v4, a1);
      UnionRect(&v14, &v13, &v12);
      v10 = v14 - v13;
      if ( (_QWORD)v14 == (_QWORD)v13 )
        v10 = *((_QWORD *)&v14 + 1) - *((_QWORD *)&v13 + 1);
      v2 = v10 == 0;
    }
    LOBYTE(v3) = (*((_DWORD *)a1 + 95) & 0x400) != 0;
    if ( v2 != (_BYTE)v3 )
    {
      *((_DWORD *)a1 + 95) ^= 0x400u;
      if ( *(_QWORD *)(W32GetUserSessionState() + 18944)
        && *(struct tagWND **)(*(_QWORD *)(W32GetUserSessionState() + 18944) + 128LL) == a1 )
      {
        if ( v2 )
          EtwTraceForegroundWindowFullScreenStart(0LL);
        else
          EtwTraceForegroundWindowFullScreenStop(0LL);
      }
      LOBYTE(v3) = PostShellHookMessagesEx((v2 ^ 1u) + 53, *(_QWORD *)a1);
    }
  }
  else if ( (*((_DWORD *)a1 + 95) & 0x400) != 0 )
  {
    LOBYTE(v3) = RemoveWindowFullScreen(a1);
  }
  return v3;
}
