/*
 * XREFs of ?_GetWindowCompositionInfo@@YAHPEBUtagWND@@PEAUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C00EC894
 * Callers:
 *     ?SetWindowCompositionHasIconicBitmap@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C000F9DC (-SetWindowCompositionHasIconicBitmap@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@.c)
 *     ?SetWindowCompositionSystemBackdropType@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C00100A4 (-SetWindowCompositionSystemBackdropType@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION.c)
 *     ?SetWindowCompositionFreezeSWR@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C001066C (-SetWindowCompositionFreezeSWR@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?SetWindowCompositionForceIconicSWR@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C0012CA0 (-SetWindowCompositionForceIconicSWR@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?SetWindowMaximizeAnimation@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C0015884 (-SetWindowMaximizeAnimation@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C00211F4 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     DecVisWindows @ 0x1C0061F0C (DecVisWindows.c)
 *     IncVisWindows @ 0x1C0062018 (IncVisWindows.c)
 *     ?SetWindowCompositionNCRenderingExiled@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C0087C90 (-SetWindowCompositionNCRenderingExiled@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@.c)
 *     ?SetWindowCompositionDarkModeColors@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C008BD48 (-SetWindowCompositionDarkModeColors@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?SetWindowCompositionAccentPolicy@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C008E654 (-SetWindowCompositionAccentPolicy@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     NtUserGetWindowCompositionInfo @ 0x1C0090CE0 (NtUserGetWindowCompositionInfo.c)
 *     ?SetWindowCompositionExcludeFromLivePreview@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C0091CF8 (-SetWindowCompositionExcludeFromLivePreview@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_U.c)
 *     ?SetWindowCompositionForceActiveWindowAppearance@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C00947C0 (-SetWindowCompositionForceActiveWindowAppearance@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBD.c)
 *     ?SetWindowMinimizeAnimation@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C009AEFC (-SetWindowMinimizeAnimation@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?IsWindowShellCloaked@@YAHQEAUtagWND@@H@Z @ 0x1C00A52DC (-IsWindowShellCloaked@@YAHQEAUtagWND@@H@Z.c)
 *     ?zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@K@Z @ 0x1C00B5610 (-zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@K@Z.c)
 *     ?CalculateWindowMargins@CWindowMarginProp@WindowMargins@@QEAA?AUFRAME_MARGIN@@PEBUtagWND@@IW4MarginsFor@?A0x67ef0edd@2@@Z @ 0x1C00EC204 (-CalculateWindowMargins@CWindowMarginProp@WindowMargins@@QEAA-AUFRAME_MARGIN@@PEBUtagWND@@IW4Mar.c)
 *     NtUserGetWindowCompositionAttribute @ 0x1C00ECC50 (NtUserGetWindowCompositionAttribute.c)
 *     ?SetWindowCompositionNCRenderPolicy@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C0155662 (-SetWindowCompositionNCRenderPolicy@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?GetWindowMinimizeAnimation@@YAJPEAUtagWND@@PEAW4CORNER_STYLE@@@Z @ 0x1C01F65CC (-GetWindowMinimizeAnimation@@YAJPEAUtagWND@@PEAW4CORNER_STYLE@@@Z.c)
 *     ?SetWindowCompositionAllowNCPaint@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C01F6648 (-SetWindowCompositionAllowNCPaint@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?SetWindowCompositionDisallowPeek@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C01F6708 (-SetWindowCompositionDisallowPeek@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?SetWindowCompositionExcludedFromDDA@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C01F67C8 (-SetWindowCompositionExcludedFromDDA@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@.c)
 *     ?SetWindowCompositionHolographic@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C01F688C (-SetWindowCompositionHolographic@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?SetWindowCompositionNonClientRTLLayout@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C01F694C (-SetWindowCompositionNonClientRTLLayout@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION.c)
 *     ?SetWindowCompositionPassiveUpdateMode@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C01F6A10 (-SetWindowCompositionPassiveUpdateMode@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@.c)
 *     ?SetWindowCompositionTransitions@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C01F6AD4 (-SetWindowCompositionTransitions@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?SetWindowCompositionVideoOverlayActive@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C01F6B94 (-SetWindowCompositionVideoOverlayActive@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION.c)
 *     ?SetWindowCompositionVisualOwner@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C01F6C54 (-SetWindowCompositionVisualOwner@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?SetWindowDisableMoveSizeFeedback@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C01F6D04 (-SetWindowDisableMoveSizeFeedback@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 * Callees:
 *     _GetTopLevelWindow @ 0x1C00AE7B0 (_GetTopLevelWindow.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EB194 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C011E808 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     ??B?$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ @ 0x1C01389C0 (--B-$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ.c)
 */

