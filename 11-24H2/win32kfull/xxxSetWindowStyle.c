/*
 * XREFs of xxxSetWindowStyle @ 0x1400318F0
 * Callers:
 *     ?xxxEnumTurnOffCompositing@@YAHPEAUtagWND@@_J@Z @ 0x14020EC00 (-xxxEnumTurnOffCompositing@@YAHPEAUtagWND@@_J@Z.c)
 *     xxxSetModernAppWindow @ 0x14024CD58 (xxxSetModernAppWindow.c)
 *     ?xxxEstablishWebviewHostComponentRelationship@@YAXPEAUtagWND@@0@Z @ 0x1402AB0C4 (-xxxEstablishWebviewHostComponentRelationship@@YAXPEAUtagWND@@0@Z.c)
 *     xxxSetBridgeWindowChild @ 0x1402AB1C0 (xxxSetBridgeWindowChild.c)
 *     xxxSetWindowData @ 0x1402DD148 (xxxSetWindowData.c)
 * Callees:
 *     UnsetRedirectedWindow @ 0x14002D720 (UnsetRedirectedWindow.c)
 *     ?DecVisWindows@@YAXPEAUtagWND@@@Z @ 0x14002DDA0 (-DecVisWindows@@YAXPEAUtagWND@@@Z.c)
 *     GetStyleWindow @ 0x14002F5E0 (GetStyleWindow.c)
 *     ?IncVisWindows@@YAXPEAUtagWND@@@Z @ 0x14002FD48 (-IncVisWindows@@YAXPEAUtagWND@@@Z.c)
 *     UnsetLayeredWindow @ 0x14002FF88 (UnsetLayeredWindow.c)
 *     NeedsWindowEdge @ 0x140032008 (NeedsWindowEdge.c)
 *     DwmAsyncChildStyleChange @ 0x140032044 (DwmAsyncChildStyleChange.c)
 *     ?VisWindow@@YAHPEAUtagWND@@K@Z @ 0x1400320F8 (-VisWindow@@YAHPEAUtagWND@@K@Z.c)
 *     xxxSendMessage @ 0x140042030 (xxxSendMessage.c)
 *     xxxRedrawWindow @ 0x140042630 (xxxRedrawWindow.c)
 *     IsTopLevelOrLayeredChildWindow @ 0x140046DB4 (IsTopLevelOrLayeredChildWindow.c)
 *     ?IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z @ 0x140048AF4 (-IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z.c)
 *     SetOrClrWF @ 0x140049160 (SetOrClrWF.c)
 *     ?CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z @ 0x140049338 (-CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z.c)
 *     DirtyVisRgnTrackers @ 0x1400497E8 (DirtyVisRgnTrackers.c)
 *     _IsTopLevelWindow @ 0x140049A60 (_IsTopLevelWindow.c)
 *     GetAppCompatFlags2 @ 0x140049EF0 (GetAppCompatFlags2.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x140061FD0 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     ?ComposeWindowIfNeeded@@YAJPEAUtagWND@@H@Z @ 0x140074820 (-ComposeWindowIfNeeded@@YAJPEAUtagWND@@H@Z.c)
 *     xxxSetWindowPos @ 0x140076C44 (xxxSetWindowPos.c)
 *     ?PostIAMShellHookMessage@@YAXI_J@Z @ 0x140087614 (-PostIAMShellHookMessage@@YAXI_J@Z.c)
 *     xxxSetLayeredWindow @ 0x140090DC8 (xxxSetLayeredWindow.c)
 *     SetRedirectedWindow @ 0x1400B67B4 (SetRedirectedWindow.c)
 *     ?vSrcCopyDummy@@YAXPEAUBLTINFO@@@Z @ 0x1401A4910 (-vSrcCopyDummy@@YAXPEAUBLTINFO@@@Z.c)
 *     ?UnlockWndMenuWorker@@YAPEAXPEAUtagWND@@_N@Z @ 0x1401B9A28 (-UnlockWndMenuWorker@@YAPEAXPEAUtagWND@@_N@Z.c)
 *     _IsWindowVisible @ 0x1401CE4CC (_IsWindowVisible.c)
 *     xxxTurnOffCompositing @ 0x1401FFA68 (xxxTurnOffCompositing.c)
 *     ?DecComposited@@YAXPEAUtagWND@@@Z @ 0x1402C86D0 (-DecComposited@@YAXPEAUtagWND@@@Z.c)
 *     ?IncComposited@@YAXPEAUtagWND@@@Z @ 0x1402C86F0 (-IncComposited@@YAXPEAUtagWND@@@Z.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall xxxSetWindowStyle(struct tagWND *a1, int a2, int a3)
{
  __int64 v3; // rax
  int v5; // r12d
  int v6; // r14d
  __int64 v7; // rsi
  _DWORD *v8; // rdx
  unsigned int v9; // ebx
  char v10; // r13
  __int64 CurrentProcessWin32Process; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // r10d
  int v16; // ecx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r11
  char v21; // r14
  int v22; // esi
  int v23; // r10d
  __int64 v24; // r11
  int v25; // ebx
  __int64 v26; // rax
  int v27; // ecx
  unsigned int v28; // ecx
  int v29; // r15d
  unsigned int v30; // r10d
  __int64 v31; // rcx
  __int64 v32; // rdx
  char v33; // r10
  _BYTE *v34; // r11
  char v35; // r10
  void *v36; // rax
  int v37; // esi
  unsigned int v39; // ebx
  int v40; // ecx
  int v41; // edx
  __int64 v42; // r15
  int v43; // ebx
  int v44; // esi
  int v45; // ecx
  int v46; // edx
  int v47; // ecx
  __int64 v48; // rcx
  unsigned int v49; // ecx
  unsigned int v50; // ecx
  __int64 v51; // [rsp+80h] [rbp+40h] BYREF
  int v52; // [rsp+88h] [rbp+48h]
  unsigned int v53; // [rsp+90h] [rbp+50h]

  v52 = a2;
  v3 = *((_QWORD *)a1 + 5);
  v51 = 0LL;
  v5 = 0;
  v53 = 0;
  v6 = 0;
  v7 = a2;
  v53 = (*(_DWORD *)(v3 + 24) >> 22) & 8;
  v8 = (_DWORD *)*((_QWORD *)a1 + 5);
  v53 = (v8[7] >> 26) & 4 | v53 & 0xFFFFFFFB;
  if ( (_DWORD)v7 == -16 )
  {
    v9 = v8[7];
    LODWORD(v51) = v9;
    if ( (v8[6] & 0x800) == 0 )
      goto LABEL_5;
    v9 |= 0x10000000u;
  }
  else
  {
    v47 = v8[6];
    LODWORD(v51) = v47 & 0xA7F77FF;
    v9 = v47 & (((~(unsigned __int8)v8[58] & 2) << 18) | 0xA7777FF);
  }
  LODWORD(v51) = v9;
LABEL_5:
  HIDWORD(v51) = a3;
  xxxSendMessage(a1, 124LL, v7, &v51);
  if ( (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) == 0 )
  {
    LODWORD(v51) = v9;
    v10 = IsTrayWindow(a1, 1LL);
    if ( (_DWORD)v7 == -16 )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
      v14 = CurrentProcessWin32Process;
      if ( CurrentProcessWin32Process )
      {
        v13 = -*(_QWORD *)CurrentProcessWin32Process;
        v12 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
        v14 = v12 & CurrentProcessWin32Process;
      }
      if ( v14 == *(_QWORD *)(*((_QWORD *)a1 + 2) + 464LL)
        || *(_WORD *)(*(_QWORD *)(W32GetUserSessionState(v13, v12) + 19928) + 870LL) != *(_WORD *)(*(_QWORD *)(*((_QWORD *)a1 + 17) + 8LL)
                                                                                                 + 2LL) )
      {
        v15 = HIDWORD(v51);
        v16 = v51;
      }
      else
      {
        v16 = v51;
        v15 = HIDWORD(v51);
        if ( (v51 & 0x20) != 0 && (v51 & 0x2000000000LL) == 0 )
        {
          v48 = 5LL;
LABEL_63:
          UserSetLastError(v48);
          return 0LL;
        }
      }
      v17 = *((_QWORD *)a1 + 3);
      v18 = 0LL;
      if ( v17 )
      {
        v19 = *(_QWORD *)(v17 + 8);
        if ( v19 )
          v18 = *(_QWORD *)(v19 + 24);
      }
      if ( *((_QWORD *)a1 + 13) == v18 )
      {
        v15 |= 0x4000000u;
        HIDWORD(v51) = v15;
      }
      if ( ((v16 ^ v15) & 0x6000000) != 0 )
      {
        zzzLockDisplayAreaAndInvalidateDCCache(a1, 1LL);
        v15 = HIDWORD(v51);
      }
      v20 = *((_QWORD *)a1 + 5);
      if ( (*(_BYTE *)(v20 + 31) & 0x60) == 0x20 && (*(_BYTE *)(v20 + 16) & 8) == 0 && (v15 & 0x20000000) == 0 )
        HIDWORD(v51) = v15 | 0x20000000;
      v21 = *(_BYTE *)(v20 + 31) & 0xC0;
      v22 = VisWindow(a1, *(_DWORD *)(v20 + 28));
      v25 = v10 && (unsigned int)IsWindowVisible(a1);
      *(_DWORD *)(v24 + 28) = v23;
      v26 = *((_QWORD *)a1 + 5);
      v27 = *(_DWORD *)(v26 + 24);
      if ( (*(_DWORD *)(v26 + 28) & 0x10000000) != 0 )
        v28 = v27 | 0x800;
      else
        v28 = v27 & 0xFFFFF7FF;
      *(_DWORD *)(v26 + 24) = v28;
      v29 = VisWindow(a1, *(_DWORD *)(*((_QWORD *)a1 + 5) + 28LL));
      v31 = *((_QWORD *)a1 + 5);
      v53 = v53 & 0xFFFFFFFE | (v30 >> 28) & 1;
      v32 = *((_QWORD *)a1 + 5);
      v53 = *(_BYTE *)(v31 + 27) & 2 | v53 & 0xFFFFFFFD;
      if ( (v21 == 64) != ((*(_BYTE *)(v32 + 31) & 0xC0) == 64) )
      {
        *(_QWORD *)(v32 + 320) = 0LL;
        *(_BYTE *)(*((_QWORD *)a1 + 5) + 16LL) &= ~1u;
        UnlockWndMenuWorker(a1, 0);
      }
      funcs_140031AFA[v53](a1);
      if ( v22 != v29 )
      {
        if ( v22 )
        {
          DecVisWindows(a1);
        }
        else
        {
          IncVisWindows(a1);
          if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 8) == 0 )
            ComposeWindowIfNeeded(a1, 0);
        }
      }
      tagWND::ComputeDominantState(a1);
      if ( (unsigned __int8)IsTrayWindow(a1, 1LL) && v25 != (unsigned int)IsWindowVisible(a1) )
      {
        v49 = 22;
        if ( !v25 )
          v49 = 17;
        PostIAMShellHookMessage(v49, *(_QWORD *)a1);
      }
      goto LABEL_27;
    }
    if ( (GetAppCompatFlags2(1024LL) & 4) != 0 )
      v39 = HIDWORD(v51) & 0x777FF;
    else
      v39 = HIDWORD(v51) & 0xA7F77FF;
    v40 = v51 & 8;
    HIDWORD(v51) = v39;
    if ( v40 != (v39 & 8) )
    {
      v39 = v40 | v39 & 0xFFFFFFF7;
      HIDWORD(v51) = v39;
    }
    v41 = v39 & 0x80000;
    if ( (((~(unsigned __int8)*(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) & 2) << 18) & *(_DWORD *)(*((_QWORD *)a1 + 5)
                                                                                               + 24LL)) != 0 )
    {
      if ( v41 )
      {
LABEL_43:
        v42 = *((_QWORD *)a1 + 5);
        if ( ((*(_DWORD *)(v42 + 24) & 0x200000) != 0) != ((v39 >> 21) & 1)
          || (*(_DWORD *)(v42 + 24) & 0x200000) != 0 && (v39 & 0x2000000) != 0 )
        {
          v48 = 87LL;
          goto LABEL_63;
        }
        v43 = v39 & 0x2000000;
        v44 = *(_DWORD *)(v42 + 24) & 0x2000000;
        if ( !v44 && v43 && GetStyleWindow(*((_QWORD *)a1 + 13), 2818) )
          return 0LL;
        v53 = (*(_DWORD *)(v42 + 28) >> 28) & 1 | v53 & 0xFFFFFFFE;
        v53 = v53 & 0xFFFFFFFD | (v43 != 0 ? 2 : 0);
        if ( v44 )
        {
          if ( !v43 )
          {
            UnsetRedirectedWindow(a1, 2);
            SetOrClrWF(0LL, a1, 2818LL, 0LL);
          }
        }
        else if ( v43 )
        {
          if ( (int)SetRedirectedWindow(a1) < 0 )
            return 0LL;
          SetOrClrWF(1LL, a1, 2818LL, 0LL);
          v5 = 1;
        }
        funcs_140031AFA[v53](a1);
        if ( v5 )
          xxxTurnOffCompositing(a1, 1LL);
        *(_DWORD *)(*((_QWORD *)a1 + 5) + 24LL) = HIDWORD(v51) & 0xFDF7FFFF | *(_DWORD *)(*((_QWORD *)a1 + 5) + 24LL) & 0xF7888800;
        v45 = HIDWORD(v51);
        v46 = v51;
        if ( (((unsigned int)v51 ^ HIDWORD(v51)) & 0x407000) != 0 )
        {
          xxxSetWindowPos(a1, 0, 0, 55);
          v45 = HIDWORD(v51);
          v46 = v51;
        }
        if ( ((v46 ^ v45) & 0x80000) != 0 && v6 )
          xxxRedrawWindow(a1);
LABEL_27:
        if ( (unsigned int)NeedsWindowEdge(
                             *(unsigned int *)(*((_QWORD *)a1 + 5) + 28LL),
                             *(unsigned int *)(*((_QWORD *)a1 + 5) + 24LL),
                             1LL) )
          v35 = v33 | 1;
        else
          v35 = v33 & 0xFE;
        *v34 = v35;
        if ( (unsigned int)IsWindowDesktopComposed(a1) )
        {
          DirtyVisRgnTrackers(a1);
          v36 = (void *)ReferenceDwmApiPort();
          v37 = v52;
          DwmAsyncChildStyleChange(v36);
          WindowMargins::CheckForChanges(a1, 1LL);
        }
        else
        {
          v37 = v52;
        }
        if ( v10 == (unsigned __int8)IsTrayWindow(a1, 1LL) )
          goto LABEL_32;
        if ( v10 )
        {
          v50 = 18;
        }
        else
        {
          if ( !(unsigned int)IsWindowVisible(a1) )
          {
LABEL_32:
            xxxSendMessage(a1, 125LL, v37, &v51);
            return (unsigned int)v51;
          }
          v50 = 17;
        }
        PostIAMShellHookMessage(v50, *(_QWORD *)a1);
        goto LABEL_32;
      }
      if ( (unsigned int)IsTopLevelOrLayeredChildWindow(a1) && !(unsigned int)IsTopLevelWindow(a1) )
        v6 = 1;
      UnsetLayeredWindow(a1, v6);
    }
    else
    {
      if ( !v41 )
        goto LABEL_43;
      if ( (int)xxxSetLayeredWindow(a1) < 0 )
        return 0LL;
    }
    v39 = HIDWORD(v51);
    goto LABEL_43;
  }
  return v9;
}
