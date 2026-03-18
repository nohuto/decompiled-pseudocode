/*
 * XREFs of SetOrClrWF @ 0x1C00B5D8C
 * Callers:
 *     FreeSpb @ 0x1C000C170 (FreeSpb.c)
 *     CreateSpb @ 0x1C000DCF4 (CreateSpb.c)
 *     xxxSetModernAppWindow @ 0x1C000EF34 (xxxSetModernAppWindow.c)
 *     xxxCompositedPaint @ 0x1C0016534 (xxxCompositedPaint.c)
 *     SelectWindowRgn @ 0x1C002387C (SelectWindowRgn.c)
 *     UnsetLayeredWindow @ 0x1C00264A8 (UnsetLayeredWindow.c)
 *     UnsetRedirectedWindow @ 0x1C0026E50 (UnsetRedirectedWindow.c)
 *     ?xxxSwpActivate@@YAHPEAUtagWND@@@Z @ 0x1C002D824 (-xxxSwpActivate@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z @ 0x1C003B99C (-xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z.c)
 *     zzzCancelJournalling @ 0x1C003C590 (zzzCancelJournalling.c)
 *     InternalInvalidate3 @ 0x1C0051900 (InternalInvalidate3.c)
 *     xxxCreateWindowEx @ 0x1C0051ED0 (xxxCreateWindowEx.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1C005E99C (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     SetMinimize @ 0x1C005F990 (SetMinimize.c)
 *     xxxShowOwnedWindows @ 0x1C005FA00 (xxxShowOwnedWindows.c)
 *     xxxBeginPaint @ 0x1C00606C0 (xxxBeginPaint.c)
 *     ?DoQueuedSyncPaint@@YAXPEAUtagWND@@KPEAUtagTHREADINFO@@@Z @ 0x1C0060C70 (-DoQueuedSyncPaint@@YAXPEAUtagWND@@KPEAUtagTHREADINFO@@@Z.c)
 *     xxxInternalDoSyncPaint @ 0x1C0060D80 (xxxInternalDoSyncPaint.c)
 *     ?GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z @ 0x1C0061370 (-GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z.c)
 *     xxxSendEraseBkgnd @ 0x1C00614A4 (xxxSendEraseBkgnd.c)
 *     ?xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C00615B8 (-xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     xxxEndPaint @ 0x1C0061760 (xxxEndPaint.c)
 *     ClrFTrueVis @ 0x1C0061890 (ClrFTrueVis.c)
 *     ?RemoveSemiMaximizedState@@YAXPEAUtagWND@@@Z @ 0x1C0061934 (-RemoveSemiMaximizedState@@YAXPEAUtagWND@@@Z.c)
 *     xxxCheckFullScreen @ 0x1C00621AC (xxxCheckFullScreen.c)
 *     xxxAddFullScreen @ 0x1C0062640 (xxxAddFullScreen.c)
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C0063330 (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 *     xxxGetUpdateRgn @ 0x1C00635B8 (xxxGetUpdateRgn.c)
 *     xxxGetUpdateRect @ 0x1C00637FC (xxxGetUpdateRect.c)
 *     NtUserEndPaint @ 0x1C0071310 (NtUserEndPaint.c)
 *     xxxSetShellWindow @ 0x1C007264C (xxxSetShellWindow.c)
 *     NtUserSelectPalette @ 0x1C00763A0 (NtUserSelectPalette.c)
 *     SfnPOWERBROADCAST @ 0x1C0081550 (SfnPOWERBROADCAST.c)
 *     SetWindowSubtreeCoreWindowStatus @ 0x1C008BF98 (SetWindowSubtreeCoreWindowStatus.c)
 *     SetDialogPointer @ 0x1C008CC54 (SetDialogPointer.c)
 *     NtUserEnableResizeLayoutSynchronization @ 0x1C008E400 (NtUserEnableResizeLayoutSynchronization.c)
 *     xxxCreateWindowSmIcon @ 0x1C00924C8 (xxxCreateWindowSmIcon.c)
 *     _RegisterShellHookWindow @ 0x1C0095D74 (_RegisterShellHookWindow.c)
 *     _DeregisterShellHookWindow @ 0x1C00992E4 (_DeregisterShellHookWindow.c)
 *     ?SetTopmost@@YAXPEAUtagWND@@HH@Z @ 0x1C00A44D4 (-SetTopmost@@YAXPEAUtagWND@@HH@Z.c)
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x1C00A53AC (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C00A57E8 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     ?ImeSetTopmost@@YAXPEAUtagWND@@H0@Z @ 0x1C00A6D38 (-ImeSetTopmost@@YAXPEAUtagWND@@H0@Z.c)
 *     xxxSetWindowData @ 0x1C00A8300 (xxxSetWindowData.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1C00AABCC (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     xxxSetLayeredWindow @ 0x1C00ABE84 (xxxSetLayeredWindow.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C00ACC1C (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxDWP_UpdateUIState @ 0x1C00AD604 (xxxDWP_UpdateUIState.c)
 *     SetWindowGroupBand @ 0x1C00AD874 (SetWindowGroupBand.c)
 *     SetRedirectedWindow @ 0x1C00B4DF0 (SetRedirectedWindow.c)
 *     PatchThreadWindows @ 0x1C00DF900 (PatchThreadWindows.c)
 *     xxxDWP_DoNCActivate @ 0x1C00E1260 (xxxDWP_DoNCActivate.c)
 *     xxxDrawCaptionBar @ 0x1C00E2158 (xxxDrawCaptionBar.c)
 *     xxxSetScrollBar @ 0x1C00E2528 (xxxSetScrollBar.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C00EA700 (xxxInitSendValidateMinMaxInfoEx.c)
 *     SetVisible @ 0x1C00EDEE8 (SetVisible.c)
 *     xxxSetWindowStyle @ 0x1C00EF138 (xxxSetWindowStyle.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C00F4184 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     xxxRemoveFullScreen @ 0x1C00F4314 (xxxRemoveFullScreen.c)
 *     CleanupWindowRedirection @ 0x1C00F4CF8 (CleanupWindowRedirection.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00F6650 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxRealDefWindowProc @ 0x1C0109880 (xxxRealDefWindowProc.c)
 *     xxxCalcClientRect @ 0x1C010BA30 (xxxCalcClientRect.c)
 *     xxxSimpleDoSyncPaint @ 0x1C01193C4 (xxxSimpleDoSyncPaint.c)
 *     xxxEndDeferWindowPosEx @ 0x1C01236C0 (xxxEndDeferWindowPosEx.c)
 *     _SelectPalette @ 0x1C0130E10 (_SelectPalette.c)
 *     ClrWF @ 0x1C0138A1C (ClrWF.c)
 *     SetWF @ 0x1C0138AFC (SetWF.c)
 *     DestroyWindowSmIcon @ 0x1C013C988 (DestroyWindowSmIcon.c)
 *     ?xxxRedrawHungWindow@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C0156276 (-xxxRedrawHungWindow@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     _lambda_8abff167ce1c52ae97425dcc78c2cc12_::_lambda_invoker_cdecl_ @ 0x1C01AD4C0 (_lambda_8abff167ce1c52ae97425dcc78c2cc12_--_lambda_invoker_cdecl_.c)
 *     xxxDCETrackCaptionButton @ 0x1C01BA07C (xxxDCETrackCaptionButton.c)
 *     NtUserSetMsgBox @ 0x1C01DBBC0 (NtUserSetMsgBox.c)
 *     ?MakeArrangedStateObservable@@YAXPEBUMOVESIZEDATA@@@Z @ 0x1C01E9A1C (-MakeArrangedStateObservable@@YAXPEBUMOVESIZEDATA@@@Z.c)
 *     ?UpdateDwmSnapArrangedInitiated@@YAXPEAUtagWND@@@Z @ 0x1C01EA7E4 (-UpdateDwmSnapArrangedInitiated@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x1C01EE188 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxEstablishWebviewHostComponentRelationship@@YAXPEAUtagWND@@0@Z @ 0x1C01F23B8 (-xxxEstablishWebviewHostComponentRelationship@@YAXPEAUtagWND@@0@Z.c)
 *     xxxSetBridgeWindowChild @ 0x1C01F2574 (xxxSetBridgeWindowChild.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C01F410C (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C01F4E00 (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?PixieHack@@YAXPEAUtagWND@@PEAUtagRECT@@@Z @ 0x1C0214838 (-PixieHack@@YAXPEAUtagWND@@PEAUtagRECT@@@Z.c)
 *     xxxMNOpenHierarchy @ 0x1C0218340 (xxxMNOpenHierarchy.c)
 *     xxxUpdateShadowZorder @ 0x1C022110C (xxxUpdateShadowZorder.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C0221CD0 (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     ClearWindowState @ 0x1C0223348 (ClearWindowState.c)
 *     SetWindowState @ 0x1C02233A0 (SetWindowState.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1C022907C (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1C022926C (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 *     xxxEndScroll @ 0x1C02298C0 (xxxEndScroll.c)
 *     xxxSBWndProc @ 0x1C022A1A0 (xxxSBWndProc.c)
 *     xxxTrackCaptionButton @ 0x1C022BE68 (xxxTrackCaptionButton.c)
 *     xxxTrackPopupMenuEx @ 0x1C0231EEC (xxxTrackPopupMenuEx.c)
 *     xxxHelpLoop @ 0x1C0238C64 (xxxHelpLoop.c)
 * Callees:
 *     DirtyVisRgnTrackers @ 0x1C00B699C (DirtyVisRgnTrackers.c)
 *     ?CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z @ 0x1C00EBC94 (-CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z.c)
 */

