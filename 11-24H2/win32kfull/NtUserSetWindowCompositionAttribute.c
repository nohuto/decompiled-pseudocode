/*
 * XREFs of NtUserSetWindowCompositionAttribute @ 0x140246D90
 * Callers:
 *     <none>
 * Callees:
 *     IsTopLevelOrLayeredChildWindow @ 0x140046DB4 (IsTopLevelOrLayeredChildWindow.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetOrClrWF @ 0x140049160 (SetOrClrWF.c)
 *     _IsTopLevelWindow @ 0x140049A60 (_IsTopLevelWindow.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x140063510 (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?SetWindowCompositionAlpha@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x140085F90 (-SetWindowCompositionAlpha@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?SetWindowCompositionForceActiveWindowAppearance@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x140086058 (-SetWindowCompositionForceActiveWindowAppearance@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBD.c)
 *     ?SetWindowCompositionForceIconicSWR@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x140086120 (-SetWindowCompositionForceIconicSWR@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?SetWindowCompositionNCRenderPolicy@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1400867A4 (-SetWindowCompositionNCRenderPolicy@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?SetWindowCompositionSystemBackdropType@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x140086858 (-SetWindowCompositionSystemBackdropType@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION.c)
 *     ?SetWindowCompositionTransitions@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x14008690C (-SetWindowCompositionTransitions@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?SetWindowDisableMoveSizeFeedback@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1400869D0 (-SetWindowDisableMoveSizeFeedback@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?SetWindowCompositionCornerStyle@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x140086A98 (-SetWindowCompositionCornerStyle@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?SetWindowCompositionPartColor@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x140086B54 (-SetWindowCompositionPartColor@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?SetWindowCompositionDisallowPeek@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x140086C3C (-SetWindowCompositionDisallowPeek@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?SetWindowCompositionHasIconicBitmap@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x140086D04 (-SetWindowCompositionHasIconicBitmap@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@.c)
 *     ?SetWindowCompositionFreezeSWR@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x140086DC8 (-SetWindowCompositionFreezeSWR@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?SetWindowCompositionDarkModeColors@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x140086EA8 (-SetWindowCompositionDarkModeColors@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?SetWindowCompositionExcludeFromLivePreview@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x140086F70 (-SetWindowCompositionExcludeFromLivePreview@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_U.c)
 *     ?SetWindowCompositionAccentPolicy@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x140087034 (-SetWindowCompositionAccentPolicy@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?SetWindowCompositionNCRenderingExiled@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1400870FC (-SetWindowCompositionNCRenderingExiled@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@.c)
 *     ?_DwmAsyncSetCompositionAttribute@@YAJPEBUtagWND@@W4WINDOWCOMPOSITIONATTRIB@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x140087234 (-_DwmAsyncSetCompositionAttribute@@YAJPEBUtagWND@@W4WINDOWCOMPOSITIONATTRIB@@PEBUtagWINDOWCOMPOS.c)
 *     ?_GetWindowCloakState@@YA?AW4CloakState@@PEBUtagWND@@@Z @ 0x1400938F0 (-_GetWindowCloakState@@YA-AW4CloakState@@PEBUtagWND@@@Z.c)
 *     ValidateHwndIAMComponetUIAware @ 0x1400F5B08 (ValidateHwndIAMComponetUIAware.c)
 *     IAMThreadAccessGranted @ 0x1400F5BC0 (IAMThreadAccessGranted.c)
 *     ?GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1400F63C8 (-GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     WPP_RECORDER_AND_TRACE_SF_sdq @ 0x1401E9270 (WPP_RECORDER_AND_TRACE_SF_sdq.c)
 *     ?SetWindowCompositionRemoteAppPolicy@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1402207A0 (-SetWindowCompositionRemoteAppPolicy@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@.c)
 *     ?SetWindowCompositionExcludedFromDDA@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1402223D8 (-SetWindowCompositionExcludedFromDDA@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@.c)
 *     ?_DwmAsyncSetTaggedWindowRect@@YAJPEBUtagWND@@PEBUtagRECT@@@Z @ 0x14022805C (-_DwmAsyncSetTaggedWindowRect@@YAJPEBUtagWND@@PEBUtagRECT@@@Z.c)
 *     RtlCopyFromUser @ 0x14026E428 (RtlCopyFromUser.c)
 *     ?DwmSetBorderMargins@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1402AE054 (-DwmSetBorderMargins@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?SetWindowCompositionAllowNCPaint@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1402AE318 (-SetWindowCompositionAllowNCPaint@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?SetWindowCompositionNonClientRTLLayout@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1402AE3DC (-SetWindowCompositionNonClientRTLLayout@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION.c)
 *     ?SetWindowCompositionPassiveUpdateMode@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1402AE4A4 (-SetWindowCompositionPassiveUpdateMode@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@.c)
 *     ?SetWindowCompositionVisualOwner@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1402AE634 (-SetWindowCompositionVisualOwner@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?_DwmAsyncClearTaggedWindowRect@@YAJPEBUtagWND@@@Z @ 0x1402AE6E8 (-_DwmAsyncClearTaggedWindowRect@@YAJPEBUtagWND@@@Z.c)
 *     ?zzzUpdateWindowCompositionCloak@@YAJPEAUtagWND@@W4CloakingOperation@@W4CloakState@@@Z @ 0x1402D226C (-zzzUpdateWindowCompositionCloak@@YAJPEAUtagWND@@W4CloakingOperation@@W4CloakState@@@Z.c)
 *     memmove @ 0x140340480 (memmove.c)
 */

