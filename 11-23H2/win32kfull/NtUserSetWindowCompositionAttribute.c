/*
 * XREFs of NtUserSetWindowCompositionAttribute @ 0x1C00E9820
 * Callers:
 *     <none>
 * Callees:
 *     ?SetWindowCompositionHasIconicBitmap@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C000F9DC (-SetWindowCompositionHasIconicBitmap@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@.c)
 *     ?SetWindowCompositionSystemBackdropType@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C00100A4 (-SetWindowCompositionSystemBackdropType@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION.c)
 *     ?SetWindowCompositionFreezeSWR@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C001066C (-SetWindowCompositionFreezeSWR@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?SetWindowCompositionForceIconicSWR@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C0012CA0 (-SetWindowCompositionForceIconicSWR@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?SetWindowMaximizeAnimation@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C0015884 (-SetWindowMaximizeAnimation@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     IAMThreadAccessGranted @ 0x1C0030E2C (IAMThreadAccessGranted.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C0045408 (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?SetWindowCompositionNCRenderingExiled@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C0087C90 (-SetWindowCompositionNCRenderingExiled@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@.c)
 *     ?SetWindowCompositionDarkModeColors@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C008BD48 (-SetWindowCompositionDarkModeColors@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?SetWindowCompositionAccentPolicy@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C008E654 (-SetWindowCompositionAccentPolicy@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?SetWindowCompositionExcludeFromLivePreview@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C0091CF8 (-SetWindowCompositionExcludeFromLivePreview@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_U.c)
 *     IsTopLevelOrLayeredChildWindow @ 0x1C00946D8 (IsTopLevelOrLayeredChildWindow.c)
 *     ?SetWindowCompositionForceActiveWindowAppearance@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C00947C0 (-SetWindowCompositionForceActiveWindowAppearance@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBD.c)
 *     ?SetWindowMinimizeAnimation@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C009AEFC (-SetWindowMinimizeAnimation@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?_DwmAsyncSetCompositionAttribute@@YAJPEBUtagWND@@W4WINDOWCOMPOSITIONATTRIB@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C00AA680 (-_DwmAsyncSetCompositionAttribute@@YAJPEBUtagWND@@W4WINDOWCOMPOSITIONATTRIB@@PEBUtagWINDOWCOMPOS.c)
 *     ?zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@K@Z @ 0x1C00B5610 (-zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@K@Z.c)
 *     ValidateHwndIAMComponetUIAware @ 0x1C00E9C9C (ValidateHwndIAMComponetUIAware.c)
 *     _GetDesktopWindow @ 0x1C00EA360 (_GetDesktopWindow.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     ?GetWindowCloakState@@YAKPEBUtagWND@@@Z @ 0x1C0121808 (-GetWindowCloakState@@YAKPEBUtagWND@@@Z.c)
 *     _IsTopLevelWindow @ 0x1C0122A20 (_IsTopLevelWindow.c)
 *     memmove @ 0x1C0140A40 (memmove.c)
 *     ?SetWindowCompositionNCRenderPolicy@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C0155662 (-SetWindowCompositionNCRenderPolicy@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_sdq @ 0x1C01E2CE4 (WPP_RECORDER_AND_TRACE_SF_sdq.c)
 *     ?SetWindowCompositionAllowNCPaint@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C01F6648 (-SetWindowCompositionAllowNCPaint@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?SetWindowCompositionDisallowPeek@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C01F6708 (-SetWindowCompositionDisallowPeek@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?SetWindowCompositionExcludedFromDDA@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C01F67C8 (-SetWindowCompositionExcludedFromDDA@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@.c)
 *     ?SetWindowCompositionHolographic@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C01F688C (-SetWindowCompositionHolographic@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?SetWindowCompositionNonClientRTLLayout@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C01F694C (-SetWindowCompositionNonClientRTLLayout@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION.c)
 *     ?SetWindowCompositionPassiveUpdateMode@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C01F6A10 (-SetWindowCompositionPassiveUpdateMode@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@.c)
 *     ?SetWindowCompositionTransitions@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C01F6AD4 (-SetWindowCompositionTransitions@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?SetWindowCompositionVisualOwner@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C01F6C54 (-SetWindowCompositionVisualOwner@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?SetWindowDisableMoveSizeFeedback@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C01F6D04 (-SetWindowDisableMoveSizeFeedback@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?_DwmAsyncClearTaggedWindowRect@@YAJPEBUtagWND@@@Z @ 0x1C01F6DC8 (-_DwmAsyncClearTaggedWindowRect@@YAJPEBUtagWND@@@Z.c)
 *     ?_DwmAsyncSetTaggedWindowRect@@YAJPEBUtagWND@@PEBUtagRECT@@@Z @ 0x1C01F6E18 (-_DwmAsyncSetTaggedWindowRect@@YAJPEBUtagWND@@PEBUtagRECT@@@Z.c)
 *     ?GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C021F9B0 (-GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 */