__int64 __fastcall _GetWindowCompositionInfo(
        const struct tagWND *a1,
        struct WINDOWCOMPOSITIONINFO *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rcx
  unsigned int v7; // edi
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // r12
  PERESOURCE *v12; // rax
  int v13; // r15d
  tagObjLock **v14; // rsi
  _OWORD *Prop; // rsi
  unsigned int v16; // eax
  struct tagTHREADINFO *v17; // rcx
  __int128 v19; // [rsp+48h] [rbp-28h] BYREF
  char v20; // [rsp+58h] [rbp-18h]
  char v21; // [rsp+60h] [rbp-10h]

  v5 = *((_QWORD *)a1 + 13);
  v7 = 0;
  if ( (!v5 || (v8 = *((_QWORD *)a1 + 3)) == 0 || (v9 = *(_QWORD *)(v8 + 8)) == 0 || v5 != *(_QWORD *)(v9 + 24))
    && ((*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 8) == 0 || !GetTopLevelWindow((__int64)a1)) )
  {
    goto LABEL_24;
  }
  v10 = *((_QWORD *)a1 + 18);
  v11 = *(unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Busy;
  v19 = 0LL;
  v20 = 0;
  v21 = 0;
  v12 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(v5, a2, a3, a4);
  v7 = 1;
  if ( ExIsResourceAcquiredExclusiveLite(*v12) != 1 && IS_USERCRIT_OWNED_AT_ALL() )
  {
    v21 = 1;
    if ( v10 == gObjDummyLock )
      v10 = 0LL;
    *(_QWORD *)&v19 = v10;
    v13 = 0;
    v14 = (tagObjLock **)&v19;
    do
    {
      if ( *v14 )
        tagObjLock::LockExclusive(*v14);
      ++v13;
      ++v14;
    }
    while ( !v13 );
    v20 = 1;
  }
  Prop = (_OWORD *)RealGetProp(*((_QWORD *)a1 + 18), v11, 1LL);
  if ( v21 && v20 )
  {
    if ( (_QWORD)v19 )
      tagObjLock::UnLockExclusive((tagObjLock *)v19);
    v20 = 0;
  }
  if ( Prop )
  {
    *(_OWORD *)a2 = *Prop;
    *((_OWORD *)a2 + 1) = Prop[1];
    *((_OWORD *)a2 + 2) = Prop[2];
    *((_OWORD *)a2 + 3) = Prop[3];
  }
  else
  {
LABEL_24:
    v16 = *(_DWORD *)a2 & 0xFFFD0000;
    *(_QWORD *)a2 = v16;
    *((_QWORD *)a2 + 3) = 0LL;
    *(_OWORD *)((char *)a2 + 8) = 0LL;
    *((_QWORD *)a2 + 4) = 0LL;
    v17 = (struct tagTHREADINFO *)*((_QWORD *)a1 + 2);
    if ( !v17 )
    {
      v17 = PtiCurrentShared(0LL, (__int64)a2, a3, a4);
      v16 = *(_DWORD *)a2;
    }
    *(_DWORD *)a2 = v16 ^ (v16 ^ (*((_DWORD *)v17 + 162) >> 3)) & 0x40000;
    *((_DWORD *)a2 + 10) = g_defaultFrameStyle;
    *(_QWORD *)((char *)a2 + 44) = 0LL;
    *(_QWORD *)((char *)a2 + 52) = 0LL;
  }
  *(_DWORD *)a2 &= 0x7FFFFu;
  return v7;
}
