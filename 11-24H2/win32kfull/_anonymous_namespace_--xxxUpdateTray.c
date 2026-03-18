/*
 * XREFs of _anonymous_namespace_::xxxUpdateTray @ 0x1400883B4
 * Callers:
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x140232BF0 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x1402337EC (-xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x14023413C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14003F108 (--0-$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x1400416B0 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z @ 0x140048AF4 (-IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z.c)
 *     _IsTopLevelWindow @ 0x140049A60 (_IsTopLevelWindow.c)
 *     ?xxxSetTrayWindow@@YAXPEAUtagDESKTOP@@PEAUtagWND@@@Z @ 0x1400690E0 (-xxxSetTrayWindow@@YAXPEAUtagDESKTOP@@PEAUtagWND@@@Z.c)
 *     ?PostIAMShellHookMessage@@YAXI_J@Z @ 0x140087614 (-PostIAMShellHookMessage@@YAXI_J@Z.c)
 */

void __fastcall anonymous_namespace_::xxxUpdateTray(struct tagWND *a1)
{
  __int64 v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct tagTHREADINFO *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct tagWND *v11; // rbx
  struct tagDESKTOP *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct tagTHREADINFO *v15; // rax
  __int64 v16; // rcx
  bool v17; // zf
  __int64 v18; // rax
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = (__int64)a1;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) != 0 )
  {
    v3 = *((_QWORD *)a1 + 15);
    while ( v3 )
    {
      v17 = (*(_BYTE *)(*(_QWORD *)(v3 + 40) + 31LL) & 0x10) == 0;
      v18 = v3;
      v3 = *(_QWORD *)(v3 + 120);
      if ( v17 )
        v18 = v2;
      v2 = v18;
    }
    v5 = *(_QWORD *)(W32GetUserSessionState(a1, 0LL) + 18944);
    if ( *(_QWORD *)(*(_QWORD *)(v2 + 16) + 472LL) == v5 )
    {
      v7 = *(_QWORD *)(W32GetUserSessionState(v5, v4) + 19928);
      if ( (*(_DWORD *)(v7 + 2120) & 8) != 0 )
      {
        v8 = PtiCurrent(v7, v6);
        if ( (((*((_DWORD *)v8 + 180) | *(_DWORD *)(**((_QWORD **)PtiCurrent(v10, v9) + 63) + 16LL)) & 0x800) != 0
           || *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 24) + 8LL) + 184LL))
          && IsTopLevelWindow(v2)
          && ((*(_BYTE *)(*(_QWORD *)(v2 + 40) + 31LL) & 0x10) != 0 || (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 4) != 0) )
        {
          if ( IsTrayWindow(a1, 1LL) )
            v11 = a1;
          else
            v11 = (struct tagWND *)(v2 & -(__int64)(IsTrayWindow((_QWORD *)v2, 1LL) != 0));
          Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, (__int64)v11);
          if ( v11 )
            v12 = (struct tagDESKTOP *)*((_QWORD *)v11 + 3);
          else
            v12 = *(struct tagDESKTOP **)(v2 + 24);
          xxxSetTrayWindow(v12, v11);
          v15 = PtiCurrent(v14, v13);
          Win32HM_UnlockFromThread<1>((ULONG_PTR)v15, BugCheckParameter3);
        }
      }
    }
    if ( !*((_QWORD *)a1 + 15) || (v16 = 23LL, (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 4) != 0) )
      v16 = 19LL;
    PostIAMShellHookMessage(v16, *(_QWORD *)a1);
  }
}