__int64 __fastcall NtUserSetWindowCompositionAttribute(__int64 a1, __m128i *a2, __int64 a3)
{
  NTSTATUS v4; // ebx
  ULONG64 v5; // rcx
  __int64 CurrentProcessWow64Process; // rax
  volatile void *v7; // xmm0_8
  int v8; // r14d
  size_t v9; // r8
  __int64 v10; // rsi
  char v11; // r12
  __int64 v12; // rax
  __int64 v13; // rdx
  PDEVICE_OBJECT v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  struct tagWND *v17; // rdi
  __int64 DesktopWindow; // rax
  bool v19; // sf
  ULONG v20; // eax
  NTSTATUS active; // eax
  unsigned int v23; // r15d
  int v24; // eax
  const struct tagWND *v25; // rcx
  struct tagWND *Host; // rax
  int v27; // eax
  struct tagRECT v28; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v29; // [rsp+70h] [rbp-98h]
  int v30; // [rsp+78h] [rbp-90h]
  __m128i v31; // [rsp+90h] [rbp-78h]
  SIZE_T v32; // [rsp+A0h] [rbp-68h]
  __m128i v33; // [rsp+A8h] [rbp-60h]
  __m128i v34; // [rsp+B8h] [rbp-50h]
  SIZE_T Length; // [rsp+C8h] [rbp-40h]

  v4 = -1073741811;
  v30 = -1073741811;
  v31 = 0LL;
  v32 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v5 = (ULONG64)&a2[1].m128i_u64[1];
  if ( &a2[1].m128i_u64[1] < (unsigned __int64 *)a2 || v5 > MmUserProbeAddress )
    a2 = (__m128i *)MmUserProbeAddress;
  v33 = *a2;
  v34 = v33;
  Length = a2[1].m128i_u64[0];
  v31 = v33;
  v32 = Length;
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v5, a2, a3);
  v7 = (volatile void *)_mm_srli_si128(v33, 8).m128i_u64[0];
  ProbeForRead(v7, (unsigned int)Length, CurrentProcessWow64Process != 0 ? 1 : 4);
  v8 = v33.m128i_i32[0];
  if ( (unsigned int)(v33.m128i_i32[0] - 1) <= 0x1F )
  {
    v9 = qword_1C0317408[2 * v34.m128i_i32[0]];
    if ( (unsigned int)Length >= v9 )
    {
      memmove(&v28, (const void *)v7, v9);
      v10 = 0LL;
      v4 = 0;
      v30 = 0;
      goto LABEL_9;
    }
    v4 = -1073741789;
    v30 = -1073741789;
  }
  v10 = 0LL;
