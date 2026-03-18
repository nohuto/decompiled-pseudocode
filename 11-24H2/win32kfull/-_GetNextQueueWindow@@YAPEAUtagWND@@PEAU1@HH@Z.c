/*
 * XREFs of ?_GetNextQueueWindow@@YAPEAUtagWND@@PEAU1@HH@Z @ 0x1400F829C
 * Callers:
 *     zzzReattachThreads @ 0x140237EEC (zzzReattachThreads.c)
 *     ?xxxSwitchToThisWindow@@YAXPEAUtagWND@@W4SwitchToThisWindowOptions@@@Z @ 0x140277614 (-xxxSwitchToThisWindow@@YAXPEAUtagWND@@W4SwitchToThisWindowOptions@@@Z.c)
 *     ?xxxNextWindow@@YAXPEAUtagQ@@K@Z @ 0x1402DB524 (-xxxNextWindow@@YAXPEAUtagQ@@K@Z.c)
 * Callees:
 *     _GetTopLevelWindow @ 0x140049F30 (_GetTopLevelWindow.c)
 *     ?IsWindowCloaked@@YA_NPEBUtagWND@@@Z @ 0x140067F70 (-IsWindowCloaked@@YA_NPEBUtagWND@@@Z.c)
 *     GetLastTopMostWindow @ 0x14008D348 (GetLastTopMostWindow.c)
 *     ?GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1400F6DEC (-GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     ?GetWindowWorker@@YAPEAUtagWND@@PEAU1@IH@Z @ 0x1400F8428 (-GetWindowWorker@@YAPEAUtagWND@@PEAU1@IH@Z.c)
 *     IsWindowUnderActiveLockScreen @ 0x1400F86A4 (IsWindowUnderActiveLockScreen.c)
 */

struct tagWND *__fastcall _GetNextQueueWindow(struct tagWND *a1, __int64 a2, int a3)
{
  int v3; // esi
  int v5; // ebp
  struct tagWND *LastTopMostWindow; // rax
  const struct tagWND *TopLevelWindow; // rax
  __int64 v8; // rdx
  struct tagWND *CompositeAppFrameWindowOrSelf; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  _BYTE *v12; // r8
  struct tagWND *WindowWorker; // rbx
  __int64 v14; // rdi
  struct tagWND *v15; // r14
  __int64 v16; // rax
  __int64 v17; // rax
  struct tagWND *v18; // rax
  struct tagWND *v19; // rcx

  v3 = 0;
  v5 = a2;
  LastTopMostWindow = a1;
  if ( a1 || (LastTopMostWindow = (struct tagWND *)GetLastTopMostWindow(0LL, a2)) != 0LL )
  {
    TopLevelWindow = (const struct tagWND *)GetTopLevelWindow((__int64)LastTopMostWindow);
    CompositeAppFrameWindowOrSelf = CoreWindowProp::GetCompositeAppFrameWindowOrSelf(TopLevelWindow, v8);
    WindowWorker = CompositeAppFrameWindowOrSelf;
    if ( CompositeAppFrameWindowOrSelf )
    {
      v14 = *((_QWORD *)CompositeAppFrameWindowOrSelf + 13);
      if ( !v14 )
      {
        v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v11, v10) + 19200) + 8LL) + 24LL);
        WindowWorker = *(struct tagWND **)(v14 + 112);
      }
      v15 = WindowWorker;
      while ( WindowWorker )
      {
        WindowWorker = GetWindowWorker(WindowWorker, (unsigned int)(v5 != 0) + 2, (int)v12);
        if ( !WindowWorker )
        {
          WindowWorker = *(struct tagWND **)(v14 + 112);
          if ( v5 )
            WindowWorker = GetWindowWorker(*(struct tagWND **)(v14 + 112), 1u, (int)v12);
          if ( v3 )
            break;
          v3 = 1;
          if ( !WindowWorker )
            break;
        }
        if ( WindowWorker == v15 )
          break;
        v16 = *((_QWORD *)WindowWorker + 5);
        if ( *(char *)(v16 + 24) >= 0
          && (*(_BYTE *)(v16 + 27) & 8) == 0
          && !(unsigned int)IsWindowUnderActiveLockScreen(WindowWorker) )
        {
          v12 = (_BYTE *)*((_QWORD *)WindowWorker + 5);
          if ( (v12[31] & 0x10) != 0 && !IsWindowCloaked(WindowWorker) )
          {
            v17 = *((_QWORD *)WindowWorker + 25);
            if ( !v17
              || (*(_BYTE *)(*(_QWORD *)(v17 + 40) + 31LL) & 8) == 0
              && (!a3 || (v12[24] & 8) == 0 && (v12[20] & 0x20) == 0) )
            {
              v18 = (struct tagWND *)*((_QWORD *)WindowWorker + 15);
              v19 = WindowWorker;
              while ( v18 )
              {
                v19 = v18;
                v18 = (struct tagWND *)*((_QWORD *)v18 + 15);
              }
              if ( WindowWorker == *((struct tagWND **)v19 + 25) )
                return WindowWorker;
            }
          }
        }
      }
    }
  }
  return 0LL;
}
