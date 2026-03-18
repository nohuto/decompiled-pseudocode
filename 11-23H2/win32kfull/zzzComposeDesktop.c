/*
 * XREFs of zzzComposeDesktop @ 0x1C0022F04
 * Callers:
 *     zzzDwmStartRedirection @ 0x1C0021F8C (zzzDwmStartRedirection.c)
 *     xxxCreateDesktopEx @ 0x1C00293D4 (xxxCreateDesktopEx.c)
 * Callees:
 *     DwmAsyncCreateDCompositionVisualBitmapForHwnd @ 0x1C00155C0 (DwmAsyncCreateDCompositionVisualBitmapForHwnd.c)
 *     GreRemoveDisplayDriverRealizations @ 0x1C001DCA4 (GreRemoveDisplayDriverRealizations.c)
 *     zzzEnableDwmPointerSupport @ 0x1C001FFBC (zzzEnableDwmPointerSupport.c)
 *     ?IsWindowComposedOnDesktop@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z @ 0x1C0020878 (-IsWindowComposedOnDesktop@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z.c)
 *     GreTransferDwmStateToSpriteState @ 0x1C00208A8 (GreTransferDwmStateToSpriteState.c)
 *     GreUpdateSpriteVisRgn @ 0x1C0020B48 (GreUpdateSpriteVisRgn.c)
 *     ?BroadcastCompositionChange@@YAXPEBUtagDESKTOP@@@Z @ 0x1C0020D28 (-BroadcastCompositionChange@@YAXPEBUtagDESKTOP@@@Z.c)
 *     MagpComposeDesktop @ 0x1C0020D9C (MagpComposeDesktop.c)
 *     GreTransferSpriteStateToDwmState @ 0x1C00217FC (GreTransferSpriteStateToDwmState.c)
 *     DwmAsyncShellWindowChange @ 0x1C0022230 (DwmAsyncShellWindowChange.c)
 *     ?ShouldComposeWindow@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z @ 0x1C00231F0 (-ShouldComposeWindow@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z.c)
 *     ??$GetProp@VCSwapChainProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCSwapChainProp@@@Z @ 0x1C0023244 (--$GetProp@VCSwapChainProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCSwapChainProp@@@Z.c)
 *     ?ReNotifyDwm@CHwndTargetProp@@SAXPEAUtagWND@@@Z @ 0x1C002327C (-ReNotifyDwm@CHwndTargetProp@@SAXPEAUtagWND@@@Z.c)
 *     ??$GetProp@VCHwndBitmapProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCHwndBitmapProp@@@Z @ 0x1C0023844 (--$GetProp@VCHwndBitmapProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCHwndBitmapProp@@@Z.c)
 *     ComposeWindow @ 0x1C0026348 (ComposeWindow.c)
 *     ?FreeTrackedRegions@CVisRgnTrackerProp@@AEAAXXZ @ 0x1C0027124 (-FreeTrackedRegions@CVisRgnTrackerProp@@AEAAXXZ.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00374DC (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     MapDesktop @ 0x1C00448C0 (MapDesktop.c)
 *     ?MarkDirty@CVisRgnTrackerProp@@QEAAXXZ @ 0x1C0082ED4 (-MarkDirty@CVisRgnTrackerProp@@QEAAXXZ.c)
 *     ??$GetProp@VCVisRgnTrackerProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCVisRgnTrackerProp@@@Z @ 0x1C00ABDDC (--$GetProp@VCVisRgnTrackerProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCVisRgnTrackerProp@@@Z.c)
 *     IsWindowBeingDestroyed @ 0x1C00AD46C (IsWindowBeingDestroyed.c)
 *     IsDesktopWindow @ 0x1C00B3188 (IsDesktopWindow.c)
 *     ?ReorderChildrenSpriteList@@YAXPEAUtagWND@@0@Z @ 0x1C00B3230 (-ReorderChildrenSpriteList@@YAXPEAUtagWND@@0@Z.c)
 *     ComposeWindowIfNeeded @ 0x1C00B4A8C (ComposeWindowIfNeeded.c)
 *     IsWindowContentProtected @ 0x1C00B5400 (IsWindowContentProtected.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     ?NotifyDwm@CSwapChainProp@@QEAAHQEAUtagWND@@@Z @ 0x1C021B97C (-NotifyDwm@CSwapChainProp@@QEAAHQEAUtagWND@@@Z.c)
 *     ?ChangeWindowTreeProtection@@YAHPEAUtagWND@@K@Z @ 0x1C022C268 (-ChangeWindowTreeProtection@@YAHPEAUtagWND@@K@Z.c)
 */