__int64 __fastcall NtUserSetWindowCompositionAttribute(__int64 a1, void *a2)
{
  NTSTATUS v3; // ebx
  size_t v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 CurrentProcessWow64Process; // rax
  volatile void *v9; // xmm0_8
  int v10; // r14d
  size_t v11; // r8
  __int64 v12; // rsi
  char v13; // r12
  __int64 v14; // rdx
  __int64 v15; // rax
  unsigned __int64 left; // rcx
  __int64 v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned int v20; // r15d
  struct tagTHREADINFO *v21; // r14
  int v22; // eax
  __int64 v23; // rdx
  struct tagWND *Host; // rax
  __int64 v25; // rcx
  NTSTATUS updated; // eax
  __int64 v27; // rdx
  struct tagTHREADINFO *v28; // rax
  int v29; // eax
  bool v30; // bl
  __int64 UserSessionState; // rax
  int v32; // r8d
  int v33; // edx
  bool v34; // sf
  ULONG v35; // eax
  struct tagRECT v37; // [rsp+60h] [rbp-98h] BYREF
  __int64 v38; // [rsp+70h] [rbp-88h]
  int v39; // [rsp+78h] [rbp-80h]
  __m128i v40; // [rsp+88h] [rbp-70h] BYREF
  SIZE_T Length; // [rsp+98h] [rbp-60h]
  __m128i v42; // [rsp+A8h] [rbp-50h]
  SIZE_T v43; // [rsp+B8h] [rbp-40h]

  v3 = -1073741811;
  v39 = -1073741811;
  v42 = 0LL;
  v43 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  v40 = 0LL;
  Length = 0LL;
  RtlCopyFromUser(&v40, a2, 0x18uLL);
  v42 = v40;
  v43 = Length;
  v4 = (unsigned int)Length;
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v6, v5, v7);
  v9 = (volatile void *)_mm_srli_si128(v40, 8).m128i_u64[0];
  ProbeForRead(v9, (unsigned int)v4, CurrentProcessWow64Process != 0 ? 1 : 4);
  v10 = v40.m128i_i32[0];
  if ( (unsigned int)(v40.m128i_i32[0] - 1) <= 0x24 )
  {
    v11 = *(_QWORD *)&word_1403579D8[8 * v40.m128i_i32[0]];
    if ( v4 >= v11 )
    {
      memmove(&v37, (const void *)v9, v11);
      v12 = 0LL;
      v3 = 0;
      v39 = 0;
      goto LABEL_6;
    }
    v3 = -1073741789;
    v39 = -1073741789;
  }
  v12 = 0LL;
