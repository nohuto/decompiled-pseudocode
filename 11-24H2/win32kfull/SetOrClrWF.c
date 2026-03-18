/*
 * XREFs of SetOrClrWF @ 0x140049160
 * Callers:
 *     UnsetRedirectedWindow @ 0x14002D720 (UnsetRedirectedWindow.c)
 *     ?xxxFreeWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x14002E080 (-xxxFreeWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x14002E5E8 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     ?FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU?$Win32HMOptionalThreadLockAlways@UtagWND@@@@@Z @ 0x14002E8AC (-FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU-$Win32HMOptionalThreadLockAlways@Utag.c)
 *     ?SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z @ 0x14002F994 (-SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z.c)
 *     CleanupWindowRedirection @ 0x14002FEE4 (CleanupWindowRedirection.c)
 *     UnsetLayeredWindow @ 0x14002FF88 (UnsetLayeredWindow.c)
 *     SelectWindowRgn @ 0x140030A9C (SelectWindowRgn.c)
 *     xxxSetWindowStyle @ 0x1400318F0 (xxxSetWindowStyle.c)
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1400322FC (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 *     xxxCompositedPaint @ 0x140032604 (xxxCompositedPaint.c)
 *     xxxSetScrollBar @ 0x140032F08 (xxxSetScrollBar.c)
 *     xxxGetUpdateRect @ 0x140033B40 (xxxGetUpdateRect.c)
 *     xxxDoPaint @ 0x140033DBC (xxxDoPaint.c)
 *     xxxBeginPaint @ 0x140034CB0 (xxxBeginPaint.c)
 *     xxxEndPaint @ 0x140035878 (xxxEndPaint.c)
 *     xxxSendEraseBkgnd @ 0x140035C60 (xxxSendEraseBkgnd.c)
 *     ?xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x140036318 (-xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     ?GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z @ 0x1400363D4 (-GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z.c)
 *     InternalInvalidate3 @ 0x140044BB8 (InternalInvalidate3.c)
 *     xxxSimpleDoSyncPaint @ 0x1400477B0 (xxxSimpleDoSyncPaint.c)
 *     ?DoQueuedSyncPaint@@YAXPEAUtagWND@@KPEAUtagTHREADINFO@@@Z @ 0x1400488D0 (-DoQueuedSyncPaint@@YAXPEAUtagWND@@KPEAUtagTHREADINFO@@@Z.c)
 *     xxxCreateWindowEx @ 0x14004B6FC (xxxCreateWindowEx.c)
 *     xxxDWP_DoNCActivate @ 0x14006CB5C (xxxDWP_DoNCActivate.c)
 *     xxxDrawCaptionBar @ 0x14006E51C (xxxDrawCaptionBar.c)
 *     xxxCalcClientRect @ 0x1400712A8 (xxxCalcClientRect.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x140073DDC (xxxInitSendValidateMinMaxInfoEx.c)
 *     xxxEndDeferWindowPosEx @ 0x140076014 (xxxEndDeferWindowPosEx.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x140087B20 (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     SetWindowSubtreeCoreWindowStatus @ 0x14008854C (SetWindowSubtreeCoreWindowStatus.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x140088950 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     DestroyWindowSmIcon @ 0x14008DCFC (DestroyWindowSmIcon.c)
 *     xxxSetLayeredWindow @ 0x140090DC8 (xxxSetLayeredWindow.c)
 *     ?zzzUpdateWindowCloak@@YAXPEAUtagWND@@W4CloakState@@1@Z @ 0x1400943FC (-zzzUpdateWindowCloak@@YAXPEAUtagWND@@W4CloakState@@1@Z.c)
 *     FreeSpb @ 0x1400979B0 (FreeSpb.c)
 *     CreateSpb @ 0x1400980B0 (CreateSpb.c)
 *     xxxTrackPopupMenuEx @ 0x140099644 (xxxTrackPopupMenuEx.c)
 *     xxxMNOpenHierarchy @ 0x14009BE5C (xxxMNOpenHierarchy.c)
 *     SetRedirectedWindow @ 0x1400B67B4 (SetRedirectedWindow.c)
 *     xxxGetUpdateRgn @ 0x1400F5390 (xxxGetUpdateRgn.c)
 *     xxxDispatchMessage @ 0x1401095B8 (xxxDispatchMessage.c)
 *     xxxDCETrackCaptionButton @ 0x140109CAC (xxxDCETrackCaptionButton.c)
 *     xxxTrackCaptionButton @ 0x14010B9EC (xxxTrackCaptionButton.c)
 *     ?xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z @ 0x14014E68C (-xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x14014F0F0 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     ?SetTopmost@@YAXPEAUtagWND@@HH@Z @ 0x140157100 (-SetTopmost@@YAXPEAUtagWND@@HH@Z.c)
 *     SetWindowGroupBand @ 0x1401571C4 (SetWindowGroupBand.c)
 *     xxxUpdateShadowZorder @ 0x14015CEB0 (xxxUpdateShadowZorder.c)
 *     ?ImeSetTopmost@@YAXPEAUtagWND@@H0@Z @ 0x140170D90 (-ImeSetTopmost@@YAXPEAUtagWND@@H0@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x14017C3F8 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     xxxShowOwnedWindows @ 0x140182F28 (xxxShowOwnedWindows.c)
 *     _SelectPalette @ 0x140186450 (_SelectPalette.c)
 *     ?DwmUpdateCloseButton@@YAXPEAUtagWND@@H@Z @ 0x14018A854 (-DwmUpdateCloseButton@@YAXPEAUtagWND@@H@Z.c)
 *     _DeregisterShellHookWindow @ 0x140196710 (_DeregisterShellHookWindow.c)
 *     SfnPOWERBROADCAST @ 0x140198190 (SfnPOWERBROADCAST.c)
 *     _RegisterShellHookWindow @ 0x1401B2F80 (_RegisterShellHookWindow.c)
 *     ?ClrFTrueVis@@YAXPEAUtagWND@@@Z @ 0x1401BCBA8 (-ClrFTrueVis@@YAXPEAUtagWND@@@Z.c)
 *     xxxDWP_UpdateUIState @ 0x1401C43F4 (xxxDWP_UpdateUIState.c)
 *     ClearWindowState @ 0x1401C49E0 (ClearWindowState.c)
 *     SetWindowState @ 0x1401C4A40 (SetWindowState.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1401C4F1C (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     ?xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z @ 0x1401D1FA4 (-xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z.c)
 *     zzzDesktopSwitchSideEffects @ 0x1401E8478 (zzzDesktopSwitchSideEffects.c)
 *     ?SetMinimize@@YAXPEAUtagWND@@W4MinimizeCommand@@@Z @ 0x140204128 (-SetMinimize@@YAXPEAUtagWND@@W4MinimizeCommand@@@Z.c)
 *     NtUserSetMsgBox @ 0x1402142E0 (NtUserSetMsgBox.c)
 *     ?xxxSwpActivate@@YAHPEAUtagWND@@W4SwpActivateOptions@@@Z @ 0x14022C590 (-xxxSwpActivate@@YAHPEAUtagWND@@W4SwpActivateOptions@@@Z.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x14022D690 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     CheckFullScreen @ 0x14022E334 (CheckFullScreen.c)
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x14023256C (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x140232BF0 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     NtUserSetWindowCompositionAttribute @ 0x140246D90 (NtUserSetWindowCompositionAttribute.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x14024A45C (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 *     xxxSetModernAppWindow @ 0x14024CD58 (xxxSetModernAppWindow.c)
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x14024E024 (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxDestroyWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z @ 0x14024F6E8 (-xxxDestroyWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z.c)
 *     xxxRealDefWindowProc @ 0x140252B3C (xxxRealDefWindowProc.c)
 *     ?MakeArrangedStateObservable@@YAXPEBUMOVESIZEDATA@@@Z @ 0x14026C4B0 (-MakeArrangedStateObservable@@YAXPEBUMOVESIZEDATA@@@Z.c)
 *     _lambda_74fc1e22101fb496760f58e758191252_::_lambda_invoker_cdecl_ @ 0x1402750D0 (_lambda_74fc1e22101fb496760f58e758191252_--_lambda_invoker_cdecl_.c)
 *     NtUserRaiseLowerShellWindow @ 0x14029A540 (NtUserRaiseLowerShellWindow.c)
 *     ?xxxEstablishWebviewHostComponentRelationship@@YAXPEAUtagWND@@0@Z @ 0x1402AB0C4 (-xxxEstablishWebviewHostComponentRelationship@@YAXPEAUtagWND@@0@Z.c)
 *     xxxSetBridgeWindowChild @ 0x1402AB1C0 (xxxSetBridgeWindowChild.c)
 *     ?CleanupShellRelatedData@@YA_NPEAUtagWND@@@Z @ 0x1402B4154 (-CleanupShellRelatedData@@YA_NPEAUtagWND@@@Z.c)
 *     ?xxxDestroyWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z @ 0x1402B4438 (-xxxDestroyWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z.c)
 *     PatchThreadWindows @ 0x1402B4D00 (PatchThreadWindows.c)
 *     ?xxxRedrawHungWindow@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1402BCCD0 (-xxxRedrawHungWindow@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     ?ClearOverrideMargins@CWindowMarginProp@WindowMargins@@SAXPEAUtagWND@@@Z @ 0x1402BF3A8 (-ClearOverrideMargins@CWindowMarginProp@WindowMargins@@SAXPEAUtagWND@@@Z.c)
 *     ?SetOverrideMargins@CWindowMarginProp@WindowMargins@@SAJPEAUtagWND@@AEBUFRAME_MARGIN@@@Z @ 0x1402BF6B0 (-SetOverrideMargins@CWindowMarginProp@WindowMargins@@SAJPEAUtagWND@@AEBUFRAME_MARGIN@@@Z.c)
 *     ?RegisterShell@@YA_NPEAUtagWND@@@Z @ 0x1402C06AC (-RegisterShell@@YA_NPEAUtagWND@@@Z.c)
 *     ?MarkWindowAsArranged@AdvancedWindowPos@@YAXPEAUtagWND@@@Z @ 0x1402D3344 (-MarkWindowAsArranged@AdvancedWindowPos@@YAXPEAUtagWND@@@Z.c)
 *     ?MarkWindowAsNotArranged@AdvancedWindowPos@@YAXPEAUtagWND@@@Z @ 0x1402D3424 (-MarkWindowAsNotArranged@AdvancedWindowPos@@YAXPEAUtagWND@@@Z.c)
 *     xxxSetWindowData @ 0x1402DD148 (xxxSetWindowData.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1402E2314 (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1402E2D6C (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 *     xxxEndScroll @ 0x1402E6AC0 (xxxEndScroll.c)
 *     SetDialogPointer @ 0x1402E836C (SetDialogPointer.c)
 *     xxxHelpLoop @ 0x1402E98E4 (xxxHelpLoop.c)
 * Callees:
 *     ?CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z @ 0x140049338 (-CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z.c)
 *     DirtyVisRgnTrackers @ 0x1400497E8 (DirtyVisRgnTrackers.c)
 */