__int64 __fastcall zzzComposeDesktop(struct tagDESKTOP *a1)
{
  __int64 v2; // rcx
  int v3; // eax
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rdi
  int v7; // edi
  __int64 v8; // rdx
  __int64 v9; // rax
  unsigned int v10; // r15d
  struct tagWND **v11; // rax
  __int64 **v12; // rcx
  __int64 v13; // rsi
  __int64 *v14; // rax
  void *v15; // rax
  __int64 v17; // rsi
  struct tagDESKTOP *v18; // rax
  struct tagWND *v19; // rcx
  struct tagWND *v20; // rcx
  ULONG v21; // eax
  __int64 v22; // rbx
  void *v23; // rax
  CVisRgnTrackerProp *v24; // r13
  CompositionObject *v25; // rcx
  __int64 v26; // r12
  __int64 *v27; // rax
  void *v28; // rax
  struct tagWND *v29; // r9
  _QWORD v30[3]; // [rsp+40h] [rbp-20h] BYREF
  int v31; // [rsp+58h] [rbp-8h]
  int v32; // [rsp+5Ch] [rbp-4h]
  CVisRgnTrackerProp *v33; // [rsp+A0h] [rbp+40h] BYREF
  CVisRgnTrackerProp *v34; // [rsp+A8h] [rbp+48h] BYREF

  v2 = **((_QWORD **)a1 + 1);
  v3 = *(_DWORD *)(v2 + 64);
  if ( (v3 & 1) != 0 )
    return 0;
  *(_DWORD *)(v2 + 64) = v3 | 1;
  v4 = ReferenceDwmProcess();
  v5 = 0LL;
  v6 = v4;
  if ( v4 )
  {
    v30[0] = 1LL;
    v30[1] = v4;
    v30[2] = a1;
    v31 = 0;
    v32 = 1;
    if ( (int)MapDesktop(v30) < 0 )
    {
      v21 = RtlNtStatusToDosError(-1073741790);
      UserSetLastError(v21);
      *(_DWORD *)(**((_QWORD **)a1 + 1) + 64LL) &= ~1u;
      DereferenceDwmProcess(v6);
      return 3221225473LL;
    }
    DereferenceDwmProcess(v6);
  }
  v7 = DCompositionDwmInitialize();
  v8 = **((_QWORD **)a1 + 1);
  if ( v7 < 0 )
  {
    *(_DWORD *)(v8 + 64) &= ~1u;
    return 3221225473LL;
  }
  if ( !(unsigned int)GreTransferSpriteStateToDwmState(*(HDEV *)(gpDispInfo + 40LL), *(_QWORD *)v8) )
  {
    v7 = -1073741823;
    goto LABEL_11;
  }
  v9 = *((_QWORD *)a1 + 1);
  if ( !*(_QWORD *)(v9 + 24) )
  {
    v22 = **(_QWORD **)v9;
    v23 = (void *)ReferenceDwmApiPort();
    DwmAsyncShellWindowChange(v23, 0LL, v22);
    return 0LL;
  }
  v10 = 0;
  while ( *(_BYTE *)(32LL * v10 + gSharedInfo[1] + 24) != 1 )
  {
LABEL_10:
    if ( ++v10 > giheLast )
      goto LABEL_11;
  }
  v17 = *(_QWORD *)(gpKernelHandleTable + 24LL * v10);
  if ( !(unsigned int)ShouldComposeWindow((struct tagWND *const)v17, a1) )
    goto LABEL_59;
  if ( (*(_BYTE *)(*(_QWORD *)(v17 + 40) + 31LL) & 1) != 0 )
    PostEventMessageEx(
      *(struct tagTHREADINFO **)(v17 + 16),
      *(struct tagQ **)(*(_QWORD *)(v17 + 16) + 432LL),
      0x10u,
      (struct tagWND *)v17,
      0,
      0LL,
      0LL,
      0LL);
  IsDesktopWindow(v17);
  v7 = ComposeWindow(v20);
  if ( v7 >= 0 )
  {
LABEL_59:
    if ( (unsigned int)IsWindowContentProtected(v17) )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(v17 + 40) + 27LL) & 0x20) == 0 )
        ComposeWindowIfNeeded((struct tagWND *)v17);
      ChangeWindowTreeProtection((struct tagWND *)v17, 1u);
    }
    v18 = *(struct tagDESKTOP **)(v17 + 24);
    if ( v18 && v18 == a1 && !(unsigned int)IsWindowBeingDestroyed(v17) )
    {
      CHwndTargetProp::ReNotifyDwm(v19);
      v33 = 0LL;
      v34 = 0LL;
      if ( (unsigned int)CWindowProp::GetProp<CHwndBitmapProp>(v17, &v33) )
      {
        v24 = v33;
        v25 = (CompositionObject *)*((_QWORD *)v33 + 3);
        if ( v25 )
        {
          if ( (int)CompositionObject::OpenDwmHandle(v25, (void **)&v34) >= 0 )
          {
            v26 = 0LL;
            v33 = v34;
            v27 = (__int64 *)*((_QWORD *)v24 + 2);
            if ( v27 )
              v26 = *v27;
            v28 = (void *)ReferenceDwmApiPort();
            DwmAsyncCreateDCompositionVisualBitmapForHwnd(v28, v26, (__int64)v33);
          }
        }
      }
      if ( !(unsigned int)UserIsRemoteAndNotDisconnectConnection()
        || (unsigned int)UserIsRemoteAndNotDisconnectConnection() )
      {
        v33 = 0LL;
        if ( (unsigned int)CWindowProp::GetProp<CSwapChainProp>(v17, &v33) )
          CSwapChainProp::NotifyDwm(v33, (struct tagWND *const)v17);
      }
      v33 = 0LL;
      if ( (unsigned int)CWindowProp::GetProp<CVisRgnTrackerProp>(v17, &v33) )
      {
        CVisRgnTrackerProp::FreeTrackedRegions(v33);
        CVisRgnTrackerProp::MarkDirty(v33);
      }
    }
    goto LABEL_10;
  }
  while ( v10 <= giheLast )
  {
    if ( *(_BYTE *)(32LL * v10 + gSharedInfo[1] + 24) == 1
      && IsWindowComposedOnDesktop(*(struct tagWND *const *)(gpKernelHandleTable + 24LL * v10), a1) )
    {
      ComposeWindow(v29);
    }
    --v10;
  }
  GreRemoveDisplayDriverRealizations(*(_QWORD *)(gpDispInfo + 40LL));
  zzzEnableDwmPointerSupport(0, 0);
  GreTransferDwmStateToSpriteState(*(HDEV *)(gpDispInfo + 40LL), ***((_QWORD ***)a1 + 1), ghdcMem);
LABEL_11:
  v11 = (struct tagWND **)*((_QWORD *)a1 + 1);
  if ( v7 < 0 )
  {
    *((_DWORD *)*v11 + 16) &= ~1u;
  }
  else
  {
    ReorderChildrenSpriteList(v11[3], 0LL);
    MagpComposeDesktop(gMagnContext, (__int64)a1);
    BroadcastCompositionChange(a1);
  }
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  GreUpdateSpriteVisRgn(*(_QWORD *)(gpDispInfo + 40LL), 0);
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  if ( v7 >= 0 )
  {
    v12 = (__int64 **)*((_QWORD *)a1 + 1);
    v13 = **v12;
    v14 = v12[21];
    if ( v14 )
      v5 = *v14;
    v15 = (void *)ReferenceDwmApiPort();
    DwmAsyncShellWindowChange(v15, v5, v13);
  }
  return (unsigned int)v7;
}