char __fastcall SetOrClrWF(int a1, __int64 *a2, unsigned __int16 a3, int a4)
{
  int v4; // edi
  _QWORD *v5; // rbx
  int v6; // r12d
  int v7; // r13d
  unsigned __int64 v9; // rdx
  int v10; // eax
  char v11; // r8
  int v12; // esi
  int v13; // ecx
  int v14; // r15d
  int v15; // edx
  int v16; // edi
  int v17; // ebx
  __int64 v18; // r13
  __int64 v19; // rdx
  __int64 v20; // rcx
  void *v21; // r12
  __int64 v22; // rcx
  _OWORD v24[2]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v25; // [rsp+40h] [rbp-20h]
  int v26; // [rsp+48h] [rbp-18h]
  __int64 v27; // [rsp+4Ch] [rbp-14h]
  int v28; // [rsp+54h] [rbp-Ch]
  int v29; // [rsp+58h] [rbp-8h]

  v4 = 0;
  v5 = a2 + 5;
  v6 = 0;
  v7 = 0;
  if ( a4 )
  {
    v4 = *(_DWORD *)(*v5 + 28LL);
    v6 = *(_DWORD *)(*v5 + 24LL);
    v7 = *(_DWORD *)(*v5 + 232LL);
  }
  v9 = *v5 + ((unsigned __int64)a3 >> 8);
  LOBYTE(v10) = *(_BYTE *)(v9 + 16);
  if ( a1 )
    v11 = v10 | a3;
  else
    v11 = v10 & ~(_BYTE)a3;
  *(_BYTE *)(v9 + 16) = v11;
  if ( a4 )
  {
    v10 = IsWindowDesktopComposed(a2);
    if ( v10 )
    {
      v12 = *(_DWORD *)(*v5 + 28LL);
      v13 = *(_DWORD *)(*v5 + 24LL);
      v14 = v4 ^ v12;
      v15 = *(_DWORD *)(*v5 + 232LL);
      v16 = v6 ^ v13;
      v10 = v7 ^ v15;
      if ( !v14 )
      {
        if ( v16 )
          goto LABEL_13;
        if ( !v10 )
          return v10;
      }
      if ( (v14 & 0xB1CF0000) != 0 )
      {
        v17 = -16;
        goto LABEL_18;
      }
LABEL_13:
      if ( (v16 & 0x4E27A9) != 0 )
      {
        v17 = -20;
        v12 = v13;
      }
      else
      {
        if ( (v10 & 0x12C0) == 0 )
        {
LABEL_15:
          LOBYTE(v10) = (v14 & 0xC40000) == 0;
          if ( (((v16 & 0x200A0381) == 0) & (unsigned __int8)v10) == 0 )
            LOBYTE(v10) = WindowMargins::CheckForChanges(a2, 1LL);
          return v10;
        }
        v17 = -268435456;
        v12 = v15;
      }
LABEL_18:
      DirtyVisRgnTrackers(a2);
      v18 = *a2;
      v21 = (void *)ReferenceDwmApiPort(v20, v19);
      _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(SGDGetSessionState(v22) + 32) + 13248LL));
      if ( v21 )
      {
        v29 = v12;
        memset(v24, 0, sizeof(v24));
        LODWORD(v24[0]) = 3932180;
        v25 = 0LL;
        WORD2(v24[0]) = 0x8000;
        v26 = 1073741846;
        v27 = v18;
        v28 = v17;
        LpcRequestPort(v21, v24);
        ObfDereferenceObject(v21);
      }
      goto LABEL_15;
    }
  }
  return v10;
}
