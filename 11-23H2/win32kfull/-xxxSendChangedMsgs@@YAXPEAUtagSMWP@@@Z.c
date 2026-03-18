/*
 * XREFs of ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C01232A4
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x1C01236C0 (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     ?IsSingleThreadAttached@tagQ@@QEBA_NXZ @ 0x1C0039D88 (-IsSingleThreadAttached@tagQ@@QEBA_NXZ.c)
 *     ?IsShellParticipatesInSizing@@YA_NPEAUtagWND@@@Z @ 0x1C005BC94 (-IsShellParticipatesInSizing@@YA_NPEAUtagWND@@@Z.c)
 *     ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x1C00814C4 (-FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z.c)
 *     ShouldHaveShadow @ 0x1C008B454 (ShouldHaveShadow.c)
 *     xxxRemoveShadow @ 0x1C0093B34 (xxxRemoveShadow.c)
 *     ?CuratedWindowHidden@NotifyShell@@YAXPEAUtagWND@@W4HideSource@1@@Z @ 0x1C00949FC (-CuratedWindowHidden@NotifyShell@@YAXPEAUtagWND@@W4HideSource@1@@Z.c)
 *     _anonymous_namespace_::EligibleWindow @ 0x1C00A41D0 (_anonymous_namespace_--EligibleWindow.c)
 *     xxxNotifyMonitorChanged @ 0x1C00A4DDC (xxxNotifyMonitorChanged.c)
 *     CalcWindowFullScreen @ 0x1C00ABAD4 (CalcWindowFullScreen.c)
 *     HMValidateHandleNoSecure @ 0x1C00B02D0 (HMValidateHandleNoSecure.c)
 *     ?xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z @ 0x1C00B2140 (-xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z.c)
 *     PostIAMShellHookMessage @ 0x1C00B2D78 (PostIAMShellHookMessage.c)
 *     DirtyVisRgnTrackers @ 0x1C00B699C (DirtyVisRgnTrackers.c)
 *     DwmChildRectChange @ 0x1C00EB3C0 (DwmChildRectChange.c)
 *     xxxWindowEvent @ 0x1C00F0BC0 (xxxWindowEvent.c)
 *     ?GetWindowCloakState@@YAKPEBUtagWND@@@Z @ 0x1C0121808 (-GetWindowCloakState@@YAKPEBUtagWND@@@Z.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C01278C0 (xxxSendTransformableMessageTimeout.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C014083C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z @ 0x1C021D528 (-TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z.c)
 *     _anonymous_namespace_::WindowSizingUpdate @ 0x1C021D6BC (_anonymous_namespace_--WindowSizingUpdate.c)
 *     ?zzzApplyShadow@@YAHPEAUtagWND@@0@Z @ 0x1C0220BC8 (-zzzApplyShadow@@YAHPEAUtagWND@@0@Z.c)
 *     xxxAddShadow @ 0x1C0220DA4 (xxxAddShadow.c)
 *     xxxUpdateShadowZorder @ 0x1C022110C (xxxUpdateShadowZorder.c)
 *     zzzMoveShadow @ 0x1C022126C (zzzMoveShadow.c)
 */