LABEL_9:
  if ( v4 < 0 )
  {
LABEL_19:
    v20 = RtlNtStatusToDosError(v4);
    UserSetLastError(v20);
    v19 = v4 < 0;
    goto LABEL_20;
  }
  v11 = 1;
  EnterCrit(1LL, 0LL);
  v12 = ValidateHwndIAMComponetUIAware(a1);
  v17 = (struct tagWND *)v12;
  if ( !v12 )
    goto LABEL_17;
  if ( v8 != 17
    || !(unsigned int)IsTopLevelOrLayeredChildWindow(v12)
    || (v14 = (PDEVICE_OBJECT)*((_QWORD *)v17 + 5), HIDWORD(v14->Dpc.DeferredContext) == 15) )
  {
    v13 = 0LL;
    v15 = *((_QWORD *)v17 + 13);
    if ( v15 )
    {
      DesktopWindow = GetDesktopWindow(v17, 0LL);
      if ( v15 == DesktopWindow )
        v13 = 1LL;
    }
    if ( (_DWORD)v13 || v8 == 20 && (unsigned int)IsTopLevelOrLayeredChildWindow((__int64)v17) )
    {
      if ( v8 <= 16 )
      {
        if ( v8 == 16 )
        {
          active = SetWindowCompositionDisallowPeek(v17, (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v28);
          goto LABEL_28;
        }
        if ( v8 <= 8 )
        {
          if ( v8 != 8 && v8 != 1 )
          {
            switch ( v8 )
            {
              case 2:
                active = SetWindowCompositionNCRenderPolicy(
                           v17,
                           (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v28);
                goto LABEL_28;
              case 3:
                active = SetWindowCompositionTransitions(v17, (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v28);
                goto LABEL_28;
              case 4:
                active = SetWindowCompositionAllowNCPaint(
                           v17,
                           (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v28);
                goto LABEL_28;
            }
            if ( v8 != 5 )
            {
              if ( v8 == 6 )
              {
                active = SetWindowCompositionNonClientRTLLayout(
                           v17,
                           (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v28);
                goto LABEL_28;
              }
              if ( v8 == 7 )
              {
                active = SetWindowCompositionForceIconicSWR(
                           v17,
                           (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v28);
                goto LABEL_28;
              }
            }
          }
          goto LABEL_100;
        }
        if ( v8 != 9 )
        {
          if ( v8 == 10 )
          {
            active = _DwmAsyncSetCompositionAttribute((__int64)v17);
            goto LABEL_28;
          }
          if ( v8 == 11 )
          {
            active = SetWindowCompositionNCRenderingExiled(
                       v17,
                       (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v28);
            goto LABEL_28;
          }
          if ( v8 != 12 )
          {
            if ( v8 == 13 )
            {
              active = SetWindowCompositionExcludeFromLivePreview(
                         v17,
                         (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v28);
              goto LABEL_28;
            }
            if ( v8 == 15 )
            {
              active = SetWindowCompositionForceActiveWindowAppearance(
                         v17,
                         (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v28);
              goto LABEL_28;
            }
          }
          goto LABEL_100;
        }
LABEL_54:
        active = SetWindowCompositionHasIconicBitmap(v17, (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v28);
        goto LABEL_28;
      }
      if ( v8 > 26 )
      {
        switch ( v8 )
        {
          case 27:
            active = SetWindowMinimizeAnimation(v17, (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v28);
            goto LABEL_28;
          case 28:
            active = SetWindowMaximizeAnimation(v17, (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v28);
            goto LABEL_28;
          case 29:
            active = SetWindowDisableMoveSizeFeedback(v17, (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v28);
            goto LABEL_28;
          case 30:
            active = SetWindowCompositionSystemBackdropType(
                       v17,
                       (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v28);
            goto LABEL_28;
          case 31:
            active = _DwmAsyncSetTaggedWindowRect(v17, &v28);
            goto LABEL_28;
          case 32:
            active = _DwmAsyncClearTaggedWindowRect(v17);
            goto LABEL_28;
        }
        goto LABEL_100;
      }
      if ( v8 == 26 )
      {
        active = SetWindowCompositionDarkModeColors(v17, (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v28);
        goto LABEL_28;
      }
      if ( v8 != 18 )
      {
        switch ( v8 )
        {
          case 19:
            active = SetWindowCompositionAccentPolicy(v17, (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v28);
            goto LABEL_28;
          case 20:
            SetWindowCompositionFreezeSWR(v17, (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v28);
            goto LABEL_54;
          case 22:
            active = SetWindowCompositionVisualOwner(v17, (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v28);
            goto LABEL_28;
          case 23:
            LOBYTE(v27) = IAMThreadAccessGranted(gptiCurrent);
            if ( v27 )
            {
              active = SetWindowCompositionHolographic(v17, (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v28);
              goto LABEL_28;
            }
            v4 = -1073741790;
            goto LABEL_18;
          case 24:
            active = SetWindowCompositionExcludedFromDDA(v17, (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v28);
            goto LABEL_28;
          case 25:
            active = SetWindowCompositionPassiveUpdateMode(
                       v17,
                       (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v28);
            goto LABEL_28;
        }
      }
LABEL_100:
      v14 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
      {
        v11 = 0;
      }
      v13 = (__int64)&WPP_RECORDER_INITIALIZED;
      LOBYTE(v15) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v13) = v11;
        WPP_RECORDER_AND_TRACE_SF_sdq(WPP_GLOBAL_Control->AttachedDevice, v13, v15, v16);
      }
      goto LABEL_79;
    }
LABEL_17:
    v4 = -1073741816;
    goto LABEL_18;
  }
  v23 = 0;
  LOBYTE(v24) = IAMThreadAccessGranted(gptiCurrent);
  if ( v24 )
  {
    v23 = 2;
  }
  else
  {
    v14 = *(PDEVICE_OBJECT *)(gptiCurrent + 424LL);
    if ( *(PDEVICE_OBJECT *)(*((_QWORD *)v17 + 2) + 424LL) == v14
      && ((v14[2].AlignmentRequirement & 0x30) != 0x10 || !(unsigned int)IsTopLevelWindow(v17))
      || (unsigned int)CoreWindowProp::IsComponent(v17)
      && (Host = CoreWindowProp::GetHost(v17)) != 0LL
      && (v14 = (PDEVICE_OBJECT)*((_QWORD *)Host + 2),
          v14[1].Queue.ListEntry.Blink == *(struct _LIST_ENTRY **)(gptiCurrent + 424LL)) )
    {
      v23 = 1;
    }
    else
    {
      v4 = -1073741790;
    }
  }
  if ( v4 >= 0 )
  {
    if ( !v28.left )
    {
      v25 = (const struct tagWND *)*((_QWORD *)v17 + 15);
      if ( v25 )
      {
        if ( (GetWindowCloakState(v25) & v23) != 0 )
        {
LABEL_79:
          v4 = -1073741811;
          goto LABEL_18;
        }
      }
    }
    active = zzzSetWindowCompositionCloak(v17, (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v28, v23);
LABEL_28:
    v4 = active;
  }
LABEL_18:
  UserSessionSwitchLeaveCrit(v14, v13, v15, v16);
  v19 = v4 < 0;
  if ( v4 < 0 )
    goto LABEL_19;
LABEL_20:
  LOBYTE(v10) = !v19;
  return v10;
}