LONG_PTR __fastcall SetOrClrWF(int a1, struct tagWND *a2, unsigned __int16 a3, int a4)
{
  int v5; // edi
  int v6; // esi
  int v7; // ebp
  _DWORD *v8; // rax
  unsigned __int64 v9; // rdx
  LONG_PTR result; // rax
  char v11; // r8
  _DWORD *v12; // rax
  unsigned int v13; // r12d
  unsigned int v14; // edx
  unsigned int v15; // ecx
  int v16; // ebx
  int v17; // r15d
  int v18; // ebp
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rcx
  void *v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  int v26; // [rsp+20h] [rbp-68h] BYREF
  __int16 v27; // [rsp+24h] [rbp-64h]
  __int128 v28; // [rsp+26h] [rbp-62h]
  __int128 v29; // [rsp+36h] [rbp-52h]
  __int16 v30; // [rsp+46h] [rbp-42h]
  int v31; // [rsp+48h] [rbp-40h]
  __int64 v32; // [rsp+4Ch] [rbp-3Ch]
  int v33; // [rsp+54h] [rbp-34h]
  unsigned int v34; // [rsp+58h] [rbp-30h]

  v5 = 0;
  v6 = 0;
  v7 = 0;
  if ( a4 )
  {
    v8 = (_DWORD *)*((_QWORD *)a2 + 5);
    v5 = v8[7];
    v6 = v8[6];
    v7 = v8[58];
  }
  v9 = *((_QWORD *)a2 + 5) + ((unsigned __int64)a3 >> 8);
  result = *(unsigned __int8 *)(v9 + 16);
  if ( a1 )
    v11 = result | a3;
  else
    v11 = result & ~(_BYTE)a3;
  *(_BYTE *)(v9 + 16) = v11;
  if ( a4 )
  {
    result = IsWindowDesktopComposed(a2);
    if ( (_DWORD)result )
    {
      v12 = (_DWORD *)*((_QWORD *)a2 + 5);
      v13 = v12[7];
      v14 = v12[6];
      v15 = v12[58];
      v16 = v6 ^ v14;
      result = v7 ^ v15;
      v17 = v5 ^ v13;
      if ( v5 == v13 )
      {
        if ( v16 )
          goto LABEL_13;
        if ( !(_DWORD)result )
          return result;
      }
      if ( (v17 & 0xB9CF0000) != 0 )
      {
        v18 = -16;
        goto LABEL_17;
      }
LABEL_13:
      if ( (v16 & 0x4E27A9) != 0 )
      {
        v18 = -20;
        v13 = v14;
      }
      else
      {
        if ( (result & 0x3F2C0) == 0 )
        {
LABEL_19:
          if ( (v17 & 0x1C40000) != 0 || (v16 & 0x200A0381) != 0 )
            return WindowMargins::CheckForChanges(a2, 1LL);
          return result;
        }
        v18 = -268435456;
        v13 = v15;
      }
LABEL_17:
      DirtyVisRgnTrackers(a2);
      v19 = *(_QWORD *)a2;
      v22 = (void *)ReferenceDwmApiPort(v21, v20);
      result = W32GetSessionState(v24, v23, v25);
      _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(result + 96) + 4648LL));
      if ( v22 )
      {
        v30 = 0;
        v26 = 3932180;
        v31 = 1073741846;
        v27 = 0x8000;
        v32 = v19;
        v28 = 0LL;
        v33 = v18;
        v29 = 0LL;
        v34 = v13;
        LpcRequestPort(v22, &v26);
        result = ObfDereferenceObject(v22);
      }
      goto LABEL_19;
    }
  }
  return result;
}