void __fastcall xxxSendChangedMsgs(struct tagSMWP *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // r15d
  __int64 *v5; // rdi
  __int64 v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 *v10; // r14
  __int64 v11; // rsi
  unsigned __int64 v12; // rcx
  int v13; // ecx
  int v14; // edx
  ULONG_PTR v15; // rbx
  struct tagSHADOW *j; // rax
  int v17; // r14d
  __int64 v18; // rdx
  unsigned int v19; // r8d
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rax
  struct tagWND **Shadow; // rax
  struct tagRECT v26; // xmm0
  __int64 v27; // rcx
  __int64 v28; // rax
  unsigned __int16 v29; // cx
  struct tagRECT v30; // [rsp+50h] [rbp-68h] BYREF
  __int128 i; // [rsp+60h] [rbp-58h] BYREF
  __int64 v32; // [rsp+70h] [rbp-48h]
  __int64 v33; // [rsp+C8h] [rbp+10h] BYREF

  v4 = *((_DWORD *)a1 + 7) - 1;
  v5 = (__int64 *)*((_QWORD *)a1 + 5);
  v32 = 0LL;
  for ( i = 0LL; v4 >= 0; --v4 )
  {
    v7 = *v5;
    if ( *v5 )
    {
      PsGetThreadWin32Thread(KeGetCurrentThread());
      a2 = (unsigned __int16)v7;
      if ( (unsigned __int64)(unsigned __int16)v7 < *(_QWORD *)(gpsi + 8LL)
        && ((v8 = gSharedInfo[1] + LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)v7,
             v10 = (__int64 *)HMPkheFromPhe(v8),
             LOWORD(v7) = WORD1(v7) & 0x7FFF,
             (WORD1(v7) & 0x7FFF) == *(_WORD *)(v8 + 26))
         || (_WORD)v7 == 0x7FFF
         || !(_WORD)v7 && PsGetCurrentProcessWow64Process(v9, a2, a3))
        && (*(_BYTE *)(v8 + 25) & 1) == 0
        && *(_BYTE *)(v8 + 24) == 1
        && (v11 = *v10) != 0 )
      {
        v12 = v5[1];
        if ( v12 < 2 || v12 == -2LL || v12 == -1LL || HMValidateHandleNoSecure(v12, 1) )
        {
          v13 = *((_DWORD *)v5 + 8);
          if ( (v13 & 0x40000) != 0 || (v5[4] & 0x18E7) == 0x1807 )
          {
            if ( (v13 & 0x10000) != 0 && (*(_DWORD *)(v11 + 320) & 0x200) != 0 )
              PostIAMShellHookMessage(0x1Fu);
          }
          else
          {
            ThreadLockAlways(v11, &i);
            if ( (*((_DWORD *)v5 + 8) & 0x80u) != 0 )
              xxxRemoveShadow(v11);
            v14 = *((_DWORD *)v5 + 8);
            if ( (v14 & 0x40) != 0 )
            {
              if ( (unsigned int)ShouldHaveShadow((_QWORD *)v11) )
                xxxAddShadow((struct tagWND *)v11);
              v15 = v11;
            }
            else
            {
              v15 = v11;
              if ( (*(_BYTE *)(*(_QWORD *)(v11 + 40) + 31LL) & 0x10) != 0 )
              {
                for ( j = gpshadowFirst; j; j = (struct tagSHADOW *)*((_QWORD *)j + 2) )
                {
                  if ( *(_QWORD *)j == v11 )
                  {
                    if ( (v14 & 0x21) == 1 )
                    {
                      if ( (v14 & 2) == 0 )
                        zzzMoveShadow(v11);
                    }
                    else
                    {
                      Shadow = (struct tagWND **)FindShadow((struct tagWND *)v11);
                      if ( Shadow )
                        zzzApplyShadow(*Shadow, Shadow[1]);
                    }
                    if ( (v5[4] & 4) == 0 )
                      xxxUpdateShadowZorder(v11);
                    break;
                  }
                }
              }
            }
            v17 = v5[4] & 0x9820;
            if ( (unsigned int)IsWindowDesktopComposed(v15) && v17 != 6144 )
            {
              DwmChildRectChange((struct tagWND *)v15);
              DirtyVisRgnTrackers(v15);
            }
            if ( (*(_DWORD *)(gptiCurrent + 1272LL) & 0x40000) == 0 || gptiCurrent == *(_QWORD *)(v15 + 16) )
            {
              _InterlockedIncrement(&glSendMessage);
              xxxSendTransformableMessageTimeout(v15, 0, 0, 0LL, 1, 0);
            }
            else
            {
              if ( !tagQ::IsSingleThreadAttached(*(tagQ **)(gptiCurrent + 432LL)) )
                goto LABEL_51;
              v24 = *(_QWORD *)(gptiCurrent + 1440LL);
              if ( !v24 )
                goto LABEL_51;
              if ( *(_QWORD *)(v24 + 16) == gptiCurrent )
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 425LL);
              if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 1440LL) + 16LL) != *(_QWORD *)(v15 + 16) )
              {
LABEL_51:
                v33 = 0LL;
                xxxSendTransformableMessageTimeout(v15, 2, 100, (__int64)&v33, 1, 0);
              }
            }
            if ( (*((_DWORD *)v5 + 39) & 0x40) != 0 )
            {
              if ( (v5[4] & 0x80000) != 0 )
                v26 = *(struct tagRECT *)(*(_QWORD *)(v15 + 40) + 88LL);
              else
                v26 = *(struct tagRECT *)(v5 + 17);
              v27 = v5[16];
              v30 = v26;
              v28 = ValidateHmonitorNoRip(v27);
              if ( v28 )
                v29 = *(_WORD *)(*(_QWORD *)(v28 + 40) + 60LL);
              else
                v29 = 0;
              xxxNotifyMonitorChanged((struct tagWND *)v15, &v30, (struct tagBWL *)v5[20], v29);
            }
            if ( (v5[4] & 0x10000) != 0 && (*(_DWORD *)(v15 + 320) & 0x200) != 0 )
              PostIAMShellHookMessage(0x1Fu);
            if ( (*((_DWORD *)v5 + 8) & 0x80u) != 0 )
              NotifyShell::CuratedWindowHidden(v15);
            if ( (v5[4] & 0x1100C0) == 0
              && (v5[4] & 3) != 3
              && (*(_BYTE *)(*(_QWORD *)(v15 + 40) + 31LL) & 0x10) != 0
              && !(unsigned int)GetWindowCloakState((struct tagTHREADINFO **)v15) )
            {
              v20 = *(_QWORD *)(v15 + 24);
              if ( *(_QWORD *)(v20 + 328)
                && (*(_DWORD *)(v20 + 336) & 0x10) != 0
                && anonymous_namespace_::EligibleWindow((struct tagWND *)v15, 1) )
              {
                NotifyShell::TrackedWindowPosChanged((NotifyShell *)v15, 0LL, v19);
              }
              if ( IsShellParticipatesInSizing((struct tagWND *)v15, v18, v19) )
                anonymous_namespace_::WindowSizingUpdate(v15);
            }
            CalcWindowFullScreen((struct tagWND *)v15);
            if ( v17 != 6144 )
              xxxWindowEvent(0x800Bu, (struct tagWND *)v15, 0, 0, 1);
            ThreadUnlock1(v22, v21, v23);
          }
          goto LABEL_39;
        }
      }
      else
      {
        *((_DWORD *)v5 + 8) = 6159;
      }
      *v5 = 0LL;
    }
LABEL_39:
    v5 += 21;
  }
  if ( (*gpsi & 4) != 0 )
    xxxImeWindowPosChanged(a1, a2, a3, a4);
}