LABEL_6:
  if ( v3 < 0 )
  {
LABEL_112:
    v35 = RtlNtStatusToDosError(v3);
    UserSetLastError(v35);
    v34 = v3 < 0;
    goto LABEL_113;
  }
  v13 = 1;
  EnterCrit(1LL, 0LL);
  v15 = ValidateHwndIAMComponetUIAware(a1, v14);
  v17 = v15;
  if ( !v15 )
    goto LABEL_110;
  if ( v10 != 17
    || !(unsigned int)IsTopLevelOrLayeredChildWindow(v15)
    || (v19 = *(_QWORD *)(v17 + 40), *(_DWORD *)(v19 + 236) == 15) )
  {
    if ( v10 == 36 && (unsigned int)IsTopLevelOrLayeredChildWindow(v17) )
    {
      updated = SetWindowCompositionAlpha(
                  (struct tagWND *)v17,
                  (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v37);
LABEL_109:
      v3 = updated;
      goto LABEL_111;
    }
    if ( IsTopLevelWindow(v17) || v10 == 20 && (unsigned int)IsTopLevelOrLayeredChildWindow(v17) )
    {
      if ( v10 > 19 )
      {
        if ( v10 > 29 )
        {
          switch ( v10 )
          {
            case 30:
              updated = SetWindowCompositionSystemBackdropType(
                          (struct tagWND *)v17,
                          (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v37);
              goto LABEL_109;
            case 31:
              updated = _DwmAsyncSetTaggedWindowRect((const struct tagWND *)v17, &v37);
              goto LABEL_109;
            case 32:
              updated = _DwmAsyncClearTaggedWindowRect((const struct tagWND *)v17);
              goto LABEL_109;
            case 33:
              updated = SetWindowCompositionRemoteAppPolicy(
                          (struct tagWND *)v17,
                          (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v37);
              goto LABEL_109;
          }
          if ( v10 != 34 )
          {
            if ( v10 == 35 )
            {
              v3 = 0;
              left = (unsigned int)v37.left;
              if ( v37.left )
              {
                if ( (v37.left & 0xFF000000) != 0xFF000000 )
                {
LABEL_25:
                  v3 = -1073741811;
                  goto LABEL_111;
                }
                left = v37.left & 0xFFFFFF;
                *(_DWORD *)(v17 + 180) = left;
              }
              else
              {
                *(_DWORD *)(v17 + 180) = -1;
              }
              goto LABEL_111;
            }
            if ( v10 == 37 )
            {
              updated = DwmSetBorderMargins(
                          (struct tagWND *)v17,
                          (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v37);
              goto LABEL_109;
            }
          }
          goto LABEL_98;
        }
        if ( v10 == 29 )
        {
          updated = SetWindowDisableMoveSizeFeedback(
                      (struct tagWND *)v17,
                      (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v37);
          goto LABEL_109;
        }
        if ( v10 != 20 )
        {
          switch ( v10 )
          {
            case 22:
              updated = SetWindowCompositionVisualOwner(
                          (struct tagWND *)v17,
                          (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v37);
              goto LABEL_109;
            case 23:
              v28 = PtiCurrent(0LL, v27);
              LOBYTE(v29) = IAMThreadAccessGranted(v28);
              if ( v29 )
              {
                LOBYTE(left) = *(_BYTE *)(*(_QWORD *)(v17 + 40) + 233LL) >> 7;
                if ( (v37.left != 0) != (_BYTE)left )
                  SetOrClrWF(v37.left != 0, (struct tagWND *)v17, 0xD980u, 1);
                v3 = 0;
              }
              else
              {
                v3 = -1073741790;
              }
              goto LABEL_111;
            case 24:
              updated = SetWindowCompositionExcludedFromDDA(
                          (struct tagWND *)v17,
                          (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v37);
              goto LABEL_109;
            case 25:
              updated = SetWindowCompositionPassiveUpdateMode(
                          (struct tagWND *)v17,
                          (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v37);
              goto LABEL_109;
            case 26:
              updated = SetWindowCompositionDarkModeColors(
                          (struct tagWND *)v17,
                          (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v37);
              goto LABEL_109;
            case 27:
              updated = SetWindowCompositionCornerStyle(
                          (struct tagWND *)v17,
                          (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v37);
              goto LABEL_109;
            case 28:
              updated = SetWindowCompositionPartColor(
                          (struct tagWND *)v17,
                          (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v37);
              goto LABEL_109;
          }
          goto LABEL_98;
        }
        SetWindowCompositionFreezeSWR((struct tagWND *)v17, (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v37);
      }
      else
      {
        if ( v10 == 19 )
        {
          updated = SetWindowCompositionAccentPolicy(
                      (struct tagWND *)v17,
                      (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v37);
          goto LABEL_109;
        }
        if ( v10 > 9 )
        {
          v27 = 10LL;
          if ( v10 == 10 )
          {
            updated = _DwmAsyncSetCompositionAttribute(v17);
            goto LABEL_109;
          }
          if ( v10 == 11 )
          {
            updated = SetWindowCompositionNCRenderingExiled(
                        (struct tagWND *)v17,
                        (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v37);
            goto LABEL_109;
          }
          if ( v10 != 12 )
          {
            if ( v10 == 13 )
            {
              updated = SetWindowCompositionExcludeFromLivePreview(
                          (struct tagWND *)v17,
                          (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v37);
              goto LABEL_109;
            }
            if ( v10 != 14 )
            {
              if ( v10 == 15 )
              {
                updated = SetWindowCompositionForceActiveWindowAppearance(
                            (struct tagWND *)v17,
                            (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v37);
                goto LABEL_109;
              }
              if ( v10 == 16 )
              {
                updated = SetWindowCompositionDisallowPeek(
                            (struct tagWND *)v17,
                            (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v37);
                goto LABEL_109;
              }
            }
          }
          goto LABEL_98;
        }
        if ( v10 != 9 )
        {
          if ( v10 != 1 )
          {
            switch ( v10 )
            {
              case 2:
                updated = SetWindowCompositionNCRenderPolicy(
                            (struct tagWND *)v17,
                            (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v37);
                goto LABEL_109;
              case 3:
                updated = SetWindowCompositionTransitions(
                            (struct tagWND *)v17,
                            (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v37);
                goto LABEL_109;
              case 4:
                updated = SetWindowCompositionAllowNCPaint(
                            (struct tagWND *)v17,
                            (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v37);
                goto LABEL_109;
            }
            if ( v10 != 5 )
            {
              if ( v10 == 6 )
              {
                updated = SetWindowCompositionNonClientRTLLayout(
                            (struct tagWND *)v17,
                            (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v37);
                goto LABEL_109;
              }
              if ( v10 == 7 )
              {
                updated = SetWindowCompositionForceIconicSWR(
                            (struct tagWND *)v17,
                            (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v37);
                goto LABEL_109;
              }
            }
          }
LABEL_98:
          if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
            || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
            || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
          {
            v13 = 0;
          }
          left = (unsigned __int64)&WPP_RECORDER_INITIALIZED;
          v30 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v13 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            UserSessionState = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v27);
            LOBYTE(v32) = v30;
            LOBYTE(v33) = v13;
            WPP_RECORDER_AND_TRACE_SF_sdq(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
              v33,
              v32,
              *(_QWORD *)(UserSessionState + 69416));
          }
          goto LABEL_25;
        }
      }
      updated = SetWindowCompositionHasIconicBitmap(
                  (struct tagWND *)v17,
                  (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v37);
      goto LABEL_109;
    }
LABEL_110:
    v3 = -1073741816;
    goto LABEL_111;
  }
  v20 = 0;
  v21 = PtiCurrent(v19, v18);
  LOBYTE(v22) = IAMThreadAccessGranted(v21);
  if ( v22 )
  {
    v20 = 2;
  }
  else
  {
    left = *((_QWORD *)v21 + 58);
    if ( *(_QWORD *)(*(_QWORD *)(v17 + 16) + 464LL) == left
      && ((*(_BYTE *)(left + 816) & 0x30) != 0x10 || !IsTopLevelWindow(v17))
      || (unsigned int)CoreWindowProp::IsComponent((const struct tagWND *)v17, v23)
      && (Host = CoreWindowProp::GetHost((const struct tagWND *)v17)) != 0LL
      && (left = *((_QWORD *)Host + 2), *(_QWORD *)(left + 464) == *((_QWORD *)v21 + 58)) )
    {
      v20 = 1;
    }
    else
    {
      v3 = -1073741790;
    }
  }
  if ( v3 >= 0 )
  {
    if ( !v37.left )
    {
      v25 = *(_QWORD *)(v17 + 120);
      if ( v25 )
      {
        if ( ((unsigned int)_GetWindowCloakState(v25) & v20) != 0 )
          goto LABEL_25;
      }
    }
    updated = zzzUpdateWindowCompositionCloak(v17, v37.left == 0, v20);
    goto LABEL_109;
  }
LABEL_111:
  UserSessionSwitchLeaveCrit(left);
  v34 = v3 < 0;
  if ( v3 < 0 )
    goto LABEL_112;
LABEL_113:
  LOBYTE(v12) = !v34;
  return v12;
}
